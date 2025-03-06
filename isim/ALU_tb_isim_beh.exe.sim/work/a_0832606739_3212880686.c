/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Askis1/ALU.vhd";
extern char *IEEE_P_0774719531;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_0774719531_sub_1496620905533649268_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_1496620905533721142_2162500114(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_0774719531_sub_970019341842465249_2162500114(char *, char *, char *, int );
char *ieee_p_1242562249_sub_16343609080398298574_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_17249857350030274602_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_4163810724579848603_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_5461289951233117757_1035706684(char *, char *, char *, char *, int );
char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t32[16];
    char t63[16];
    char t64[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned char t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned char t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned char t52;
    unsigned char t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned char t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned char t61;
    unsigned char t62;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4128);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4192);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 6461);
    t6 = xsi_mem_cmp(t1, t2, 4U);
    if (t6 == 1)
        goto LAB3;

LAB14:    t4 = (t0 + 6465);
    t7 = xsi_mem_cmp(t4, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB15:    t8 = (t0 + 6469);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB16:    t11 = (t0 + 6473);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB17:    t14 = (t0 + 6477);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB18:    t17 = (t0 + 6481);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB8;

LAB19:    t20 = (t0 + 6485);
    t22 = xsi_mem_cmp(t20, t2, 4U);
    if (t22 == 1)
        goto LAB9;

LAB20:    t23 = (t0 + 6489);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB10;

LAB21:    t26 = (t0 + 6493);
    t28 = xsi_mem_cmp(t26, t2, 4U);
    if (t28 == 1)
        goto LAB11;

LAB22:    t29 = (t0 + 6497);
    t31 = xsi_mem_cmp(t29, t2, 4U);
    if (t31 == 1)
        goto LAB12;

LAB23:
LAB13:
LAB2:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6304U);
    t41 = ieee_p_0774719531_sub_970019341842465249_2162500114(IEEE_P_0774719531, t2, t1, 0);
    if (t41 != 0)
        goto LAB51;

LAB53:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 4384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB52:    t1 = (t0 + 4032);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(64, ng0);
    t33 = (t0 + 1032U);
    t34 = *((char **)t33);
    t33 = (t0 + 6224U);
    t35 = (t0 + 1192U);
    t36 = *((char **)t35);
    t35 = (t0 + 6240U);
    t37 = ieee_p_0774719531_sub_1496620905533649268_2162500114(IEEE_P_0774719531, t32, t34, t33, t36, t35);
    t38 = (t32 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB25;

LAB26:    t42 = (t0 + 4256);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t37, 32U);
    xsi_driver_first_trans_fast(t42);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = (31 - 31);
    t39 = (t6 * -1);
    t40 = (1U * t39);
    t47 = (0 + t40);
    t1 = (t2 + t47);
    t48 = *((unsigned char *)t1);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t7 = (31 - 31);
    t49 = (t7 * -1);
    t50 = (1U * t49);
    t51 = (0 + t50);
    t3 = (t4 + t51);
    t52 = *((unsigned char *)t3);
    t53 = (t48 == t52);
    if (t53 == 1)
        goto LAB30;

LAB31:    t41 = (unsigned char)0;

LAB32:    if (t41 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 4192);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB28:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = (31 - 31);
    t39 = (t6 * -1);
    t40 = (1U * t39);
    t47 = (0 + t40);
    t1 = (t2 + t47);
    t41 = *((unsigned char *)t1);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = ((IEEE_P_2592010699) + 4000);
    t8 = (t0 + 6224U);
    t3 = xsi_base_array_concat(t3, t63, t5, (char)99, t41, (char)97, t4, t8, (char)101);
    t9 = (t0 + 1192U);
    t11 = *((char **)t9);
    t7 = (31 - 31);
    t49 = (t7 * -1);
    t50 = (1U * t49);
    t51 = (0 + t50);
    t9 = (t11 + t51);
    t48 = *((unsigned char *)t9);
    t12 = (t0 + 1192U);
    t14 = *((char **)t12);
    t15 = ((IEEE_P_2592010699) + 4000);
    t17 = (t0 + 6240U);
    t12 = xsi_base_array_concat(t12, t64, t15, (char)99, t48, (char)97, t14, t17, (char)101);
    t18 = ieee_p_0774719531_sub_1496620905533649268_2162500114(IEEE_P_0774719531, t32, t3, t63, t12, t64);
    t20 = (t32 + 12U);
    t54 = *((unsigned int *)t20);
    t55 = (1U * t54);
    t52 = (33U != t55);
    if (t52 == 1)
        goto LAB33;

LAB34:    t21 = (t0 + 4320);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t18, 33U);
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t6 = (32 - 32);
    t39 = (t6 * -1);
    t40 = (1U * t39);
    t47 = (0 + t40);
    t1 = (t2 + t47);
    t41 = *((unsigned char *)t1);
    t3 = (t0 + 4128);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t41;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB4:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 6240U);
    t5 = ieee_p_0774719531_sub_1496620905533721142_2162500114(IEEE_P_0774719531, t32, t2, t1, t4, t3);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB35;

LAB36:    t9 = (t0 + 4256);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 32U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = (31 - 31);
    t39 = (t6 * -1);
    t40 = (1U * t39);
    t47 = (0 + t40);
    t1 = (t2 + t47);
    t48 = *((unsigned char *)t1);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t7 = (31 - 31);
    t49 = (t7 * -1);
    t50 = (1U * t49);
    t51 = (0 + t50);
    t3 = (t4 + t51);
    t52 = *((unsigned char *)t3);
    t53 = (t48 != t52);
    if (t53 == 1)
        goto LAB40;

LAB41:    t41 = (unsigned char)0;

LAB42:    if (t41 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 4192);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB38:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = (31 - 31);
    t39 = (t6 * -1);
    t40 = (1U * t39);
    t47 = (0 + t40);
    t1 = (t2 + t47);
    t41 = *((unsigned char *)t1);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = ((IEEE_P_2592010699) + 4000);
    t8 = (t0 + 6224U);
    t3 = xsi_base_array_concat(t3, t63, t5, (char)99, t41, (char)97, t4, t8, (char)101);
    t9 = (t0 + 1192U);
    t11 = *((char **)t9);
    t7 = (31 - 31);
    t49 = (t7 * -1);
    t50 = (1U * t49);
    t51 = (0 + t50);
    t9 = (t11 + t51);
    t48 = *((unsigned char *)t9);
    t12 = (t0 + 1192U);
    t14 = *((char **)t12);
    t15 = ((IEEE_P_2592010699) + 4000);
    t17 = (t0 + 6240U);
    t12 = xsi_base_array_concat(t12, t64, t15, (char)99, t48, (char)97, t14, t17, (char)101);
    t18 = ieee_p_0774719531_sub_1496620905533721142_2162500114(IEEE_P_0774719531, t32, t3, t63, t12, t64);
    t20 = (t32 + 12U);
    t54 = *((unsigned int *)t20);
    t55 = (1U * t54);
    t52 = (33U != t55);
    if (t52 == 1)
        goto LAB43;

LAB44:    t21 = (t0 + 4320);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t18, 33U);
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t6 = (32 - 32);
    t39 = (t6 * -1);
    t40 = (1U * t39);
    t47 = (0 + t40);
    t1 = (t2 + t47);
    t41 = *((unsigned char *)t1);
    t3 = (t0 + 4128);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t41;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB5:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 6240U);
    t5 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t32, t2, t1, t4, t3);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB45;

LAB46:    t9 = (t0 + 4256);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 6240U);
    t5 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t32, t2, t1, t4, t3);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB47;

LAB48:    t9 = (t0 + 4256);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = (t0 + 6501);
    t5 = (t63 + 0U);
    t8 = (t5 + 0U);
    *((int *)t8) = 0;
    t8 = (t5 + 4U);
    *((int *)t8) = 31;
    t8 = (t5 + 8U);
    *((int *)t8) = 1;
    t6 = (31 - 0);
    t39 = (t6 * 1);
    t39 = (t39 + 1);
    t8 = (t5 + 12U);
    *((unsigned int *)t8) = t39;
    t8 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t32, t2, t1, t3, t63);
    t9 = (t32 + 12U);
    t39 = *((unsigned int *)t9);
    t40 = (1U * t39);
    t41 = (32U != t40);
    if (t41 == 1)
        goto LAB49;

LAB50:    t11 = (t0 + 4256);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 32U);
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB8:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = ieee_p_1242562249_sub_5461289951233117757_1035706684(IEEE_P_1242562249, t32, t2, t1, 1);
    t4 = (t0 + 4256);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t6 = (30 - 31);
    t39 = (t6 * -1);
    t40 = (1U * t39);
    t47 = (0 + t40);
    t1 = (t2 + t47);
    t41 = *((unsigned char *)t1);
    t3 = (t0 + 4256);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t41;
    xsi_driver_first_trans_delta(t3, 0U, 1, 0LL);
    goto LAB2;

LAB9:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = ieee_p_1242562249_sub_5461289951233117757_1035706684(IEEE_P_1242562249, t32, t2, t1, 1);
    t4 = (t0 + 4256);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 4256);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB2;

LAB10:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = ieee_p_1242562249_sub_17249857350030274602_1035706684(IEEE_P_1242562249, t32, t2, t1, 1);
    t4 = (t0 + 4256);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 4256);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 31U, 1, 0LL);
    goto LAB2;

LAB11:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = ieee_p_1242562249_sub_4163810724579848603_1035706684(IEEE_P_1242562249, t32, t2, t1, 1);
    t4 = (t0 + 4256);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 32U);
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB12:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6224U);
    t3 = ieee_p_1242562249_sub_16343609080398298574_1035706684(IEEE_P_1242562249, t32, t2, t1, 1);
    t4 = (t0 + 4256);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 32U);
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB24:;
LAB25:    xsi_size_not_matching(32U, t40, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(67, ng0);
    t12 = (t0 + 4192);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t12);
    goto LAB28;

LAB30:    t5 = (t0 + 2312U);
    t8 = *((char **)t5);
    t10 = (31 - 31);
    t54 = (t10 * -1);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t5 = (t8 + t56);
    t57 = *((unsigned char *)t5);
    t9 = (t0 + 1032U);
    t11 = *((char **)t9);
    t13 = (31 - 31);
    t58 = (t13 * -1);
    t59 = (1U * t58);
    t60 = (0 + t59);
    t9 = (t11 + t60);
    t61 = *((unsigned char *)t9);
    t62 = (t57 != t61);
    t41 = t62;
    goto LAB32;

LAB33:    xsi_size_not_matching(33U, t55, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(32U, t40, 0);
    goto LAB36;

LAB37:    xsi_set_current_line(83, ng0);
    t12 = (t0 + 4192);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t12);
    goto LAB38;

LAB40:    t5 = (t0 + 2312U);
    t8 = *((char **)t5);
    t10 = (31 - 31);
    t54 = (t10 * -1);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t5 = (t8 + t56);
    t57 = *((unsigned char *)t5);
    t9 = (t0 + 1192U);
    t11 = *((char **)t9);
    t13 = (31 - 31);
    t58 = (t13 * -1);
    t59 = (1U * t58);
    t60 = (0 + t59);
    t9 = (t11 + t60);
    t61 = *((unsigned char *)t9);
    t62 = (t57 == t61);
    t41 = t62;
    goto LAB42;

LAB43:    xsi_size_not_matching(33U, t55, 0);
    goto LAB44;

LAB45:    xsi_size_not_matching(32U, t40, 0);
    goto LAB46;

LAB47:    xsi_size_not_matching(32U, t40, 0);
    goto LAB48;

LAB49:    xsi_size_not_matching(32U, t40, 0);
    goto LAB50;

LAB51:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 4384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB52;

}

static void work_a_0832606739_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(142, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4048);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0,(void *)work_a_0832606739_3212880686_p_1};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/ALU_tb_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
