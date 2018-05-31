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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/PSD Workspace 2016/IDS_Lab08/IDS_Lab08.v";



static void Cont_31_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t15);
    t19 = (t17 & t18);
    *((unsigned int *)t16) = t19;
    t14 = (t6 + 4);
    t20 = (t15 + 4);
    t21 = (t16 + 4);
    t22 = *((unsigned int *)t14);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t4, 0, 8);
    t47 = (t16 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t16);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t47) == 0)
        goto LAB7;

LAB9:    t53 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t53) = 1;

LAB10:    t54 = (t4 + 4);
    t55 = (t16 + 4);
    t56 = *((unsigned int *)t16);
    t57 = (~(t56));
    *((unsigned int *)t4) = t57;
    *((unsigned int *)t54) = 0;
    if (*((unsigned int *)t55) != 0)
        goto LAB12;

LAB11:    t62 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t62 & 1U);
    t63 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t63 & 1U);
    memset(t3, 0, 8);
    t64 = (t4 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t4);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t64) == 0)
        goto LAB13;

LAB15:    t70 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t70) = 1;

LAB16:    t71 = (t3 + 4);
    t72 = (t4 + 4);
    t73 = *((unsigned int *)t4);
    t74 = (~(t73));
    *((unsigned int *)t3) = t74;
    *((unsigned int *)t71) = 0;
    if (*((unsigned int *)t72) != 0)
        goto LAB18;

LAB17:    t79 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t79 & 1U);
    t80 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t80 & 1U);
    t81 = (t0 + 4464);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memset(t85, 0, 8);
    t86 = 1U;
    t87 = t86;
    t88 = (t3 + 4);
    t89 = *((unsigned int *)t3);
    t86 = (t86 & t89);
    t90 = *((unsigned int *)t88);
    t87 = (t87 & t90);
    t91 = (t85 + 4);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t92 | t86);
    t93 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t93 | t87);
    xsi_driver_vfirst_trans(t81, 0, 0);
    t94 = (t0 + 4320);
    *((int *)t94) = 1;

LAB1:    return;
LAB4:    t27 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t16) = (t27 | t28);
    t29 = (t6 + 4);
    t30 = (t15 + 4);
    t31 = *((unsigned int *)t6);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (~(t37));
    t39 = (t32 & t34);
    t40 = (t36 & t38);
    t41 = (~(t39));
    t42 = (~(t40));
    t43 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t43 & t41);
    t44 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t44 & t42);
    t45 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t45 & t41);
    t46 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t46 & t42);
    goto LAB6;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t58 = *((unsigned int *)t4);
    t59 = *((unsigned int *)t55);
    *((unsigned int *)t4) = (t58 | t59);
    t60 = *((unsigned int *)t54);
    t61 = *((unsigned int *)t55);
    *((unsigned int *)t54) = (t60 | t61);
    goto LAB11;

LAB13:    *((unsigned int *)t3) = 1;
    goto LAB16;

LAB18:    t75 = *((unsigned int *)t3);
    t76 = *((unsigned int *)t72);
    *((unsigned int *)t3) = (t75 | t76);
    t77 = *((unsigned int *)t71);
    t78 = *((unsigned int *)t72);
    *((unsigned int *)t71) = (t77 | t78);
    goto LAB17;

}

static void Cont_32_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t14[8];
    char t33[8];
    char t82[8];
    char t85[8];
    char t93[8];
    char t112[8];
    char t161[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t83;
    char *t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    int t136;
    int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    int t185;
    int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    char *t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;
    char *t212;
    char *t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t16 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t15) == 0)
        goto LAB4;

LAB6:    t22 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t22) = 1;

LAB7:    t23 = (t14 + 4);
    t24 = (t16 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    *((unsigned int *)t14) = t26;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB9;

LAB8:    t31 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t31 & 1U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 1U);
    t34 = *((unsigned int *)t6);
    t35 = *((unsigned int *)t14);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t37 = (t6 + 4);
    t38 = (t14 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB10;

LAB11:
LAB12:    memset(t4, 0, 8);
    t65 = (t33 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t33);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t65) == 0)
        goto LAB13;

LAB15:    t71 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t71) = 1;

LAB16:    t72 = (t4 + 4);
    t73 = (t33 + 4);
    t74 = *((unsigned int *)t33);
    t75 = (~(t74));
    *((unsigned int *)t4) = t75;
    *((unsigned int *)t72) = 0;
    if (*((unsigned int *)t73) != 0)
        goto LAB18;

LAB17:    t80 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t80 & 1U);
    t81 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t81 & 1U);
    t83 = (t0 + 1688U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    t83 = (t85 + 4);
    t86 = (t84 + 4);
    t87 = *((unsigned int *)t84);
    t88 = (t87 >> 1);
    t89 = (t88 & 1);
    *((unsigned int *)t85) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 >> 1);
    t92 = (t91 & 1);
    *((unsigned int *)t83) = t92;
    t94 = (t0 + 1048U);
    t95 = *((char **)t94);
    memset(t93, 0, 8);
    t94 = (t95 + 4);
    t96 = *((unsigned int *)t94);
    t97 = (~(t96));
    t98 = *((unsigned int *)t95);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t94) == 0)
        goto LAB19;

LAB21:    t101 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t101) = 1;

LAB22:    t102 = (t93 + 4);
    t103 = (t95 + 4);
    t104 = *((unsigned int *)t95);
    t105 = (~(t104));
    *((unsigned int *)t93) = t105;
    *((unsigned int *)t102) = 0;
    if (*((unsigned int *)t103) != 0)
        goto LAB24;

LAB23:    t110 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t110 & 1U);
    t111 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t111 & 1U);
    t113 = *((unsigned int *)t85);
    t114 = *((unsigned int *)t93);
    t115 = (t113 & t114);
    *((unsigned int *)t112) = t115;
    t116 = (t85 + 4);
    t117 = (t93 + 4);
    t118 = (t112 + 4);
    t119 = *((unsigned int *)t116);
    t120 = *((unsigned int *)t117);
    t121 = (t119 | t120);
    *((unsigned int *)t118) = t121;
    t122 = *((unsigned int *)t118);
    t123 = (t122 != 0);
    if (t123 == 1)
        goto LAB25;

LAB26:
LAB27:    memset(t82, 0, 8);
    t144 = (t112 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t112);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t144) == 0)
        goto LAB28;

LAB30:    t150 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t150) = 1;

LAB31:    t151 = (t82 + 4);
    t152 = (t112 + 4);
    t153 = *((unsigned int *)t112);
    t154 = (~(t153));
    *((unsigned int *)t82) = t154;
    *((unsigned int *)t151) = 0;
    if (*((unsigned int *)t152) != 0)
        goto LAB33;

LAB32:    t159 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t159 & 1U);
    t160 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t160 & 1U);
    t162 = *((unsigned int *)t4);
    t163 = *((unsigned int *)t82);
    t164 = (t162 & t163);
    *((unsigned int *)t161) = t164;
    t165 = (t4 + 4);
    t166 = (t82 + 4);
    t167 = (t161 + 4);
    t168 = *((unsigned int *)t165);
    t169 = *((unsigned int *)t166);
    t170 = (t168 | t169);
    *((unsigned int *)t167) = t170;
    t171 = *((unsigned int *)t167);
    t172 = (t171 != 0);
    if (t172 == 1)
        goto LAB34;

LAB35:
LAB36:    memset(t3, 0, 8);
    t193 = (t161 + 4);
    t194 = *((unsigned int *)t193);
    t195 = (~(t194));
    t196 = *((unsigned int *)t161);
    t197 = (t196 & t195);
    t198 = (t197 & 1U);
    if (t198 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t193) == 0)
        goto LAB37;

LAB39:    t199 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t199) = 1;

LAB40:    t200 = (t3 + 4);
    t201 = (t161 + 4);
    t202 = *((unsigned int *)t161);
    t203 = (~(t202));
    *((unsigned int *)t3) = t203;
    *((unsigned int *)t200) = 0;
    if (*((unsigned int *)t201) != 0)
        goto LAB42;

LAB41:    t208 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t208 & 1U);
    t209 = *((unsigned int *)t200);
    *((unsigned int *)t200) = (t209 & 1U);
    t210 = (t0 + 4528);
    t211 = (t210 + 56U);
    t212 = *((char **)t211);
    t213 = (t212 + 56U);
    t214 = *((char **)t213);
    memset(t214, 0, 8);
    t215 = 1U;
    t216 = t215;
    t217 = (t3 + 4);
    t218 = *((unsigned int *)t3);
    t215 = (t215 & t218);
    t219 = *((unsigned int *)t217);
    t216 = (t216 & t219);
    t220 = (t214 + 4);
    t221 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t221 | t215);
    t222 = *((unsigned int *)t220);
    *((unsigned int *)t220) = (t222 | t216);
    xsi_driver_vfirst_trans(t210, 1, 1);
    t223 = (t0 + 4336);
    *((int *)t223) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB9:    t27 = *((unsigned int *)t14);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t14) = (t27 | t28);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t29 | t30);
    goto LAB8;

LAB10:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t6 + 4);
    t48 = (t14 + 4);
    t49 = *((unsigned int *)t6);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t14);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB12;

LAB13:    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB18:    t76 = *((unsigned int *)t4);
    t77 = *((unsigned int *)t73);
    *((unsigned int *)t4) = (t76 | t77);
    t78 = *((unsigned int *)t72);
    t79 = *((unsigned int *)t73);
    *((unsigned int *)t72) = (t78 | t79);
    goto LAB17;

LAB19:    *((unsigned int *)t93) = 1;
    goto LAB22;

LAB24:    t106 = *((unsigned int *)t93);
    t107 = *((unsigned int *)t103);
    *((unsigned int *)t93) = (t106 | t107);
    t108 = *((unsigned int *)t102);
    t109 = *((unsigned int *)t103);
    *((unsigned int *)t102) = (t108 | t109);
    goto LAB23;

LAB25:    t124 = *((unsigned int *)t112);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t112) = (t124 | t125);
    t126 = (t85 + 4);
    t127 = (t93 + 4);
    t128 = *((unsigned int *)t85);
    t129 = (~(t128));
    t130 = *((unsigned int *)t126);
    t131 = (~(t130));
    t132 = *((unsigned int *)t93);
    t133 = (~(t132));
    t134 = *((unsigned int *)t127);
    t135 = (~(t134));
    t136 = (t129 & t131);
    t137 = (t133 & t135);
    t138 = (~(t136));
    t139 = (~(t137));
    t140 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t140 & t138);
    t141 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t141 & t139);
    t142 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t142 & t138);
    t143 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t143 & t139);
    goto LAB27;

LAB28:    *((unsigned int *)t82) = 1;
    goto LAB31;

LAB33:    t155 = *((unsigned int *)t82);
    t156 = *((unsigned int *)t152);
    *((unsigned int *)t82) = (t155 | t156);
    t157 = *((unsigned int *)t151);
    t158 = *((unsigned int *)t152);
    *((unsigned int *)t151) = (t157 | t158);
    goto LAB32;

LAB34:    t173 = *((unsigned int *)t161);
    t174 = *((unsigned int *)t167);
    *((unsigned int *)t161) = (t173 | t174);
    t175 = (t4 + 4);
    t176 = (t82 + 4);
    t177 = *((unsigned int *)t4);
    t178 = (~(t177));
    t179 = *((unsigned int *)t175);
    t180 = (~(t179));
    t181 = *((unsigned int *)t82);
    t182 = (~(t181));
    t183 = *((unsigned int *)t176);
    t184 = (~(t183));
    t185 = (t178 & t180);
    t186 = (t182 & t184);
    t187 = (~(t185));
    t188 = (~(t186));
    t189 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t189 & t187);
    t190 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t190 & t188);
    t191 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t191 & t187);
    t192 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t192 & t188);
    goto LAB36;

LAB37:    *((unsigned int *)t3) = 1;
    goto LAB40;

LAB42:    t204 = *((unsigned int *)t3);
    t205 = *((unsigned int *)t201);
    *((unsigned int *)t3) = (t204 | t205);
    t206 = *((unsigned int *)t200);
    t207 = *((unsigned int *)t201);
    *((unsigned int *)t200) = (t206 | t207);
    goto LAB41;

}

static void Cont_33_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t14[8];
    char t33[8];
    char t82[8];
    char t85[8];
    char t93[8];
    char t112[8];
    char t161[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t83;
    char *t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    int t136;
    int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    int t185;
    int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    char *t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;
    char *t212;
    char *t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t16 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t15) == 0)
        goto LAB4;

LAB6:    t22 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t22) = 1;

LAB7:    t23 = (t14 + 4);
    t24 = (t16 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    *((unsigned int *)t14) = t26;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB9;

LAB8:    t31 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t31 & 1U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 1U);
    t34 = *((unsigned int *)t6);
    t35 = *((unsigned int *)t14);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t37 = (t6 + 4);
    t38 = (t14 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB10;

LAB11:
LAB12:    memset(t4, 0, 8);
    t65 = (t33 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t33);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t65) == 0)
        goto LAB13;

LAB15:    t71 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t71) = 1;

LAB16:    t72 = (t4 + 4);
    t73 = (t33 + 4);
    t74 = *((unsigned int *)t33);
    t75 = (~(t74));
    *((unsigned int *)t4) = t75;
    *((unsigned int *)t72) = 0;
    if (*((unsigned int *)t73) != 0)
        goto LAB18;

LAB17:    t80 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t80 & 1U);
    t81 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t81 & 1U);
    t83 = (t0 + 1688U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    t83 = (t85 + 4);
    t86 = (t84 + 4);
    t87 = *((unsigned int *)t84);
    t88 = (t87 >> 0);
    t89 = (t88 & 1);
    *((unsigned int *)t85) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 >> 0);
    t92 = (t91 & 1);
    *((unsigned int *)t83) = t92;
    t94 = (t0 + 1048U);
    t95 = *((char **)t94);
    memset(t93, 0, 8);
    t94 = (t95 + 4);
    t96 = *((unsigned int *)t94);
    t97 = (~(t96));
    t98 = *((unsigned int *)t95);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t94) == 0)
        goto LAB19;

LAB21:    t101 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t101) = 1;

LAB22:    t102 = (t93 + 4);
    t103 = (t95 + 4);
    t104 = *((unsigned int *)t95);
    t105 = (~(t104));
    *((unsigned int *)t93) = t105;
    *((unsigned int *)t102) = 0;
    if (*((unsigned int *)t103) != 0)
        goto LAB24;

LAB23:    t110 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t110 & 1U);
    t111 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t111 & 1U);
    t113 = *((unsigned int *)t85);
    t114 = *((unsigned int *)t93);
    t115 = (t113 & t114);
    *((unsigned int *)t112) = t115;
    t116 = (t85 + 4);
    t117 = (t93 + 4);
    t118 = (t112 + 4);
    t119 = *((unsigned int *)t116);
    t120 = *((unsigned int *)t117);
    t121 = (t119 | t120);
    *((unsigned int *)t118) = t121;
    t122 = *((unsigned int *)t118);
    t123 = (t122 != 0);
    if (t123 == 1)
        goto LAB25;

LAB26:
LAB27:    memset(t82, 0, 8);
    t144 = (t112 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t112);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t144) == 0)
        goto LAB28;

LAB30:    t150 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t150) = 1;

LAB31:    t151 = (t82 + 4);
    t152 = (t112 + 4);
    t153 = *((unsigned int *)t112);
    t154 = (~(t153));
    *((unsigned int *)t82) = t154;
    *((unsigned int *)t151) = 0;
    if (*((unsigned int *)t152) != 0)
        goto LAB33;

LAB32:    t159 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t159 & 1U);
    t160 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t160 & 1U);
    t162 = *((unsigned int *)t4);
    t163 = *((unsigned int *)t82);
    t164 = (t162 & t163);
    *((unsigned int *)t161) = t164;
    t165 = (t4 + 4);
    t166 = (t82 + 4);
    t167 = (t161 + 4);
    t168 = *((unsigned int *)t165);
    t169 = *((unsigned int *)t166);
    t170 = (t168 | t169);
    *((unsigned int *)t167) = t170;
    t171 = *((unsigned int *)t167);
    t172 = (t171 != 0);
    if (t172 == 1)
        goto LAB34;

LAB35:
LAB36:    memset(t3, 0, 8);
    t193 = (t161 + 4);
    t194 = *((unsigned int *)t193);
    t195 = (~(t194));
    t196 = *((unsigned int *)t161);
    t197 = (t196 & t195);
    t198 = (t197 & 1U);
    if (t198 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t193) == 0)
        goto LAB37;

LAB39:    t199 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t199) = 1;

LAB40:    t200 = (t3 + 4);
    t201 = (t161 + 4);
    t202 = *((unsigned int *)t161);
    t203 = (~(t202));
    *((unsigned int *)t3) = t203;
    *((unsigned int *)t200) = 0;
    if (*((unsigned int *)t201) != 0)
        goto LAB42;

LAB41:    t208 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t208 & 1U);
    t209 = *((unsigned int *)t200);
    *((unsigned int *)t200) = (t209 & 1U);
    t210 = (t0 + 4592);
    t211 = (t210 + 56U);
    t212 = *((char **)t211);
    t213 = (t212 + 56U);
    t214 = *((char **)t213);
    memset(t214, 0, 8);
    t215 = 1U;
    t216 = t215;
    t217 = (t3 + 4);
    t218 = *((unsigned int *)t3);
    t215 = (t215 & t218);
    t219 = *((unsigned int *)t217);
    t216 = (t216 & t219);
    t220 = (t214 + 4);
    t221 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t221 | t215);
    t222 = *((unsigned int *)t220);
    *((unsigned int *)t220) = (t222 | t216);
    xsi_driver_vfirst_trans(t210, 2, 2);
    t223 = (t0 + 4352);
    *((int *)t223) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB9:    t27 = *((unsigned int *)t14);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t14) = (t27 | t28);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t29 | t30);
    goto LAB8;

LAB10:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t6 + 4);
    t48 = (t14 + 4);
    t49 = *((unsigned int *)t6);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t14);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB12;

LAB13:    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB18:    t76 = *((unsigned int *)t4);
    t77 = *((unsigned int *)t73);
    *((unsigned int *)t4) = (t76 | t77);
    t78 = *((unsigned int *)t72);
    t79 = *((unsigned int *)t73);
    *((unsigned int *)t72) = (t78 | t79);
    goto LAB17;

LAB19:    *((unsigned int *)t93) = 1;
    goto LAB22;

LAB24:    t106 = *((unsigned int *)t93);
    t107 = *((unsigned int *)t103);
    *((unsigned int *)t93) = (t106 | t107);
    t108 = *((unsigned int *)t102);
    t109 = *((unsigned int *)t103);
    *((unsigned int *)t102) = (t108 | t109);
    goto LAB23;

LAB25:    t124 = *((unsigned int *)t112);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t112) = (t124 | t125);
    t126 = (t85 + 4);
    t127 = (t93 + 4);
    t128 = *((unsigned int *)t85);
    t129 = (~(t128));
    t130 = *((unsigned int *)t126);
    t131 = (~(t130));
    t132 = *((unsigned int *)t93);
    t133 = (~(t132));
    t134 = *((unsigned int *)t127);
    t135 = (~(t134));
    t136 = (t129 & t131);
    t137 = (t133 & t135);
    t138 = (~(t136));
    t139 = (~(t137));
    t140 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t140 & t138);
    t141 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t141 & t139);
    t142 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t142 & t138);
    t143 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t143 & t139);
    goto LAB27;

LAB28:    *((unsigned int *)t82) = 1;
    goto LAB31;

LAB33:    t155 = *((unsigned int *)t82);
    t156 = *((unsigned int *)t152);
    *((unsigned int *)t82) = (t155 | t156);
    t157 = *((unsigned int *)t151);
    t158 = *((unsigned int *)t152);
    *((unsigned int *)t151) = (t157 | t158);
    goto LAB32;

LAB34:    t173 = *((unsigned int *)t161);
    t174 = *((unsigned int *)t167);
    *((unsigned int *)t161) = (t173 | t174);
    t175 = (t4 + 4);
    t176 = (t82 + 4);
    t177 = *((unsigned int *)t4);
    t178 = (~(t177));
    t179 = *((unsigned int *)t175);
    t180 = (~(t179));
    t181 = *((unsigned int *)t82);
    t182 = (~(t181));
    t183 = *((unsigned int *)t176);
    t184 = (~(t183));
    t185 = (t178 & t180);
    t186 = (t182 & t184);
    t187 = (~(t185));
    t188 = (~(t186));
    t189 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t189 & t187);
    t190 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t190 & t188);
    t191 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t191 & t187);
    t192 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t192 & t188);
    goto LAB36;

LAB37:    *((unsigned int *)t3) = 1;
    goto LAB40;

LAB42:    t204 = *((unsigned int *)t3);
    t205 = *((unsigned int *)t201);
    *((unsigned int *)t3) = (t204 | t205);
    t206 = *((unsigned int *)t200);
    t207 = *((unsigned int *)t201);
    *((unsigned int *)t200) = (t206 | t207);
    goto LAB41;

}

static void Cont_34_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t7[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1688U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    memset(t5, 0, 8);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t7);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t15) == 0)
        goto LAB4;

LAB6:    t21 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t21) = 1;

LAB7:    t22 = (t5 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t7);
    t25 = (~(t24));
    *((unsigned int *)t5) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB9;

LAB8:    t30 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    t35 = *((unsigned int *)t5);
    t36 = *((unsigned int *)t33);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t32 = (t5 + 4);
    t38 = (t33 + 4);
    t39 = (t34 + 4);
    t40 = *((unsigned int *)t32);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB10;

LAB11:
LAB12:    memset(t4, 0, 8);
    t65 = (t34 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t34);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t65) == 0)
        goto LAB13;

LAB15:    t71 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t71) = 1;

LAB16:    t72 = (t4 + 4);
    t73 = (t34 + 4);
    t74 = *((unsigned int *)t34);
    t75 = (~(t74));
    *((unsigned int *)t4) = t75;
    *((unsigned int *)t72) = 0;
    if (*((unsigned int *)t73) != 0)
        goto LAB18;

LAB17:    t80 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t80 & 1U);
    t81 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t81 & 1U);
    memset(t3, 0, 8);
    t82 = (t4 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t4);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t82) == 0)
        goto LAB19;

LAB21:    t88 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t88) = 1;

LAB22:    t89 = (t3 + 4);
    t90 = (t4 + 4);
    t91 = *((unsigned int *)t4);
    t92 = (~(t91));
    *((unsigned int *)t3) = t92;
    *((unsigned int *)t89) = 0;
    if (*((unsigned int *)t90) != 0)
        goto LAB24;

LAB23:    t97 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t97 & 1U);
    t98 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t98 & 1U);
    t99 = (t0 + 4656);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    memset(t103, 0, 8);
    t104 = 1U;
    t105 = t104;
    t106 = (t3 + 4);
    t107 = *((unsigned int *)t3);
    t104 = (t104 & t107);
    t108 = *((unsigned int *)t106);
    t105 = (t105 & t108);
    t109 = (t103 + 4);
    t110 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t110 | t104);
    t111 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t111 | t105);
    xsi_driver_vfirst_trans(t99, 3, 3);
    t112 = (t0 + 4368);
    *((int *)t112) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t5) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB8;

LAB10:    t45 = *((unsigned int *)t34);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t34) = (t45 | t46);
    t47 = (t5 + 4);
    t48 = (t33 + 4);
    t49 = *((unsigned int *)t5);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t33);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t63 & t59);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    goto LAB12;

LAB13:    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB18:    t76 = *((unsigned int *)t4);
    t77 = *((unsigned int *)t73);
    *((unsigned int *)t4) = (t76 | t77);
    t78 = *((unsigned int *)t72);
    t79 = *((unsigned int *)t73);
    *((unsigned int *)t72) = (t78 | t79);
    goto LAB17;

LAB19:    *((unsigned int *)t3) = 1;
    goto LAB22;

LAB24:    t93 = *((unsigned int *)t3);
    t94 = *((unsigned int *)t90);
    *((unsigned int *)t3) = (t93 | t94);
    t95 = *((unsigned int *)t89);
    t96 = *((unsigned int *)t90);
    *((unsigned int *)t89) = (t95 | t96);
    goto LAB23;

}

static void Cont_35_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;

LAB0:    t1 = (t0 + 4000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t15);
    t19 = (t17 & t18);
    *((unsigned int *)t16) = t19;
    t14 = (t6 + 4);
    t20 = (t15 + 4);
    t21 = (t16 + 4);
    t22 = *((unsigned int *)t14);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t4, 0, 8);
    t47 = (t16 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t16);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t47) == 0)
        goto LAB7;

LAB9:    t53 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t53) = 1;

LAB10:    t54 = (t4 + 4);
    t55 = (t16 + 4);
    t56 = *((unsigned int *)t16);
    t57 = (~(t56));
    *((unsigned int *)t4) = t57;
    *((unsigned int *)t54) = 0;
    if (*((unsigned int *)t55) != 0)
        goto LAB12;

LAB11:    t62 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t62 & 1U);
    t63 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t63 & 1U);
    memset(t3, 0, 8);
    t64 = (t4 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t4);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t64) == 0)
        goto LAB13;

LAB15:    t70 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t70) = 1;

LAB16:    t71 = (t3 + 4);
    t72 = (t4 + 4);
    t73 = *((unsigned int *)t4);
    t74 = (~(t73));
    *((unsigned int *)t3) = t74;
    *((unsigned int *)t71) = 0;
    if (*((unsigned int *)t72) != 0)
        goto LAB18;

LAB17:    t79 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t79 & 1U);
    t80 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t80 & 1U);
    t81 = (t0 + 4720);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memset(t85, 0, 8);
    t86 = 1U;
    t87 = t86;
    t88 = (t3 + 4);
    t89 = *((unsigned int *)t3);
    t86 = (t86 & t89);
    t90 = *((unsigned int *)t88);
    t87 = (t87 & t90);
    t91 = (t85 + 4);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t92 | t86);
    t93 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t93 | t87);
    xsi_driver_vfirst_trans(t81, 0, 0);
    t94 = (t0 + 4384);
    *((int *)t94) = 1;

LAB1:    return;
LAB4:    t27 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t16) = (t27 | t28);
    t29 = (t6 + 4);
    t30 = (t15 + 4);
    t31 = *((unsigned int *)t6);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (~(t37));
    t39 = (t32 & t34);
    t40 = (t36 & t38);
    t41 = (~(t39));
    t42 = (~(t40));
    t43 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t43 & t41);
    t44 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t44 & t42);
    t45 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t45 & t41);
    t46 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t46 & t42);
    goto LAB6;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t58 = *((unsigned int *)t4);
    t59 = *((unsigned int *)t55);
    *((unsigned int *)t4) = (t58 | t59);
    t60 = *((unsigned int *)t54);
    t61 = *((unsigned int *)t55);
    *((unsigned int *)t54) = (t60 | t61);
    goto LAB11;

LAB13:    *((unsigned int *)t3) = 1;
    goto LAB16;

LAB18:    t75 = *((unsigned int *)t3);
    t76 = *((unsigned int *)t72);
    *((unsigned int *)t3) = (t75 | t76);
    t77 = *((unsigned int *)t71);
    t78 = *((unsigned int *)t72);
    *((unsigned int *)t71) = (t77 | t78);
    goto LAB17;

}


extern void work_m_00000000003393498612_1043214869_init()
{
	static char *pe[] = {(void *)Cont_31_0,(void *)Cont_32_1,(void *)Cont_33_2,(void *)Cont_34_3,(void *)Cont_35_4};
	xsi_register_didat("work_m_00000000003393498612_1043214869", "isim/IDS_Lab08_isim_beh.exe.sim/work/m_00000000003393498612_1043214869.didat");
	xsi_register_executes(pe);
}
