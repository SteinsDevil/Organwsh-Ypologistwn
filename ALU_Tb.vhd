LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY ALU_tb IS
END ALU_tb;

ARCHITECTURE behavior OF ALU_tb IS 

    -- Component Declaration for the Unit Under Test (UUT)
    COMPONENT ALU
    PORT(
         A : IN  std_logic_vector(31 DOWNTO 0);
         B : IN  std_logic_vector(31 DOWNTO 0);
         Op : IN  std_logic_vector(3 DOWNTO 0);
         Out_s : OUT  std_logic_vector(31 DOWNTO 0);
         Zero : OUT  std_logic;
         Cout : OUT  std_logic;
         Ovf : OUT  std_logic
        );
    END COMPONENT;
   
   --Inputs
   SIGNAL A : std_logic_vector(31 DOWNTO 0) := (OTHERS => '0');
   SIGNAL B : std_logic_vector(31 DOWNTO 0) := (OTHERS => '0');
   SIGNAL Op : std_logic_vector(3 DOWNTO 0) := (OTHERS => '0');

   --Outputs
   SIGNAL Out_s : std_logic_vector(31 DOWNTO 0);
   SIGNAL Zero : std_logic;
   SIGNAL Cout : std_logic;
   SIGNAL Ovf : std_logic;
   
BEGIN

    -- Instantiate the Unit Under Test (UUT)
   uut: ALU PORT MAP (
          A => A,
          B => B,
          Op => Op,
          Out_s => Out_s,
          Zero => Zero,
          Cout => Cout,
          Ovf => Ovf
        );

   -- Stimulus process
   stim_proc: PROCESS
   BEGIN			 
      -- Test case 1: Addition (A + B)
      A <= "00000000000000000000000000000101"; -- 5
      B <= "00000000000000000000000000000011"; -- 3
      Op <= "0000";     -- Addition
      WAIT FOR 100 ns;
		
		-- Test case 1: Addition (A + B)
      A <= "00000000000000000000000000000010"; -- 2
      B <= "00000000000000000000000000000001"; -- 1
      Op <= "0001";     -- Addition
      WAIT FOR 100 ns;
      
		-- Test case 1: Addition (A + B)
      A <= "01111111111111111111111111111111"; -- 2
      B <= "00000000000000000000000000000001"; -- 1
      Op <= "0000";     -- Addition
      WAIT FOR 100 ns;
      
		
		-- Test case 1: Addition (A + B)
      A <= "11111111111111111111111111111111"; -- 2
      B <= "11111111111111111111111111111111"; -- 1
      Op <= "0000";     -- Addition
      WAIT FOR 100 ns;
      
      WAIT;
   END PROCESS;
END behavior;