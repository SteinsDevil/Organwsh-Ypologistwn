----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:30:39 03/05/2025 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_SIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
    Port ( A : in  STD_LOGIC_VECTOR (31 downto 0);
           B : in  STD_LOGIC_VECTOR (31 downto 0);
           Op : in  STD_LOGIC_VECTOR (3 downto 0);
           Out_s : out  STD_LOGIC_VECTOR (31 downto 0);
           Zero : out  STD_LOGIC;
           Cout : out  STD_LOGIC;
           Ovf : out  STD_LOGIC);
end ALU;



architecture Behavioral of ALU is

-- temporary extended output of 32+1 bit to catch the carry out Bit
signal extended_output : STD_LOGIC_VECTOR(32 downto 0);
signal output_buff : STD_LOGIC_VECTOR(31 downto 0);

begin

process(A,B,output_buff,Op)
begin

-- init the signals Cout and Ovf
	Cout<='0';
	Ovf<='0';

	case Op is 
	-- code for addition (+)
		when "0000" =>
			output_buff <= A+B;
			-- check for overflow 
			if (A(31) = B(31)) AND output_buff(31) /= A(31) then 
				ovf <= '1';
			else
				ovf <= '0';
			end if;
			
			-- adding the extended A and B inputs
			extended_output <= (A(31)&A) + (B(31)&B);
			
			-- getting the 33rd bit that now represents the carry out that was lost 
			-- in the original 32 bit result/output
			Cout <= extended_output(32);
			
	-- code for subtraction (-)
		when "0001" =>
			output_buff <= A-B;
			if (A(31) /= B(31)) AND output_buff(31) = B(31) then 
				ovf <= '1';
			else
				ovf <= '0';
			end if;
			
			-- subtracting the extended A and B inputs
			extended_output <= (A(31)&A) - (B(31)&B);
			
			-- getting the 33rd bit that now represents the carry out that was lost 
			-- in the original 32 bit result/output
			Cout <= extended_output(32);
	-- code for logic AND (&&)
		when "0010" =>
			output_buff <= A and B;
			
	-- code for logic AND (||)
		when "0011" => 
			output_buff <= A or B;
	
	-- code for logic Not (!)
		when "0100" => 
		-- TRUST
			output_buff <= A XOR "11111111111111111111111111111111";
			
	-- code for numerical shifting right by 1 bit
		when "1000" => 
			output_buff <=  STD_LOGIC_VECTOR(SHIFT_RIGHT(SIGNED(A),1));
			output_buff(31) <= output_buff(30);
			
	-- code for logical shifting right by 1 bit
		when "1001" => 
			output_buff <= STD_LOGIC_VECTOR(SHIFT_RIGHT(SIGNED(A),1));
			output_buff(31) <= '0'; 
		
	-- code for logical shifting left by 1 bit
		when "1010" => 
			output_buff <= STD_LOGIC_VECTOR(SHIFT_LEFT(SIGNED(A),1));
			output_buff(0) <= '0'; 
			
	-- code for left rotation by 1 bit
		when "1100" => 
			output_buff <= STD_LOGIC_VECTOR(ROTATE_LEFT(SIGNED(A),1));
			
	-- code for right rotation by 1 bit
		when "1101" => 
			output_buff <=STD_LOGIC_VECTOR(ROTATE_RIGHT(SIGNED(A),1));
		when others =>
		
	end case;
	
	if output_buff = 0 then 
		Zero <= '1';
	else
		Zero <= '0';
	end if;	
		
end process;


Out_s <= output_buff;
		


end Behavioral;

