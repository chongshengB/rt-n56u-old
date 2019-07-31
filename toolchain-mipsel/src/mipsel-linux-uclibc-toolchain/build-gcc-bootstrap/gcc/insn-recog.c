/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_953 (rtx, rtx *);
extern rtx gen_split_954 (rtx, rtx *);
extern rtx gen_split_955 (rtx, rtx *);
extern rtx gen_split_956 (rtx, rtx *);
extern rtx gen_split_957 (rtx, rtx *);
extern rtx gen_peephole2_962 (rtx, rtx *);
extern rtx gen_peephole2_963 (rtx, rtx *);
extern rtx gen_split_964 (rtx, rtx *);
extern rtx gen_split_965 (rtx, rtx *);
extern rtx gen_peephole2_966 (rtx, rtx *);
extern rtx gen_peephole2_967 (rtx, rtx *);
extern rtx gen_peephole2_968 (rtx, rtx *);
extern rtx gen_split_969 (rtx, rtx *);
extern rtx gen_split_972 (rtx, rtx *);
extern rtx gen_split_973 (rtx, rtx *);
extern rtx gen_split_976 (rtx, rtx *);
extern rtx gen_split_977 (rtx, rtx *);
extern rtx gen_split_978 (rtx, rtx *);
extern rtx gen_split_979 (rtx, rtx *);
extern rtx gen_split_985 (rtx, rtx *);
extern rtx gen_split_986 (rtx, rtx *);
extern rtx gen_split_987 (rtx, rtx *);
extern rtx gen_split_988 (rtx, rtx *);
extern rtx gen_split_995 (rtx, rtx *);
extern rtx gen_split_996 (rtx, rtx *);
extern rtx gen_split_997 (rtx, rtx *);
extern rtx gen_split_998 (rtx, rtx *);
extern rtx gen_split_999 (rtx, rtx *);
extern rtx gen_split_1000 (rtx, rtx *);
extern rtx gen_split_1006 (rtx, rtx *);
extern rtx gen_split_1011 (rtx, rtx *);
extern rtx gen_split_1012 (rtx, rtx *);
extern rtx gen_split_1013 (rtx, rtx *);
extern rtx gen_split_1014 (rtx, rtx *);
extern rtx gen_split_1016 (rtx, rtx *);
extern rtx gen_split_1026 (rtx, rtx *);
extern rtx gen_peephole2_1027 (rtx, rtx *);
extern rtx gen_split_1028 (rtx, rtx *);
extern rtx gen_split_1029 (rtx, rtx *);
extern rtx gen_split_1030 (rtx, rtx *);
extern rtx gen_split_1031 (rtx, rtx *);
extern rtx gen_split_1032 (rtx, rtx *);
extern rtx gen_split_1033 (rtx, rtx *);
extern rtx gen_split_1034 (rtx, rtx *);
extern rtx gen_split_1035 (rtx, rtx *);
extern rtx gen_split_1036 (rtx, rtx *);
extern rtx gen_split_1037 (rtx, rtx *);
extern rtx gen_split_1040 (rtx, rtx *);
extern rtx gen_split_1041 (rtx, rtx *);
extern rtx gen_split_1042 (rtx, rtx *);
extern rtx gen_split_1043 (rtx, rtx *);
extern rtx gen_split_1044 (rtx, rtx *);
extern rtx gen_split_1045 (rtx, rtx *);
extern rtx gen_split_1047 (rtx, rtx *);
extern rtx gen_split_1057 (rtx, rtx *);
extern rtx gen_split_1058 (rtx, rtx *);
extern rtx gen_split_1062 (rtx, rtx *);
extern rtx gen_split_1064 (rtx, rtx *);
extern rtx gen_split_1069 (rtx, rtx *);
extern rtx gen_split_1070 (rtx, rtx *);
extern rtx gen_split_1071 (rtx, rtx *);
extern rtx gen_split_1072 (rtx, rtx *);
extern rtx gen_split_1073 (rtx, rtx *);
extern rtx gen_split_1074 (rtx, rtx *);
extern rtx gen_split_1075 (rtx, rtx *);
extern rtx gen_split_1076 (rtx, rtx *);
extern rtx gen_split_1077 (rtx, rtx *);
extern rtx gen_split_1088 (rtx, rtx *);
extern rtx gen_split_1089 (rtx, rtx *);
extern rtx gen_split_1090 (rtx, rtx *);
extern rtx gen_split_1091 (rtx, rtx *);
extern rtx gen_split_1092 (rtx, rtx *);
extern rtx gen_split_1093 (rtx, rtx *);
extern rtx gen_split_1094 (rtx, rtx *);
extern rtx gen_split_1103 (rtx, rtx *);
extern rtx gen_split_1104 (rtx, rtx *);
extern rtx gen_split_1105 (rtx, rtx *);
extern rtx gen_split_1106 (rtx, rtx *);
extern rtx gen_split_1107 (rtx, rtx *);
extern rtx gen_split_1108 (rtx, rtx *);
extern rtx gen_split_1109 (rtx, rtx *);
extern rtx gen_split_1152 (rtx, rtx *);
extern rtx gen_split_1155 (rtx, rtx *);
extern rtx gen_split_1161 (rtx, rtx *);
extern rtx gen_split_1162 (rtx, rtx *);
extern rtx gen_split_1164 (rtx, rtx *);
extern rtx gen_split_1165 (rtx, rtx *);
extern rtx gen_split_1166 (rtx, rtx *);
extern rtx gen_split_1172 (rtx, rtx *);
extern rtx gen_split_1173 (rtx, rtx *);
extern rtx gen_split_1174 (rtx, rtx *);
extern rtx gen_split_1223 (rtx, rtx *);
extern rtx gen_split_1224 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L24;
    case MINUS:
      goto L112;
    case MULT:
      goto L148;
    case NEG:
      goto L956;
    case DIV:
      goto L1166;
    case SQRT:
      goto L1288;
    case ABS:
      goto L1345;
    case FLOAT_TRUNCATE:
      goto L1501;
    case FLOAT:
      goto L1877;
    case MEM:
      goto L2201;
    case IF_THEN_ELSE:
      goto L4008;
    default:
     break;
   }
  goto ret0;

 L24: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L8306;
  goto ret0;

 L8306: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L861;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L25;
    }
  goto ret0;

 L861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L862;
    }
  goto ret0;

 L862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L863;
    }
  goto ret0;

 L863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L864;
    }
  goto ret0;

 L864: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2087 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 75;  /* *madd4sf */
    }
 L888: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2097 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 78;  /* *madd3sf */
    }
  goto ret0;

 L25: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L26;
    }
  goto ret0;

 L26: ATTRIBUTE_UNUSED_LABEL
  if (
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 7;  /* addsf3 */
    }
  goto ret0;

 L112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L8308;
  goto ret0;

 L8308: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L909;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L113;
    }
  goto ret0;

 L909: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L8310;
  goto ret0;

 L8310: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L1012;
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L910;
    }
  goto ret0;

 L1012: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L1013;
    }
  goto ret0;

 L1013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1014;
    }
  goto ret0;

 L1014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L1015;
    }
  goto ret0;

 L1015: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2156 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 93;  /* *nmadd4sf_fastmath */
    }
 L1042: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2170 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 96;  /* *nmadd3sf_fastmath */
    }
  goto ret0;

 L910: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L911;
    }
  goto ret0;

 L911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L912;
    }
  goto ret0;

 L912: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 81;  /* *msub4sf */
    }
 L936: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 84;  /* *msub3sf */
    }
  goto ret0;

 L113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L8312;
  goto ret0;

 L8312: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L1120;
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L114;
    }
  goto ret0;

 L1120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1121;
    }
  goto ret0;

 L1121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L1122;
    }
  goto ret0;

 L1122: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 105;  /* *nmsub4sf_fastmath */
    }
 L1146: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2226 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 108;  /* *nmsub3sf_fastmath */
    }
  goto ret0;

 L114: ATTRIBUTE_UNUSED_LABEL
  if (
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 20;  /* subsf3 */
    }
  goto ret0;

 L148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L149;
    }
  goto ret0;

 L149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L150;
    }
  goto ret0;

 L150: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1301 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 26;  /* *mulsf3 */
    }
 L162: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1314 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 28;  /* *mulsf3_r4300 */
    }
  goto ret0;

 L956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L8313;
  goto ret0;

 L8313: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L957;
    case MINUS:
      goto L1065;
    case REG:
    case SUBREG:
      goto L8315;
    default:
      goto ret0;
   }
 L8315: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1390;
    }
  goto ret0;

 L957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L958;
  goto ret0;

 L958: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L959;
    }
  goto ret0;

 L959: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L960;
    }
  goto ret0;

 L960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L961;
    }
  goto ret0;

 L961: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2128 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 87;  /* *nmadd4sf */
    }
 L988: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2142 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 90;  /* *nmadd3sf */
    }
  goto ret0;

 L1065: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L1066;
  goto ret0;

 L1066: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L1067;
    }
  goto ret0;

 L1067: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[3] = x4;
      goto L1068;
    }
  goto ret0;

 L1068: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1069;
    }
  goto ret0;

 L1069: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2184 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 99;  /* *nmsub4sf */
    }
 L1096: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2198 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 102;  /* *nmsub3sf */
    }
  goto ret0;

 L1390: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 145;  /* negsf2 */
    }
  goto ret0;

 L1166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1167;
    }
  if (const_1_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1185;
    }
  goto ret0;

 L1167: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1168;
    }
  goto ret0;

 L1168: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2269 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 111;  /* *divsf3 */
    }
  goto ret0;

 L1185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L8317;
  goto ret0;

 L8317: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1305;
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1186;
    }
  goto ret0;

 L1305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1306;
    }
  goto ret0;

 L1306: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2409 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 130;  /* *rsqrtsfa */
    }
  goto ret0;

 L1186: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2287 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 114;  /* *recipsf3 */
    }
  goto ret0;

 L1288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L8319;
  goto ret0;

 L8319: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1325;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1289;
    }
  goto ret0;

 L1325: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1326;
    }
  goto ret0;

 L1326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1327;
    }
  goto ret0;

 L1327: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2427 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 133;  /* *rsqrtsfb */
    }
  goto ret0;

 L1289: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2391 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 127;  /* sqrtsf2 */
    }
  goto ret0;

 L1345: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1346;
    }
  goto ret0;

 L1346: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2458 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 136;  /* abssf2 */
    }
  goto ret0;

 L1501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1502;
    }
  goto ret0;

 L1502: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2676 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 164;  /* truncdfsf2 */
    }
  goto ret0;

 L1877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8320;
    case DImode:
      goto L8321;
    default:
      break;
    }
  goto ret0;

 L8320: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1878;
    }
  goto ret0;

 L1878: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3210 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 230;  /* floatsisf2 */
    }
  goto ret0;

 L8321: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1883;
    }
  goto ret0;

 L1883: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3220 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 231;  /* floatdisf2 */
    }
  goto ret0;

 L2201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8322;
    case DImode:
      goto L8323;
    default:
      break;
    }
  goto ret0;

 L8322: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2202;
  goto ret0;

 L2202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2203;
    }
  goto ret0;

 L2203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2204;
    }
  goto ret0;

 L2204: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 291;  /* *lwxc1_si */
    }
  goto ret0;

 L8323: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2223;
  goto ret0;

 L2223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2224;
    }
  goto ret0;

 L2224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2225;
    }
  goto ret0;

 L2225: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 294;  /* *lwxc1_di */
    }
  goto ret0;

 L4008: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8324;
    case DImode:
      goto L8325;
    case CCmode:
      goto L8326;
    default:
      break;
    }
  goto ret0;

 L8324: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L4009;
    }
  goto ret0;

 L4009: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4010;
    }
  goto ret0;

 L4010: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4011;
  goto ret0;

 L4011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4012;
    }
  goto ret0;

 L4012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L4013;
    }
  goto ret0;

 L4013: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 561;  /* *movsf_on_si */
    }
  goto ret0;

 L8325: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L4018;
    }
  goto ret0;

 L4018: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4019;
    }
  goto ret0;

 L4019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4020;
  goto ret0;

 L4020: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4021;
    }
  goto ret0;

 L4021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L4022;
    }
  goto ret0;

 L4022: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 646 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 562;  /* *movsf_on_di */
    }
  goto ret0;

 L8326: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L4027;
    }
  goto ret0;

 L4027: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L4028;
    }
  goto ret0;

 L4028: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4029;
  goto ret0;

 L4029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4030;
    }
  goto ret0;

 L4030: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L4031;
    }
  goto ret0;

 L4031: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 647 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)))
    {
      return 563;  /* *movsf_on_cc */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L30;
    case MINUS:
      goto L118;
    case MULT:
      goto L154;
    case NEG:
      goto L965;
    case DIV:
      goto L1172;
    case SQRT:
      goto L1293;
    case ABS:
      goto L1350;
    case FLOAT_EXTEND:
      goto L1816;
    case FLOAT:
      goto L1867;
    case MEM:
      goto L2208;
    case UNSPEC:
      goto L8343;
    case IF_THEN_ELSE:
      goto L4035;
    default:
     break;
   }
  goto ret0;

 L30: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L8347;
  goto ret0;

 L8347: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L869;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L31;
    }
  goto ret0;

 L869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L870;
    }
  goto ret0;

 L870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L871;
    }
  goto ret0;

 L871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L872;
    }
  goto ret0;

 L872: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2087 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 76;  /* *madd4df */
    }
 L896: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2097 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 79;  /* *madd3df */
    }
  goto ret0;

 L31: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L32;
    }
  goto ret0;

 L32: ATTRIBUTE_UNUSED_LABEL
  if (
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 8;  /* adddf3 */
    }
  goto ret0;

 L118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L8349;
  goto ret0;

 L8349: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L917;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L119;
    }
  goto ret0;

 L917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L8351;
  goto ret0;

 L8351: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L1021;
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L918;
    }
  goto ret0;

 L1021: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L1022;
    }
  goto ret0;

 L1022: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1023;
    }
  goto ret0;

 L1023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L1024;
    }
  goto ret0;

 L1024: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2156 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 94;  /* *nmadd4df_fastmath */
    }
 L1051: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2170 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 97;  /* *nmadd3df_fastmath */
    }
  goto ret0;

 L918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L919;
    }
  goto ret0;

 L919: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L920;
    }
  goto ret0;

 L920: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 82;  /* *msub4df */
    }
 L944: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 85;  /* *msub3df */
    }
  goto ret0;

 L119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L8353;
  goto ret0;

 L8353: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L1128;
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L120;
    }
  goto ret0;

 L1128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1129;
    }
  goto ret0;

 L1129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L1130;
    }
  goto ret0;

 L1130: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 106;  /* *nmsub4df_fastmath */
    }
 L1154: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2226 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 109;  /* *nmsub3df_fastmath */
    }
  goto ret0;

 L120: ATTRIBUTE_UNUSED_LABEL
  if (
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 21;  /* subdf3 */
    }
  goto ret0;

 L154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L155;
    }
  goto ret0;

 L155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L156;
    }
  goto ret0;

 L156: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1301 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 27;  /* *muldf3 */
    }
 L168: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1314 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 29;  /* *muldf3_r4300 */
    }
  goto ret0;

 L965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L8354;
  goto ret0;

 L8354: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L966;
    case MINUS:
      goto L1074;
    case REG:
    case SUBREG:
      goto L8356;
    default:
      goto ret0;
   }
 L8356: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1395;
    }
  goto ret0;

 L966: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L967;
  goto ret0;

 L967: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L968;
    }
  goto ret0;

 L968: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L969;
    }
  goto ret0;

 L969: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L970;
    }
  goto ret0;

 L970: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2128 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 88;  /* *nmadd4df */
    }
 L997: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2142 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 91;  /* *nmadd3df */
    }
  goto ret0;

 L1074: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L1075;
  goto ret0;

 L1075: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L1076;
    }
  goto ret0;

 L1076: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[3] = x4;
      goto L1077;
    }
  goto ret0;

 L1077: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1078;
    }
  goto ret0;

 L1078: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2184 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 100;  /* *nmsub4df */
    }
 L1105: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2198 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 103;  /* *nmsub3df */
    }
  goto ret0;

 L1395: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 146;  /* negdf2 */
    }
  goto ret0;

 L1172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1173;
    }
  if (const_1_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1191;
    }
  goto ret0;

 L1173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1174;
    }
  goto ret0;

 L1174: ATTRIBUTE_UNUSED_LABEL
  if (
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 112;  /* *divdf3 */
    }
  goto ret0;

 L1191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L8358;
  goto ret0;

 L8358: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1312;
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1192;
    }
  goto ret0;

 L1312: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1313;
    }
  goto ret0;

 L1313: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2409 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 131;  /* *rsqrtdfa */
    }
  goto ret0;

 L1192: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2287 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 115;  /* *recipdf3 */
    }
  goto ret0;

 L1293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L8360;
  goto ret0;

 L8360: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1332;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1294;
    }
  goto ret0;

 L1332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1333;
    }
  goto ret0;

 L1333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1334;
    }
  goto ret0;

 L1334: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2427 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 134;  /* *rsqrtdfb */
    }
  goto ret0;

 L1294: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2391 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 128;  /* sqrtdf2 */
    }
  goto ret0;

 L1350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1351;
    }
  goto ret0;

 L1351: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2458 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 137;  /* absdf2 */
    }
  goto ret0;

 L1816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1817;
    }
  goto ret0;

 L1817: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3079 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 221;  /* extendsfdf2 */
    }
  goto ret0;

 L1867: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8361;
    case DImode:
      goto L8362;
    default:
      break;
    }
  goto ret0;

 L8361: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1868;
    }
  goto ret0;

 L1868: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3190 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 228;  /* floatsidf2 */
    }
  goto ret0;

 L8362: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1873;
    }
  goto ret0;

 L1873: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3200 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 229;  /* floatdidf2 */
    }
  goto ret0;

 L2208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8363;
    case DImode:
      goto L8364;
    default:
      break;
    }
  goto ret0;

 L8363: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2209;
  goto ret0;

 L2209: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2210;
    }
  goto ret0;

 L2210: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2211;
    }
  goto ret0;

 L2211: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 292;  /* *ldxc1_si */
    }
  goto ret0;

 L8364: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2230;
  goto ret0;

 L2230: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2231;
    }
  goto ret0;

 L2231: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2232;
    }
  goto ret0;

 L2232: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 295;  /* *ldxc1_di */
    }
  goto ret0;

 L8343: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L8365;
    case 2:
      goto L8366;
    default:
      break;
    }
  goto ret0;

 L8365: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L2459;
  goto ret0;

 L2459: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2460;
    }
  goto ret0;

 L2460: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4549 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 691 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 333;  /* load_lowdf */
    }
  goto ret0;

 L8366: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L2494;
    case 32L:
      goto L2578;
    default:
      break;
    }
  goto ret0;

 L2494: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2495;
    }
  goto ret0;

 L2495: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2496;
    }
  goto ret0;

 L2496: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4564 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 691 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 340;  /* load_highdf */
    }
  goto ret0;

 L2578: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2579;
    }
  goto ret0;

 L2579: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2580;
    }
  goto ret0;

 L2580: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4594 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 691 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 354;  /* mthc1df */
    }
  goto ret0;

 L4035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8368;
    case DImode:
      goto L8369;
    case CCmode:
      goto L8370;
    default:
      break;
    }
  goto ret0;

 L8368: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L4036;
    }
  goto ret0;

 L4036: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4037;
    }
  goto ret0;

 L4037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4038;
  goto ret0;

 L4038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4039;
    }
  goto ret0;

 L4039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L4040;
    }
  goto ret0;

 L4040: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 564;  /* *movdf_on_si */
    }
  goto ret0;

 L8369: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L4045;
    }
  goto ret0;

 L4045: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4046;
    }
  goto ret0;

 L4046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4047;
  goto ret0;

 L4047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4048;
    }
  goto ret0;

 L4048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L4049;
    }
  goto ret0;

 L4049: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && 
#line 646 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 565;  /* *movdf_on_di */
    }
  goto ret0;

 L8370: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L4054;
    }
  goto ret0;

 L4054: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L4055;
    }
  goto ret0;

 L4055: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4056;
  goto ret0;

 L4056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4057;
    }
  goto ret0;

 L4057: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L4058;
    }
  goto ret0;

 L4058: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && 
#line 647 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)))
    {
      return 566;  /* *movdf_on_cc */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L36;
    case MINUS:
      goto L124;
    case MULT:
      goto L172;
    case NEG:
      goto L974;
    case DIV:
      goto L1178;
    case SQRT:
      goto L1298;
    case ABS:
      goto L1355;
    case MEM:
      goto L2215;
    case UNSPEC:
      goto L8384;
    default:
     break;
   }
  goto ret0;

 L36: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L8388;
  goto ret0;

 L8388: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L877;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L37;
    }
  goto ret0;

 L877: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L878;
    }
  goto ret0;

 L878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L879;
    }
  goto ret0;

 L879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L880;
    }
  goto ret0;

 L880: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2087 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 77;  /* *madd4v2sf */
    }
 L904: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2097 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 80;  /* *madd3v2sf */
    }
  goto ret0;

 L37: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L38;
    }
  goto ret0;

 L38: ATTRIBUTE_UNUSED_LABEL
  if (
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 9;  /* addv2sf3 */
    }
  goto ret0;

 L124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L8390;
  goto ret0;

 L8390: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L925;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L125;
    }
  goto ret0;

 L925: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode)
    goto L8392;
  goto ret0;

 L8392: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L1030;
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L926;
    }
  goto ret0;

 L1030: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L1031;
    }
  goto ret0;

 L1031: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1032;
    }
  goto ret0;

 L1032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L1033;
    }
  goto ret0;

 L1033: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2156 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 95;  /* *nmadd4v2sf_fastmath */
    }
 L1060: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2170 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 98;  /* *nmadd3v2sf_fastmath */
    }
  goto ret0;

 L926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L927;
    }
  goto ret0;

 L927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L928;
    }
  goto ret0;

 L928: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 83;  /* *msub4v2sf */
    }
 L952: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 86;  /* *msub3v2sf */
    }
  goto ret0;

 L125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L8394;
  goto ret0;

 L8394: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L1136;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L126;
    }
  goto ret0;

 L1136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1137;
    }
  goto ret0;

 L1137: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[3] = x3;
      goto L1138;
    }
  goto ret0;

 L1138: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 107;  /* *nmsub4v2sf_fastmath */
    }
 L1162: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2226 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 110;  /* *nmsub3v2sf_fastmath */
    }
  goto ret0;

 L126: ATTRIBUTE_UNUSED_LABEL
  if (
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 22;  /* subv2sf3 */
    }
  goto ret0;

 L172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L173;
    }
  goto ret0;

 L173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L174;
    }
  goto ret0;

 L174: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1324 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 30;  /* mulv2sf3 */
    }
  goto ret0;

 L974: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L8395;
  goto ret0;

 L8395: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L975;
    case MINUS:
      goto L1083;
    case REG:
    case SUBREG:
      goto L8397;
    default:
      goto ret0;
   }
 L8397: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1400;
    }
  goto ret0;

 L975: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == MULT)
    goto L976;
  goto ret0;

 L976: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L977;
    }
  goto ret0;

 L977: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L978;
    }
  goto ret0;

 L978: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[3] = x3;
      goto L979;
    }
  goto ret0;

 L979: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2128 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 89;  /* *nmadd4v2sf */
    }
 L1006: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2142 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 92;  /* *nmadd3v2sf */
    }
  goto ret0;

 L1083: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == MULT)
    goto L1084;
  goto ret0;

 L1084: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L1085;
    }
  goto ret0;

 L1085: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V2SFmode))
    {
      operands[3] = x4;
      goto L1086;
    }
  goto ret0;

 L1086: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L1087;
    }
  goto ret0;

 L1087: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2184 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 101;  /* *nmsub4v2sf */
    }
 L1114: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2198 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 104;  /* *nmsub3v2sf */
    }
  goto ret0;

 L1400: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 147;  /* negv2sf2 */
    }
  goto ret0;

 L1178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1179;
    }
  if (const_1_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1197;
    }
  goto ret0;

 L1179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L1180;
    }
  goto ret0;

 L1180: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2269 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 113;  /* *divv2sf3 */
    }
  goto ret0;

 L1197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L8399;
  goto ret0;

 L8399: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1319;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L1198;
    }
  goto ret0;

 L1319: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1320;
    }
  goto ret0;

 L1320: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2409 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 132;  /* *rsqrtv2sfa */
    }
  goto ret0;

 L1198: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2287 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 116;  /* *recipv2sf3 */
    }
  goto ret0;

 L1298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L8401;
  goto ret0;

 L8401: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1339;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1299;
    }
  goto ret0;

 L1339: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L1340;
    }
  goto ret0;

 L1340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1341;
    }
  goto ret0;

 L1341: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2427 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 135;  /* *rsqrtv2sfb */
    }
  goto ret0;

 L1299: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2391 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 129;  /* sqrtv2sf2 */
    }
  goto ret0;

 L1355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1356;
    }
  goto ret0;

 L1356: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2458 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 138;  /* absv2sf2 */
    }
  goto ret0;

 L2215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8402;
    case DImode:
      goto L8403;
    default:
      break;
    }
  goto ret0;

 L8402: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2216;
  goto ret0;

 L2216: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2217;
    }
  goto ret0;

 L2217: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2218;
    }
  goto ret0;

 L2218: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 293;  /* *ldxc1_si */
    }
  goto ret0;

 L8403: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2237;
  goto ret0;

 L2237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2238;
    }
  goto ret0;

 L2238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2239;
    }
  goto ret0;

 L2239: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 296;  /* *ldxc1_di */
    }
  goto ret0;

 L8384: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L8404;
    case 2:
      goto L8405;
    default:
      break;
    }
  goto ret0;

 L8404: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L2469;
  goto ret0;

 L2469: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2470;
    }
  goto ret0;

 L2470: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4549 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 693 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 335;  /* load_lowv2sf */
    }
  goto ret0;

 L8405: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L2506;
    case 32L:
      goto L2590;
    default:
      break;
    }
  goto ret0;

 L2506: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2507;
    }
  goto ret0;

 L2507: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2508;
    }
  goto ret0;

 L2508: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4564 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 693 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 342;  /* load_highv2sf */
    }
  goto ret0;

 L2590: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2591;
    }
  goto ret0;

 L2591: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2592;
    }
  goto ret0;

 L2592: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4594 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 693 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 356;  /* mthc1v2sf */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L42;
    case ZERO_EXTEND:
      goto L80;
    case MINUS:
      goto L130;
    case MULT:
      goto L178;
    case NEG:
      goto L424;
    case TRUNCATE:
      goto L597;
    case CLZ:
      goto L1360;
    case POPCOUNT:
      goto L1370;
    case NOT:
      goto L1404;
    case AND:
      goto L1413;
    case IOR:
      goto L1437;
    case XOR:
      goto L1461;
    case SIGN_EXTEND:
      goto L1614;
    case FIX:
      goto L1821;
    case SIGN_EXTRACT:
      goto L1887;
    case ZERO_EXTRACT:
      goto L1901;
    case UNSPEC:
      goto L8436;
    case HIGH:
      goto L2027;
    case LO_SUM:
      goto L2037;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L8434;
    default:
      goto ret0;
   }
 L8434: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2049;
    }
  goto ret0;

 L42: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8440;
  goto ret0;

 L8440: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L276;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L43;
    }
  goto ret0;

 L276: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L277;
    }
  goto ret0;

 L277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L278;
    }
  goto ret0;

 L278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L279;
    }
 L836: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && 
#line 2053 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MAD))
    {
      return 72;  /* madsi */
    }
  goto ret0;

 L279: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1513 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 39;  /* *mul_acc_si */
    }
 L300: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS3900 && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 40;  /* *mul_acc_si_r3900 */
    }
 L319: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1561 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 41;  /* *macc */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L836;

 L43: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L44;
    }
  goto ret0;

 L44: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1039 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 10;  /* *addsi3 */
    }
 L56: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1050 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 12;  /* *addsi3_mips16 */
    }
  goto ret0;

 L80: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L8441;
    case HImode:
      goto L8444;
    default:
      break;
    }
  goto ret0;

 L8441: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SUBREG:
      goto L8451;
    case TRUNCATE:
      goto L97;
    default:
     break;
   }
 L8445: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1667;
    }
 L8447: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1687;
    }
 L8449: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1707;
    }
  goto ret0;

 L8451: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 3L:
      goto L81;
    case 0L:
      goto L89;
    default:
      break;
    }
  goto L8445;

 L81: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L82;
  goto L8445;

 L82: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L83;
    }
  goto L8445;

 L83: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L84;
    }
  goto L8445;

 L84: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1222 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && BYTES_BIG_ENDIAN))
    {
      return 16;  /* *baddu_si_eb */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8445;

 L89: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L90;
  goto L8445;

 L90: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L91;
    }
  goto L8445;

 L91: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L92;
    }
  goto L8445;

 L92: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1232 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && !BYTES_BIG_ENDIAN))
    {
      return 17;  /* *baddu_si_el */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8445;

 L97: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L8453;
  goto ret0;

 L8453: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L98;
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1640;
    }
  goto ret0;

 L98: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L99;
    }
  goto ret0;

 L99: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L100;
    }
  goto ret0;

 L100: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1242 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && TARGET_64BIT))
    {
      return 18;  /* *baddu_disi */
    }
  goto ret0;

 L1640: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2813 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 186;  /* *zero_extendsi_truncqi */
    }
  goto ret0;

 L1667: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2896 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 191;  /* *zero_extendqisi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8447;

 L1687: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2906 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 195;  /* *zero_extendqisi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8449;

 L1707: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2915 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 199;  /* *zero_extendqisi2_mips16 */
    }
  goto ret0;

 L8444: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1627;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1672;
    }
 L8448: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1692;
    }
 L8450: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1712;
    }
  goto ret0;

 L1627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1628;
    }
  goto ret0;

 L1628: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2804 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 184;  /* *zero_extendsi_trunchi */
    }
  goto ret0;

 L1672: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2896 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 192;  /* *zero_extendhisi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8448;

 L1692: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2906 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 196;  /* *zero_extendhisi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8450;

 L1712: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2915 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 200;  /* *zero_extendhisi2_mips16 */
    }
  goto ret0;

 L130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L131;
    }
  goto ret0;

 L131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L8456;
  goto ret0;

 L8456: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L336;
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 23;  /* subsi3 */
    }
  goto ret0;

 L336: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L337;
    }
  goto ret0;

 L337: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L338;
    }
  goto ret0;

 L338: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1582 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 42;  /* *msac */
    }
 L359: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1602 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 43;  /* *msac_using_macc */
    }
 L410: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1742 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 46;  /* *mul_sub_si */
    }
  goto ret0;

 L178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L179;
    }
  goto ret0;

 L179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L180;
    }
  goto ret0;

 L180: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1398 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_LOONGSON_2EF))
    {
      return 31;  /* mulsi3_mul3_ls2ef */
    }
 L201: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 33;  /* mulsi3_mul3 */
    }
 L222: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1446 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000))
    {
      return 35;  /* mulsi3_internal */
    }
 L243: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1456 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 37;  /* mulsi3_r4000 */
    }
  goto ret0;

 L424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8457;
  goto ret0;

 L8457: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L425;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 143;  /* negsi2 */
    }
  goto ret0;

 L425: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L426;
    }
  goto ret0;

 L426: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L427;
    }
  goto ret0;

 L427: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1771 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 47;  /* *muls */
    }
  goto ret0;

 L597: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L8459;
  goto ret0;

 L8459: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L598;
    case ASHIFTRT:
      goto L1536;
    case ZERO_EXTRACT:
      goto L1916;
    default:
     break;
   }
  goto ret0;

 L598: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L8462;
  goto ret0;

 L8462: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L599;
    case NEG:
      goto L696;
    case REG:
    case SUBREG:
      goto L8464;
    default:
      goto ret0;
   }
 L8464: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1556;
    }
  goto ret0;

 L599: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L8465;
  goto ret0;

 L8465: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L600;
    case ZERO_EXTEND:
      goto L624;
    default:
     break;
   }
  goto ret0;

 L600: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L601;
    }
  goto ret0;

 L601: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L602;
  goto ret0;

 L602: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L603;
    }
  goto ret0;

 L603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L8467;
  goto ret0;

 L8467: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L)
    goto L8469;
  goto ret0;

 L8469: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1926 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 60;  /* smulsi3_highpart_internal */
    }
 L8470: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1960 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 62;  /* smulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L624: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L625;
    }
  goto ret0;

 L625: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L626;
  goto ret0;

 L626: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L627;
    }
  goto ret0;

 L627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L8471;
  goto ret0;

 L8471: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L)
    goto L8473;
  goto ret0;

 L8473: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1926 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 61;  /* umulsi3_highpart_internal */
    }
 L8474: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1960 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 63;  /* umulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L696: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L697;
  goto ret0;

 L697: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L8475;
  goto ret0;

 L8475: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L698;
    case ZERO_EXTEND:
      goto L724;
    default:
     break;
   }
  goto ret0;

 L698: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L699;
    }
  goto ret0;

 L699: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L700;
  goto ret0;

 L700: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L701;
    }
  goto ret0;

 L701: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 1975 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 64;  /* *smulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L724: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L725;
    }
  goto ret0;

 L725: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L726;
  goto ret0;

 L726: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L727;
    }
  goto ret0;

 L727: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 1975 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 65;  /* *umulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L1556: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L8477;
  goto ret0;

 L8477: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L
      && 
#line 2742 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 173;  /* *lshr32_truncsi */
    }
 L8478: ATTRIBUTE_UNUSED_LABEL
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1598;
    }
  goto ret0;

 L1598: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2754 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32))
    {
      return 179;  /* *lshr_truncsi_exts */
    }
  goto ret0;

 L1536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1537;
    }
  goto ret0;

 L1537: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1538;
    }
  goto ret0;

 L1538: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2732 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63)))
    {
      return 170;  /* *ashr_truncsi */
    }
 L1591: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2754 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32))
    {
      return 178;  /* *ashr_truncsi_exts */
    }
  goto ret0;

 L1916: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1917;
    }
  goto ret0;

 L1917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1918;
    }
  goto ret0;

 L1918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L1919;
    }
  goto ret0;

 L1919: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3486 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63)))
    {
      return 236;  /* *extzv_truncsi_exts */
    }
  goto ret0;

 L1360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1361;
    }
  goto ret0;

 L1361: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO))
    {
      return 139;  /* clzsi2 */
    }
  goto ret0;

 L1370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1371;
    }
  goto ret0;

 L1371: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2490 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_POP))
    {
      return 141;  /* popcountsi2 */
    }
  goto ret0;

 L1404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 148;  /* one_cmplsi2 */
    }
  goto ret0;

 L1413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8480;
  goto ret0;

 L8480: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NOT:
      goto L1486;
    case ASHIFT:
      goto L1946;
    case REG:
    case SUBREG:
      goto L8479;
    default:
      goto ret0;
   }
 L8479: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1414;
    }
  goto ret0;

 L1486: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1487;
    }
  goto ret0;

 L1487: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1488;
  goto ret0;

 L1488: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1489;
    }
  goto ret0;

 L1489: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 162;  /* *norsi3 */
    }
  goto ret0;

 L1946: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1947;
    }
  goto ret0;

 L1947: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1948;
    }
  goto ret0;

 L1948: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1949;
    }
  goto ret0;

 L1949: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3541 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CINS
   && mask_low_and_shift_p (SImode, operands[3], operands[2], 32)))
    {
      return 240;  /* *cinssi */
    }
  goto ret0;

 L1414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1415;
    }
 L1426: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1427;
    }
  goto ret0;

 L1415: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2573 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 150;  /* *andsi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1426;

 L1427: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2584 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 152;  /* *andsi3_mips16 */
    }
  goto ret0;

 L1437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1438;
    }
  goto ret0;

 L1438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1439;
    }
 L1450: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1451;
    }
  goto ret0;

 L1439: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2603 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 154;  /* *iorsi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1450;

 L1451: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2614 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 156;  /* *iorsi3_mips16 */
    }
  goto ret0;

 L1461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1462;
    }
  goto ret0;

 L1462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1463;
    }
  goto ret0;

 L1463: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 158;  /* *mips.md:2626 */
    }
 L1475: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2641 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 160;  /* *mips.md:2637 */
    }
  goto ret0;

 L1614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L8482;
    case HImode:
      goto L8483;
    default:
      break;
    }
  goto ret0;

 L8482: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1615;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1742;
    }
  goto ret0;

 L1615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1616;
    }
  goto ret0;

 L1616: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2784 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 182;  /* *extendsi_truncateqi */
    }
  goto ret0;

 L1742: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 206;  /* *extendqisi2_mips16e */
    }
 L1762: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3004 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E))
    {
      return 210;  /* *extendqisi2 */
    }
 L1782: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3023 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH))
    {
      return 214;  /* *extendqisi2_seb */
    }
  goto ret0;

 L8483: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1621;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1747;
    }
  goto ret0;

 L1621: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1622;
    }
  goto ret0;

 L1622: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2784 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 183;  /* *extendsi_truncatehi */
    }
  goto ret0;

 L1747: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 207;  /* *extendhisi2_mips16e */
    }
 L1767: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3004 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E))
    {
      return 211;  /* *extendhisi2 */
    }
 L1787: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3023 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH))
    {
      return 215;  /* *extendhisi2_seh */
    }
  goto ret0;

 L1821: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L8486;
    case SFmode:
      goto L8487;
    default:
      break;
    }
  goto ret0;

 L8486: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1822;
    }
  goto ret0;

 L1822: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W))
    {
      return 222;  /* fix_truncdfsi2_insn */
    }
 L1835: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 223;  /* fix_truncdfsi2_macro */
    }
  goto ret0;

 L8487: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1840;
    }
  goto ret0;

 L1840: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3144 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W))
    {
      return 224;  /* fix_truncsfsi2_insn */
    }
 L1853: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3154 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 225;  /* fix_truncsfsi2_macro */
    }
  goto ret0;

 L1887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1888;
    }
  goto ret0;

 L1888: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1889;
    }
  goto ret0;

 L1889: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1890;
    }
  goto ret0;

 L1890: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3437 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32))
    {
      return 232;  /* extvsi */
    }
  goto ret0;

 L1901: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1902;
    }
  goto ret0;

 L1902: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1903;
    }
  goto ret0;

 L1903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1904;
    }
  goto ret0;

 L1904: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))))
    {
      return 234;  /* extzvsi */
    }
  goto ret0;

 L8436: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L8488;
    case 3:
      goto L8489;
    default:
      break;
    }
  goto ret0;

 L8488: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 18L:
      goto L1961;
    case 24L:
      goto L2067;
    default:
      break;
    }
  goto ret0;

 L1961: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1962;
    }
  goto ret0;

 L1962: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1963;
    }
  goto ret0;

 L1963: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3568 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])))
    {
      return 242;  /* mov_lwl */
    }
  goto ret0;

 L2067: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2068;
    }
  goto ret0;

 L2068: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2069;
    }
  goto ret0;

 L2069: ATTRIBUTE_UNUSED_LABEL
  if (
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 260;  /* load_gotsi */
    }
  goto ret0;

 L8489: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 19)
    goto L1973;
  goto ret0;

 L1973: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1974;
    }
  goto ret0;

 L1974: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1975;
    }
  goto ret0;

 L1975: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1976;
    }
  goto ret0;

 L1976: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])))
    {
      return 244;  /* mov_lwr */
    }
  goto ret0;

 L2027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8491;
  goto ret0;

 L8491: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2028;
    }
 L8492: ATTRIBUTE_UNUSED_LABEL
  if (got_page_ofst_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2058;
    }
  goto ret0;

 L2028: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3713 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 252;  /* *xgot_hisi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8492;

 L2058: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 258;  /* *got_pagesi */
    }
  goto ret0;

 L2037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2038;
    }
  goto ret0;

 L2038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (got_disp_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2039;
    }
 L2080: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2081;
    }
  goto ret0;

 L2039: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3729 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 254;  /* *xgot_losi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2080;

 L2081: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3791 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 262;  /* *lowsi */
    }
 L2093: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3800 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 264;  /* *lowsi_mips16 */
    }
  goto ret0;

 L2049: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3743 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 256;  /* *got_dispsi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L2285;
    case UNSPEC:
      goto L8525;
    case UNSPEC_VOLATILE:
      goto L8527;
    case ASHIFT:
      goto L2739;
    case ASHIFTRT:
      goto L2745;
    case LSHIFTRT:
      goto L2751;
    case ROTATERT:
      goto L2838;
    case EQ:
      goto L3063;
    case NE:
      goto L3127;
    case GT:
      goto L3171;
    case GTU:
      goto L3177;
    case GE:
      goto L3267;
    case GEU:
      goto L3272;
    case LT:
      goto L3307;
    case LTU:
      goto L3313;
    case LE:
      goto L3403;
    case LEU:
      goto L3409;
    case IF_THEN_ELSE:
      goto L3954;
    default:
     break;
   }
  goto ret0;

 L2285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2286;
  goto ret0;

 L2286: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2287;
  goto ret0;

 L2287: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2288;
    }
  goto ret0;

 L2288: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2289;
  goto ret0;

 L2289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2290;
    }
  goto ret0;

 L2290: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS))
    {
      return 303;  /* *lwxs */
    }
  goto ret0;

 L8525: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L8532;
    case 3:
      goto L8534;
    default:
      break;
    }
  goto ret0;

 L8532: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 26L:
      goto L2426;
    case 31L:
      goto L2620;
    case 30L:
      goto L4085;
    default:
      break;
    }
  goto ret0;

 L2426: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L8536;
    case TImode:
      goto L8537;
    default:
      break;
    }
  goto ret0;

 L8536: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2427;
    }
  goto ret0;

 L2427: ATTRIBUTE_UNUSED_LABEL
  if (
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT))
    {
      return 327;  /* mfhisi_di */
    }
  goto ret0;

 L8537: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L2432;
    }
  goto ret0;

 L2432: ATTRIBUTE_UNUSED_LABEL
  if (
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 328;  /* mfhisi_ti */
    }
  goto ret0;

 L2620: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L8538;
    case DImode:
      goto L8539;
    case V2SFmode:
      goto L8540;
    case V2SImode:
      goto L8541;
    case V4HImode:
      goto L8542;
    case V8QImode:
      goto L8543;
    default:
      break;
    }
  goto ret0;

 L8538: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2621;
    }
  goto ret0;

 L2621: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 691 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 361;  /* mfhc1df */
    }
  goto ret0;

 L8539: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2626;
    }
  goto ret0;

 L2626: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 692 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 362;  /* mfhc1di */
    }
  goto ret0;

 L8540: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2631;
    }
  goto ret0;

 L2631: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 693 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 363;  /* mfhc1v2sf */
    }
  goto ret0;

 L8541: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2636;
    }
  goto ret0;

 L2636: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 694 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 364;  /* mfhc1v2si */
    }
  goto ret0;

 L8542: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L2641;
    }
  goto ret0;

 L2641: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 695 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 365;  /* mfhc1v4hi */
    }
  goto ret0;

 L8543: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L2646;
    }
  goto ret0;

 L2646: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 696 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 366;  /* mfhc1v8qi */
    }
  goto ret0;

 L4085: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 6331 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 571;  /* tls_get_tp_si */
    }
  goto ret0;

 L8534: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 23)
    goto L3702;
  goto ret0;

 L3702: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3703;
    }
  goto ret0;

 L3703: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3704;
    }
  goto ret0;

 L3704: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && (
#line 5822 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 533;  /* load_callsi */
    }
  goto ret0;

 L8527: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L8544;
    case 1:
      goto L8545;
    default:
      break;
    }
  goto ret0;

 L8544: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L2655;
  goto ret0;

 L2655: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2656;
 L2679: ATTRIBUTE_UNUSED_LABEL
  if (symbol_ref_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2680;
    }
  goto ret0;

 L2656: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2657;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2679;

 L2657: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4622 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 368;  /* loadgp_newabi_si */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2679;

 L2680: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (symbol_ref_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2681;
    }
  goto ret0;

 L2681: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4666 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 373;  /* loadgp_rtp_si */
    }
  goto ret0;

 L8545: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 22L:
      goto L2667;
    case 48L:
      goto L2691;
    default:
      break;
    }
  goto ret0;

 L2667: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2668;

 L2668: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4639 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 370;  /* loadgp_absolute_si */
    }
  goto ret0;

 L2691: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2692;
    }
  goto ret0;

 L2692: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 375;  /* copygp_mips16 */
    }
  goto ret0;

 L2739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2740;
    }
  goto ret0;

 L2740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2741;
    }
  goto ret0;

 L2741: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4845 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 385;  /* *ashlsi3 */
    }
 L2798: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4875 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 394;  /* *ashlsi3_mips16 */
    }
  goto ret0;

 L2745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2746;
    }
  goto ret0;

 L2746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2747;
    }
  goto ret0;

 L2747: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4845 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 386;  /* *ashrsi3 */
    }
 L2804: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4875 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 395;  /* *ashrsi3_mips16 */
    }
  goto ret0;

 L2751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L8547;
  goto ret0;

 L8547: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2752;
    }
 L8548: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2833;
    }
  goto ret0;

 L2752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2753;
    }
  x2 = XEXP (x1, 0);
  goto L8548;

 L2753: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4845 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 387;  /* *lshrsi3 */
    }
 L2810: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4875 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 396;  /* *lshrsi3_mips16 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8548;

 L2833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2834;
    }
  goto ret0;

 L2834: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4977 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 400;  /* *mips.md:4973 */
    }
  goto ret0;

 L2838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2839;
    }
  goto ret0;

 L2839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2840;
    }
  goto ret0;

 L2840: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_ROR))
    {
      return 401;  /* rotrsi3 */
    }
  goto ret0;

 L3063: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8549;
    case DImode:
      goto L8550;
    default:
      break;
    }
  goto ret0;

 L8549: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3064;
    }
  goto ret0;

 L3064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L8551;
 L3104: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3105;
    }
  goto ret0;

 L8551: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L8553;
  goto L3104;

 L8553: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5266 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE))
    {
      return 423;  /* *seq_zero_sisi */
    }
 L8554: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5275 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE))
    {
      return 427;  /* *seq_zero_sisi_mips16 */
    }
  goto L3104;

 L3105: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5285 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE))
    {
      return 431;  /* *seq_sisi_seq */
    }
  goto ret0;

 L8550: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3074;
    }
  goto ret0;

 L3074: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L8555;
 L3116: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3117;
    }
  goto ret0;

 L8555: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L8557;
  goto L3116;

 L8557: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5266 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 425;  /* *seq_zero_disi */
    }
 L8558: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5275 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 429;  /* *seq_zero_disi_mips16 */
    }
  goto L3116;

 L3117: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5285 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 433;  /* *seq_disi_seq */
    }
  goto ret0;

 L3127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8559;
    case DImode:
      goto L8560;
    default:
      break;
    }
  goto ret0;

 L8559: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3128;
    }
  goto ret0;

 L3128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5307 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE))
    {
      return 435;  /* *sne_zero_sisi */
    }
 L3148: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3149;
    }
  goto ret0;

 L3149: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5317 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE))
    {
      return 439;  /* *sne_sisi_sne */
    }
  goto ret0;

 L8560: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3138;
    }
  goto ret0;

 L3138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 5307 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 437;  /* *sne_zero_disi */
    }
 L3160: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3161;
    }
  goto ret0;

 L3161: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5317 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 441;  /* *sne_disi_sne */
    }
  goto ret0;

 L3171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8561;
    case DImode:
      goto L8562;
    default:
      break;
    }
  goto ret0;

 L8561: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3172;
    }
  goto ret0;

 L3172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3173;
    }
 L3220: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3221;
    }
  goto ret0;

 L3173: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5336 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 443;  /* *sgt_sisi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3220;

 L3221: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5345 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 451;  /* *sgt_sisi_mips16 */
    }
  goto ret0;

 L8562: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3196;
    }
  goto ret0;

 L3196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3197;
    }
 L3244: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3245;
    }
  goto ret0;

 L3197: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5336 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 447;  /* *sgt_disi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3244;

 L3245: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5345 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 455;  /* *sgt_disi_mips16 */
    }
  goto ret0;

 L3177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8563;
    case DImode:
      goto L8564;
    default:
      break;
    }
  goto ret0;

 L8563: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3178;
    }
  goto ret0;

 L3178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3179;
    }
 L3226: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3227;
    }
  goto ret0;

 L3179: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5336 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 444;  /* *sgtu_sisi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3226;

 L3227: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5345 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 452;  /* *sgtu_sisi_mips16 */
    }
  goto ret0;

 L8564: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3202;
    }
  goto ret0;

 L3202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3203;
    }
 L3250: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3251;
    }
  goto ret0;

 L3203: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5336 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 448;  /* *sgtu_disi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3250;

 L3251: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5345 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 456;  /* *sgtu_disi_mips16 */
    }
  goto ret0;

 L3267: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8565;
    case DImode:
      goto L8566;
    default:
      break;
    }
  goto ret0;

 L8565: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3268;
    }
  goto ret0;

 L3268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 5361 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 459;  /* *sge_sisi */
    }
  goto ret0;

 L8566: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3288;
    }
  goto ret0;

 L3288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5361 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 463;  /* *sge_disi */
    }
  goto ret0;

 L3272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8567;
    case DImode:
      goto L8568;
    default:
      break;
    }
  goto ret0;

 L8567: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3273;
    }
  goto ret0;

 L3273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 5361 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 460;  /* *sgeu_sisi */
    }
  goto ret0;

 L8568: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3293;
    }
  goto ret0;

 L3293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5361 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 464;  /* *sgeu_disi */
    }
  goto ret0;

 L3307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8569;
    case DImode:
      goto L8570;
    default:
      break;
    }
  goto ret0;

 L8569: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3308;
    }
  goto ret0;

 L3308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3309;
    }
  goto ret0;

 L3309: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5377 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 467;  /* *slt_sisi */
    }
 L3357: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5386 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 475;  /* *slt_sisi_mips16 */
    }
  goto ret0;

 L8570: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3332;
    }
  goto ret0;

 L3332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3333;
    }
  goto ret0;

 L3333: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5377 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 471;  /* *slt_disi */
    }
 L3381: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5386 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 479;  /* *slt_disi_mips16 */
    }
  goto ret0;

 L3313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8571;
    case DImode:
      goto L8572;
    default:
      break;
    }
  goto ret0;

 L8571: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3314;
    }
  goto ret0;

 L3314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3315;
    }
  goto ret0;

 L3315: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5377 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 468;  /* *sltu_sisi */
    }
 L3363: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5386 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 476;  /* *sltu_sisi_mips16 */
    }
  goto ret0;

 L8572: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3338;
    }
  goto ret0;

 L3338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3339;
    }
  goto ret0;

 L3339: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5377 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 472;  /* *sltu_disi */
    }
 L3387: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5386 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 480;  /* *sltu_disi_mips16 */
    }
  goto ret0;

 L3403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8573;
    case DImode:
      goto L8574;
    default:
      break;
    }
  goto ret0;

 L8573: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3404;
    }
  goto ret0;

 L3404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3405;
    }
  goto ret0;

 L3405: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5407 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 483;  /* *sle_sisi */
    }
 L3453: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5419 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 491;  /* *sle_sisi_mips16 */
    }
  goto ret0;

 L8574: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3428;
    }
  goto ret0;

 L3428: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3429;
    }
  goto ret0;

 L3429: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5407 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 487;  /* *sle_disi */
    }
 L3477: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5419 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 495;  /* *sle_disi_mips16 */
    }
  goto ret0;

 L3409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8575;
    case DImode:
      goto L8576;
    default:
      break;
    }
  goto ret0;

 L8575: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3410;
    }
  goto ret0;

 L3410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3411;
    }
  goto ret0;

 L3411: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5407 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 484;  /* *sleu_sisi */
    }
 L3459: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5419 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 492;  /* *sleu_sisi_mips16 */
    }
  goto ret0;

 L8576: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3434;
    }
  goto ret0;

 L3434: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3435;
    }
  goto ret0;

 L3435: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5407 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 488;  /* *sleu_disi */
    }
 L3483: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5419 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 496;  /* *sleu_disi_mips16 */
    }
  goto ret0;

 L3954: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8577;
    case DImode:
      goto L8578;
    case CCmode:
      goto L8579;
    default:
      break;
    }
  goto ret0;

 L8577: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L3955;
    }
  goto ret0;

 L3955: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3956;
    }
  goto ret0;

 L3956: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3957;
  goto ret0;

 L3957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3958;
    }
  goto ret0;

 L3958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3959;
    }
  goto ret0;

 L3959: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6197 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE))
    {
      return 555;  /* *movsi_on_si */
    }
  goto ret0;

 L8578: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L3964;
    }
  goto ret0;

 L3964: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3965;
    }
  goto ret0;

 L3965: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3966;
  goto ret0;

 L3966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3967;
    }
  goto ret0;

 L3967: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3968;
    }
  goto ret0;

 L3968: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6197 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 646 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 556;  /* *movsi_on_di */
    }
  goto ret0;

 L8579: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L3973;
    }
  goto ret0;

 L3973: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L3974;
    }
  goto ret0;

 L3974: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3975;
  goto ret0;

 L3975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3976;
    }
  goto ret0;

 L3976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3977;
    }
  goto ret0;

 L3977: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6197 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 647 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)))
    {
      return 557;  /* *movsi_on_cc */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L48;
    case SIGN_EXTEND:
      goto L66;
    case ZERO_EXTEND:
      goto L104;
    case MINUS:
      goto L135;
    case MULT:
      goto L184;
    case NEG:
      goto L545;
    case TRUNCATE:
      goto L745;
    case UNSPEC:
      goto L8630;
    case CLZ:
      goto L1365;
    case POPCOUNT:
      goto L1375;
    case NOT:
      goto L1408;
    case AND:
      goto L1419;
    case IOR:
      goto L1443;
    case XOR:
      goto L1467;
    case FIX:
      goto L1857;
    case SIGN_EXTRACT:
      goto L1894;
    case ZERO_EXTRACT:
      goto L1908;
    case HIGH:
      goto L2011;
    case LO_SUM:
      goto L2043;
    case UNSPEC_VOLATILE:
      goto L8640;
    case ASHIFT:
      goto L2757;
    case ASHIFTRT:
      goto L2763;
    case LSHIFTRT:
      goto L2769;
    case ROTATERT:
      goto L2844;
    case EQ:
      goto L3068;
    case NE:
      goto L3132;
    case GT:
      goto L3183;
    case GTU:
      goto L3189;
    case GE:
      goto L3277;
    case GEU:
      goto L3282;
    case LT:
      goto L3319;
    case LTU:
      goto L3325;
    case LE:
      goto L3415;
    case LEU:
      goto L3421;
    case IF_THEN_ELSE:
      goto L3981;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L8601;
    default:
      goto L8603;
   }
 L8601: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2023;
    }
 L8603: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2053;
    }
  goto ret0;

 L48: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L8645;
  goto ret0;

 L8645: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L841;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L49;
    }
  goto ret0;

 L841: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L8646;
  goto ret0;

 L8646: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L842;
    case ZERO_EXTEND:
      goto L852;
    default:
     break;
   }
  goto ret0;

 L842: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L843;
    }
  goto ret0;

 L843: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L844;
  goto ret0;

 L844: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L845;
    }
  goto ret0;

 L845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L846;
    }
  goto ret0;

 L846: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2064 "../../gcc-4.4.7/gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2)
   && !TARGET_64BIT))
    {
      return 73;  /* maddsidi4 */
    }
  goto ret0;

 L852: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L853;
    }
  goto ret0;

 L853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L854;
  goto ret0;

 L854: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L855;
    }
  goto ret0;

 L855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L856;
    }
  goto ret0;

 L856: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2064 "../../gcc-4.4.7/gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2)
   && !TARGET_64BIT))
    {
      return 74;  /* umaddsidi4 */
    }
  goto ret0;

 L49: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L50;
    }
  goto ret0;

 L50: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1039 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 11;  /* *adddi3 */
    }
 L62: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1050 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 13;  /* *adddi3_mips16 */
    }
  goto ret0;

 L66: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8648;
    case QImode:
      goto L8650;
    case HImode:
      goto L8651;
    default:
      break;
    }
  goto ret0;

 L8648: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L67;
    case MINUS:
      goto L142;
    case ASHIFT:
      goto L2776;
    case ASHIFTRT:
      goto L2783;
    case LSHIFTRT:
      goto L2790;
    case REG:
    case SUBREG:
    case MEM:
      goto L8652;
    default:
      goto ret0;
   }
 L8652: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1737;
    }
  goto ret0;

 L67: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L68;
    }
  goto ret0;

 L68: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L69;
    }
  goto ret0;

 L69: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1191 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 14;  /* *addsi3_extended */
    }
 L76: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1205 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 15;  /* *addsi3_extended_mips16 */
    }
  goto ret0;

 L142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L143;
    }
  goto ret0;

 L143: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L144;
    }
  goto ret0;

 L144: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1277 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 25;  /* *subsi3_extended */
    }
  goto ret0;

 L2776: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2777;
    }
  goto ret0;

 L2777: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2778;
    }
  goto ret0;

 L2778: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4861 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 391;  /* *ashlsi3_extend */
    }
  goto ret0;

 L2783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2784;
    }
  goto ret0;

 L2784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2785;
    }
  goto ret0;

 L2785: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4861 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 392;  /* *ashrsi3_extend */
    }
  goto ret0;

 L2790: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2791;
    }
  goto ret0;

 L2791: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2792;
    }
  goto ret0;

 L2792: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4861 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 393;  /* *lshrsi3_extend */
    }
  goto ret0;

 L1737: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2972 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 205;  /* extendsidi2 */
    }
  goto ret0;

 L8650: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1603;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1752;
    }
  goto ret0;

 L1603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1604;
    }
  goto ret0;

 L1604: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2766 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 180;  /* *extenddi_truncateqi */
    }
  goto ret0;

 L1752: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 208;  /* *extendqidi2_mips16e */
    }
 L1772: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3004 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 212;  /* *extendqidi2 */
    }
 L1792: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3023 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 216;  /* *extendqidi2_seb */
    }
  goto ret0;

 L8651: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1609;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1757;
    }
  goto ret0;

 L1609: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1610;
    }
  goto ret0;

 L1610: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2766 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 181;  /* *extenddi_truncatehi */
    }
  goto ret0;

 L1757: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 209;  /* *extendhidi2_mips16e */
    }
 L1777: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3004 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 213;  /* *extendhidi2 */
    }
 L1797: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3023 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 217;  /* *extendhidi2_seh */
    }
  goto ret0;

 L104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L8658;
    case HImode:
      goto L8659;
    case SImode:
      goto L8660;
    default:
      break;
    }
  goto ret0;

 L8658: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L105;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1677;
    }
 L8663: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1697;
    }
 L8665: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1717;
    }
  goto ret0;

 L105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L8667;
  goto ret0;

 L8667: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L106;
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1646;
    }
  goto ret0;

 L106: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L107;
    }
  goto ret0;

 L107: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L108;
    }
  goto ret0;

 L108: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1242 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && TARGET_64BIT) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 19;  /* *baddu_didi */
    }
  goto ret0;

 L1646: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2813 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 187;  /* *zero_extenddi_truncqi */
    }
  goto ret0;

 L1677: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2896 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 193;  /* *zero_extendqidi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8663;

 L1697: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2906 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 197;  /* *zero_extendqidi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8665;

 L1717: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2915 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 201;  /* *zero_extendqidi2_mips16 */
    }
  goto ret0;

 L8659: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1633;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1682;
    }
 L8664: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1702;
    }
 L8666: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1722;
    }
  goto ret0;

 L1633: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1634;
    }
  goto ret0;

 L1634: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2804 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 185;  /* *zero_extenddi_trunchi */
    }
  goto ret0;

 L1682: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2896 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 194;  /* *zero_extendhidi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8664;

 L1702: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2906 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 198;  /* *zero_extendhidi2_mips16e */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8666;

 L1722: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2915 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 202;  /* *zero_extendhidi2_mips16 */
    }
  goto ret0;

 L8660: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1657;
    }
  goto ret0;

 L1657: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2839 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 189;  /* zero_extendsidi2 */
    }
  goto ret0;

 L135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L8669;
  goto ret0;

 L8669: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L136;
    }
 L8670: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L564;
    }
  goto ret0;

 L136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L137;
    }
  x2 = XEXP (x1, 0);
  goto L8670;

 L137: ATTRIBUTE_UNUSED_LABEL
  if (
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 24;  /* subdi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8670;

 L564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L565;
  goto ret0;

 L565: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L8671;
  goto ret0;

 L8671: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L566;
    case ZERO_EXTEND:
      goto L576;
    default:
     break;
   }
  goto ret0;

 L566: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L567;
    }
  goto ret0;

 L567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L568;
  goto ret0;

 L568: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L569;
    }
  goto ret0;

 L569: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1885 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2)))
    {
      return 58;  /* msubsidi4 */
    }
  goto ret0;

 L576: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L577;
    }
  goto ret0;

 L577: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L578;
  goto ret0;

 L578: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L579;
    }
  goto ret0;

 L579: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1885 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2)))
    {
      return 59;  /* umsubsidi4 */
    }
  goto ret0;

 L184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L8674;
  goto ret0;

 L8674: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L432;
    case ZERO_EXTEND:
      goto L440;
    case REG:
    case SUBREG:
      goto L8673;
    default:
      goto ret0;
   }
 L8673: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L185;
    }
  goto ret0;

 L432: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L433;
    }
  goto ret0;

 L433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L434;
  goto ret0;

 L434: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L435;
    }
  goto ret0;

 L435: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1798 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DSPR2))
    {
      return 48;  /* mulsidi3_32bit */
    }
 L462: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1808 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 50;  /* mulsidi3_32bit_r4000 */
    }
 L502: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1820 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 52;  /* mulsidi3_64bit */
    }
  goto ret0;

 L440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L441;
    }
  goto ret0;

 L441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L442;
  goto ret0;

 L442: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L443;
    }
  goto ret0;

 L443: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1798 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DSPR2))
    {
      return 49;  /* umulsidi3_32bit */
    }
 L481: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1808 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 51;  /* umulsidi3_32bit_r4000 */
    }
 L523: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1820 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 53;  /* umulsidi3_64bit */
    }
  goto ret0;

 L185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L186;
    }
  goto ret0;

 L186: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1398 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_LOONGSON_2EF) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 32;  /* muldi3_mul3_ls2ef */
    }
 L216: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_DMUL3) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 34;  /* muldi3_mul3 */
    }
 L228: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1446 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 36;  /* muldi3_internal */
    }
 L258: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1456 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 38;  /* muldi3_r4000 */
    }
  goto ret0;

 L545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L8676;
  goto ret0;

 L8676: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L546;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1385;
    }
  goto ret0;

 L546: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L8678;
  goto ret0;

 L8678: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L547;
    case ZERO_EXTEND:
      goto L556;
    default:
     break;
   }
  goto ret0;

 L547: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L548;
    }
  goto ret0;

 L548: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L549;
  goto ret0;

 L549: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L550;
    }
  goto ret0;

 L550: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1873 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS))
    {
      return 56;  /* *muls_di */
    }
  goto ret0;

 L556: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L557;
    }
  goto ret0;

 L557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L558;
  goto ret0;

 L558: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L559;
    }
  goto ret0;

 L559: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1873 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS))
    {
      return 57;  /* *mulsu_di */
    }
  goto ret0;

 L1385: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2518 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 144;  /* negdi2 */
    }
  goto ret0;

 L745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case TImode:
      goto L8680;
    case DImode:
      goto L8681;
    default:
      break;
    }
  goto ret0;

 L8680: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == LSHIFTRT)
    goto L746;
  goto ret0;

 L746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == MULT)
    goto L747;
  goto ret0;

 L747: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode)
    goto L8682;
  goto ret0;

 L8682: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L748;
    case ZERO_EXTEND:
      goto L772;
    default:
     break;
   }
  goto ret0;

 L748: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L749;
    }
  goto ret0;

 L749: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L750;
  goto ret0;

 L750: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L751;
    }
  goto ret0;

 L751: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (64)]
      && 
#line 1991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 66;  /* smuldi3_highpart */
    }
  goto ret0;

 L772: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L773;
    }
  goto ret0;

 L773: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L774;
  goto ret0;

 L774: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L775;
    }
  goto ret0;

 L775: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (64)]
      && 
#line 1991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 67;  /* umuldi3_highpart */
    }
  goto ret0;

 L8681: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == ZERO_EXTRACT)
    goto L1924;
  goto ret0;

 L1924: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1925;
    }
  goto ret0;

 L1925: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1926;
    }
  goto ret0;

 L1926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L1927;
    }
  goto ret0;

 L1927: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3486 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63)) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 237;  /* *extzv_truncdi_exts */
    }
  goto ret0;

 L8630: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L8684;
    case 2:
      goto L8685;
    case 3:
      goto L8686;
    default:
      break;
    }
  goto ret0;

 L8684: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 28L:
      goto L1246;
    case 26L:
      goto L2436;
    case 0L:
      goto L2464;
    case 31L:
      goto L2650;
    case 30L:
      goto L4096;
    default:
      break;
    }
  goto ret0;

 L1246: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode)
    goto L8696;
  goto ret0;

 L8696: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L1247;
    case UDIV:
      goto L1254;
    default:
     break;
   }
  goto ret0;

 L1247: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1248;
    }
  goto ret0;

 L1248: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1249;
    }
  goto ret0;

 L1249: ATTRIBUTE_UNUSED_LABEL
  if (
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT))
    {
      return 121;  /* divmodsi4_hilo_di */
    }
  goto ret0;

 L1254: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1255;
    }
  goto ret0;

 L1255: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1256;
    }
  goto ret0;

 L1256: ATTRIBUTE_UNUSED_LABEL
  if (
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT))
    {
      return 122;  /* udivmodsi4_hilo_di */
    }
  goto ret0;

 L2436: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L2437;
    }
  goto ret0;

 L2437: ATTRIBUTE_UNUSED_LABEL
  if (
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 329;  /* mfhidi_ti */
    }
  goto ret0;

 L2464: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2465;
    }
  goto ret0;

 L2465: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4549 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 692 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 334;  /* load_lowdi */
    }
  goto ret0;

 L2650: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2651;
    }
  goto ret0;

 L2651: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 697 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 367;  /* mfhc1tf */
    }
  goto ret0;

 L4096: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 6331 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 572;  /* tls_get_tp_di */
    }
  goto ret0;

 L8685: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 18L:
      goto L1967;
    case 24L:
      goto L2073;
    case 27L:
      goto L2441;
    case 1L:
      goto L2500;
    case 32L:
      goto L2584;
    default:
      break;
    }
  goto ret0;

 L1967: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1968;
    }
  goto ret0;

 L1968: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1969;
    }
  goto ret0;

 L1969: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3568 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 243;  /* mov_ldl */
    }
  goto ret0;

 L2073: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2074;
    }
  goto ret0;

 L2074: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2075;
    }
  goto ret0;

 L2075: ATTRIBUTE_UNUSED_LABEL
  if (
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 261;  /* load_gotdi */
    }
  goto ret0;

 L2441: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2442;
    }
  goto ret0;

 L2442: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2443;
    }
  goto ret0;

 L2443: ATTRIBUTE_UNUSED_LABEL
  if (
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT))
    {
      return 330;  /* mthisi_di */
    }
  goto ret0;

 L2500: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2501;
    }
  goto ret0;

 L2501: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2502;
    }
  goto ret0;

 L2502: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4564 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 692 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 341;  /* load_highdi */
    }
  goto ret0;

 L2584: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2585;
    }
  goto ret0;

 L2585: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2586;
    }
  goto ret0;

 L2586: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4594 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 692 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 355;  /* mthc1di */
    }
  goto ret0;

 L8686: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 19L:
      goto L1980;
    case 23L:
      goto L3708;
    default:
      break;
    }
  goto ret0;

 L1980: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1981;
    }
  goto ret0;

 L1981: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1982;
    }
  goto ret0;

 L1982: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1983;
    }
  goto ret0;

 L1983: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 245;  /* mov_ldr */
    }
  goto ret0;

 L3708: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3709;
    }
  goto ret0;

 L3709: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3710;
    }
  goto ret0;

 L3710: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && (
#line 5822 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 534;  /* load_calldi */
    }
  goto ret0;

 L1365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1366;
    }
  goto ret0;

 L1366: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 140;  /* clzdi2 */
    }
  goto ret0;

 L1375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1376;
    }
  goto ret0;

 L1376: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2490 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_POP) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 142;  /* popcountdi2 */
    }
  goto ret0;

 L1408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1409;
    }
  goto ret0;

 L1409: ATTRIBUTE_UNUSED_LABEL
  if (
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 149;  /* one_cmpldi2 */
    }
  goto ret0;

 L1419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L8699;
  goto ret0;

 L8699: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NOT:
      goto L1494;
    case ASHIFT:
      goto L1954;
    case REG:
    case SUBREG:
      goto L8698;
    default:
      goto L8700;
   }
 L8698: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1420;
    }
 L8700: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1662;
    }
  goto ret0;

 L1494: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1495;
    }
  goto ret0;

 L1495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L1496;
  goto ret0;

 L1496: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1497;
    }
  goto ret0;

 L1497: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 163;  /* *nordi3 */
    }
  goto ret0;

 L1954: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1955;
    }
  goto ret0;

 L1955: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1956;
    }
  goto ret0;

 L1956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1957;
    }
  goto ret0;

 L1957: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3541 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CINS
   && mask_low_and_shift_p (DImode, operands[3], operands[2], 32)) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 241;  /* *cinsdi */
    }
  goto ret0;

 L1420: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1421;
    }
 L1432: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1433;
    }
  x2 = XEXP (x1, 0);
  goto L8700;

 L1421: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2573 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 151;  /* *anddi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1432;

 L1433: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2584 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 153;  /* *anddi3_mips16 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8700;

 L1662: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 4294967295L
      && 
#line 2859 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 190;  /* *clear_upper32 */
    }
  goto ret0;

 L1443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1444;
    }
  goto ret0;

 L1444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1445;
    }
 L1456: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1457;
    }
  goto ret0;

 L1445: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2603 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 155;  /* *iordi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1456;

 L1457: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2614 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 157;  /* *iordi3_mips16 */
    }
  goto ret0;

 L1467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1468;
    }
  goto ret0;

 L1468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1469;
    }
  goto ret0;

 L1469: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 159;  /* *mips.md:2626 */
    }
 L1481: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2641 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 161;  /* *mips.md:2637 */
    }
  goto ret0;

 L1857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L8702;
    case SFmode:
      goto L8703;
    default:
      break;
    }
  goto ret0;

 L8702: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1858;
    }
  goto ret0;

 L1858: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3170 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 226;  /* fix_truncdfdi2 */
    }
  goto ret0;

 L8703: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1863;
    }
  goto ret0;

 L1863: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3180 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 227;  /* fix_truncsfdi2 */
    }
  goto ret0;

 L1894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1895;
    }
  goto ret0;

 L1895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1896;
    }
  goto ret0;

 L1896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1897;
    }
  goto ret0;

 L1897: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3437 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 233;  /* extvdi */
    }
  goto ret0;

 L1908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1909;
    }
  goto ret0;

 L1909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1910;
    }
  goto ret0;

 L1910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1911;
    }
  goto ret0;

 L1911: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 235;  /* extzvdi */
    }
  goto ret0;

 L2011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L8704;
  goto ret0;

 L8704: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2012;
    }
 L8705: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2033;
    }
 L8706: ATTRIBUTE_UNUSED_LABEL
  if (got_page_ofst_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2063;
    }
  goto ret0;

 L2012: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3623 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS))
    {
      return 250;  /* *lea_high64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8705;

 L2033: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3713 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 253;  /* *xgot_hidi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8706;

 L2063: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 259;  /* *got_pagedi */
    }
  goto ret0;

 L2043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2044;
    }
  goto ret0;

 L2044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (got_disp_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2045;
    }
 L2086: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2087;
    }
  goto ret0;

 L2045: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3729 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 255;  /* *xgot_lodi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2086;

 L2087: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3791 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 263;  /* *lowdi */
    }
 L2099: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3800 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 265;  /* *lowdi_mips16 */
    }
  goto ret0;

 L8640: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L8707;
    case 1:
      goto L8708;
    default:
      break;
    }
  goto ret0;

 L8707: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L2661;
  goto ret0;

 L2661: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2662;
 L2685: ATTRIBUTE_UNUSED_LABEL
  if (symbol_ref_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2686;
    }
  goto ret0;

 L2662: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2663;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2685;

 L2663: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4622 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 369;  /* loadgp_newabi_di */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2685;

 L2686: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (symbol_ref_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2687;
    }
  goto ret0;

 L2687: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4666 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 374;  /* loadgp_rtp_di */
    }
  goto ret0;

 L8708: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L2672;
  goto ret0;

 L2672: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L2673;

 L2673: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4639 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 371;  /* loadgp_absolute_di */
    }
  goto ret0;

 L2757: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2758;
    }
  goto ret0;

 L2758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2759;
    }
  goto ret0;

 L2759: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4845 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 388;  /* *ashldi3 */
    }
 L2816: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4897 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 397;  /* *ashldi3_mips16 */
    }
  goto ret0;

 L2763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2764;
    }
  goto ret0;

 L2764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2765;
    }
  goto ret0;

 L2765: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4845 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 389;  /* *ashrdi3 */
    }
 L2822: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4917 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 398;  /* *ashrdi3_mips16 */
    }
  goto ret0;

 L2769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2770;
    }
  goto ret0;

 L2770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2771;
    }
  goto ret0;

 L2771: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4845 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 390;  /* *lshrdi3 */
    }
 L2828: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4936 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16))
    {
      return 399;  /* *lshrdi3_mips16 */
    }
  goto ret0;

 L2844: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2845;
    }
  goto ret0;

 L2845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2846;
    }
  goto ret0;

 L2846: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_ROR) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 402;  /* rotrdi3 */
    }
  goto ret0;

 L3068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8709;
    case DImode:
      goto L8710;
    default:
      break;
    }
  goto ret0;

 L8709: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3069;
    }
  goto ret0;

 L3069: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L8711;
 L3110: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3111;
    }
  goto ret0;

 L8711: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L8713;
  goto L3110;

 L8713: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5266 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 424;  /* *seq_zero_sidi */
    }
 L8714: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5275 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 428;  /* *seq_zero_sidi_mips16 */
    }
  goto L3110;

 L3111: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5285 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 432;  /* *seq_sidi_seq */
    }
  goto ret0;

 L8710: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3079;
    }
  goto ret0;

 L3079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L8715;
 L3122: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3123;
    }
  goto ret0;

 L8715: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0L)
    goto L8717;
  goto L3122;

 L8717: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5266 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 426;  /* *seq_zero_didi */
    }
 L8718: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5275 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 430;  /* *seq_zero_didi_mips16 */
    }
  goto L3122;

 L3123: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5285 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 434;  /* *seq_didi_seq */
    }
  goto ret0;

 L3132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8719;
    case DImode:
      goto L8720;
    default:
      break;
    }
  goto ret0;

 L8719: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3133;
    }
  goto ret0;

 L3133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 5307 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 436;  /* *sne_zero_sidi */
    }
 L3154: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3155;
    }
  goto ret0;

 L3155: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5317 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 440;  /* *sne_sidi_sne */
    }
  goto ret0;

 L8720: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3143;
    }
  goto ret0;

 L3143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && ((
#line 5307 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 438;  /* *sne_zero_didi */
    }
 L3166: ATTRIBUTE_UNUSED_LABEL
  if (reg_imm10_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3167;
    }
  goto ret0;

 L3167: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5317 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 442;  /* *sne_didi_sne */
    }
  goto ret0;

 L3183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8721;
    case DImode:
      goto L8722;
    default:
      break;
    }
  goto ret0;

 L8721: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3184;
    }
  goto ret0;

 L3184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3185;
    }
 L3232: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3233;
    }
  goto ret0;

 L3185: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5336 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 445;  /* *sgt_sidi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3232;

 L3233: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5345 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 453;  /* *sgt_sidi_mips16 */
    }
  goto ret0;

 L8722: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3208;
    }
  goto ret0;

 L3208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3209;
    }
 L3256: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3257;
    }
  goto ret0;

 L3209: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5336 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 449;  /* *sgt_didi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3256;

 L3257: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5345 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 457;  /* *sgt_didi_mips16 */
    }
  goto ret0;

 L3189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8723;
    case DImode:
      goto L8724;
    default:
      break;
    }
  goto ret0;

 L8723: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3190;
    }
  goto ret0;

 L3190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3191;
    }
 L3238: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3239;
    }
  goto ret0;

 L3191: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5336 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 446;  /* *sgtu_sidi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3238;

 L3239: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5345 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 454;  /* *sgtu_sidi_mips16 */
    }
  goto ret0;

 L8724: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3214;
    }
  goto ret0;

 L3214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3215;
    }
 L3262: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3263;
    }
  goto ret0;

 L3215: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5336 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 450;  /* *sgtu_didi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3262;

 L3263: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5345 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 458;  /* *sgtu_didi_mips16 */
    }
  goto ret0;

 L3277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8725;
    case DImode:
      goto L8726;
    default:
      break;
    }
  goto ret0;

 L8725: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3278;
    }
  goto ret0;

 L3278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5361 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 461;  /* *sge_sidi */
    }
  goto ret0;

 L8726: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3298;
    }
  goto ret0;

 L3298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && ((
#line 5361 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 465;  /* *sge_didi */
    }
  goto ret0;

 L3282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8727;
    case DImode:
      goto L8728;
    default:
      break;
    }
  goto ret0;

 L8727: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3283;
    }
  goto ret0;

 L3283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 5361 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 462;  /* *sgeu_sidi */
    }
  goto ret0;

 L8728: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3303;
    }
  goto ret0;

 L3303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && ((
#line 5361 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 466;  /* *sgeu_didi */
    }
  goto ret0;

 L3319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8729;
    case DImode:
      goto L8730;
    default:
      break;
    }
  goto ret0;

 L8729: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3320;
    }
  goto ret0;

 L3320: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3321;
    }
  goto ret0;

 L3321: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5377 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 469;  /* *slt_sidi */
    }
 L3369: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5386 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 477;  /* *slt_sidi_mips16 */
    }
  goto ret0;

 L8730: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3344;
    }
  goto ret0;

 L3344: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3345;
    }
  goto ret0;

 L3345: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5377 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 473;  /* *slt_didi */
    }
 L3393: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5386 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 481;  /* *slt_didi_mips16 */
    }
  goto ret0;

 L3325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8731;
    case DImode:
      goto L8732;
    default:
      break;
    }
  goto ret0;

 L8731: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3326;
    }
  goto ret0;

 L3326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3327;
    }
  goto ret0;

 L3327: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5377 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 470;  /* *sltu_sidi */
    }
 L3375: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5386 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 478;  /* *sltu_sidi_mips16 */
    }
  goto ret0;

 L8732: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3350;
    }
  goto ret0;

 L3350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3351;
    }
  goto ret0;

 L3351: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5377 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 474;  /* *sltu_didi */
    }
 L3399: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5386 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 482;  /* *sltu_didi_mips16 */
    }
  goto ret0;

 L3415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8733;
    case DImode:
      goto L8734;
    default:
      break;
    }
  goto ret0;

 L8733: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3416;
    }
  goto ret0;

 L3416: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3417;
    }
  goto ret0;

 L3417: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5407 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 485;  /* *sle_sidi */
    }
 L3465: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5419 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 493;  /* *sle_sidi_mips16 */
    }
  goto ret0;

 L8734: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3440;
    }
  goto ret0;

 L3440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3441;
    }
  goto ret0;

 L3441: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5407 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 489;  /* *sle_didi */
    }
 L3489: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5419 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 497;  /* *sle_didi_mips16 */
    }
  goto ret0;

 L3421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8735;
    case DImode:
      goto L8736;
    default:
      break;
    }
  goto ret0;

 L8735: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3422;
    }
  goto ret0;

 L3422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3423;
    }
  goto ret0;

 L3423: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5407 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 486;  /* *sleu_sidi */
    }
 L3471: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5419 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 494;  /* *sleu_sidi_mips16 */
    }
  goto ret0;

 L8736: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3446;
    }
  goto ret0;

 L3446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3447;
    }
  goto ret0;

 L3447: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5407 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 490;  /* *sleu_didi */
    }
 L3495: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 5419 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 498;  /* *sleu_didi_mips16 */
    }
  goto ret0;

 L3981: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8737;
    case DImode:
      goto L8738;
    case CCmode:
      goto L8739;
    default:
      break;
    }
  goto ret0;

 L8737: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L3982;
    }
  goto ret0;

 L3982: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3983;
    }
  goto ret0;

 L3983: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3984;
  goto ret0;

 L3984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3985;
    }
  goto ret0;

 L3985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3986;
    }
  goto ret0;

 L3986: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6197 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 558;  /* *movdi_on_si */
    }
  goto ret0;

 L8738: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L3991;
    }
  goto ret0;

 L3991: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3992;
    }
  goto ret0;

 L3992: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3993;
  goto ret0;

 L3993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3994;
    }
  goto ret0;

 L3994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3995;
    }
  goto ret0;

 L3995: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6197 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 646 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 559;  /* *movdi_on_di */
    }
  goto ret0;

 L8739: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L4000;
    }
  goto ret0;

 L4000: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L4001;
    }
  goto ret0;

 L4001: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4002;
  goto ret0;

 L4002: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4003;
    }
  goto ret0;

 L4003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L4004;
    }
  goto ret0;

 L4004: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 6197 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 647 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)))
    {
      return 560;  /* *movdi_on_cc */
    }
  goto ret0;

 L2023: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3677 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 251;  /* *lea64 */
    }
  x1 = XEXP (x0, 1);
  goto L8603;

 L2053: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3743 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 257;  /* *got_dispdi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_7 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (nonimmediate_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L2196;
    }
 L8254: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L3498;
    }
  goto ret0;

 L2196: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, CCmode))
    {
      operands[1] = x1;
      goto L2197;
    }
  x1 = XEXP (x0, 0);
  goto L8254;

 L2197: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4051 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_8CC && TARGET_HARD_FLOAT))
    {
      return 290;  /* movcc */
    }
  x1 = XEXP (x0, 0);
  goto L8254;

 L3498: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode)
    goto L8782;
  goto ret0;

 L8782: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNORDERED:
      goto L3499;
    case UNEQ:
      goto L3505;
    case UNLT:
      goto L3511;
    case UNLE:
      goto L3517;
    case EQ:
      goto L3523;
    case LT:
      goto L3529;
    case LE:
      goto L3535;
    case GE:
      goto L3583;
    case GT:
      goto L3589;
    case UNGE:
      goto L3595;
    case UNGT:
      goto L3601;
    default:
     break;
   }
  goto ret0;

 L3499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8793;
    case DFmode:
      goto L8794;
    default:
      break;
    }
  goto ret0;

 L8793: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3500;
    }
  goto ret0;

 L3500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3501;
    }
  goto ret0;

 L3501: ATTRIBUTE_UNUSED_LABEL
  if (
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 499;  /* sunordered_sf */
    }
  goto ret0;

 L8794: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3542;
    }
  goto ret0;

 L3542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3543;
    }
  goto ret0;

 L3543: ATTRIBUTE_UNUSED_LABEL
  if (
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 506;  /* sunordered_df */
    }
  goto ret0;

 L3505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8795;
    case DFmode:
      goto L8796;
    default:
      break;
    }
  goto ret0;

 L8795: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3506;
    }
  goto ret0;

 L3506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3507;
    }
  goto ret0;

 L3507: ATTRIBUTE_UNUSED_LABEL
  if (
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 500;  /* suneq_sf */
    }
  goto ret0;

 L8796: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3548;
    }
  goto ret0;

 L3548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3549;
    }
  goto ret0;

 L3549: ATTRIBUTE_UNUSED_LABEL
  if (
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 507;  /* suneq_df */
    }
  goto ret0;

 L3511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8797;
    case DFmode:
      goto L8798;
    default:
      break;
    }
  goto ret0;

 L8797: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3512;
    }
  goto ret0;

 L3512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3513;
    }
  goto ret0;

 L3513: ATTRIBUTE_UNUSED_LABEL
  if (
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 501;  /* sunlt_sf */
    }
  goto ret0;

 L8798: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3554;
    }
  goto ret0;

 L3554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3555;
    }
  goto ret0;

 L3555: ATTRIBUTE_UNUSED_LABEL
  if (
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 508;  /* sunlt_df */
    }
  goto ret0;

 L3517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8799;
    case DFmode:
      goto L8800;
    default:
      break;
    }
  goto ret0;

 L8799: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3518;
    }
  goto ret0;

 L3518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3519;
    }
  goto ret0;

 L3519: ATTRIBUTE_UNUSED_LABEL
  if (
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 502;  /* sunle_sf */
    }
  goto ret0;

 L8800: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3560;
    }
  goto ret0;

 L3560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3561;
    }
  goto ret0;

 L3561: ATTRIBUTE_UNUSED_LABEL
  if (
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 509;  /* sunle_df */
    }
  goto ret0;

 L3523: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8801;
    case DFmode:
      goto L8802;
    default:
      break;
    }
  goto ret0;

 L8801: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3524;
    }
  goto ret0;

 L3524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3525;
    }
  goto ret0;

 L3525: ATTRIBUTE_UNUSED_LABEL
  if (
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 503;  /* seq_sf */
    }
  goto ret0;

 L8802: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3566;
    }
  goto ret0;

 L3566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3567;
    }
  goto ret0;

 L3567: ATTRIBUTE_UNUSED_LABEL
  if (
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 510;  /* seq_df */
    }
  goto ret0;

 L3529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8803;
    case DFmode:
      goto L8804;
    default:
      break;
    }
  goto ret0;

 L8803: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3530;
    }
  goto ret0;

 L3530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3531;
    }
  goto ret0;

 L3531: ATTRIBUTE_UNUSED_LABEL
  if (
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 504;  /* slt_sf */
    }
  goto ret0;

 L8804: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3572;
    }
  goto ret0;

 L3572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3573;
    }
  goto ret0;

 L3573: ATTRIBUTE_UNUSED_LABEL
  if (
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 511;  /* slt_df */
    }
  goto ret0;

 L3535: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8805;
    case DFmode:
      goto L8806;
    default:
      break;
    }
  goto ret0;

 L8805: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3536;
    }
  goto ret0;

 L3536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3537;
    }
  goto ret0;

 L3537: ATTRIBUTE_UNUSED_LABEL
  if (
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 505;  /* sle_sf */
    }
  goto ret0;

 L8806: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3578;
    }
  goto ret0;

 L3578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3579;
    }
  goto ret0;

 L3579: ATTRIBUTE_UNUSED_LABEL
  if (
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 512;  /* sle_df */
    }
  goto ret0;

 L3583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8807;
    case DFmode:
      goto L8808;
    default:
      break;
    }
  goto ret0;

 L8807: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3584;
    }
  goto ret0;

 L3584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3585;
    }
  goto ret0;

 L3585: ATTRIBUTE_UNUSED_LABEL
  if (
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 513;  /* sge_sf */
    }
  goto ret0;

 L8808: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3608;
    }
  goto ret0;

 L3608: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3609;
    }
  goto ret0;

 L3609: ATTRIBUTE_UNUSED_LABEL
  if (
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 517;  /* sge_df */
    }
  goto ret0;

 L3589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8809;
    case DFmode:
      goto L8810;
    default:
      break;
    }
  goto ret0;

 L8809: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3590;
    }
  goto ret0;

 L3590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3591;
    }
  goto ret0;

 L3591: ATTRIBUTE_UNUSED_LABEL
  if (
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 514;  /* sgt_sf */
    }
  goto ret0;

 L8810: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3614;
    }
  goto ret0;

 L3614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3615;
    }
  goto ret0;

 L3615: ATTRIBUTE_UNUSED_LABEL
  if (
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 518;  /* sgt_df */
    }
  goto ret0;

 L3595: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8811;
    case DFmode:
      goto L8812;
    default:
      break;
    }
  goto ret0;

 L8811: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3596;
    }
  goto ret0;

 L3596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3597;
    }
  goto ret0;

 L3597: ATTRIBUTE_UNUSED_LABEL
  if (
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 515;  /* sunge_sf */
    }
  goto ret0;

 L8812: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3620;
    }
  goto ret0;

 L3620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3621;
    }
  goto ret0;

 L3621: ATTRIBUTE_UNUSED_LABEL
  if (
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 519;  /* sunge_df */
    }
  goto ret0;

 L3601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L8813;
    case DFmode:
      goto L8814;
    default:
      break;
    }
  goto ret0;

 L8813: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3602;
    }
  goto ret0;

 L3602: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3603;
    }
  goto ret0;

 L3603: ATTRIBUTE_UNUSED_LABEL
  if (
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 516;  /* sungt_sf */
    }
  goto ret0;

 L8814: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3626;
    }
  goto ret0;

 L3626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3627;
    }
  goto ret0;

 L3627: ATTRIBUTE_UNUSED_LABEL
  if (
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 520;  /* sungt_df */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_8 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case EQ:
      goto L2964;
    case NE:
      goto L2976;
    default:
     break;
   }
 L2850: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2851;
    }
  if (order_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2870;
    }
  goto ret0;

 L2964: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8853;
    case DImode:
      goto L8854;
    default:
      break;
    }
  goto L2850;

 L8853: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L2965;
  goto L2850;

 L2965: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L2966;
    }
  goto L2850;

 L2966: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2967;
  goto L2850;

 L2967: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2968;
    }
  goto L2850;

 L2968: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2969;
  goto L2850;

 L2969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2970;
    case PC:
      goto L3018;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2850;

 L2970: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2971;

 L2971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5214 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)))
    {
      return 415;  /* *branch_bit0si */
    }
  x2 = XEXP (x1, 0);
  goto L2850;

 L3018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3019;
  x2 = XEXP (x1, 0);
  goto L2850;

 L3019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3020;

 L3020: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5235 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)))
    {
      return 419;  /* *branch_bit0si_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2850;

 L8854: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L2989;
  goto L2850;

 L2989: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[0] = x4;
      goto L2990;
    }
  goto L2850;

 L2990: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2991;
  goto L2850;

 L2991: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2992;
    }
  goto L2850;

 L2992: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2993;
  goto L2850;

 L2993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2994;
    case PC:
      goto L3044;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2850;

 L2994: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2995;

 L2995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 5214 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 417;  /* *branch_bit0di */
    }
  x2 = XEXP (x1, 0);
  goto L2850;

 L3044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3045;
  x2 = XEXP (x1, 0);
  goto L2850;

 L3045: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3046;

 L3046: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5235 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 421;  /* *branch_bit0di_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2850;

 L2976: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8855;
    case DImode:
      goto L8856;
    default:
      break;
    }
  goto L2850;

 L8855: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L2977;
  goto L2850;

 L2977: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L2978;
    }
  goto L2850;

 L2978: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2979;
  goto L2850;

 L2979: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L2980;
    }
  goto L2850;

 L2980: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2981;
  goto L2850;

 L2981: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2982;
    case PC:
      goto L3031;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2850;

 L2982: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2983;

 L2983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5214 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)))
    {
      return 416;  /* *branch_bit1si */
    }
  x2 = XEXP (x1, 0);
  goto L2850;

 L3031: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3032;
  x2 = XEXP (x1, 0);
  goto L2850;

 L3032: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3033;

 L3033: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5235 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)))
    {
      return 420;  /* *branch_bit1si_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2850;

 L8856: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L3001;
  goto L2850;

 L3001: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[0] = x4;
      goto L3002;
    }
  goto L2850;

 L3002: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3003;
  goto L2850;

 L3003: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3004;
    }
  goto L2850;

 L3004: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3005;
  goto L2850;

 L3005: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L3006;
    case PC:
      goto L3057;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2850;

 L3006: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3007;

 L3007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 5214 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 418;  /* *branch_bit1di */
    }
  x2 = XEXP (x1, 0);
  goto L2850;

 L3057: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3058;
  x2 = XEXP (x1, 0);
  goto L2850;

 L3058: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3059;

 L3059: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5235 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 422;  /* *branch_bit1di_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2850;

 L2851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case CCmode:
      goto L8857;
    case SImode:
      goto L8858;
    case DImode:
      goto L8859;
    default:
      break;
    }
  goto ret0;

 L8857: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, CCmode))
    {
      operands[2] = x3;
      goto L2852;
    }
  goto ret0;

 L2852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2853;
  goto ret0;

 L2853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2854;
    case PC:
      goto L2863;
    default:
     break;
   }
  goto ret0;

 L2854: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2855;

 L2855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5063 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 403;  /* *branch_fp */
    }
  goto ret0;

 L2863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2864;
  goto ret0;

 L2864: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2865;

 L2865: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5080 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    {
      return 404;  /* *branch_fp_inverted */
    }
  goto ret0;

 L8858: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2909;
    }
 L8860: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2947;
    }
  goto ret0;

 L2909: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2910;
    }
  x3 = XEXP (x2, 0);
  goto L8860;

 L2910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2911;
    case PC:
      goto L2929;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L8860;

 L2911: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2912;

 L2912: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5127 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 409;  /* *branch_equalitysi */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L8860;

 L2929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2930;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L8860;

 L2930: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2931;

 L2931: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5144 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 411;  /* *branch_equalitysi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L8860;

 L2947: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2948;
  goto ret0;

 L2948: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2949;
    }
  goto ret0;

 L2949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2950;
    }
  goto ret0;

 L2950: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5163 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 413;  /* *branch_equalitysi_mips16 */
    }
  goto ret0;

 L8859: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2918;
    }
 L8861: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2956;
    }
  goto ret0;

 L2918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L2919;
    }
  x3 = XEXP (x2, 0);
  goto L8861;

 L2919: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2920;
    case PC:
      goto L2939;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L8861;

 L2920: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2921;

 L2921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 5127 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 410;  /* *branch_equalitydi */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L8861;

 L2939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2940;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L8861;

 L2940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2941;

 L2941: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5144 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 412;  /* *branch_equalitydi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L8861;

 L2956: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2957;
  goto ret0;

 L2957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2958;
    }
  goto ret0;

 L2958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2959;
    }
  goto ret0;

 L2959: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5163 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 414;  /* *branch_equalitydi_mips16 */
    }
  goto ret0;

 L2870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8862;
    case DImode:
      goto L8863;
    default:
      break;
    }
  goto ret0;

 L8862: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2871;
    }
  goto ret0;

 L2871: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2872;
  goto ret0;

 L2872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2873;
    case PC:
      goto L2891;
    default:
     break;
   }
  goto ret0;

 L2873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2874;

 L2874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 5099 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 405;  /* *branch_ordersi */
    }
  goto ret0;

 L2891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2892;
  goto ret0;

 L2892: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2893;

 L2893: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5112 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 407;  /* *branch_ordersi_inverted */
    }
  goto ret0;

 L8863: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2880;
    }
  goto ret0;

 L2880: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2881;
  goto ret0;

 L2881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2882;
    case PC:
      goto L2901;
    default:
     break;
   }
  goto ret0;

 L2882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2883;

 L2883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (
#line 5099 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 406;  /* *branch_orderdi */
    }
  goto ret0;

 L2901: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2902;
  goto ret0;

 L2902: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2903;

 L2903: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5112 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 408;  /* *branch_orderdi_inverted */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_9 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L8908;
    case ZERO_EXTEND:
      goto L6055;
    case SIGN_EXTEND:
      goto L6071;
    case MEM:
      goto L6087;
    case DIV:
      goto L7470;
    case UDIV:
      goto L7476;
    case MOD:
      goto L7494;
    case UMOD:
      goto L7500;
    default:
     break;
   }
  goto ret0;

 L8908: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L8926;
    case 1:
      goto L8927;
    case 4:
      goto L8932;
    case 7:
      goto L8936;
    case 3:
      goto L8937;
    default:
      break;
    }
  goto ret0;

 L8926: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 306L:
      goto L5376;
    case 327L:
      goto L5545;
    case 353L:
      goto L5885;
    case 354L:
      goto L5891;
    case 355L:
      goto L5897;
    case 437L:
      goto L6456;
    case 438L:
      goto L6462;
    case 441L:
      goto L6480;
    case 442L:
      goto L6486;
    default:
      break;
    }
  goto ret0;

 L5376: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5377;
    }
  goto ret0;

 L5377: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5378;
    }
  goto ret0;

 L5378: ATTRIBUTE_UNUSED_LABEL
  if (
#line 124 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 698;  /* mips_modsub */
    }
  goto ret0;

 L5545: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5546;
    }
  goto ret0;

 L5546: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5547;
    }
  goto ret0;

 L5547: ATTRIBUTE_UNUSED_LABEL
  if (
#line 384 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 722;  /* mips_shra_r_w */
    }
  goto ret0;

 L5885: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5886;
    }
  goto ret0;

 L5886: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L5887;
    }
  goto ret0;

 L5887: ATTRIBUTE_UNUSED_LABEL
  if (
#line 753 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 752;  /* mips_cmpgu_eq_qb */
    }
  goto ret0;

 L5891: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5892;
    }
  goto ret0;

 L5892: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L5893;
    }
  goto ret0;

 L5893: ATTRIBUTE_UNUSED_LABEL
  if (
#line 763 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 753;  /* mips_cmpgu_lt_qb */
    }
  goto ret0;

 L5897: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5898;
    }
  goto ret0;

 L5898: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L5899;
    }
  goto ret0;

 L5899: ATTRIBUTE_UNUSED_LABEL
  if (
#line 773 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 754;  /* mips_cmpgu_le_qb */
    }
  goto ret0;

 L6456: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6457;
    }
  goto ret0;

 L6457: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6458;
    }
  goto ret0;

 L6458: ATTRIBUTE_UNUSED_LABEL
  if (
#line 454 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 808;  /* mips_addqh_w */
    }
  goto ret0;

 L6462: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6463;
    }
  goto ret0;

 L6463: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6464;
    }
  goto ret0;

 L6464: ATTRIBUTE_UNUSED_LABEL
  if (
#line 464 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 809;  /* mips_addqh_r_w */
    }
  goto ret0;

 L6480: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6481;
    }
  goto ret0;

 L6481: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6482;
    }
  goto ret0;

 L6482: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 812;  /* mips_subqh_w */
    }
  goto ret0;

 L6486: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6487;
    }
  goto ret0;

 L6487: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6488;
    }
  goto ret0;

 L6488: ATTRIBUTE_UNUSED_LABEL
  if (
#line 504 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 813;  /* mips_subqh_r_w */
    }
  goto ret0;

 L8927: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 307L:
      goto L5382;
    case 313L:
      goto L5439;
    case 314L:
      goto L5444;
    case 346L:
      goto L5827;
    default:
      break;
    }
  goto ret0;

 L5382: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5383;
    }
  goto ret0;

 L5383: ATTRIBUTE_UNUSED_LABEL
  if (
#line 134 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 699;  /* mips_raddu_w_qb */
    }
  goto ret0;

 L5439: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5440;
    }
  goto ret0;

 L5440: ATTRIBUTE_UNUSED_LABEL
  if (
#line 207 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 706;  /* mips_preceq_w_phl */
    }
  goto ret0;

 L5444: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5445;
    }
  goto ret0;

 L5445: ATTRIBUTE_UNUSED_LABEL
  if (
#line 216 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 707;  /* mips_preceq_w_phr */
    }
  goto ret0;

 L5827: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5828;
    }
  goto ret0;

 L5828: ATTRIBUTE_UNUSED_LABEL
  if (
#line 666 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 742;  /* mips_bitrev */
    }
  goto ret0;

 L8932: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 347)
    goto L5832;
  goto ret0;

 L5832: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5833;
    }
  goto ret0;

 L5833: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5834;
    }
  goto ret0;

 L5834: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 183)
    goto L5835;
  goto ret0;

 L5835: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182
      && 
#line 679 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 743;  /* mips_insv */
    }
  goto ret0;

 L8936: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 367)
    goto L6045;
  goto ret0;

 L6045: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_uimm6_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6046;
    }
  goto ret0;

 L6046: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L6047;
  goto ret0;

 L6047: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 183)
    goto L6048;
  goto ret0;

 L6048: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 184)
    goto L6049;
  goto ret0;

 L6049: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6050;
  goto ret0;

 L6050: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 5);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L6051;
  goto ret0;

 L6051: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 6);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187
      && 
#line 1004 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 767;  /* mips_rddsp */
    }
  goto ret0;

 L8937: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 405L:
      goto L6153;
    case 406L:
      goto L6160;
    case 427L:
      goto L6385;
    default:
      break;
    }
  goto ret0;

 L6153: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6154;
    }
  goto ret0;

 L6154: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6155;
    }
  goto ret0;

 L6155: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6156;
    }
  goto ret0;

 L6156: ATTRIBUTE_UNUSED_LABEL
  if (
#line 66 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 780;  /* mips_append */
    }
  goto ret0;

 L6160: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6161;
    }
  goto ret0;

 L6161: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6162;
    }
  goto ret0;

 L6162: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6163;
    }
  goto ret0;

 L6163: ATTRIBUTE_UNUSED_LABEL
  if (
#line 81 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 781;  /* mips_balign */
    }
  goto ret0;

 L6385: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6386;
    }
  goto ret0;

 L6386: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6387;
    }
  goto ret0;

 L6387: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6388;
    }
  goto ret0;

 L6388: ATTRIBUTE_UNUSED_LABEL
  if (
#line 319 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 798;  /* mips_prepend */
    }
  goto ret0;

 L6055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L6056;
  goto ret0;

 L6056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8944;
    case DImode:
      goto L8945;
    default:
      break;
    }
  goto ret0;

 L8944: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6057;
  goto ret0;

 L6057: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6058;
    }
  goto ret0;

 L6058: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6059;
    }
  goto ret0;

 L6059: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1030 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 768;  /* mips_lbux_si */
    }
  goto ret0;

 L8945: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6065;
  goto ret0;

 L6065: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6066;
    }
  goto ret0;

 L6066: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L6067;
    }
  goto ret0;

 L6067: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1030 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 769;  /* mips_lbux_di */
    }
  goto ret0;

 L6071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MEM)
    goto L6072;
  goto ret0;

 L6072: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L8946;
    case DImode:
      goto L8947;
    default:
      break;
    }
  goto ret0;

 L8946: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6073;
  goto ret0;

 L6073: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6074;
    }
  goto ret0;

 L6074: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6075;
    }
  goto ret0;

 L6075: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1054 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 770;  /* mips_lhx_si */
    }
  goto ret0;

 L8947: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L6081;
  goto ret0;

 L6081: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6082;
    }
  goto ret0;

 L6082: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L6083;
    }
  goto ret0;

 L6083: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1054 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 771;  /* mips_lhx_di */
    }
  goto ret0;

 L6087: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8948;
    case DImode:
      goto L8949;
    default:
      break;
    }
  goto ret0;

 L8948: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L6088;
  goto ret0;

 L6088: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6089;
    }
  goto ret0;

 L6089: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6090;
    }
  goto ret0;

 L6090: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1077 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 772;  /* mips_lwx_si */
    }
  goto ret0;

 L8949: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L6095;
  goto ret0;

 L6095: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6096;
    }
  goto ret0;

 L6096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6097;
    }
  goto ret0;

 L6097: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1077 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 773;  /* mips_lwx_di */
    }
  goto ret0;

 L7470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7471;
    }
  goto ret0;

 L7471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7472;
    }
  goto ret0;

 L7472: ATTRIBUTE_UNUSED_LABEL
  if (
#line 483 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF))
    {
      return 942;  /* divsi3 */
    }
  goto ret0;

 L7476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7477;
    }
  goto ret0;

 L7477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7478;
    }
  goto ret0;

 L7478: ATTRIBUTE_UNUSED_LABEL
  if (
#line 483 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF))
    {
      return 943;  /* udivsi3 */
    }
  goto ret0;

 L7494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7495;
    }
  goto ret0;

 L7495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7496;
    }
  goto ret0;

 L7496: ATTRIBUTE_UNUSED_LABEL
  if (
#line 492 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF))
    {
      return 946;  /* modsi3 */
    }
  goto ret0;

 L7500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7501;
    }
  goto ret0;

 L7501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7502;
    }
  goto ret0;

 L7502: ATTRIBUTE_UNUSED_LABEL
  if (
#line 492 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF))
    {
      return 947;  /* umodsi3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_10 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L4150;
    }
 L8270: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L5681;
    }
  goto ret0;

 L4150: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 39)
    goto L4151;
  x1 = XEXP (x0, 0);
  goto L8270;

 L4151: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DImode)
    goto L8950;
 L4813: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4814;
    }
  x1 = XEXP (x0, 0);
  goto L8270;

 L8950: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L4152;
    case MINUS:
      goto L4554;
    case IOR:
      goto L4671;
    case XOR:
      goto L4677;
    case AND:
      goto L4683;
    default:
     break;
   }
  goto L4813;

 L4152: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4153;
  goto L4813;

 L4153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4154;
    }
  goto L4813;

 L4154: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 102 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 580;  /* sync_adddi */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L4813;

 L4554: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4555;
  goto L4813;

 L4555: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4556;
    }
  goto L4813;

 L4556: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 335 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 600;  /* sync_subdi */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L4813;

 L4671: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4672;
    }
  goto L4813;

 L4672: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 409 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 612;  /* sync_iordi */
    }
  goto L4813;

 L4677: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4678;
    }
  goto L4813;

 L4678: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 409 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 613;  /* sync_xordi */
    }
  goto L4813;

 L4683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4684;
    }
  goto L4813;

 L4684: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && (
#line 409 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 614;  /* sync_anddi */
    }
  goto L4813;

 L4814: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 458 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 628;  /* sync_nanddi */
    }
  x1 = XEXP (x0, 0);
  goto L8270;

 L5681: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L8955;
  goto ret0;

 L8955: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L8974;
    case MULT:
      goto L6349;
    case AND:
      goto L7182;
    case DIV:
      goto L7482;
    case UDIV:
      goto L7488;
    case MOD:
      goto L7506;
    case UMOD:
      goto L7512;
    default:
     break;
   }
  goto ret0;

 L8974: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L8987;
    case 2:
      goto L8991;
    default:
      break;
    }
  goto ret0;

 L8987: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 333L:
      goto L5682;
    case 334L:
      goto L5689;
    case 335L:
      goto L5696;
    case 336L:
      goto L5703;
    case 410L:
      goto L6203;
    case 411L:
      goto L6210;
    case 421L:
      goto L6342;
    case 443L:
      goto L6492;
    case 444L:
      goto L6499;
    default:
      break;
    }
  goto ret0;

 L5682: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5683;
    }
  goto ret0;

 L5683: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L5684;
    }
  goto ret0;

 L5684: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L5685;
    }
  goto ret0;

 L5685: ATTRIBUTE_UNUSED_LABEL
  if (
#line 479 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 729;  /* mips_dpau_h_qbl */
    }
  goto ret0;

 L5689: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5690;
    }
  goto ret0;

 L5690: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L5691;
    }
  goto ret0;

 L5691: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L5692;
    }
  goto ret0;

 L5692: ATTRIBUTE_UNUSED_LABEL
  if (
#line 490 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 730;  /* mips_dpau_h_qbr */
    }
  goto ret0;

 L5696: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5697;
    }
  goto ret0;

 L5697: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L5698;
    }
  goto ret0;

 L5698: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L5699;
    }
  goto ret0;

 L5699: ATTRIBUTE_UNUSED_LABEL
  if (
#line 502 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 731;  /* mips_dpsu_h_qbl */
    }
  goto ret0;

 L5703: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5704;
    }
  goto ret0;

 L5704: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L5705;
    }
  goto ret0;

 L5705: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4QImode))
    {
      operands[3] = x2;
      goto L5706;
    }
  goto ret0;

 L5706: ATTRIBUTE_UNUSED_LABEL
  if (
#line 513 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 732;  /* mips_dpsu_h_qbr */
    }
  goto ret0;

 L6203: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6204;
    }
  goto ret0;

 L6204: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6205;
    }
  goto ret0;

 L6205: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L6206;
    }
  goto ret0;

 L6206: ATTRIBUTE_UNUSED_LABEL
  if (
#line 141 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 785;  /* mips_dpa_w_ph */
    }
  goto ret0;

 L6210: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6211;
    }
  goto ret0;

 L6211: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6212;
    }
  goto ret0;

 L6212: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L6213;
    }
  goto ret0;

 L6213: ATTRIBUTE_UNUSED_LABEL
  if (
#line 152 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 786;  /* mips_dps_w_ph */
    }
  goto ret0;

 L6342: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6343;
    }
  goto ret0;

 L6343: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6344;
    }
  goto ret0;

 L6344: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L6345;
    }
  goto ret0;

 L6345: ATTRIBUTE_UNUSED_LABEL
  if (
#line 248 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 792;  /* mips_mulsa_w_ph */
    }
  goto ret0;

 L6492: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6493;
    }
  goto ret0;

 L6493: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6494;
    }
  goto ret0;

 L6494: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L6495;
    }
  goto ret0;

 L6495: ATTRIBUTE_UNUSED_LABEL
  if (
#line 515 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 814;  /* mips_dpax_w_ph */
    }
  goto ret0;

 L6499: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6500;
    }
  goto ret0;

 L6500: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6501;
    }
  goto ret0;

 L6501: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[3] = x2;
      goto L6502;
    }
  goto ret0;

 L6502: ATTRIBUTE_UNUSED_LABEL
  if (
#line 526 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 815;  /* mips_dpsx_w_ph */
    }
  goto ret0;

 L8991: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 364L:
      goto L5995;
    case 520L:
      goto L7131;
    case 513L:
      goto L7320;
    case 521L:
      goto L7404;
    default:
      break;
    }
  goto ret0;

 L5995: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5996;
    }
  goto ret0;

 L5996: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5997;
    }
  goto ret0;

 L5997: ATTRIBUTE_UNUSED_LABEL
  if (
#line 942 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 764;  /* mips_shilo */
    }
  goto ret0;

 L7131: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7132;
    }
  goto ret0;

 L7132: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7133;
    }
  goto ret0;

 L7133: ATTRIBUTE_UNUSED_LABEL
  if (
#line 146 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 886;  /* loongson_paddd */
    }
  goto ret0;

 L7320: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7321;
    }
  goto ret0;

 L7321: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7322;
    }
  goto ret0;

 L7322: ATTRIBUTE_UNUSED_LABEL
  if (
#line 346 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 917;  /* loongson_pmuluw */
    }
  goto ret0;

 L7404: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7405;
    }
  goto ret0;

 L7405: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7406;
    }
  goto ret0;

 L7406: ATTRIBUTE_UNUSED_LABEL
  if (
#line 435 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 931;  /* loongson_psubd */
    }
  goto ret0;

 L6349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9000;
  goto ret0;

 L9000: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L6350;
    case ZERO_EXTEND:
      goto L6358;
    default:
     break;
   }
  goto ret0;

 L6350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6351;
    }
  goto ret0;

 L6351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L6352;
  goto ret0;

 L6352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6353;
    }
  goto ret0;

 L6353: ATTRIBUTE_UNUSED_LABEL
  if (
#line 258 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 793;  /* mips_mult */
    }
  goto ret0;

 L6358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6359;
    }
  goto ret0;

 L6359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L6360;
  goto ret0;

 L6360: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6361;
    }
  goto ret0;

 L6361: ATTRIBUTE_UNUSED_LABEL
  if (
#line 268 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 794;  /* mips_multu */
    }
  goto ret0;

 L7182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L7183;
  goto ret0;

 L7183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7184;
    }
  goto ret0;

 L7184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7185;
    }
  goto ret0;

 L7185: ATTRIBUTE_UNUSED_LABEL
  if (
#line 174 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 894;  /* loongson_pandn_d */
    }
  goto ret0;

 L7482: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7483;
    }
  goto ret0;

 L7483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7484;
    }
  goto ret0;

 L7484: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 483 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 944;  /* divdi3 */
    }
  goto ret0;

 L7488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7489;
    }
  goto ret0;

 L7489: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7490;
    }
  goto ret0;

 L7490: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 483 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 945;  /* udivdi3 */
    }
  goto ret0;

 L7506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7507;
    }
  goto ret0;

 L7507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7508;
    }
  goto ret0;

 L7508: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 492 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 948;  /* moddi3 */
    }
  goto ret0;

 L7512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7513;
    }
  goto ret0;

 L7513: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7514;
    }
  goto ret0;

 L7514: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 492 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 949;  /* umoddi3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_11 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case VEC_CONCAT:
      goto L7089;
    case PLUS:
      goto L7119;
    case SS_PLUS:
      goto L7137;
    case US_PLUS:
      goto L7149;
    case AND:
      goto L7168;
    case UNSPEC:
      goto L9277;
    case SMAX:
      goto L7273;
    case SMIN:
      goto L7285;
    case ASHIFT:
      goto L7356;
    case ASHIFTRT:
      goto L7368;
    case LSHIFTRT:
      goto L7380;
    case MINUS:
      goto L7392;
    case SS_MINUS:
      goto L7410;
    case US_MINUS:
      goto L7422;
    default:
     break;
   }
  goto ret0;

 L7089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L7090;
  goto ret0;

 L7090: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L7091;
    }
  goto ret0;

 L7091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L7092;
  goto ret0;

 L7092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L7093;
    }
  goto ret0;

 L7093: ATTRIBUTE_UNUSED_LABEL
  if (
#line 110 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 880;  /* vec_pack_ssat_v2si */
    }
  goto ret0;

 L7119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7120;
    }
  goto ret0;

 L7120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7121;
    }
  goto ret0;

 L7121: ATTRIBUTE_UNUSED_LABEL
  if (
#line 131 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 884;  /* addv4hi3 */
    }
  goto ret0;

 L7137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7138;
    }
  goto ret0;

 L7138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7139;
    }
  goto ret0;

 L7139: ATTRIBUTE_UNUSED_LABEL
  if (
#line 155 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 887;  /* ssaddv4hi3 */
    }
  goto ret0;

 L7149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7150;
    }
  goto ret0;

 L7150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7151;
    }
  goto ret0;

 L7151: ATTRIBUTE_UNUSED_LABEL
  if (
#line 164 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 889;  /* usaddv4hi3 */
    }
  goto ret0;

 L7168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == NOT)
    goto L7169;
  goto ret0;

 L7169: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L7170;
    }
  goto ret0;

 L7170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7171;
    }
  goto ret0;

 L7171: ATTRIBUTE_UNUSED_LABEL
  if (
#line 174 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 892;  /* loongson_pandn_h */
    }
  goto ret0;

 L9277: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9293;
    case 1:
      goto L9304;
    case 3:
      goto L9306;
    default:
      break;
    }
  goto ret0;

 L9293: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 500L:
      goto L7189;
    case 501L:
      goto L7207;
    case 502L:
      goto L7225;
    case 503L:
      goto L7237;
    case 504L:
      goto L7243;
    case 505L:
      goto L7249;
    case 506L:
      goto L7255;
    case 507L:
      goto L7261;
    case 510L:
      goto L7302;
    case 511L:
      goto L7308;
    case 512L:
      goto L7314;
    case 516L:
      goto L7337;
    case 518L:
      goto L7440;
    case 519L:
      goto L7458;
    default:
      break;
    }
  goto ret0;

 L7189: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7190;
    }
  goto ret0;

 L7190: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7191;
    }
  goto ret0;

 L7191: ATTRIBUTE_UNUSED_LABEL
  if (
#line 184 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 895;  /* loongson_pavgh */
    }
  goto ret0;

 L7207: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7208;
    }
  goto ret0;

 L7208: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7209;
    }
  goto ret0;

 L7209: ATTRIBUTE_UNUSED_LABEL
  if (
#line 194 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 898;  /* loongson_pcmpeqh */
    }
  goto ret0;

 L7225: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7226;
    }
  goto ret0;

 L7226: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7227;
    }
  goto ret0;

 L7227: ATTRIBUTE_UNUSED_LABEL
  if (
#line 204 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 901;  /* loongson_pcmpgth */
    }
  goto ret0;

 L7237: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7238;
    }
  goto ret0;

 L7238: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7239;
    }
  goto ret0;

 L7239: ATTRIBUTE_UNUSED_LABEL
  if (
#line 214 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 903;  /* loongson_pextrh */
    }
  goto ret0;

 L7243: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7244;
    }
  goto ret0;

 L7244: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7245;
    }
  goto ret0;

 L7245: ATTRIBUTE_UNUSED_LABEL
  if (
#line 224 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 904;  /* loongson_pinsrh_0 */
    }
  goto ret0;

 L7249: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7250;
    }
  goto ret0;

 L7250: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7251;
    }
  goto ret0;

 L7251: ATTRIBUTE_UNUSED_LABEL
  if (
#line 233 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 905;  /* loongson_pinsrh_1 */
    }
  goto ret0;

 L7255: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7256;
    }
  goto ret0;

 L7256: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7257;
    }
  goto ret0;

 L7257: ATTRIBUTE_UNUSED_LABEL
  if (
#line 242 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 906;  /* loongson_pinsrh_2 */
    }
  goto ret0;

 L7261: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7262;
    }
  goto ret0;

 L7262: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7263;
    }
  goto ret0;

 L7263: ATTRIBUTE_UNUSED_LABEL
  if (
#line 251 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 907;  /* loongson_pinsrh_3 */
    }
  goto ret0;

 L7302: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7303;
    }
  goto ret0;

 L7303: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7304;
    }
  goto ret0;

 L7304: ATTRIBUTE_UNUSED_LABEL
  if (
#line 316 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 914;  /* umulv4hi3_highpart */
    }
  goto ret0;

 L7308: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7309;
    }
  goto ret0;

 L7309: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7310;
    }
  goto ret0;

 L7310: ATTRIBUTE_UNUSED_LABEL
  if (
#line 326 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 915;  /* smulv4hi3_highpart */
    }
  goto ret0;

 L7314: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7315;
    }
  goto ret0;

 L7315: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7316;
    }
  goto ret0;

 L7316: ATTRIBUTE_UNUSED_LABEL
  if (
#line 336 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 916;  /* loongson_pmullh */
    }
  goto ret0;

 L7337: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7338;
    }
  goto ret0;

 L7338: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7339;
    }
  goto ret0;

 L7339: ATTRIBUTE_UNUSED_LABEL
  if (
#line 375 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 920;  /* loongson_psadbh */
    }
  goto ret0;

 L7440: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7441;
    }
  goto ret0;

 L7441: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7442;
    }
  goto ret0;

 L7442: ATTRIBUTE_UNUSED_LABEL
  if (
#line 463 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 937;  /* vec_interleave_highv4hi */
    }
  goto ret0;

 L7458: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7459;
    }
  goto ret0;

 L7459: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7460;
    }
  goto ret0;

 L7460: ATTRIBUTE_UNUSED_LABEL
  if (
#line 473 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 940;  /* vec_interleave_lowv4hi */
    }
  goto ret0;

 L9304: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 515)
    goto L7332;
  goto ret0;

 L7332: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7333;
    }
  goto ret0;

 L7333: ATTRIBUTE_UNUSED_LABEL
  if (
#line 365 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 919;  /* loongson_biadd */
    }
  goto ret0;

 L9306: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 517)
    goto L7343;
  goto ret0;

 L7343: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7344;
    }
  goto ret0;

 L7344: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7345;
    }
  goto ret0;

 L7345: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7346;
    }
  goto ret0;

 L7346: ATTRIBUTE_UNUSED_LABEL
  if (
#line 386 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 921;  /* loongson_pshufh */
    }
  goto ret0;

 L7273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7274;
    }
  goto ret0;

 L7274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7275;
    }
  goto ret0;

 L7275: ATTRIBUTE_UNUSED_LABEL
  if (
#line 270 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 909;  /* smaxv4hi3 */
    }
  goto ret0;

 L7285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7286;
    }
  goto ret0;

 L7286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7287;
    }
  goto ret0;

 L7287: ATTRIBUTE_UNUSED_LABEL
  if (
#line 288 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 911;  /* sminv4hi3 */
    }
  goto ret0;

 L7356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7357;
    }
  goto ret0;

 L7357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7358;
    }
  goto ret0;

 L7358: ATTRIBUTE_UNUSED_LABEL
  if (
#line 395 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 923;  /* loongson_psllh */
    }
  goto ret0;

 L7368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7369;
    }
  goto ret0;

 L7369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7370;
    }
  goto ret0;

 L7370: ATTRIBUTE_UNUSED_LABEL
  if (
#line 404 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 925;  /* loongson_psrah */
    }
  goto ret0;

 L7380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7381;
    }
  goto ret0;

 L7381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7382;
    }
  goto ret0;

 L7382: ATTRIBUTE_UNUSED_LABEL
  if (
#line 413 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 927;  /* loongson_psrlh */
    }
  goto ret0;

 L7392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7393;
    }
  goto ret0;

 L7393: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7394;
    }
  goto ret0;

 L7394: ATTRIBUTE_UNUSED_LABEL
  if (
#line 422 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 929;  /* subv4hi3 */
    }
  goto ret0;

 L7410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7411;
    }
  goto ret0;

 L7411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7412;
    }
  goto ret0;

 L7412: ATTRIBUTE_UNUSED_LABEL
  if (
#line 444 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 932;  /* sssubv4hi3 */
    }
  goto ret0;

 L7422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7423;
    }
  goto ret0;

 L7423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7424;
    }
  goto ret0;

 L7424: ATTRIBUTE_UNUSED_LABEL
  if (
#line 453 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 934;  /* ussubv4hi3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_12 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SFmode:
      goto L8232;
    case DFmode:
      goto L8233;
    case V2SFmode:
      goto L8234;
    case SImode:
      goto L8216;
    case DImode:
      goto L8217;
    case TImode:
      goto L8210;
    case HImode:
      goto L8212;
    case QImode:
      goto L8213;
    case BLKmode:
      goto L8253;
    case V2HImode:
      goto L8223;
    case V4QImode:
      goto L8224;
    case V2HQmode:
      goto L8225;
    case V2UHQmode:
      goto L8226;
    case V2HAmode:
      goto L8227;
    case V2UHAmode:
      goto L8228;
    case V4QQmode:
      goto L8229;
    case V4UQQmode:
      goto L8230;
    case CCmode:
      goto L8231;
    case TFmode:
      goto L8247;
    case V2SImode:
      goto L8249;
    case V4HImode:
      goto L8250;
    case V8QImode:
      goto L8251;
    default:
      break;
    }
 L2848: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L3640;
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L3726;
    }
 L4106: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L4107;
 L4142: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L8259;
    case DImode:
      goto L8260;
    case V2SFmode:
      goto L8261;
    case SFmode:
      goto L8262;
    case CCmode:
      goto L8263;
    case CCV4mode:
      goto L8264;
    case CCV2mode:
      goto L8265;
    case DFmode:
      goto L8266;
    case V4QImode:
      goto L8268;
    case V2HImode:
      goto L8269;
    case CCDSPmode:
      goto L8271;
    case QQmode:
      goto L8272;
    case HQmode:
      goto L8273;
    case SQmode:
      goto L8274;
    case DQmode:
      goto L8275;
    case UQQmode:
      goto L8276;
    case UHQmode:
      goto L8277;
    case USQmode:
      goto L8278;
    case UDQmode:
      goto L8279;
    case HAmode:
      goto L8280;
    case SAmode:
      goto L8281;
    case DAmode:
      goto L8282;
    case UHAmode:
      goto L8283;
    case USAmode:
      goto L8284;
    case UDAmode:
      goto L8285;
    case V2SImode:
      goto L8286;
    case V4HImode:
      goto L8287;
    case V8QImode:
      goto L8288;
    default:
      break;
    }
 L5116: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L5117;
  goto ret0;

 L8232: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2242;
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L23;
    }
 L8244: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2381;
    }
  goto L2848;

 L2242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8292;
    case DImode:
      goto L8293;
    default:
      break;
    }
  goto L8244;

 L8292: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2243;
  goto L8244;

 L2243: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2244;
    }
  goto L8244;

 L2244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2245;
    }
  goto L8244;

 L2245: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2246;
    }
  x1 = XEXP (x0, 0);
  goto L8244;

 L2246: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 297;  /* *swxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L8244;

 L8293: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2264;
  goto L8244;

 L2264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2265;
    }
  goto L8244;

 L2265: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2266;
    }
  goto L8244;

 L2266: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2267;
    }
  x1 = XEXP (x0, 0);
  goto L8244;

 L2267: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 300;  /* *swxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L8244;

 L23: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L8294;
  x1 = XEXP (x0, 0);
  goto L8244;

 L8294: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8244;

 L2381: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L2382;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2382: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4288 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))))
    {
      return 316;  /* *movsf_hardfloat */
    }
 L2386: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4298 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))))
    {
      return 317;  /* *movsf_softfloat */
    }
 L2390: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4308 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))))
    {
      return 318;  /* *movsf_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8233: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2249;
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L29;
    }
 L8245: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2393;
    }
  goto L2848;

 L2249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8327;
    case DImode:
      goto L8328;
    default:
      break;
    }
  goto L8245;

 L8327: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2250;
  goto L8245;

 L2250: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2251;
    }
  goto L8245;

 L2251: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2252;
    }
  goto L8245;

 L2252: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2253;
    }
  x1 = XEXP (x0, 0);
  goto L8245;

 L2253: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 298;  /* *sdxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L8245;

 L8328: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2271;
  goto L8245;

 L2271: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2272;
    }
  goto L8245;

 L2272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2273;
    }
  goto L8245;

 L2273: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L2274;
    }
  x1 = XEXP (x0, 0);
  goto L8245;

 L2274: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 301;  /* *sdxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L8245;

 L29: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L8329;
  x1 = XEXP (x0, 0);
  goto L8245;

 L8329: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8245;

 L2393: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L2394;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2394: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4329 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 319;  /* *movdf_hardfloat */
    }
 L2398: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4339 "../../gcc-4.4.7/gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 320;  /* *movdf_softfloat */
    }
 L2402: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4349 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    {
      return 321;  /* *movdf_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8234: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2256;
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L35;
    }
 L8248: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L2421;
    }
  goto L2848;

 L2256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L8371;
    case DImode:
      goto L8372;
    default:
      break;
    }
  goto L8248;

 L8371: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2257;
  goto L8248;

 L2257: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2258;
    }
  goto L8248;

 L2258: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2259;
    }
  goto L8248;

 L2259: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L2260;
    }
  x1 = XEXP (x0, 0);
  goto L8248;

 L2260: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 299;  /* *sdxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L8248;

 L8372: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L2278;
  goto L8248;

 L2278: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2279;
    }
  goto L8248;

 L2279: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2280;
    }
  goto L8248;

 L2280: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L2281;
    }
  x1 = XEXP (x0, 0);
  goto L8248;

 L2281: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 302;  /* *sdxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L8248;

 L35: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode)
    goto L8373;
  x1 = XEXP (x0, 0);
  goto L8248;

 L8373: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8248;

 L2421: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L2422;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2422: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4473 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode))))
    {
      return 326;  /* *movv2sf */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8216: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L1930;
    case MEM:
      goto L8407;
    case REG:
      goto L8408;
    default:
     break;
   }
 L8208: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L41;
    }
 L8211: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1505;
    }
 L8235: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2284;
    }
 L8257: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 3)
    goto L4099;
  goto L2848;

 L1930: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1931;
    }
  goto L2848;

 L1931: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1932;
    }
  goto L2848;

 L1932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1933;
    }
  goto L2848;

 L1933: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (reg_or_0_operand (x1, SImode))
    {
      operands[3] = x1;
      goto L1934;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1934: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3523 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))))
    {
      return 238;  /* insvsi */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8407: ATTRIBUTE_UNUSED_LABEL
  if (stack_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2102;
    }
  goto L8211;

 L2102: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 31
      && 
#line 3862 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 266;  /* *movsi_ra */
    }
  x1 = XEXP (x0, 0);
  goto L8211;

 L8408: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 0))
    {
    case 28L:
      goto L3697;
    case 79L:
      goto L3713;
    default:
      break;
    }
  goto L8208;

 L3697: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 6)
    goto L3698;
  x1 = XEXP (x0, 0);
  goto L8208;

 L3698: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5749 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 532;  /* restore_gp */
    }
  x1 = XEXP (x0, 0);
  goto L8208;

 L3713: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L8410;
  x1 = XEXP (x0, 0);
  goto L8208;

 L8410: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC_VOLATILE:
      goto L8412;
    case UNSPEC:
      goto L8413;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8208;

 L8412: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 46)
    goto L3714;
  x1 = XEXP (x0, 0);
  goto L8208;

 L3714: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5830 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_USE_GOT))
    {
      return 535;  /* set_got_version */
    }
  x1 = XEXP (x0, 0);
  goto L8208;

 L8413: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 47)
    goto L3718;
  x1 = XEXP (x0, 0);
  goto L8208;

 L3718: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && 
#line 5837 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_USE_GOT))
    {
      return 536;  /* update_got_version */
    }
  x1 = XEXP (x0, 0);
  goto L8208;

 L41: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L8414;
  x1 = XEXP (x0, 0);
  goto L8211;

 L8414: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8211;

 L1505: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L8493;
 L2124: ATTRIBUTE_UNUSED_LABEL
  if (move_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2125;
    }
  x1 = XEXP (x0, 0);
  goto L8235;

 L8493: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case TRUNCATE:
      goto L1506;
    case UNSPEC:
      goto L8495;
    default:
     break;
   }
  goto L2124;

 L1506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1507;
    }
  goto L2124;

 L1507: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2698 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 165;  /* truncdisi2 */
    }
  x1 = XEXP (x0, 1);
  goto L2124;

 L8495: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 2)
    goto L2536;
  goto L2124;

 L2536: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L8496;
    case DImode:
      goto L8497;
    case V2SFmode:
      goto L8498;
    case V2SImode:
      goto L8499;
    case V4HImode:
      goto L8500;
    case V8QImode:
      goto L8501;
    default:
      break;
    }
  goto L2124;

 L8496: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2537;
    }
  goto L2124;

 L2537: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2538;
    }
  goto L2124;

 L2538: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 691 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 347;  /* store_worddf */
    }
  x1 = XEXP (x0, 1);
  goto L2124;

 L8497: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2543;
    }
  goto L2124;

 L2543: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2544;
    }
  goto L2124;

 L2544: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 692 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)))
    {
      return 348;  /* store_worddi */
    }
  x1 = XEXP (x0, 1);
  goto L2124;

 L8498: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2549;
    }
  goto L2124;

 L2549: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2550;
    }
  goto L2124;

 L2550: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 693 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 349;  /* store_wordv2sf */
    }
  x1 = XEXP (x0, 1);
  goto L2124;

 L8499: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L2555;
    }
  goto L2124;

 L2555: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2556;
    }
  goto L2124;

 L2556: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 694 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 350;  /* store_wordv2si */
    }
  x1 = XEXP (x0, 1);
  goto L2124;

 L8500: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L2561;
    }
  goto L2124;

 L2561: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2562;
    }
  goto L2124;

 L2562: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 695 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 351;  /* store_wordv4hi */
    }
  x1 = XEXP (x0, 1);
  goto L2124;

 L8501: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L2567;
    }
  goto L2124;

 L2567: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2568;
    }
  goto L2124;

 L2568: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 696 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 352;  /* store_wordv8qi */
    }
  x1 = XEXP (x0, 1);
  goto L2124;

 L2125: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode))))
    {
      return 272;  /* *movsi_internal */
    }
 L2161: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    {
      return 281;  /* *movsi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L8235;

 L2284: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L8502;
 L2704: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L2705;
  x1 = XEXP (x0, 0);
  goto L8257;

 L8502: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L2704;

 L2705: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 4749 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 379;  /* rdhwr_synci_step_si */
    }
  x1 = XEXP (x0, 0);
  goto L8257;

 L4099: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 30)
    goto L4100;
  x1 = XEXP (x0, 0);
  goto L2848;

 L4100: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 6348 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 573;  /* *tls_get_tp_si_split */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8217: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L1937;
    case MEM:
      goto L8580;
    case REG:
    case SUBREG:
      goto L8209;
    default:
      goto L8258;
   }
 L8209: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L47;
    }
 L8258: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 3)
    goto L4103;
 L8221: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2571;
    }
  goto L2848;

 L1937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1938;
    }
  goto L2848;

 L1938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1939;
    }
  goto L2848;

 L1939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1940;
    }
  goto L2848;

 L1940: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (reg_or_0_operand (x1, DImode))
    {
      operands[3] = x1;
      goto L1941;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1941: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3523 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 239;  /* insvdi */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8580: ATTRIBUTE_UNUSED_LABEL
  if (stack_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2105;
    }
  goto L8221;

 L2105: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 31
      && (
#line 3862 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 267;  /* *movdi_ra */
    }
  x1 = XEXP (x0, 0);
  goto L8221;

 L47: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L8581;
 L2708: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L2709;
  x1 = XEXP (x0, 0);
  goto L8258;

 L8581: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L2708;

 L2709: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (
#line 4749 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 380;  /* rdhwr_synci_step_di */
    }
  x1 = XEXP (x0, 0);
  goto L8258;

 L4103: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 30)
    goto L4104;
  x1 = XEXP (x0, 0);
  goto L8221;

 L4104: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 6348 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 574;  /* *tls_get_tp_di_split */
    }
  x1 = XEXP (x0, 0);
  goto L8221;

 L2571: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 2)
    goto L2572;
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L2109;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2572: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L2573;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2573: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2574;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2574: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 697 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 353;  /* store_wordtf */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2109: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3870 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))))
    {
      return 268;  /* *movdi_32bit */
    }
 L2113: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3880 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 269;  /* *movdi_32bit_mips16 */
    }
 L2117: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3890 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))))
    {
      return 270;  /* *movdi_64bit */
    }
 L2121: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3900 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 271;  /* *movdi_64bit_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8210: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L526;
    }
 L8246: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L2405;
    }
  goto L2848;

 L526: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L8740;
  x1 = XEXP (x0, 0);
  goto L8246;

 L8740: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L8743;
    case MULT:
      goto L779;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8246;

 L8743: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L8745;
    case 2:
      goto L8746;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L8745: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 28)
    goto L527;
  x1 = XEXP (x0, 0);
  goto L8246;

 L527: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L8747;
    case SImode:
      goto L8748;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L8747: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L528;
    case DIV:
      goto L1275;
    case UDIV:
      goto L1282;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8246;

 L528: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L8752;
  x1 = XEXP (x0, 0);
  goto L8246;

 L8752: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L529;
    case ZERO_EXTEND:
      goto L538;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8246;

 L529: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L530;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L531;
  x1 = XEXP (x0, 0);
  goto L8246;

 L531: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L532;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L532: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1861 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 54;  /* mulsidi3_64bit_hilo */
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L538: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L539;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L540;
  x1 = XEXP (x0, 0);
  goto L8246;

 L540: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L541;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L541: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1861 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 55;  /* umulsidi3_64bit_hilo */
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L1275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1276;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L1276: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1277;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L1277: ATTRIBUTE_UNUSED_LABEL
  if (
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 125;  /* divmoddi4_hilo_ti */
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L1282: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1283;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L1283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1284;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L1284: ATTRIBUTE_UNUSED_LABEL
  if (
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 126;  /* udivmoddi4_hilo_ti */
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L8748: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L1261;
    case UDIV:
      goto L1268;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8246;

 L1261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1262;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L1262: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1263;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L1263: ATTRIBUTE_UNUSED_LABEL
  if (
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 123;  /* divmodsi4_hilo_ti */
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L1268: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1269;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L1269: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1270;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L1270: ATTRIBUTE_UNUSED_LABEL
  if (
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 124;  /* udivmodsi4_hilo_ti */
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L8746: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 27)
    goto L2447;
  x1 = XEXP (x0, 0);
  goto L8246;

 L2447: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2448;
    }
 L2453: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2454;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L2448: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2449;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2453;

 L2449: ATTRIBUTE_UNUSED_LABEL
  if (
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 331;  /* mthisi_ti */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L2453;

 L2454: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2455;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L2455: ATTRIBUTE_UNUSED_LABEL
  if (
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 332;  /* mthidi_ti */
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L8754;
  x1 = XEXP (x0, 0);
  goto L8246;

 L8754: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L780;
    case ZERO_EXTEND:
      goto L788;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8246;

 L780: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L781;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L781: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L782;
  x1 = XEXP (x0, 0);
  goto L8246;

 L782: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L783;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L783: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2025 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 68;  /* mulditi3_internal */
    }
 L810: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2037 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 70;  /* mulditi3_r4000 */
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L789;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L789: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L790;
  x1 = XEXP (x0, 0);
  goto L8246;

 L790: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L791;
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L791: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2025 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 69;  /* umulditi3_internal */
    }
 L829: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2037 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 71;  /* umulditi3_r4000 */
    }
  x1 = XEXP (x0, 0);
  goto L8246;

 L2405: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L2406;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2406: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4370 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || reg_or_0_operand (operands[1], TImode))))
    {
      return 322;  /* *movti */
    }
 L2410: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4381 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode))))
    {
      return 323;  /* *movti_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8212: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1510;
    }
 L8215: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1527;
    }
  goto L2848;

 L1510: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1511;
  if (move_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L2366;
    }
  x1 = XEXP (x0, 0);
  goto L8215;

 L1511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1512;
    }
  x1 = XEXP (x0, 0);
  goto L8215;

 L1512: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2708 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 166;  /* truncdihi2 */
    }
  x1 = XEXP (x0, 0);
  goto L8215;

 L2366: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4155 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode))))
    {
      return 312;  /* *movhi_internal */
    }
 L2370: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4165 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    {
      return 313;  /* *movhi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L8215;

 L1527: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L8756;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8756: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case TRUNCATE:
      goto L1528;
    case ZERO_EXTEND:
      goto L1650;
    case SIGN_EXTEND:
      goto L1801;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L8759;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8759: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFTRT:
      goto L1529;
    case LSHIFTRT:
      goto L1549;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1530;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1531;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1531: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2732 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63)))
    {
      return 169;  /* *ashr_trunchi */
    }
 L1577: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2754 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32))
    {
      return 176;  /* *ashr_trunchi_exts */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1549: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1550;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1550: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L8761;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8761: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L
      && 
#line 2742 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 172;  /* *lshr32_trunchi */
    }
 L8762: ATTRIBUTE_UNUSED_LABEL
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1584;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1584: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2754 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32))
    {
      return 177;  /* *lshr_trunchi_exts */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L8763;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8763: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1651;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1727;
    }
 L8765: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1732;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1651: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1652;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1652: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2822 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 188;  /* *mips.md:2818 */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1727: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2936 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 203;  /* *zero_extendqihi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L8765;

 L1732: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2946 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 204;  /* *zero_extendqihi2_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1802;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1802: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3038 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E))
    {
      return 218;  /* *extendqihi2_mips16e */
    }
 L1807: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3049 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E))
    {
      return 219;  /* *extendqihi2 */
    }
 L1812: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3069 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH))
    {
      return 220;  /* *extendqihi2_seb */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8213: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1515;
    }
 L8214: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1520;
    }
  goto L2848;

 L1515: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1516;
  if (move_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L2374;
    }
  x1 = XEXP (x0, 0);
  goto L8214;

 L1516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1517;
    }
  x1 = XEXP (x0, 0);
  goto L8214;

 L1517: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2718 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 167;  /* truncdiqi2 */
    }
  x1 = XEXP (x0, 0);
  goto L8214;

 L2374: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4230 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode))))
    {
      return 314;  /* *movqi_internal */
    }
 L2378: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4240 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    {
      return 315;  /* *movqi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L8214;

 L1520: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1521;
  x1 = XEXP (x0, 0);
  goto L2848;

 L1521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L8766;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8766: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFTRT:
      goto L1522;
    case LSHIFTRT:
      goto L1543;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1523;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1523: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1524;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1524: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2732 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63)))
    {
      return 168;  /* *ashr_truncqi */
    }
 L1563: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2754 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32))
    {
      return 174;  /* *ashr_truncqi_exts */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1544;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L8768;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8768: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32L
      && 
#line 2742 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16))
    {
      return 171;  /* *lshr32_truncqi */
    }
 L8769: ATTRIBUTE_UNUSED_LABEL
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1570;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1570: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2754 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32))
    {
      return 175;  /* *lshr_truncqi_exts */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8253: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L2726;
 L8218: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, BLKmode))
    {
      operands[0] = x1;
      goto L1986;
    }
  goto L2848;

 L2726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == SCRATCH)
    goto L2727;
  goto L8218;

 L2727: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode)
    goto L8770;
  x1 = XEXP (x0, 0);
  goto L8218;

 L8770: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L8772;
  x1 = XEXP (x0, 0);
  goto L8218;

 L8772: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L8774;
    case 1:
      goto L8775;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8218;

 L8774: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 600)
    goto L2728;
  x1 = XEXP (x0, 0);
  goto L8218;

 L2728: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2729;
    }
  x1 = XEXP (x0, 0);
  goto L8218;

 L2729: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (address_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2730;
    }
  x1 = XEXP (x0, 0);
  goto L8218;

 L2730: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4771 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CACHE))
    {
      return 383;  /* mips_cache */
    }
  x1 = XEXP (x0, 0);
  goto L8218;

 L8775: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 601)
    goto L2735;
  x1 = XEXP (x0, 0);
  goto L8218;

 L2735: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 4781 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CACHE))
    {
      return 384;  /* r10k_cache_barrier */
    }
  x1 = XEXP (x0, 0);
  goto L8218;

 L1986: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode)
    goto L8776;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8776: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L8778;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8778: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L8780;
    case 3:
      goto L8781;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8780: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 20)
    goto L1987;
  x1 = XEXP (x0, 0);
  goto L2848;

 L1987: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1988;
    }
 L1993: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1994;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1988: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1989;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L1993;

 L1989: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3589 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])))
    {
      return 246;  /* mov_swl */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L1993;

 L1994: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1995;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L1995: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3589 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 247;  /* mov_sdl */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8781: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 21)
    goto L1999;
  x1 = XEXP (x0, 0);
  goto L2848;

 L1999: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2000;
    }
 L2005: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2006;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2000: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2001;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2005;

 L2001: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 3600 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])))
    {
      return 248;  /* mov_swr */
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L2005;

 L2006: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2007;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2007: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0])
      && (
#line 3600 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 249;  /* mov_sdr */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8223: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L2128;
    }
 L8236: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L2293;
    }
  goto L2848;

 L2128: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2HImode))
    {
      operands[1] = x1;
      goto L2129;
    }
  x1 = XEXP (x0, 0);
  goto L8236;

 L2129: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || reg_or_0_operand (operands[1], V2HImode))) && 
#line 652 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 273;  /* *movv2hi_internal */
    }
 L2165: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || register_operand (operands[1], V2HImode))) && 
#line 652 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 282;  /* *movv2hi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L8236;

 L2293: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HImode
      && GET_CODE (x1) == MEM)
    goto L2294;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2295;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2296;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2296: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2297;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2297: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2298;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2299;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2299: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 652 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 304;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8224: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L2132;
    }
 L8237: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L2302;
    }
  goto L2848;

 L2132: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V4QImode))
    {
      operands[1] = x1;
      goto L2133;
    }
  x1 = XEXP (x0, 0);
  goto L8237;

 L2133: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || reg_or_0_operand (operands[1], V4QImode))) && 
#line 653 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 274;  /* *movv4qi_internal */
    }
 L2169: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || register_operand (operands[1], V4QImode))) && 
#line 653 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 283;  /* *movv4qi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L8237;

 L2302: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QImode
      && GET_CODE (x1) == MEM)
    goto L2303;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2304;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2305;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2305: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2306;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2306: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2307;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2307: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2308;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2308: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 653 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 305;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8225: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2HQmode))
    {
      operands[0] = x1;
      goto L2136;
    }
 L8238: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HQmode))
    {
      operands[0] = x1;
      goto L2311;
    }
  goto L2848;

 L2136: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2HQmode))
    {
      operands[1] = x1;
      goto L2137;
    }
  x1 = XEXP (x0, 0);
  goto L8238;

 L2137: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || reg_or_0_operand (operands[1], V2HQmode))) && 
#line 654 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 275;  /* *movv2hq_internal */
    }
 L2173: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || register_operand (operands[1], V2HQmode))) && 
#line 654 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 284;  /* *movv2hq_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L8238;

 L2311: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HQmode
      && GET_CODE (x1) == MEM)
    goto L2312;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2313;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2313: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2314;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2314: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2315;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2315: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2316;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2316: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2317;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2317: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 654 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 306;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8226: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2UHQmode))
    {
      operands[0] = x1;
      goto L2140;
    }
 L8239: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2UHQmode))
    {
      operands[0] = x1;
      goto L2320;
    }
  goto L2848;

 L2140: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2UHQmode))
    {
      operands[1] = x1;
      goto L2141;
    }
  x1 = XEXP (x0, 0);
  goto L8239;

 L2141: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || reg_or_0_operand (operands[1], V2UHQmode))) && 
#line 655 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 276;  /* *movv2uhq_internal */
    }
 L2177: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || register_operand (operands[1], V2UHQmode))) && 
#line 655 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 285;  /* *movv2uhq_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L8239;

 L2320: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2UHQmode
      && GET_CODE (x1) == MEM)
    goto L2321;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2321: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2322;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2322: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2323;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2323: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2324;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2324: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2325;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2325: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2326;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2326: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 655 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 307;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8227: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2HAmode))
    {
      operands[0] = x1;
      goto L2144;
    }
 L8240: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HAmode))
    {
      operands[0] = x1;
      goto L2329;
    }
  goto L2848;

 L2144: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2HAmode))
    {
      operands[1] = x1;
      goto L2145;
    }
  x1 = XEXP (x0, 0);
  goto L8240;

 L2145: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || reg_or_0_operand (operands[1], V2HAmode))) && 
#line 656 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 277;  /* *movv2ha_internal */
    }
 L2181: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || register_operand (operands[1], V2HAmode))) && 
#line 656 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 286;  /* *movv2ha_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L8240;

 L2329: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HAmode
      && GET_CODE (x1) == MEM)
    goto L2330;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2331;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2331: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2332;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2332: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2333;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2333: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2334;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2334: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2335;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2335: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 656 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 308;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8228: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2UHAmode))
    {
      operands[0] = x1;
      goto L2148;
    }
 L8241: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2UHAmode))
    {
      operands[0] = x1;
      goto L2338;
    }
  goto L2848;

 L2148: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2UHAmode))
    {
      operands[1] = x1;
      goto L2149;
    }
  x1 = XEXP (x0, 0);
  goto L8241;

 L2149: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || reg_or_0_operand (operands[1], V2UHAmode))) && 
#line 657 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 278;  /* *movv2uha_internal */
    }
 L2185: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || register_operand (operands[1], V2UHAmode))) && 
#line 657 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 287;  /* *movv2uha_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L8241;

 L2338: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2UHAmode
      && GET_CODE (x1) == MEM)
    goto L2339;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2340;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2341;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2341: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2342;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2342: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2343;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2343: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2344;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2344: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 657 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 309;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8229: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4QQmode))
    {
      operands[0] = x1;
      goto L2152;
    }
 L8242: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QQmode))
    {
      operands[0] = x1;
      goto L2347;
    }
  goto L2848;

 L2152: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V4QQmode))
    {
      operands[1] = x1;
      goto L2153;
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L2153: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || reg_or_0_operand (operands[1], V4QQmode))) && 
#line 658 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 279;  /* *movv4qq_internal */
    }
 L2189: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || register_operand (operands[1], V4QQmode))) && 
#line 658 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 288;  /* *movv4qq_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L8242;

 L2347: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QQmode
      && GET_CODE (x1) == MEM)
    goto L2348;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2349;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2349: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2350;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2350: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2351;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2351: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2352;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2353;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2353: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 658 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 310;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8230: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4UQQmode))
    {
      operands[0] = x1;
      goto L2156;
    }
 L8243: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4UQQmode))
    {
      operands[0] = x1;
      goto L2356;
    }
  goto L2848;

 L2156: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V4UQQmode))
    {
      operands[1] = x1;
      goto L2157;
    }
  x1 = XEXP (x0, 0);
  goto L8243;

 L2157: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || reg_or_0_operand (operands[1], V4UQQmode))) && 
#line 659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 280;  /* *movv4uqq_internal */
    }
 L2193: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || register_operand (operands[1], V4UQQmode))) && 
#line 659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 289;  /* *movv4uqq_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L8243;

 L2356: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4UQQmode
      && GET_CODE (x1) == MEM)
    goto L2357;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2358;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L2359;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2359: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2360;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2360: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L2361;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2362;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2362: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)))
    {
      return 311;  /* *lwxs */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8231: ATTRIBUTE_UNUSED_LABEL
  tem = recog_7 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L2848;

 L8247: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L2413;
    }
 L8252: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L2488;
    }
  goto L2848;

 L2413: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L2414;
    }
  x1 = XEXP (x0, 0);
  goto L8252;

 L2414: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4404 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || reg_or_0_operand (operands[1], TFmode))))
    {
      return 324;  /* *movtf */
    }
 L2418: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4415 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || register_operand (operands[1], TFmode))))
    {
      return 325;  /* *movtf_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L8252;

 L2488: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L8815;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8815: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L8818;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8818: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L8821;
    case 2:
      goto L8822;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8821: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L2489;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2489: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2490;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2490: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4549 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 697 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 339;  /* load_lowtf */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8822: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L2530;
    case 32L:
      goto L2614;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2530: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2531;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2531: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L2532;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2532: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4564 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 697 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 346;  /* load_hightf */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2614: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2615;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2615: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L2616;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2616: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4594 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 697 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)))
    {
      return 360;  /* mthc1tf */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8249: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L2473;
    }
  goto L2848;

 L2473: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L8824;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8824: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L8827;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8827: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L8830;
    case 2:
      goto L8831;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8830: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L2474;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2474: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2475;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2475: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4549 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 694 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 336;  /* load_lowv2si */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8831: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L2512;
    case 32L:
      goto L2596;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2512: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2513;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2513: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L2514;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2514: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4564 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 694 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 343;  /* load_highv2si */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2596: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2597;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2597: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L2598;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2598: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4594 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 694 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 357;  /* mthc1v2si */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8250: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L2478;
    }
  goto L2848;

 L2478: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L8833;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8833: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L8836;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8836: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L8839;
    case 2:
      goto L8840;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8839: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L2479;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2479: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2480;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2480: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4549 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 695 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 337;  /* load_lowv4hi */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8840: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L2518;
    case 32L:
      goto L2602;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2518: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2519;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2519: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2520;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2520: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4564 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 695 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 344;  /* load_highv4hi */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2602: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2603;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2603: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L2604;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2604: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4594 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 695 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 358;  /* mthc1v4hi */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8251: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L2483;
    }
  goto L2848;

 L2483: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L8842;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8842: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L8845;
  x1 = XEXP (x0, 0);
  goto L2848;

 L8845: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L8848;
    case 2:
      goto L8849;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8848: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L2484;
  x1 = XEXP (x0, 0);
  goto L2848;

 L2484: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2485;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2485: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4549 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 696 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 338;  /* load_lowv8qi */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L8849: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L2524;
    case 32L:
      goto L2608;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2524: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2525;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2525: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L2526;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2526: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4564 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 696 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 345;  /* load_highv8qi */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2608: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2609;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2609: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L2610;
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L2610: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4594 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 696 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)))
    {
      return 359;  /* mthc1v8qi */
    }
  x1 = XEXP (x0, 0);
  goto L2848;

 L3640: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L8851;
    case DImode:
      goto L8852;
    default:
      break;
    }
 L2849: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L2963;
    case LABEL_REF:
      goto L3631;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L4106;

 L8851: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3641;
    }
  goto L2849;

 L3641: ATTRIBUTE_UNUSED_LABEL
  if (
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 523;  /* indirect_jumpsi */
    }
  x1 = XEXP (x0, 1);
  goto L2849;

 L8852: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L3645;
    }
  goto L2849;

 L3645: ATTRIBUTE_UNUSED_LABEL
  if (
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 524;  /* indirect_jumpdi */
    }
  x1 = XEXP (x0, 1);
  goto L2849;

 L2963: ATTRIBUTE_UNUSED_LABEL
  tem = recog_8 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L4106;

 L3631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  goto L3632;

 L3632: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5467 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16))
    {
      return 521;  /* jump */
    }
 L3637: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5501 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 522;  /* *mips.md:5498 */
    }
  x1 = XEXP (x0, 0);
  goto L4106;

 L3726: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L3727;
  x1 = XEXP (x0, 0);
  goto L4106;

 L3727: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3728;
  x1 = XEXP (x0, 0);
  goto L4106;

 L3728: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3729;
    }
  x1 = XEXP (x0, 0);
  goto L4106;

 L3729: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L3730;

 L3730: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5889 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 538;  /* sibcall_value_internal */
    }
 L3815: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 544;  /* call_value_internal */
    }
 L3833: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6042 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 545;  /* call_value_split */
    }
  x1 = XEXP (x0, 0);
  goto L4106;

 L4107: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 45)
    goto L4108;
  x1 = XEXP (x0, 0);
  goto L4142;

 L4108: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 42 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_SYNC))
    {
      return 575;  /* *memory_barrier */
    }
  x1 = XEXP (x0, 0);
  goto L4142;

 L8259: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L4143;
    }
 L8267: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5375;
    }
  goto L5116;

 L4143: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L8864;
  x1 = XEXP (x0, 0);
  goto L8267;

 L8864: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC_VOLATILE)
    goto L8867;
  x1 = XEXP (x0, 0);
  goto L8267;

 L8867: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L8870;
    case 3:
      goto L8871;
    case 4:
      goto L8872;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L8870: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 39)
    goto L4144;
  x1 = XEXP (x0, 0);
  goto L8267;

 L4144: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode)
    goto L8873;
 L4808: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4809;
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L8873: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L4145;
    case MINUS:
      goto L4547;
    case IOR:
      goto L4653;
    case XOR:
      goto L4659;
    case AND:
      goto L4665;
    default:
     break;
   }
  goto L4808;

 L4145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4146;
  goto L4808;

 L4146: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4147;
    }
  goto L4808;

 L4147: ATTRIBUTE_UNUSED_LABEL
  if (
#line 102 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 579;  /* sync_addsi */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L4808;

 L4547: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4548;
  goto L4808;

 L4548: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4549;
    }
  goto L4808;

 L4549: ATTRIBUTE_UNUSED_LABEL
  if (
#line 335 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 599;  /* sync_subsi */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L4808;

 L4653: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4654;
    }
  goto L4808;

 L4654: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 409 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 609;  /* sync_iorsi */
    }
  goto L4808;

 L4659: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4660;
    }
  goto L4808;

 L4660: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 409 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 610;  /* sync_xorsi */
    }
  goto L4808;

 L4665: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (uns_arith_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4666;
    }
  goto L4808;

 L4666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 409 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 611;  /* sync_andsi */
    }
  goto L4808;

 L4809: ATTRIBUTE_UNUSED_LABEL
  if (
#line 458 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 627;  /* sync_nandsi */
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L8871: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 42)
    goto L4170;
  x1 = XEXP (x0, 0);
  goto L8267;

 L4170: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4171;
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4171: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4172;
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4172: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == SImode)
    goto L8878;
  x1 = XEXP (x0, 0);
  goto L8267;

 L8878: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L4173;
    case MINUS:
      goto L4194;
    case IOR:
      goto L4215;
    case XOR:
      goto L4236;
    case AND:
      goto L4257;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4174;
  x1 = XEXP (x0, 0);
  goto L8267;

 L4174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4175;
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4175: ATTRIBUTE_UNUSED_LABEL
  if (
#line 136 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 581;  /* sync_add_12 */
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4194: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4195;
  x1 = XEXP (x0, 0);
  goto L8267;

 L4195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4196;
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4196: ATTRIBUTE_UNUSED_LABEL
  if (
#line 136 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 582;  /* sync_sub_12 */
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4216;
  x1 = XEXP (x0, 0);
  goto L8267;

 L4216: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4217;
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4217: ATTRIBUTE_UNUSED_LABEL
  if (
#line 136 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 583;  /* sync_ior_12 */
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4236: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4237;
  x1 = XEXP (x0, 0);
  goto L8267;

 L4237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4238;
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4238: ATTRIBUTE_UNUSED_LABEL
  if (
#line 136 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 584;  /* sync_xor_12 */
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4257: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4258;
  x1 = XEXP (x0, 0);
  goto L8267;

 L4258: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4259;
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4259: ATTRIBUTE_UNUSED_LABEL
  if (
#line 136 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 585;  /* sync_and_12 */
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L8872: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 42)
    goto L4499;
  x1 = XEXP (x0, 0);
  goto L8267;

 L4499: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4500;
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4500: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4501;
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4501: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0]))
    goto L4502;
  x1 = XEXP (x0, 0);
  goto L8267;

 L4502: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4503;
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L4503: ATTRIBUTE_UNUSED_LABEL
  if (
#line 247 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 596;  /* sync_nand_12 */
    }
  x1 = XEXP (x0, 0);
  goto L8267;

 L5375: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L8883;
  x1 = XEXP (x0, 0);
  goto L5116;

 L8883: ATTRIBUTE_UNUSED_LABEL
  tem = recog_9 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L5116;

 L8260: ATTRIBUTE_UNUSED_LABEL
  tem = recog_10 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L5116;

 L8261: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L4882;
    }
  goto L5116;

 L4882: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode)
    goto L9002;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9002: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L4883;
    case UNSPEC:
      goto L9016;
    case VEC_MERGE:
      goto L4908;
    case VEC_CONCAT:
      goto L4948;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9027;
    case DImode:
      goto L9028;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9027: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L4884;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4884: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4885;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4885: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4886;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L4887;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L4888;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4888: ATTRIBUTE_UNUSED_LABEL
  if (
#line 28 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 636;  /* *movcc_v2sf_si */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9028: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L4893;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4894;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4894: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4895;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L4896;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L4897;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4897: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 28 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 637;  /* *movcc_v2sf_di */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9016: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L9029;
    case 2:
      goto L9031;
    case 1:
      goto L9032;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9029: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 200L:
      goto L4901;
    case 202L:
      goto L4961;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4901: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L4902;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4902: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L4903;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4903: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, CCV2mode))
    {
      operands[3] = x2;
      goto L4904;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4904: ATTRIBUTE_UNUSED_LABEL
  if (
#line 41 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 638;  /* mips_cond_move_tf_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4961: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L4962;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4962: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L4963;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4963: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4964;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4964: ATTRIBUTE_UNUSED_LABEL
  if (
#line 231 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 645;  /* mips_alnv_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9031: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 204L:
      goto L4968;
    case 207L:
      goto L4984;
    case 210L:
      goto L5204;
    case 212L:
      goto L5237;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4968: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L4969;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4969: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L4970;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4970: ATTRIBUTE_UNUSED_LABEL
  if (
#line 242 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 646;  /* mips_addr_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4984: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L4985;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4985: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L4986;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4986: ATTRIBUTE_UNUSED_LABEL
  if (
#line 273 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 649;  /* mips_mulr_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5204: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5205;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5205: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5206;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5206: ATTRIBUTE_UNUSED_LABEL
  if (
#line 558 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 679;  /* mips_rsqrt2_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5237: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5238;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5238: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5239;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5239: ATTRIBUTE_UNUSED_LABEL
  if (
#line 577 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 685;  /* mips_recip2_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9032: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 205L:
      goto L4974;
    case 206L:
      goto L4979;
    case 208L:
      goto L4990;
    case 209L:
      goto L5187;
    case 211L:
      goto L5220;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4974: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L4975;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4975: ATTRIBUTE_UNUSED_LABEL
  if (
#line 252 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 647;  /* mips_cvt_pw_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4979: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L4980;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4980: ATTRIBUTE_UNUSED_LABEL
  if (
#line 262 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 648;  /* mips_cvt_ps_pw */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4990: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L4991;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4991: ATTRIBUTE_UNUSED_LABEL
  if (
#line 298 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 650;  /* *mips_abs_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5187: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5188;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5188: ATTRIBUTE_UNUSED_LABEL
  if (
#line 548 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 676;  /* mips_rsqrt1_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5220: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5221;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5221: ATTRIBUTE_UNUSED_LABEL
  if (
#line 567 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 682;  /* mips_recip1_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L9041;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9041: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L4925;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L4909;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4925: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L4926;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L4927;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4927: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L4928;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4928: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4929;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L9043;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9043: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L4940;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L4930;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L4941;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L4942;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4942: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L4943;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4943: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4944;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 119 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 642;  /* mips_plu_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4930: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 103 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 641;  /* mips_pll_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L9045;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9045: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L4916;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L4910;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4916: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L4917;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L4918;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4918: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L4919;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4919: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4920;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 89 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 640;  /* mips_puu_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 75 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 639;  /* mips_pul_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4948: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4949;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4950;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4950: ATTRIBUTE_UNUSED_LABEL
  if (
#line 141 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 643;  /* vec_initv2sf_internal */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8262: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L4953;
    }
  goto L5116;

 L4953: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L9046;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9046: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_SELECT:
      goto L4954;
    case UNSPEC:
      goto L9051;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4954: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L4955;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4955: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L4956;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4956: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_or_1_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L4957;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4957: ATTRIBUTE_UNUSED_LABEL
  if (
#line 160 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 644;  /* vec_extractv2sf */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9051: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L9055;
    case 2:
      goto L9056;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9055: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 209L:
      goto L5177;
    case 211L:
      goto L5210;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5177: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5178;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5178: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 548 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 674;  /* mips_rsqrt1_s */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5210: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5211;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5211: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 567 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 680;  /* mips_recip1_s */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9056: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 210L:
      goto L5192;
    case 212L:
      goto L5225;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5192: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5193;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5193: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5194;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5194: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 558 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 677;  /* mips_rsqrt2_s */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5225: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L5226;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5226: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5227;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5227: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 577 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 683;  /* mips_recip2_s */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8263: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L4994;
    }
  goto L5116;

 L4994: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 203)
    goto L4995;
  x1 = XEXP (x0, 0);
  goto L5116;

 L4995: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9059;
    case DFmode:
      goto L9060;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9059: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4996;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4996: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4997;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4997: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L4998;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L4998: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 313 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)))
    {
      return 651;  /* mips_cabs_cond_s */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9060: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5003;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5003: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5004;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5004: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L5005;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5005: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 313 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 652;  /* mips_cabs_cond_d */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8264: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCV4mode))
    {
      operands[0] = x1;
      goto L5008;
    }
  goto L5116;

 L5008: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV4mode)
    goto L9061;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9061: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9063;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9063: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 5)
    goto L9065;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9065: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 201L:
      goto L5009;
    case 203L:
      goto L5018;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5009: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5010;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5010: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5011;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5011: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L5012;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5012: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L5013;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5013: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L5014;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5014: ATTRIBUTE_UNUSED_LABEL
  if (
#line 331 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 653;  /* mips_c_cond_4s */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5018: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5019;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5019: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5020;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5020: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L5021;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5021: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L5022;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5022: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L5023;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5023: ATTRIBUTE_UNUSED_LABEL
  if (
#line 360 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 654;  /* mips_cabs_cond_4s */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8265: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCV2mode))
    {
      operands[0] = x1;
      goto L5026;
    }
  goto L5116;

 L5026: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV2mode)
    goto L9067;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9067: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9070;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9070: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L9073;
    case 1:
      goto L9075;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9073: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 201L:
      goto L5027;
    case 203L:
      goto L5034;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5027: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5028;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5028: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5029;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5029: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L5030;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5030: ATTRIBUTE_UNUSED_LABEL
  if (
#line 392 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 655;  /* mips_c_cond_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5034: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L5035;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5035: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L5036;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5036: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L5037;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5037: ATTRIBUTE_UNUSED_LABEL
  if (
#line 403 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 656;  /* mips_cabs_cond_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9075: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 214)
    goto L5041;
  x1 = XEXP (x0, 0);
  goto L5116;

 L5041: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case UNORDERED:
      goto L5042;
    case UNEQ:
      goto L5049;
    case UNLT:
      goto L5056;
    case UNLE:
      goto L5063;
    case EQ:
      goto L5070;
    case LT:
      goto L5077;
    case LE:
      goto L5084;
    case GE:
      goto L5091;
    case GT:
      goto L5098;
    case UNGE:
      goto L5105;
    case UNGT:
      goto L5112;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5042: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5043;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5043: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5044;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5044: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 657;  /* sunordered_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5049: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5050;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5050: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5051;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5051: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 658;  /* suneq_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5057;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5057: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5058;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5058: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 659;  /* sunlt_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5064;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5064: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5065;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5065: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 660;  /* sunle_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5070: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5071;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5071: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5072;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5072: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 661;  /* seq_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5077: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5078;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5078: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5079;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5079: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 662;  /* slt_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5084: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5085;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5086;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5086: ATTRIBUTE_UNUSED_LABEL
  if (
#line 419 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 663;  /* sle_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5092;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5093;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5093: ATTRIBUTE_UNUSED_LABEL
  if (
#line 430 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 664;  /* sge_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5098: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5099;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5099: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5100;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5100: ATTRIBUTE_UNUSED_LABEL
  if (
#line 430 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 665;  /* sgt_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5106;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5107;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5107: ATTRIBUTE_UNUSED_LABEL
  if (
#line 430 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 666;  /* sunge_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L5113;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5113: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L5114;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5114: ATTRIBUTE_UNUSED_LABEL
  if (
#line 430 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 667;  /* sungt_ps */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8266: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L5181;
    }
  goto L5116;

 L5181: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L9076;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9076: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9080;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9080: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L9084;
    case 2:
      goto L9085;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9084: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 209L:
      goto L5182;
    case 211L:
      goto L5215;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5182: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5183;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5183: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 548 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 675;  /* mips_rsqrt1_d */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5215: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5216;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5216: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 567 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 681;  /* mips_recip1_d */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9085: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 210L:
      goto L5198;
    case 212L:
      goto L5231;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5198: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5199;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5199: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5200;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5200: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 558 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 678;  /* mips_rsqrt2_d */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5231: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L5232;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5232: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5233;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5233: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 577 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 684;  /* mips_recip2_d */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8268: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4QImode))
    {
      operands[0] = x1;
      goto L5404;
    }
  goto L5116;

 L5404: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4QImode)
    goto L9088;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9088: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9099;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9099: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9110;
    case 1:
      goto L9112;
    case 3:
      goto L9113;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9110: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 309L:
      goto L5405;
    case 325L:
      goto L5533;
    case 403L:
      goto L6141;
    case 404L:
      goto L6147;
    case 424L:
      goto L6365;
    case 428L:
      goto L6392;
    case 429L:
      goto L6398;
    case 433L:
      goto L6432;
    case 434L:
      goto L6438;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5405: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5406;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5406: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L5407;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5407: ATTRIBUTE_UNUSED_LABEL
  if (
#line 158 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 702;  /* mips_precrq_qb_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5533: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5534;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5534: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5535;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5535: ATTRIBUTE_UNUSED_LABEL
  if (
#line 347 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 720;  /* mips_shrl_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6141: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6142;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6142: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6143;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6143: ATTRIBUTE_UNUSED_LABEL
  if (
#line 45 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 778;  /* mips_adduh_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6147: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6148;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6148: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6149;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6149: ATTRIBUTE_UNUSED_LABEL
  if (
#line 55 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 779;  /* mips_adduh_r_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6365: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6366;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6366: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6367;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6367: ATTRIBUTE_UNUSED_LABEL
  if (
#line 278 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 795;  /* mips_precr_qb_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6392: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6393;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6393: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6394;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6394: ATTRIBUTE_UNUSED_LABEL
  if (
#line 333 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 799;  /* mips_shra_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6398: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6399;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6399: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6400;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6400: ATTRIBUTE_UNUSED_LABEL
  if (
#line 352 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 800;  /* mips_shra_r_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6432: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6433;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6433: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6434;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6434: ATTRIBUTE_UNUSED_LABEL
  if (
#line 414 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 804;  /* mips_subuh_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6438: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L6439;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6439: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L6440;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6440: ATTRIBUTE_UNUSED_LABEL
  if (
#line 424 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 805;  /* mips_subuh_r_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9112: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 348)
    goto L5839;
  x1 = XEXP (x0, 0);
  goto L5116;

 L5839: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5840;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5840: ATTRIBUTE_UNUSED_LABEL
  if (
#line 689 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 744;  /* mips_repl_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9113: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 356)
    goto L5909;
  x1 = XEXP (x0, 0);
  goto L5116;

 L5909: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5910;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5910: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[2] = x2;
      goto L5911;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5911: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 785 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 756;  /* mips_pick_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8269: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2HImode))
    {
      operands[0] = x1;
      goto L5410;
    }
  goto L5116;

 L5410: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2HImode)
    goto L9121;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9121: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9142;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9142: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9163;
    case 1:
      goto L9164;
    case 3:
      goto L9175;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9163: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 310L:
      goto L5411;
    case 326L:
      goto L5539;
    case 327L:
      goto L5551;
    case 357L:
      goto L5915;
    case 430L:
      goto L6404;
    case 435L:
      goto L6444;
    case 436L:
      goto L6450;
    case 439L:
      goto L6468;
    case 440L:
      goto L6474;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5411: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5412;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5412: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5413;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5413: ATTRIBUTE_UNUSED_LABEL
  if (
#line 168 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 703;  /* mips_precrq_ph_w */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5539: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5540;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5540: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5541;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5541: ATTRIBUTE_UNUSED_LABEL
  if (
#line 366 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 721;  /* mips_shra_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5551: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5552;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5552: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5553;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5553: ATTRIBUTE_UNUSED_LABEL
  if (
#line 384 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 723;  /* mips_shra_r_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5915: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5916;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5916: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L5917;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5917: ATTRIBUTE_UNUSED_LABEL
  if (
#line 796 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 757;  /* mips_packrl_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6404: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6405;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6405: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6406;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6406: ATTRIBUTE_UNUSED_LABEL
  if (
#line 370 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 801;  /* mips_shrl_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6444: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6445;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6445: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6446;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6446: ATTRIBUTE_UNUSED_LABEL
  if (
#line 434 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 806;  /* mips_addqh_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6450: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6451;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6451: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6452;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6452: ATTRIBUTE_UNUSED_LABEL
  if (
#line 444 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 807;  /* mips_addqh_r_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6468: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6469;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6469: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6470;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6470: ATTRIBUTE_UNUSED_LABEL
  if (
#line 474 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 810;  /* mips_subqh_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6474: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L6475;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6475: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L6476;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6476: ATTRIBUTE_UNUSED_LABEL
  if (
#line 484 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 811;  /* mips_subqh_r_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9164: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 315L:
      goto L5449;
    case 316L:
      goto L5454;
    case 317L:
      goto L5459;
    case 318L:
      goto L5464;
    case 319L:
      goto L5469;
    case 320L:
      goto L5474;
    case 321L:
      goto L5479;
    case 322L:
      goto L5484;
    case 349L:
      goto L5844;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5449: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5450;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5450: ATTRIBUTE_UNUSED_LABEL
  if (
#line 226 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 708;  /* mips_precequ_ph_qbl */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5454: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5455;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5455: ATTRIBUTE_UNUSED_LABEL
  if (
#line 235 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 709;  /* mips_precequ_ph_qbr */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5459: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5460;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5460: ATTRIBUTE_UNUSED_LABEL
  if (
#line 244 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 710;  /* mips_precequ_ph_qbla */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5464: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5465;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5465: ATTRIBUTE_UNUSED_LABEL
  if (
#line 253 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 711;  /* mips_precequ_ph_qbra */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5469: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5470;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5470: ATTRIBUTE_UNUSED_LABEL
  if (
#line 263 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 712;  /* mips_preceu_ph_qbl */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5474: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5475;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5475: ATTRIBUTE_UNUSED_LABEL
  if (
#line 272 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 713;  /* mips_preceu_ph_qbr */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5479: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5480;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5480: ATTRIBUTE_UNUSED_LABEL
  if (
#line 281 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 714;  /* mips_preceu_ph_qbla */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5484: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5485;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5485: ATTRIBUTE_UNUSED_LABEL
  if (
#line 290 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 715;  /* mips_preceu_ph_qbra */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5844: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_imm10_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5845;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5845: ATTRIBUTE_UNUSED_LABEL
  if (
#line 706 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 745;  /* mips_repl_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9175: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 356L:
      goto L5903;
    case 425L:
      goto L6371;
    case 426L:
      goto L6378;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5903: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5904;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5904: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[2] = x2;
      goto L5905;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5905: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 785 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 755;  /* mips_pick_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6371: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6372;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6372: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6373;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6373: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6374;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6374: ATTRIBUTE_UNUSED_LABEL
  if (
#line 289 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 796;  /* mips_precr_sra_ph_w */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6378: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6379;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6379: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6380;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6380: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6381;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6381: ATTRIBUTE_UNUSED_LABEL
  if (
#line 304 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 797;  /* mips_precr_sra_r_ph_w */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8271: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 186)
    goto L5848;
  goto L5116;

 L5848: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCDSPmode)
    goto L9184;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9184: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9187;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9187: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L9190;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9190: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 350L:
      goto L5849;
    case 351L:
      goto L5861;
    case 352L:
      goto L5873;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5849: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2HImode:
      goto L9193;
    case V4QImode:
      goto L9194;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9193: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L5850;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5850: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5851;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5851: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 721 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 746;  /* mips_cmp_eq_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9194: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L5856;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5856: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5857;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5857: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 721 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 747;  /* mips_cmpu_eq_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5861: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2HImode:
      goto L9195;
    case V4QImode:
      goto L9196;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9195: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L5862;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5862: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5863;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5863: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 732 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 748;  /* mips_cmp_lt_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9196: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L5868;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5868: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5869;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5869: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 732 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 749;  /* mips_cmpu_lt_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5873: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V2HImode:
      goto L9197;
    case V4QImode:
      goto L9198;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9197: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L5874;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5874: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2HImode))
    {
      operands[1] = x2;
      goto L5875;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5875: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 743 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 750;  /* mips_cmp_le_ph */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9198: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L5880;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5880: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4QImode))
    {
      operands[1] = x2;
      goto L5881;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5881: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186
      && 
#line 743 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 751;  /* mips_cmpu_le_qb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8272: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QQmode))
    {
      operands[0] = x1;
      goto L6557;
    }
  goto L5116;

 L6557: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QQmode)
    goto L9199;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9199: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6558;
    case MINUS:
      goto L6764;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QQmode))
    {
      operands[1] = x2;
      goto L6559;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6559: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QQmode))
    {
      operands[2] = x2;
      return 820;  /* addqq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QQmode))
    {
      operands[1] = x2;
      goto L6765;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QQmode))
    {
      operands[2] = x2;
      return 846;  /* subqq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8273: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HQmode))
    {
      operands[0] = x1;
      goto L6562;
    }
  goto L5116;

 L6562: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HQmode)
    goto L9201;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9201: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6563;
    case MINUS:
      goto L6769;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HQmode))
    {
      operands[1] = x2;
      goto L6564;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HQmode))
    {
      operands[2] = x2;
      return 821;  /* addhq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HQmode))
    {
      operands[1] = x2;
      goto L6770;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HQmode))
    {
      operands[2] = x2;
      return 847;  /* subhq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8274: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SQmode))
    {
      operands[0] = x1;
      goto L6567;
    }
  goto L5116;

 L6567: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SQmode)
    goto L9203;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9203: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6568;
    case MINUS:
      goto L6774;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SQmode))
    {
      operands[1] = x2;
      goto L6569;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SQmode))
    {
      operands[2] = x2;
      return 822;  /* addsq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SQmode))
    {
      operands[1] = x2;
      goto L6775;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SQmode))
    {
      operands[2] = x2;
      return 848;  /* subsq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8275: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DQmode))
    {
      operands[0] = x1;
      goto L6572;
    }
  goto L5116;

 L6572: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DQmode)
    goto L9205;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9205: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6573;
    case MINUS:
      goto L6779;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DQmode))
    {
      operands[1] = x2;
      goto L6574;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DQmode))
    {
      operands[2] = x2;
      goto L6575;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6575: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 823;  /* adddq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DQmode))
    {
      operands[1] = x2;
      goto L6780;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DQmode))
    {
      operands[2] = x2;
      goto L6781;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6781: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 849;  /* subdq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8276: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UQQmode))
    {
      operands[0] = x1;
      goto L6578;
    }
  goto L5116;

 L6578: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UQQmode)
    goto L9207;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9207: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6579;
    case MINUS:
      goto L6785;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UQQmode))
    {
      operands[1] = x2;
      goto L6580;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UQQmode))
    {
      operands[2] = x2;
      return 824;  /* adduqq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UQQmode))
    {
      operands[1] = x2;
      goto L6786;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UQQmode))
    {
      operands[2] = x2;
      return 850;  /* subuqq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8277: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UHQmode))
    {
      operands[0] = x1;
      goto L6583;
    }
  goto L5116;

 L6583: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UHQmode)
    goto L9209;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9209: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6584;
    case MINUS:
      goto L6790;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UHQmode))
    {
      operands[1] = x2;
      goto L6585;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UHQmode))
    {
      operands[2] = x2;
      return 825;  /* adduhq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UHQmode))
    {
      operands[1] = x2;
      goto L6791;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UHQmode))
    {
      operands[2] = x2;
      return 851;  /* subuhq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8278: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, USQmode))
    {
      operands[0] = x1;
      goto L6588;
    }
  goto L5116;

 L6588: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == USQmode)
    goto L9211;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9211: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6589;
    case MINUS:
      goto L6795;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, USQmode))
    {
      operands[1] = x2;
      goto L6590;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, USQmode))
    {
      operands[2] = x2;
      return 826;  /* addusq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, USQmode))
    {
      operands[1] = x2;
      goto L6796;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, USQmode))
    {
      operands[2] = x2;
      return 852;  /* subusq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8279: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UDQmode))
    {
      operands[0] = x1;
      goto L6593;
    }
  goto L5116;

 L6593: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UDQmode)
    goto L9213;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9213: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6594;
    case MINUS:
      goto L6800;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6594: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UDQmode))
    {
      operands[1] = x2;
      goto L6595;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6595: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UDQmode))
    {
      operands[2] = x2;
      goto L6596;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6596: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 827;  /* addudq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6800: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UDQmode))
    {
      operands[1] = x2;
      goto L6801;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UDQmode))
    {
      operands[2] = x2;
      goto L6802;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6802: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 853;  /* subudq3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8280: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HAmode))
    {
      operands[0] = x1;
      goto L6599;
    }
  goto L5116;

 L6599: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HAmode)
    goto L9215;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9215: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6600;
    case MINUS:
      goto L6806;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6600: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HAmode))
    {
      operands[1] = x2;
      goto L6601;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HAmode))
    {
      operands[2] = x2;
      return 828;  /* addha3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HAmode))
    {
      operands[1] = x2;
      goto L6807;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6807: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HAmode))
    {
      operands[2] = x2;
      return 854;  /* subha3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8281: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SAmode))
    {
      operands[0] = x1;
      goto L6604;
    }
  goto L5116;

 L6604: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SAmode)
    goto L9217;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9217: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6605;
    case MINUS:
      goto L6811;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6605: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SAmode))
    {
      operands[1] = x2;
      goto L6606;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SAmode))
    {
      operands[2] = x2;
      return 829;  /* addsa3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SAmode))
    {
      operands[1] = x2;
      goto L6812;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SAmode))
    {
      operands[2] = x2;
      return 855;  /* subsa3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8282: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DAmode))
    {
      operands[0] = x1;
      goto L6609;
    }
  goto L5116;

 L6609: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DAmode)
    goto L9219;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9219: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6610;
    case MINUS:
      goto L6816;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DAmode))
    {
      operands[1] = x2;
      goto L6611;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DAmode))
    {
      operands[2] = x2;
      goto L6612;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6612: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 830;  /* addda3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DAmode))
    {
      operands[1] = x2;
      goto L6817;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DAmode))
    {
      operands[2] = x2;
      goto L6818;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6818: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 856;  /* subda3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8283: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UHAmode))
    {
      operands[0] = x1;
      goto L6615;
    }
  goto L5116;

 L6615: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UHAmode)
    goto L9221;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9221: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6616;
    case MINUS:
      goto L6822;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UHAmode))
    {
      operands[1] = x2;
      goto L6617;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UHAmode))
    {
      operands[2] = x2;
      return 831;  /* adduha3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UHAmode))
    {
      operands[1] = x2;
      goto L6823;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UHAmode))
    {
      operands[2] = x2;
      return 857;  /* subuha3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8284: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, USAmode))
    {
      operands[0] = x1;
      goto L6620;
    }
  goto L5116;

 L6620: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == USAmode)
    goto L9223;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9223: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6621;
    case MINUS:
      goto L6827;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, USAmode))
    {
      operands[1] = x2;
      goto L6622;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, USAmode))
    {
      operands[2] = x2;
      return 832;  /* addusa3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, USAmode))
    {
      operands[1] = x2;
      goto L6828;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, USAmode))
    {
      operands[2] = x2;
      return 858;  /* subusa3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8285: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, UDAmode))
    {
      operands[0] = x1;
      goto L6625;
    }
  goto L5116;

 L6625: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == UDAmode)
    goto L9225;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9225: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L6626;
    case MINUS:
      goto L6832;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UDAmode))
    {
      operands[1] = x2;
      goto L6627;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6627: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UDAmode))
    {
      operands[2] = x2;
      goto L6628;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6628: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 833;  /* adduda3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, UDAmode))
    {
      operands[1] = x2;
      goto L6833;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, UDAmode))
    {
      operands[2] = x2;
      goto L6834;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L6834: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(TARGET_64BIT))
    {
      return 859;  /* subuda3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8286: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L7076;
    }
 L8291: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L7112;
    }
  goto L5116;

 L7076: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L7077;
    }
  x1 = XEXP (x0, 0);
  goto L8291;

 L7077: ATTRIBUTE_UNUSED_LABEL
  if (
#line 84 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 877;  /* movv2si_internal */
    }
  x1 = XEXP (x0, 0);
  goto L8291;

 L7112: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L9227;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9227: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7113;
    case AND:
      goto L7161;
    case UNSPEC:
      goto L9238;
    case ASHIFT:
      goto L7350;
    case ASHIFTRT:
      goto L7362;
    case LSHIFTRT:
      goto L7374;
    case MINUS:
      goto L7386;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7114;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7115;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7115: ATTRIBUTE_UNUSED_LABEL
  if (
#line 131 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 883;  /* addv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == NOT)
    goto L7162;
  x1 = XEXP (x0, 0);
  goto L5116;

 L7162: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L7163;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7164;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7164: ATTRIBUTE_UNUSED_LABEL
  if (
#line 174 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 891;  /* loongson_pandn_w */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9238: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L9243;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9243: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 501L:
      goto L7201;
    case 502L:
      goto L7219;
    case 508L:
      goto L7267;
    case 518L:
      goto L7434;
    case 519L:
      goto L7452;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7201: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7202;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7202: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7203;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7203: ATTRIBUTE_UNUSED_LABEL
  if (
#line 194 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 897;  /* loongson_pcmpeqw */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7219: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7220;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7220: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7221;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7221: ATTRIBUTE_UNUSED_LABEL
  if (
#line 204 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 900;  /* loongson_pcmpgtw */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7267: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7268;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7268: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L7269;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7269: ATTRIBUTE_UNUSED_LABEL
  if (
#line 261 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 908;  /* loongson_pmaddhw */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7434: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7435;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7435: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7436;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7436: ATTRIBUTE_UNUSED_LABEL
  if (
#line 463 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 936;  /* vec_interleave_highv2si */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7452: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7453;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7453: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7454;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7454: ATTRIBUTE_UNUSED_LABEL
  if (
#line 473 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 939;  /* vec_interleave_lowv2si */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7351;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7352;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7352: ATTRIBUTE_UNUSED_LABEL
  if (
#line 395 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 922;  /* loongson_psllw */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7363;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7364;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7364: ATTRIBUTE_UNUSED_LABEL
  if (
#line 404 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 924;  /* loongson_psraw */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7375;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7376;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7376: ATTRIBUTE_UNUSED_LABEL
  if (
#line 413 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 926;  /* loongson_psrlw */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7387;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7387: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L7388;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7388: ATTRIBUTE_UNUSED_LABEL
  if (
#line 422 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 928;  /* subv2si3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L8287: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L7080;
    }
 L8289: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L7088;
    }
  goto L5116;

 L7080: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L7081;
    }
  x1 = XEXP (x0, 0);
  goto L8289;

 L7081: ATTRIBUTE_UNUSED_LABEL
  if (
#line 84 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 878;  /* movv4hi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L8289;

 L7088: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L9248;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9248: ATTRIBUTE_UNUSED_LABEL
  tem = recog_11 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L5116;

 L8288: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L7084;
    }
 L8290: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L7096;
    }
  goto L5116;

 L7084: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L7085;
    }
  x1 = XEXP (x0, 0);
  goto L8290;

 L7085: ATTRIBUTE_UNUSED_LABEL
  if (
#line 84 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 879;  /* movv8qi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L8290;

 L7096: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L9309;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9309: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_CONCAT:
      goto L7097;
    case PLUS:
      goto L7125;
    case SS_PLUS:
      goto L7143;
    case US_PLUS:
      goto L7155;
    case AND:
      goto L7175;
    case UNSPEC:
      goto L9326;
    case UMAX:
      goto L7279;
    case UMIN:
      goto L7291;
    case MINUS:
      goto L7398;
    case SS_MINUS:
      goto L7416;
    case US_MINUS:
      goto L7428;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode)
    goto L9333;
  x1 = XEXP (x0, 0);
  goto L5116;

 L9333: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_TRUNCATE:
      goto L7098;
    case US_TRUNCATE:
      goto L7106;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7098: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L7099;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L7100;
  x1 = XEXP (x0, 0);
  goto L5116;

 L7100: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L7101;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7101: ATTRIBUTE_UNUSED_LABEL
  if (
#line 110 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 881;  /* vec_pack_ssat_v4hi */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L7107;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == US_TRUNCATE)
    goto L7108;
  x1 = XEXP (x0, 0);
  goto L5116;

 L7108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L7109;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7109: ATTRIBUTE_UNUSED_LABEL
  if (
#line 122 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 882;  /* vec_pack_usat_v4hi */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7126;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7127;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7127: ATTRIBUTE_UNUSED_LABEL
  if (
#line 131 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 885;  /* addv8qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7144;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7144: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7145;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7145: ATTRIBUTE_UNUSED_LABEL
  if (
#line 155 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 888;  /* ssaddv8qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7156;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7157;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7157: ATTRIBUTE_UNUSED_LABEL
  if (
#line 164 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 890;  /* usaddv8qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == NOT)
    goto L7176;
  x1 = XEXP (x0, 0);
  goto L5116;

 L7176: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L7177;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7178;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7178: ATTRIBUTE_UNUSED_LABEL
  if (
#line 174 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 893;  /* loongson_pandn_b */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9326: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9335;
    case 1:
      goto L9338;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9335: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 500L:
      goto L7195;
    case 501L:
      goto L7213;
    case 502L:
      goto L7231;
    case 514L:
      goto L7326;
    case 518L:
      goto L7446;
    case 519L:
      goto L7464;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7195: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7196;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7196: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7197;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7197: ATTRIBUTE_UNUSED_LABEL
  if (
#line 184 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 896;  /* loongson_pavgb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7213: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7214;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7214: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7215;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7215: ATTRIBUTE_UNUSED_LABEL
  if (
#line 194 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 899;  /* loongson_pcmpeqb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7231: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7232;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7232: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7233;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7233: ATTRIBUTE_UNUSED_LABEL
  if (
#line 204 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 902;  /* loongson_pcmpgtb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7326: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7327;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7327: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7328;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7328: ATTRIBUTE_UNUSED_LABEL
  if (
#line 356 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 918;  /* loongson_pasubub */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7446: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7447;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7447: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7448;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7448: ATTRIBUTE_UNUSED_LABEL
  if (
#line 463 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 938;  /* vec_interleave_highv8qi */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7464: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7465;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7465: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7466;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7466: ATTRIBUTE_UNUSED_LABEL
  if (
#line 473 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 941;  /* vec_interleave_lowv8qi */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L9338: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 509)
    goto L7297;
  x1 = XEXP (x0, 0);
  goto L5116;

 L7297: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7298;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7298: ATTRIBUTE_UNUSED_LABEL
  if (
#line 306 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 913;  /* loongson_pmovmskb */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7279: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7280;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7280: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7281;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7281: ATTRIBUTE_UNUSED_LABEL
  if (
#line 279 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 910;  /* umaxv8qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7292;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7293;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7293: ATTRIBUTE_UNUSED_LABEL
  if (
#line 297 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 912;  /* uminv8qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7399;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7400;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7400: ATTRIBUTE_UNUSED_LABEL
  if (
#line 422 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 930;  /* subv8qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7416: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7417;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7418;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7418: ATTRIBUTE_UNUSED_LABEL
  if (
#line 444 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 933;  /* sssubv8qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7428: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7429;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7430;
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L7430: ATTRIBUTE_UNUSED_LABEL
  if (
#line 453 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    {
      return 935;  /* ussubv8qi3 */
    }
  x1 = XEXP (x0, 0);
  goto L5116;

 L5117: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == IF_THEN_ELSE)
    goto L5118;
  goto ret0;

 L5118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case NE:
      goto L5119;
    case GE:
      goto L6102;
    default:
     break;
   }
 L5154: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L5155;
    }
  goto ret0;

 L5119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case CCV4mode:
      goto L9342;
    case CCV2mode:
      goto L9343;
    default:
      break;
    }
  goto L5154;

 L9342: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, CCV4mode))
    {
      operands[0] = x3;
      goto L5120;
    }
  goto L5154;

 L5120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L9344;
  goto L5154;

 L9344: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0L:
        goto L5121;
      case -1L:
        goto L5130;
      default:
        break;
      }
  goto L5154;

 L5121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5122;
  x2 = XEXP (x1, 0);
  goto L5154;

 L5122: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L5123;

 L5123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 446 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 668;  /* bc1any4t */
    }
  x2 = XEXP (x1, 0);
  goto L5154;

 L5130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5131;
  x2 = XEXP (x1, 0);
  goto L5154;

 L5131: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L5132;

 L5132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 458 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 669;  /* bc1any4f */
    }
  x2 = XEXP (x1, 0);
  goto L5154;

 L9343: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, CCV2mode))
    {
      operands[0] = x3;
      goto L5138;
    }
  goto L5154;

 L5138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L9346;
  goto L5154;

 L9346: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0L:
        goto L5139;
      case -1L:
        goto L5148;
      default:
        break;
      }
  goto L5154;

 L5139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5140;
  x2 = XEXP (x1, 0);
  goto L5154;

 L5140: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L5141;

 L5141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 470 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 670;  /* bc1any2t */
    }
  x2 = XEXP (x1, 0);
  goto L5154;

 L5148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5149;
  x2 = XEXP (x1, 0);
  goto L5154;

 L5149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L5150;

 L5150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 482 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 671;  /* bc1any2f */
    }
  x2 = XEXP (x1, 0);
  goto L5154;

 L6102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L6103;
  goto ret0;

 L6103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L6104;
    }
  goto ret0;

 L6104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L6105;
  goto ret0;

 L6105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L6106;

 L6106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 1090 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 774;  /* mips_bposge */
    }
  goto ret0;

 L5155: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 2
      && XINT (x3, 1) == 213)
    goto L5156;
  goto ret0;

 L5156: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (register_operand (x4, CCV2mode))
    {
      operands[2] = x4;
      goto L5157;
    }
  goto ret0;

 L5157: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[3] = x4;
      goto L5158;
    }
  goto ret0;

 L5158: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5159;
  goto ret0;

 L5159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L5160;
    case PC:
      goto L5171;
    default:
     break;
   }
  goto ret0;

 L5160: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L5161;

 L5161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 507 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT))
    {
      return 672;  /* *branch_upper_lower */
    }
  goto ret0;

 L5171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5172;
  goto ret0;

 L5172: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L5173;

 L5173: ATTRIBUTE_UNUSED_LABEL
  if (
#line 529 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT))
    {
      return 673;  /* *branch_upper_lower_inverted */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_13 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L191;
    case PLUS:
      goto L305;
    case MINUS:
      goto L324;
    case NEG:
      goto L415;
    case TRUNCATE:
      goto L584;
    case DIV:
      goto L1203;
    case UDIV:
      goto L1225;
    case FIX:
      goto L1827;
    case UNSPEC:
      goto L9366;
    case UNSPEC_VOLATILE:
      goto L9367;
    case SUBREG:
    case MEM:
      goto L9364;
    default:
      goto ret0;
   }
 L9364: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4113;
    }
  goto ret0;

 L191: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L192;
    }
  goto ret0;

 L192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L193;
    }
  goto ret0;

 L193: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L194;
  goto ret0;

 L194: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L195;
    }
  goto ret0;

 L195: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3))
    {
      return 33;  /* mulsi3_mul3 */
    }
 L237: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1456 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_FIX_R4000))
    {
      return 37;  /* mulsi3_r4000 */
    }
  goto ret0;

 L305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L306;
  goto ret0;

 L306: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L307;
    }
  goto ret0;

 L307: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L308;
    }
  goto ret0;

 L308: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L309;
    }
 L367: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L368;
  goto ret0;

 L309: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L310;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L367;

 L310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L311;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L367;

 L311: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1561 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC))
    {
      return 41;  /* *macc */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L367;

 L368: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L369;
  goto ret0;

 L369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L370;
    }
  goto ret0;

 L370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L371;
  goto ret0;

 L371: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L372;
  goto ret0;

 L372: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L373;
  goto ret0;

 L373: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L374;
  goto ret0;

 L374: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 1628 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed))
    {
      return 44;  /* *macc2 */
    }
  goto ret0;

 L324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L325;
    }
 L379: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L380;
  goto ret0;

 L325: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L326;
  x3 = XEXP (x2, 0);
  goto L379;

 L326: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L327;
    }
  x3 = XEXP (x2, 0);
  goto L379;

 L327: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L328;
    }
  x3 = XEXP (x2, 0);
  goto L379;

 L328: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L329;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L379;

 L329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L330;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L379;

 L330: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1582 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MSAC))
    {
      return 42;  /* *msac */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L379;

 L380: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L381;
  goto ret0;

 L381: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L382;
    }
  goto ret0;

 L382: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L383;
    }
  goto ret0;

 L383: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L384;
  goto ret0;

 L384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L385;
    }
  goto ret0;

 L385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L386;
  goto ret0;

 L386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L387;
  goto ret0;

 L387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L388;
  goto ret0;

 L388: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L389;
  goto ret0;

 L389: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 1642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed))
    {
      return 45;  /* *msac2 */
    }
  goto ret0;

 L415: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L416;
  goto ret0;

 L416: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L417;
    }
  goto ret0;

 L417: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L418;
    }
  goto ret0;

 L418: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L419;
  goto ret0;

 L419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L420;
    }
  goto ret0;

 L420: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1771 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULS))
    {
      return 47;  /* *muls */
    }
  goto ret0;

 L584: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L585;
  goto ret0;

 L585: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L9368;
  goto ret0;

 L9368: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case MULT:
      goto L586;
    case NEG:
      goto L682;
    default:
     break;
   }
  goto ret0;

 L586: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L9370;
  goto ret0;

 L9370: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L587;
    case ZERO_EXTEND:
      goto L611;
    default:
     break;
   }
  goto ret0;

 L587: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L588;
    }
  goto ret0;

 L588: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L589;
  goto ret0;

 L589: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L590;
    }
  goto ret0;

 L590: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L591;
  goto ret0;

 L591: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L592;
  goto ret0;

 L592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L593;
    }
  goto ret0;

 L593: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1926 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI))
    {
      return 60;  /* smulsi3_highpart_internal */
    }
 L641: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1960 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 62;  /* smulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L611: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L612;
    }
  goto ret0;

 L612: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L613;
  goto ret0;

 L613: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L614;
    }
  goto ret0;

 L614: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L615;
  goto ret0;

 L615: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L616;
  goto ret0;

 L616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L617;
    }
  goto ret0;

 L617: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1926 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI))
    {
      return 61;  /* umulsi3_highpart_internal */
    }
 L665: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1960 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 63;  /* umulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L682: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == MULT)
    goto L683;
  goto ret0;

 L683: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == DImode)
    goto L9372;
  goto ret0;

 L9372: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x6))
    {
    case SIGN_EXTEND:
      goto L684;
    case ZERO_EXTEND:
      goto L710;
    default:
     break;
   }
  goto ret0;

 L684: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L685;
    }
  goto ret0;

 L685: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == SIGN_EXTEND)
    goto L686;
  goto ret0;

 L686: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L687;
    }
  goto ret0;

 L687: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L688;
  goto ret0;

 L688: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L689;
  goto ret0;

 L689: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L690;
    }
  goto ret0;

 L690: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1975 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 64;  /* *smulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L710: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L711;
    }
  goto ret0;

 L711: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == ZERO_EXTEND)
    goto L712;
  goto ret0;

 L712: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L713;
    }
  goto ret0;

 L713: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L714;
  goto ret0;

 L714: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L715;
  goto ret0;

 L715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L716;
    }
  goto ret0;

 L716: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1975 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULHI))
    {
      return 65;  /* *umulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L1203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1204;
    }
  goto ret0;

 L1204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1205;
    }
  goto ret0;

 L1205: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1206;
  goto ret0;

 L1206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1207;
    }
  goto ret0;

 L1207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1208;
  goto ret0;

 L1208: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1209;
  goto ret0;

 L1209: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120))
    {
      return 117;  /* divmodsi4 */
    }
  goto ret0;

 L1225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1226;
    }
  goto ret0;

 L1226: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1227;
    }
  goto ret0;

 L1227: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1228;
  goto ret0;

 L1228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1229;
    }
  goto ret0;

 L1229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L1230;
  goto ret0;

 L1230: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1231;
  goto ret0;

 L1231: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      return 119;  /* udivmodsi4 */
    }
  goto ret0;

 L1827: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L9374;
    case SFmode:
      goto L9375;
    default:
      break;
    }
  goto ret0;

 L9374: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1828;
    }
  goto ret0;

 L1828: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1829;
  goto ret0;

 L1829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1830;
    }
  goto ret0;

 L1830: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W))
    {
      return 223;  /* fix_truncdfsi2_macro */
    }
  goto ret0;

 L9375: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1846;
    }
  goto ret0;

 L1846: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1847;
  goto ret0;

 L1847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1848;
    }
  goto ret0;

 L1848: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3154 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W))
    {
      return 225;  /* fix_truncsfsi2_macro */
    }
  goto ret0;

 L9366: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L4079;
  goto ret0;

 L4079: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4080;
  goto ret0;

 L4080: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4081;
  goto ret0;

 L4081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 3
      && (
#line 6331 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 571;  /* tls_get_tp_si */
    }
  goto ret0;

 L9367: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 41)
    goto L4404;
  goto ret0;

 L4404: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4405;
    }
  goto ret0;

 L4405: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4406;
    }
  goto ret0;

 L4406: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4407;
    }
  goto ret0;

 L4407: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (GET_MODE (x3) == SImode)
    goto L9376;
  goto ret0;

 L9376: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L4408;
    case MINUS:
      goto L4425;
    case IOR:
      goto L4442;
    case XOR:
      goto L4459;
    case AND:
      goto L4476;
    case REG:
    case SUBREG:
      goto L9381;
    default:
      goto ret0;
   }
 L9381: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4536;
    }
  goto ret0;

 L4408: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4409;
  goto ret0;

 L4409: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4410;
    }
  goto ret0;

 L4410: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4411;
  goto ret0;

 L4411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4412;
  goto ret0;

 L4412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 41)
    goto L4413;
  goto ret0;

 L4413: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4414;
  goto ret0;

 L4414: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4415;
  goto ret0;

 L4415: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3]))
    goto L4416;
  goto ret0;

 L4416: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 215 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 591;  /* sync_new_add_12 */
    }
  goto ret0;

 L4425: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4426;
  goto ret0;

 L4426: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4427;
    }
  goto ret0;

 L4427: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4428;
  goto ret0;

 L4428: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4429;
  goto ret0;

 L4429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 41)
    goto L4430;
  goto ret0;

 L4430: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4431;
  goto ret0;

 L4431: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4432;
  goto ret0;

 L4432: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3]))
    goto L4433;
  goto ret0;

 L4433: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 215 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 592;  /* sync_new_sub_12 */
    }
  goto ret0;

 L4442: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4443;
  goto ret0;

 L4443: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4444;
    }
  goto ret0;

 L4444: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4445;
  goto ret0;

 L4445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4446;
  goto ret0;

 L4446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 41)
    goto L4447;
  goto ret0;

 L4447: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4448;
  goto ret0;

 L4448: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4449;
  goto ret0;

 L4449: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3]))
    goto L4450;
  goto ret0;

 L4450: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 215 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 593;  /* sync_new_ior_12 */
    }
  goto ret0;

 L4459: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4460;
  goto ret0;

 L4460: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4461;
    }
  goto ret0;

 L4461: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4462;
  goto ret0;

 L4462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4463;
  goto ret0;

 L4463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 41)
    goto L4464;
  goto ret0;

 L4464: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4465;
  goto ret0;

 L4465: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4466;
  goto ret0;

 L4466: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3]))
    goto L4467;
  goto ret0;

 L4467: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 215 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 594;  /* sync_new_xor_12 */
    }
  goto ret0;

 L4476: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4477;
  goto ret0;

 L4477: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4478;
    }
  goto ret0;

 L4478: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4479;
  goto ret0;

 L4479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4480;
  goto ret0;

 L4480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 41)
    goto L4481;
  goto ret0;

 L4481: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4482;
  goto ret0;

 L4482: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4483;
  goto ret0;

 L4483: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3]))
    goto L4484;
  goto ret0;

 L4484: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 215 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 595;  /* sync_new_and_12 */
    }
  goto ret0;

 L4536: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4537;
  goto ret0;

 L4537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4538;
  goto ret0;

 L4538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 41)
    goto L4539;
  goto ret0;

 L4539: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4540;
  goto ret0;

 L4540: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L4541;
  goto ret0;

 L4541: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3]))
    goto L4542;
  goto ret0;

 L4542: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (rtx_equal_p (x3, operands[4])
      && 
#line 322 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 598;  /* sync_new_nand_12 */
    }
  goto ret0;

 L4113: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4114;
  goto ret0;

 L4114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4115;
  goto ret0;

 L4115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9382;
  goto ret0;

 L9382: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE)
    goto L9386;
  goto ret0;

 L9386: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L9390;
    case 4:
      goto L9391;
    case 3:
      goto L9392;
    case 1:
      goto L9393;
    default:
      break;
    }
  goto ret0;

 L9390: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 37)
    goto L4116;
  goto ret0;

 L4116: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4117;
    }
  goto ret0;

 L4117: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4118;
    }
  goto ret0;

 L4118: ATTRIBUTE_UNUSED_LABEL
  if (
#line 52 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 576;  /* sync_compare_and_swapsi */
    }
  goto ret0;

 L9391: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 38)
    goto L4136;
  goto ret0;

 L4136: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4137;
    }
  goto ret0;

 L4137: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4138;
    }
  goto ret0;

 L4138: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4139;
    }
  goto ret0;

 L4139: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L4140;
    }
  goto ret0;

 L4140: ATTRIBUTE_UNUSED_LABEL
  if (
#line 85 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 578;  /* compare_and_swap_12 */
    }
  goto ret0;

 L9392: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 42)
    goto L4282;
  goto ret0;

 L4282: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4283;
    }
  goto ret0;

 L4283: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4284;
    }
  goto ret0;

 L4284: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == SImode)
    goto L9394;
  goto ret0;

 L9394: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L4285;
    case MINUS:
      goto L4313;
    case IOR:
      goto L4341;
    case XOR:
      goto L4369;
    case AND:
      goto L4397;
    case REG:
    case SUBREG:
      goto L9399;
    default:
      goto ret0;
   }
 L9399: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4527;
    }
  goto ret0;

 L4285: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4286;
  goto ret0;

 L4286: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4287;
    }
  goto ret0;

 L4287: ATTRIBUTE_UNUSED_LABEL
  if (
#line 173 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 586;  /* sync_old_add_12 */
    }
  goto ret0;

 L4313: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4314;
  goto ret0;

 L4314: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4315;
    }
  goto ret0;

 L4315: ATTRIBUTE_UNUSED_LABEL
  if (
#line 173 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 587;  /* sync_old_sub_12 */
    }
  goto ret0;

 L4341: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4342;
  goto ret0;

 L4342: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4343;
    }
  goto ret0;

 L4343: ATTRIBUTE_UNUSED_LABEL
  if (
#line 173 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 588;  /* sync_old_ior_12 */
    }
  goto ret0;

 L4369: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4370;
  goto ret0;

 L4370: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4371;
    }
  goto ret0;

 L4371: ATTRIBUTE_UNUSED_LABEL
  if (
#line 173 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 589;  /* sync_old_xor_12 */
    }
  goto ret0;

 L4397: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4398;
  goto ret0;

 L4398: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4399;
    }
  goto ret0;

 L4399: ATTRIBUTE_UNUSED_LABEL
  if (
#line 173 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 590;  /* sync_old_and_12 */
    }
  goto ret0;

 L4527: ATTRIBUTE_UNUSED_LABEL
  if (
#line 282 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 597;  /* sync_old_nand_12 */
    }
  goto ret0;

 L9393: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 39)
    goto L4564;
  goto ret0;

 L4564: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode)
    goto L9400;
  goto ret0;

 L9400: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L4565;
    case MINUS:
      goto L4587;
    default:
     break;
   }
  goto ret0;

 L4565: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4566;
  goto ret0;

 L4566: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4567;
    }
  goto ret0;

 L4567: ATTRIBUTE_UNUSED_LABEL
  if (
#line 349 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 601;  /* sync_old_addsi */
    }
  goto ret0;

 L4587: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4588;
  goto ret0;

 L4588: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4589;
    }
  goto ret0;

 L4589: ATTRIBUTE_UNUSED_LABEL
  if (
#line 366 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 603;  /* sync_old_subsi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_14 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9353;
    case DImode:
      goto L9351;
    case TImode:
      goto L9352;
    default:
      break;
    }
 L3648: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L3649;
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3734;
    }
  goto ret0;

 L9353: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 28)
    goto L3690;
 L9350: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L190;
    }
 L9354: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4158;
    }
  goto L3648;

 L3690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 6)
    goto L3691;
  x2 = XEXP (x1, 0);
  goto L9350;

 L3691: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3692;
  x2 = XEXP (x1, 0);
  goto L9350;

 L3692: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3693;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9350;

 L3693: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3694;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9350;

 L3694: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5749 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP))
    {
      return 532;  /* restore_gp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9350;

 L190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9355;
  x2 = XEXP (x1, 0);
  goto L9354;

 L9355: ATTRIBUTE_UNUSED_LABEL
  tem = recog_13 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L9354;

 L4158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9402;
  x2 = XEXP (x1, 0);
  goto L3648;

 L9402: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE)
    goto L9404;
  x2 = XEXP (x1, 0);
  goto L3648;

 L9404: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 3:
      goto L9406;
    case 4:
      goto L9407;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L9406: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 42)
    goto L4159;
  x2 = XEXP (x1, 0);
  goto L3648;

 L4159: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4160;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L4160: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4161;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L4161: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == SImode)
    goto L9408;
  x2 = XEXP (x1, 0);
  goto L3648;

 L9408: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L4162;
    case MINUS:
      goto L4183;
    case IOR:
      goto L4204;
    case XOR:
      goto L4225;
    case AND:
      goto L4246;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3648;

 L4162: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4163;
  x2 = XEXP (x1, 0);
  goto L3648;

 L4163: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4164;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L4164: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4165;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4166;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4166: ATTRIBUTE_UNUSED_LABEL
  if (
#line 136 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 581;  /* sync_add_12 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4183: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4184;
  x2 = XEXP (x1, 0);
  goto L3648;

 L4184: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4185;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L4185: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4186;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4186: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4187;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4187: ATTRIBUTE_UNUSED_LABEL
  if (
#line 136 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 582;  /* sync_sub_12 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4204: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4205;
  x2 = XEXP (x1, 0);
  goto L3648;

 L4205: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4206;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L4206: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4207;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4208;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4208: ATTRIBUTE_UNUSED_LABEL
  if (
#line 136 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 583;  /* sync_ior_12 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4225: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4226;
  x2 = XEXP (x1, 0);
  goto L3648;

 L4226: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4227;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L4227: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4228;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4229;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4229: ATTRIBUTE_UNUSED_LABEL
  if (
#line 136 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 584;  /* sync_xor_12 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4246: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4247;
  x2 = XEXP (x1, 0);
  goto L3648;

 L4247: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L4248;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L4248: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4249;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4250;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4250: ATTRIBUTE_UNUSED_LABEL
  if (
#line 136 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 585;  /* sync_and_12 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L9407: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 42)
    goto L4489;
  x2 = XEXP (x1, 0);
  goto L3648;

 L4489: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4490;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L4490: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4491;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L4491: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[0]))
    goto L4492;
  x2 = XEXP (x1, 0);
  goto L3648;

 L4492: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4493;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L4493: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4494;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L4495;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4495: ATTRIBUTE_UNUSED_LABEL
  if (
#line 247 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 596;  /* sync_nand_12 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L9351: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L205;
    }
  goto L3648;

 L205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L9413;
  x2 = XEXP (x1, 0);
  goto L3648;

 L9413: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L206;
    case TRUNCATE:
      goto L732;
    case DIV:
      goto L1214;
    case UDIV:
      goto L1236;
    case UNSPEC:
      goto L9420;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L9417;
    case SUBREG:
    case MEM:
      goto L9419;
    default:
      x2 = XEXP (x1, 0);
      goto L3648;
   }
 L9417: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2017;
    }
 L9419: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4123;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L206: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L9422;
  x2 = XEXP (x1, 0);
  goto L3648;

 L9422: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L449;
    case ZERO_EXTEND:
      goto L468;
    case REG:
    case SUBREG:
      goto L9421;
    default:
      x2 = XEXP (x1, 0);
      goto L3648;
   }
 L9421: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L207;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L449: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L450;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L450: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L451;
  x2 = XEXP (x1, 0);
  goto L3648;

 L451: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L452;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L452: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L453;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L454;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L454: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1808 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000))
    {
      return 50;  /* mulsidi3_32bit_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L468: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L469;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L470;
  x2 = XEXP (x1, 0);
  goto L3648;

 L470: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L471;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L471: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L472;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L473;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L473: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1808 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000))
    {
      return 51;  /* umulsidi3_32bit_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L208;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L208: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L209;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L210;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L210: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_DMUL3) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 34;  /* muldi3_mul3 */
    }
 L252: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1456 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 38;  /* muldi3_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L733;
  x2 = XEXP (x1, 0);
  goto L3648;

 L733: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == MULT)
    goto L734;
  x2 = XEXP (x1, 0);
  goto L3648;

 L734: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == TImode)
    goto L9424;
  x2 = XEXP (x1, 0);
  goto L3648;

 L9424: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L735;
    case ZERO_EXTEND:
      goto L759;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3648;

 L735: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L736;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L736: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L737;
  x2 = XEXP (x1, 0);
  goto L3648;

 L737: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L738;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L738: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L739;
  x2 = XEXP (x1, 0);
  goto L3648;

 L739: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L740;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L741;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L741: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 66;  /* smuldi3_highpart */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L759: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L760;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L760: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L761;
  x2 = XEXP (x1, 0);
  goto L3648;

 L761: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L762;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L762: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L763;
  x2 = XEXP (x1, 0);
  goto L3648;

 L763: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L764;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L765;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L765: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 67;  /* umuldi3_highpart */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L1214: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1215;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L1215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1216;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L1216: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1217;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L1217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1218;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L1218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MOD)
    goto L1219;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L1219: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1220;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L1220: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 118;  /* divmoddi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L1236: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1237;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L1237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1238;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L1238: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1239;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L1239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1240;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L1240: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UMOD)
    goto L1241;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L1241: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1242;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L1242: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 120;  /* udivmoddi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L9420: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L4090;
  x2 = XEXP (x1, 0);
  goto L3648;

 L4090: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4091;
  x2 = XEXP (x1, 0);
  goto L3648;

 L4091: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4092;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4092: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 3
      && (
#line 6331 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 572;  /* tls_get_tp_di */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L2017: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2018;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L2018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2019;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L2019: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3677 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected))
    {
      return 251;  /* *lea64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4123: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4124;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4125;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L9426;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L9426: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE)
    goto L9428;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L9428: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L9430;
    case 1:
      goto L9431;
    default:
      break;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L9430: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 37)
    goto L4126;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4126: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L4127;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4127: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L4128;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4128: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 52 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 577;  /* sync_compare_and_swapdi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L9431: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 39)
    goto L4575;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4575: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode)
    goto L9432;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L9432: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L4576;
    case MINUS:
      goto L4598;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4576: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4577;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4577: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L4578;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4578: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 349 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 602;  /* sync_old_adddi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4598: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4599;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4599: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L4600;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L4600: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 366 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 604;  /* sync_old_subdi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L9352: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TImode))
    {
      operands[0] = x2;
      goto L795;
    }
  goto L3648;

 L795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == MULT)
    goto L796;
  x2 = XEXP (x1, 0);
  goto L3648;

 L796: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode)
    goto L9434;
  x2 = XEXP (x1, 0);
  goto L3648;

 L9434: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L797;
    case ZERO_EXTEND:
      goto L816;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3648;

 L797: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L798;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L798: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L799;
  x2 = XEXP (x1, 0);
  goto L3648;

 L799: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L800;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L800: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L801;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, TImode))
    {
      operands[3] = x2;
      goto L802;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L802: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2037 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 70;  /* mulditi3_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L816: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L817;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L817: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L818;
  x2 = XEXP (x1, 0);
  goto L3648;

 L818: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L819;
    }
  x2 = XEXP (x1, 0);
  goto L3648;

 L819: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L820;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, TImode))
    {
      operands[3] = x2;
      goto L821;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L821: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2037 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 71;  /* umulditi3_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3648;

 L3649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9436;
    case DImode:
      goto L9437;
    default:
      break;
    }
  goto ret0;

 L9436: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3650;
    }
  goto ret0;

 L3650: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3651;
  goto ret0;

 L3651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3652;
  goto ret0;

 L3652: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3653;

 L3653: ATTRIBUTE_UNUSED_LABEL
  if (
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return 525;  /* tablejumpsi */
    }
  goto ret0;

 L9437: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3658;
    }
  goto ret0;

 L3658: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3659;
  goto ret0;

 L3659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3660;
  goto ret0;

 L3660: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3661;

 L3661: ATTRIBUTE_UNUSED_LABEL
  if (
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return 526;  /* tablejumpdi */
    }
  goto ret0;

 L3734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3735;
  goto ret0;

 L3735: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3736;
  goto ret0;

 L3736: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3737;
    }
 L3849: ATTRIBUTE_UNUSED_LABEL
  if (const_call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3850;
    }
 L3892: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3893;
    }
  goto ret0;

 L3737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3738;

 L3738: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3739;
    case CLOBBER:
      goto L3808;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3849;

 L3739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3740;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3849;

 L3740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3741;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3849;

 L3741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3742;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3849;

 L3742: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3743;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3849;

 L3743: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5900 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 539;  /* sibcall_value_multiple_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3849;

 L3808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 544;  /* call_value_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3849;

 L3850: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3851;

 L3851: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CONST_INT)
    goto L9438;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3892;

 L9438: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x1, 0) == 1L)
    goto L9440;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3892;

 L9440: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 546;  /* call_value_internal_direct */
    }
 L9441: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6072 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 547;  /* call_value_direct_split */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3892;

 L3893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3894;

 L3894: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3895;
  goto ret0;

 L3895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3896;
    }
  goto ret0;

 L3896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3897;
  goto ret0;

 L3897: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3898;
  goto ret0;

 L3898: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3899;
  goto ret0;

 L3899: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 548;  /* call_value_multiple_internal */
    }
 L3929: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6106 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 549;  /* call_value_multiple_split */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_15 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L263;
    case MINUS:
      goto L343;
    case UNSPEC:
      goto L9464;
    case SUBREG:
    case MEM:
      goto L9458;
    default:
      goto ret0;
   }
 L9458: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4264;
    }
  goto ret0;

 L263: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L264;
  goto ret0;

 L264: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L265;
    }
  goto ret0;

 L265: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L266;
    }
  goto ret0;

 L266: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L267;
    }
  goto ret0;

 L267: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L268;
  goto ret0;

 L268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L269;
    }
  goto ret0;

 L269: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L270;
  goto ret0;

 L270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L271;
    }
  goto ret0;

 L271: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1513 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB && !TARGET_MIPS16))
    {
      return 39;  /* *mul_acc_si */
    }
 L292: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS3900 && !TARGET_MIPS16))
    {
      return 40;  /* *mul_acc_si_r3900 */
    }
  goto ret0;

 L343: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L344;
    }
  goto ret0;

 L344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L345;
  goto ret0;

 L345: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L346;
    }
  goto ret0;

 L346: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L347;
    }
  goto ret0;

 L347: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L348;
  goto ret0;

 L348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L349;
    }
  goto ret0;

 L349: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L350;
  goto ret0;

 L350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L351;
    }
  goto ret0;

 L351: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1602 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC))
    {
      return 43;  /* *msac_using_macc */
    }
 L402: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1742 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB))
    {
      return 46;  /* *mul_sub_si */
    }
  goto ret0;

 L9464: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L9469;
    case 3:
      goto L9471;
    default:
      break;
    }
  goto ret0;

 L9469: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 331L:
      goto L5633;
    case 332L:
      goto L5658;
    case 418L:
      goto L6268;
    case 420L:
      goto L6318;
    default:
      break;
    }
  goto ret0;

 L5633: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5634;
    }
  goto ret0;

 L5634: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5635;
    }
  goto ret0;

 L5635: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5636;
  goto ret0;

 L5636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5637;
  goto ret0;

 L5637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 331)
    goto L5638;
  goto ret0;

 L5638: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5639;
  goto ret0;

 L5639: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5640;
  goto ret0;

 L5640: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5641;
  goto ret0;

 L5641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L5642;
    }
  goto ret0;

 L5642: ATTRIBUTE_UNUSED_LABEL
  if (
#line 453 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 727;  /* mips_muleq_s_w_phl */
    }
  goto ret0;

 L5658: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5659;
    }
  goto ret0;

 L5659: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5660;
    }
  goto ret0;

 L5660: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5661;
  goto ret0;

 L5661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5662;
  goto ret0;

 L5662: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 332)
    goto L5663;
  goto ret0;

 L5663: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5664;
  goto ret0;

 L5664: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5665;
  goto ret0;

 L5665: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5666;
  goto ret0;

 L5666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L5667;
    }
  goto ret0;

 L5667: ATTRIBUTE_UNUSED_LABEL
  if (
#line 467 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 728;  /* mips_muleq_s_w_phr */
    }
  goto ret0;

 L6268: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6269;
    }
  goto ret0;

 L6269: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6270;
    }
  goto ret0;

 L6270: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6271;
  goto ret0;

 L6271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6272;
  goto ret0;

 L6272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 418)
    goto L6273;
  goto ret0;

 L6273: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6274;
  goto ret0;

 L6274: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6275;
  goto ret0;

 L6275: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6276;
  goto ret0;

 L6276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6277;
    }
  goto ret0;

 L6277: ATTRIBUTE_UNUSED_LABEL
  if (
#line 209 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 789;  /* mips_mulq_rs_w */
    }
  goto ret0;

 L6318: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6319;
    }
  goto ret0;

 L6319: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6320;
    }
  goto ret0;

 L6320: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6321;
  goto ret0;

 L6321: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6322;
  goto ret0;

 L6322: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 420)
    goto L6323;
  goto ret0;

 L6323: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6324;
  goto ret0;

 L6324: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6325;
  goto ret0;

 L6325: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6326;
  goto ret0;

 L6326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6327;
    }
  goto ret0;

 L6327: ATTRIBUTE_UNUSED_LABEL
  if (
#line 237 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 791;  /* mips_mulq_s_w */
    }
  goto ret0;

 L9471: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 363)
    goto L5978;
  goto ret0;

 L5978: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5979;
    }
  goto ret0;

 L5979: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5980;
    }
  goto ret0;

 L5980: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L5981;
  goto ret0;

 L5981: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5982;
  goto ret0;

 L5982: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L5983;
  goto ret0;

 L5983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 363)
    goto L5984;
  goto ret0;

 L5984: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5985;
  goto ret0;

 L5985: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5986;
  goto ret0;

 L5986: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L5987;
  goto ret0;

 L5987: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L5988;
  goto ret0;

 L5988: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187)
    goto L5989;
  goto ret0;

 L5989: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 363)
    goto L5990;
  goto ret0;

 L5990: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5991;
  goto ret0;

 L5991: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 923 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 763;  /* mips_extpdp */
    }
  goto ret0;

 L4264: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4265;
  goto ret0;

 L4265: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4266;
  goto ret0;

 L4266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 42)
    goto L4267;
  goto ret0;

 L4267: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4268;
    }
  goto ret0;

 L4268: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4269;
    }
  goto ret0;

 L4269: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == SImode)
    goto L9474;
  goto ret0;

 L9474: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L4270;
    case MINUS:
      goto L4298;
    case IOR:
      goto L4326;
    case XOR:
      goto L4354;
    case AND:
      goto L4382;
    case REG:
    case SUBREG:
      goto L9479;
    default:
      goto ret0;
   }
 L9479: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4514;
    }
  goto ret0;

 L4270: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4271;
  goto ret0;

 L4271: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4272;
    }
  goto ret0;

 L4272: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4273;
  goto ret0;

 L4273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4274;
    }
  goto ret0;

 L4274: ATTRIBUTE_UNUSED_LABEL
  if (
#line 173 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 586;  /* sync_old_add_12 */
    }
  goto ret0;

 L4298: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4299;
  goto ret0;

 L4299: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4300;
    }
  goto ret0;

 L4300: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4301;
  goto ret0;

 L4301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4302;
    }
  goto ret0;

 L4302: ATTRIBUTE_UNUSED_LABEL
  if (
#line 173 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 587;  /* sync_old_sub_12 */
    }
  goto ret0;

 L4326: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4327;
  goto ret0;

 L4327: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4328;
    }
  goto ret0;

 L4328: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4329;
  goto ret0;

 L4329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4330;
    }
  goto ret0;

 L4330: ATTRIBUTE_UNUSED_LABEL
  if (
#line 173 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 588;  /* sync_old_ior_12 */
    }
  goto ret0;

 L4354: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4355;
  goto ret0;

 L4355: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4356;
    }
  goto ret0;

 L4356: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4357;
  goto ret0;

 L4357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4358;
    }
  goto ret0;

 L4358: ATTRIBUTE_UNUSED_LABEL
  if (
#line 173 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 589;  /* sync_old_xor_12 */
    }
  goto ret0;

 L4382: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4383;
  goto ret0;

 L4383: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L4384;
    }
  goto ret0;

 L4384: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4385;
  goto ret0;

 L4385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4386;
    }
  goto ret0;

 L4386: ATTRIBUTE_UNUSED_LABEL
  if (
#line 173 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 590;  /* sync_old_and_12 */
    }
  goto ret0;

 L4514: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4515;
  goto ret0;

 L4515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L4516;
    }
  goto ret0;

 L4516: ATTRIBUTE_UNUSED_LABEL
  if (
#line 282 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 597;  /* sync_old_nand_12 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_16 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9450;
    case DImode:
      goto L9451;
    case V2HImode:
      goto L9452;
    case V2HQmode:
      goto L9453;
    case HQmode:
      goto L9454;
    case SQmode:
      goto L9455;
    default:
      break;
    }
 L3818: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3819;
    }
  goto ret0;

 L9450: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L262;
    }
  goto L3818;

 L262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9456;
  x2 = XEXP (x1, 0);
  goto L3818;

 L9456: ATTRIBUTE_UNUSED_LABEL
  tem = recog_15 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L3818;

 L9451: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L485;
    }
  goto L3818;

 L485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L486;
  x2 = XEXP (x1, 0);
  goto L3818;

 L486: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L9480;
  x2 = XEXP (x1, 0);
  goto L3818;

 L9480: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L487;
    case ZERO_EXTEND:
      goto L508;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3818;

 L487: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L488;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L488: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L489;
  x2 = XEXP (x1, 0);
  goto L3818;

 L489: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L490;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L490: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L491;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, TImode))
    {
      operands[3] = x2;
      goto L492;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L492: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L493;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L494;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L494: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1820 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 52;  /* mulsidi3_64bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L508: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L509;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L509: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L510;
  x2 = XEXP (x1, 0);
  goto L3818;

 L510: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L511;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L511: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L512;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, TImode))
    {
      operands[3] = x2;
      goto L513;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L513: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L514;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L515;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L515: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1820 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 53;  /* umulsidi3_64bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L9452: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L5557;
    }
  goto L3818;

 L5557: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode)
    goto L9482;
  x2 = XEXP (x1, 0);
  goto L3818;

 L9482: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L9488;
    case MULT:
      goto L6218;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L3818;

 L9488: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2)
    goto L9493;
  x2 = XEXP (x1, 0);
  goto L3818;

 L9493: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 328L:
      goto L5558;
    case 329L:
      goto L5583;
    case 330L:
      goto L5608;
    case 417L:
      goto L6243;
    case 419L:
      goto L6293;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L5558: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5559;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L5559: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5560;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L5560: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5561;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5562;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 328)
    goto L5563;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5563: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5564;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5564: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5565;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5565: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5566;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L5567;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5567: ATTRIBUTE_UNUSED_LABEL
  if (
#line 409 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 724;  /* mips_muleu_s_ph_qbl */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5583: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5584;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L5584: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5585;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L5585: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5586;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5586: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5587;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 329)
    goto L5588;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5588: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5589;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5589: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5590;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5590: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5591;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L5592;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5592: ATTRIBUTE_UNUSED_LABEL
  if (
#line 423 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 725;  /* mips_muleu_s_ph_qbr */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5608: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5609;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L5609: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5610;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L5610: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5611;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5612;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5612: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L5613;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5613: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5614;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5614: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5615;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5615: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5616;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L5617;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L5617: ATTRIBUTE_UNUSED_LABEL
  if (
#line 438 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 726;  /* mips_mulq_rs_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6243: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6244;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L6244: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6245;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L6245: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6246;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6247;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 417)
    goto L6248;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6248: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6249;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6249: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6250;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6250: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6251;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6252;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6252: ATTRIBUTE_UNUSED_LABEL
  if (
#line 195 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 788;  /* mips_mul_s_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6293: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6294;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L6294: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6295;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L6295: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6296;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6297;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 419)
    goto L6298;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6298: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6299;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6299: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6300;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6300: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6301;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6302;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6302: ATTRIBUTE_UNUSED_LABEL
  if (
#line 223 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 790;  /* mips_mulq_s_ph */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6218: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6219;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L6219: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6220;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L6220: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6221;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6222;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 416)
    goto L6223;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6223: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6224;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6224: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6225;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6225: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6226;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6227;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6227: ATTRIBUTE_UNUSED_LABEL
  if (
#line 181 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 787;  /* mulv2hi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L9453: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HQmode))
    {
      operands[0] = x2;
      goto L6970;
    }
  goto L3818;

 L6970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HQmode
      && GET_CODE (x2) == SS_MULT)
    goto L6971;
  x2 = XEXP (x1, 0);
  goto L3818;

 L6971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HQmode))
    {
      operands[1] = x3;
      goto L6972;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L6972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HQmode))
    {
      operands[2] = x3;
      goto L6973;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L6973: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6974;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6974: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6975;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L6976;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6976: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6977;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6977: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6978;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6978: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6979;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6980;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6980: ATTRIBUTE_UNUSED_LABEL
  if (
#line 23 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 872;  /* ssmulv2hq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L9454: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HQmode))
    {
      operands[0] = x2;
      goto L6995;
    }
  goto L3818;

 L6995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HQmode
      && GET_CODE (x2) == SS_MULT)
    goto L6996;
  x2 = XEXP (x1, 0);
  goto L3818;

 L6996: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HQmode))
    {
      operands[1] = x3;
      goto L6997;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L6997: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HQmode))
    {
      operands[2] = x3;
      goto L6998;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L6998: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6999;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L6999: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7000;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L7001;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7001: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7002;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7002: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7003;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7003: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7004;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L7005;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7005: ATTRIBUTE_UNUSED_LABEL
  if (
#line 23 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 873;  /* ssmulhq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L9455: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SQmode))
    {
      operands[0] = x2;
      goto L7020;
    }
  goto L3818;

 L7020: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SQmode
      && GET_CODE (x2) == SS_MULT)
    goto L7021;
  x2 = XEXP (x1, 0);
  goto L3818;

 L7021: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SQmode))
    {
      operands[1] = x3;
      goto L7022;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L7022: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SQmode))
    {
      operands[2] = x3;
      goto L7023;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L7023: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7024;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7024: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7025;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7025: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L7026;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7026: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7027;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7027: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7028;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7028: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7029;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L7030;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L7030: ATTRIBUTE_UNUSED_LABEL
  if (
#line 24 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 874;  /* ssmulsq3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3818;

 L3819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3820;
  goto ret0;

 L3820: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3821;
  goto ret0;

 L3821: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3822;
    }
 L3839: ATTRIBUTE_UNUSED_LABEL
  if (const_call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3840;
    }
 L3877: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3878;
    }
  goto ret0;

 L3822: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3823;

 L3823: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3824;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3839;

 L3824: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L3825;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3839;

 L3825: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3826;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3839;

 L3826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 6042 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 545;  /* call_value_split */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3839;

 L3840: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3841;

 L3841: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3842;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3877;

 L3842: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3843;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3877;

 L3843: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 546;  /* call_value_internal_direct */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3877;

 L3878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3879;

 L3879: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3880;
  goto ret0;

 L3880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3881;
    }
  goto ret0;

 L3881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3882;
  goto ret0;

 L3882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3883;
  goto ret0;

 L3883: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3884;
  goto ret0;

 L3884: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3885;
  goto ret0;

 L3885: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3886;
  goto ret0;

 L3886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 548;  /* call_value_multiple_internal */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_17 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 301L:
      goto L5266;
    case 303L:
      goto L5321;
    case 304L:
      goto L5354;
    case 324L:
      goto L5512;
    case 331L:
      goto L5647;
    case 332L:
      goto L5672;
    case 358L:
      goto L5922;
    case 359L:
      goto L5933;
    case 360L:
      goto L5944;
    case 361L:
      goto L5955;
    case 407L:
      goto L6168;
    case 408L:
      goto L6180;
    case 409L:
      goto L6192;
    case 418L:
      goto L6282;
    case 420L:
      goto L6332;
    default:
      break;
    }
  goto ret0;

 L5266: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5267;
    }
  goto ret0;

 L5267: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5268;
    }
  goto ret0;

 L5268: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5269;
  goto ret0;

 L5269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5270;
  goto ret0;

 L5270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5271;
  goto ret0;

 L5271: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5272;
  goto ret0;

 L5272: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 10 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 688;  /* mips_addq_s_w */
    }
  goto ret0;

 L5321: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5322;
    }
  goto ret0;

 L5322: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5323;
    }
  goto ret0;

 L5323: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5324;
  goto ret0;

 L5324: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5325;
  goto ret0;

 L5325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5326;
  goto ret0;

 L5326: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5327;
  goto ret0;

 L5327: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 84 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 693;  /* mips_subq_s_w */
    }
  goto ret0;

 L5354: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5355;
    }
  goto ret0;

 L5355: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5356;
    }
  goto ret0;

 L5356: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5357;
  goto ret0;

 L5357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 184)
    goto L5358;
  goto ret0;

 L5358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 304)
    goto L5359;
  goto ret0;

 L5359: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5360;
  goto ret0;

 L5360: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 98 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 696;  /* mips_addsc */
    }
  goto ret0;

 L5512: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5513;
    }
  goto ret0;

 L5513: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5514;
    }
  goto ret0;

 L5514: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5515;
  goto ret0;

 L5515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5516;
  goto ret0;

 L5516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 324)
    goto L5517;
  goto ret0;

 L5517: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5518;
  goto ret0;

 L5518: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 327 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 718;  /* mips_shll_s_w */
    }
  goto ret0;

 L5647: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5648;
    }
  goto ret0;

 L5648: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5649;
    }
  goto ret0;

 L5649: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5650;
  goto ret0;

 L5650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5651;
  goto ret0;

 L5651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 331)
    goto L5652;
  goto ret0;

 L5652: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5653;
  goto ret0;

 L5653: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 453 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 727;  /* mips_muleq_s_w_phl */
    }
  goto ret0;

 L5672: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5673;
    }
  goto ret0;

 L5673: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5674;
    }
  goto ret0;

 L5674: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5675;
  goto ret0;

 L5675: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5676;
  goto ret0;

 L5676: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 332)
    goto L5677;
  goto ret0;

 L5677: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5678;
  goto ret0;

 L5678: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 467 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 728;  /* mips_muleq_s_w_phr */
    }
  goto ret0;

 L5922: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5923;
    }
  goto ret0;

 L5923: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5924;
    }
  goto ret0;

 L5924: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5925;
  goto ret0;

 L5925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5926;
  goto ret0;

 L5926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 358)
    goto L5927;
  goto ret0;

 L5927: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5928;
  goto ret0;

 L5928: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 811 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 758;  /* mips_extr_w */
    }
  goto ret0;

 L5933: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5934;
    }
  goto ret0;

 L5934: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5935;
    }
  goto ret0;

 L5935: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5936;
  goto ret0;

 L5936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5937;
  goto ret0;

 L5937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 359)
    goto L5938;
  goto ret0;

 L5938: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5939;
  goto ret0;

 L5939: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 832 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 759;  /* mips_extr_r_w */
    }
  goto ret0;

 L5944: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5945;
    }
  goto ret0;

 L5945: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5946;
    }
  goto ret0;

 L5946: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5947;
  goto ret0;

 L5947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5948;
  goto ret0;

 L5948: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 360)
    goto L5949;
  goto ret0;

 L5949: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5950;
  goto ret0;

 L5950: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 853 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 760;  /* mips_extr_rs_w */
    }
  goto ret0;

 L5955: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5956;
    }
  goto ret0;

 L5956: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5957;
    }
  goto ret0;

 L5957: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5958;
  goto ret0;

 L5958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5959;
  goto ret0;

 L5959: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 361)
    goto L5960;
  goto ret0;

 L5960: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5961;
  goto ret0;

 L5961: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 875 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 761;  /* mips_extr_s_h */
    }
  goto ret0;

 L6168: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6169;
    }
  goto ret0;

 L6169: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L6170;
    }
  goto ret0;

 L6170: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6171;
  goto ret0;

 L6171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L6172;
  goto ret0;

 L6172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 407)
    goto L6173;
  goto ret0;

 L6173: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6174;
  goto ret0;

 L6174: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6175;
  goto ret0;

 L6175: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 186
      && 
#line 100 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 782;  /* mips_cmpgdu_eq_qb */
    }
  goto ret0;

 L6180: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6181;
    }
  goto ret0;

 L6181: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L6182;
    }
  goto ret0;

 L6182: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6183;
  goto ret0;

 L6183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L6184;
  goto ret0;

 L6184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 408)
    goto L6185;
  goto ret0;

 L6185: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6186;
  goto ret0;

 L6186: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6187;
  goto ret0;

 L6187: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 186
      && 
#line 115 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 783;  /* mips_cmpgdu_lt_qb */
    }
  goto ret0;

 L6192: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6193;
    }
  goto ret0;

 L6193: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L6194;
    }
  goto ret0;

 L6194: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6195;
  goto ret0;

 L6195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L6196;
  goto ret0;

 L6196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 409)
    goto L6197;
  goto ret0;

 L6197: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6198;
  goto ret0;

 L6198: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6199;
  goto ret0;

 L6199: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 186
      && 
#line 130 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 784;  /* mips_cmpgdu_le_qb */
    }
  goto ret0;

 L6282: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6283;
    }
  goto ret0;

 L6283: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6284;
    }
  goto ret0;

 L6284: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6285;
  goto ret0;

 L6285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6286;
  goto ret0;

 L6286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 418)
    goto L6287;
  goto ret0;

 L6287: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6288;
  goto ret0;

 L6288: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 209 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 789;  /* mips_mulq_rs_w */
    }
  goto ret0;

 L6332: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6333;
    }
  goto ret0;

 L6333: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6334;
    }
  goto ret0;

 L6334: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6335;
  goto ret0;

 L6335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6336;
  goto ret0;

 L6336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 420)
    goto L6337;
  goto ret0;

 L6337: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6338;
  goto ret0;

 L6338: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 237 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 791;  /* mips_mulq_s_w */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_18 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 337L:
      goto L5711;
    case 338L:
      goto L5724;
    case 339L:
      goto L5737;
    case 340L:
      goto L5750;
    case 341L:
      goto L5763;
    case 342L:
      goto L5776;
    case 343L:
      goto L5789;
    case 344L:
      goto L5802;
    case 345L:
      goto L5815;
    case 365L:
      goto L6002;
    case 445L:
      goto L6507;
    case 446L:
      goto L6520;
    case 447L:
      goto L6533;
    case 448L:
      goto L6546;
    default:
      break;
    }
  goto ret0;

 L5711: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5712;
    }
  goto ret0;

 L5712: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5713;
    }
  goto ret0;

 L5713: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L5714;
    }
  goto ret0;

 L5714: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5715;
  goto ret0;

 L5715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5716;
  goto ret0;

 L5716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 337)
    goto L5717;
  goto ret0;

 L5717: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5718;
  goto ret0;

 L5718: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5719;
  goto ret0;

 L5719: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 529 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 733;  /* mips_dpaq_s_w_ph */
    }
  goto ret0;

 L5724: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5725;
    }
  goto ret0;

 L5725: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5726;
    }
  goto ret0;

 L5726: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L5727;
    }
  goto ret0;

 L5727: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5728;
  goto ret0;

 L5728: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5729;
  goto ret0;

 L5729: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 338)
    goto L5730;
  goto ret0;

 L5730: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5731;
  goto ret0;

 L5731: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5732;
  goto ret0;

 L5732: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 545 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 734;  /* mips_dpsq_s_w_ph */
    }
  goto ret0;

 L5737: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5738;
    }
  goto ret0;

 L5738: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5739;
    }
  goto ret0;

 L5739: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L5740;
    }
  goto ret0;

 L5740: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5741;
  goto ret0;

 L5741: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5742;
  goto ret0;

 L5742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 339)
    goto L5743;
  goto ret0;

 L5743: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5744;
  goto ret0;

 L5744: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5745;
  goto ret0;

 L5745: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 561 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 735;  /* mips_mulsaq_s_w_ph */
    }
  goto ret0;

 L5750: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5751;
    }
  goto ret0;

 L5751: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5752;
    }
  goto ret0;

 L5752: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5753;
    }
  goto ret0;

 L5753: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5754;
  goto ret0;

 L5754: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5755;
  goto ret0;

 L5755: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 340)
    goto L5756;
  goto ret0;

 L5756: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5757;
  goto ret0;

 L5757: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5758;
  goto ret0;

 L5758: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 577 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 736;  /* mips_dpaq_sa_l_w */
    }
  goto ret0;

 L5763: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5764;
    }
  goto ret0;

 L5764: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5765;
    }
  goto ret0;

 L5765: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5766;
    }
  goto ret0;

 L5766: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5767;
  goto ret0;

 L5767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5768;
  goto ret0;

 L5768: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 341)
    goto L5769;
  goto ret0;

 L5769: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5770;
  goto ret0;

 L5770: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5771;
  goto ret0;

 L5771: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 593 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 737;  /* mips_dpsq_sa_l_w */
    }
  goto ret0;

 L5776: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5777;
    }
  goto ret0;

 L5777: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5778;
    }
  goto ret0;

 L5778: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L5779;
    }
  goto ret0;

 L5779: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5780;
  goto ret0;

 L5780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5781;
  goto ret0;

 L5781: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 342)
    goto L5782;
  goto ret0;

 L5782: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5783;
  goto ret0;

 L5783: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5784;
  goto ret0;

 L5784: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 609 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 738;  /* mips_maq_s_w_phl */
    }
  goto ret0;

 L5789: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5790;
    }
  goto ret0;

 L5790: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5791;
    }
  goto ret0;

 L5791: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L5792;
    }
  goto ret0;

 L5792: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5793;
  goto ret0;

 L5793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5794;
  goto ret0;

 L5794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 343)
    goto L5795;
  goto ret0;

 L5795: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5796;
  goto ret0;

 L5796: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5797;
  goto ret0;

 L5797: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 624 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 739;  /* mips_maq_s_w_phr */
    }
  goto ret0;

 L5802: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5803;
    }
  goto ret0;

 L5803: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5804;
    }
  goto ret0;

 L5804: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L5805;
    }
  goto ret0;

 L5805: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5806;
  goto ret0;

 L5806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5807;
  goto ret0;

 L5807: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 344)
    goto L5808;
  goto ret0;

 L5808: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5809;
  goto ret0;

 L5809: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5810;
  goto ret0;

 L5810: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 640 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 740;  /* mips_maq_sa_w_phl */
    }
  goto ret0;

 L5815: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5816;
    }
  goto ret0;

 L5816: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5817;
    }
  goto ret0;

 L5817: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L5818;
    }
  goto ret0;

 L5818: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5819;
  goto ret0;

 L5819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5820;
  goto ret0;

 L5820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 345)
    goto L5821;
  goto ret0;

 L5821: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5822;
  goto ret0;

 L5822: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L5823;
  goto ret0;

 L5823: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 655 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 741;  /* mips_maq_sa_w_phr */
    }
  goto ret0;

 L6002: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6003;
    }
  goto ret0;

 L6003: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6004;
    }
  goto ret0;

 L6004: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L6005;
  goto ret0;

 L6005: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6006;
  goto ret0;

 L6006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L6007;
  goto ret0;

 L6007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 365)
    goto L6008;
  goto ret0;

 L6008: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6009;
  goto ret0;

 L6009: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6010;
  goto ret0;

 L6010: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182
      && 
#line 966 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 765;  /* mips_mthlip */
    }
  goto ret0;

 L6507: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6508;
    }
  goto ret0;

 L6508: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6509;
    }
  goto ret0;

 L6509: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L6510;
    }
  goto ret0;

 L6510: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6511;
  goto ret0;

 L6511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6512;
  goto ret0;

 L6512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 445)
    goto L6513;
  goto ret0;

 L6513: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6514;
  goto ret0;

 L6514: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6515;
  goto ret0;

 L6515: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 541 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 816;  /* mips_dpaqx_s_w_ph */
    }
  goto ret0;

 L6520: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6521;
    }
  goto ret0;

 L6521: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6522;
    }
  goto ret0;

 L6522: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L6523;
    }
  goto ret0;

 L6523: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6524;
  goto ret0;

 L6524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6525;
  goto ret0;

 L6525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 446)
    goto L6526;
  goto ret0;

 L6526: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6527;
  goto ret0;

 L6527: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6528;
  goto ret0;

 L6528: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 556 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 817;  /* mips_dpaqx_sa_w_ph */
    }
  goto ret0;

 L6533: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6534;
    }
  goto ret0;

 L6534: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6535;
    }
  goto ret0;

 L6535: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L6536;
    }
  goto ret0;

 L6536: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6537;
  goto ret0;

 L6537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6538;
  goto ret0;

 L6538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 447)
    goto L6539;
  goto ret0;

 L6539: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6540;
  goto ret0;

 L6540: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6541;
  goto ret0;

 L6541: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 571 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 818;  /* mips_dpsqx_s_w_ph */
    }
  goto ret0;

 L6546: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6547;
    }
  goto ret0;

 L6547: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6548;
    }
  goto ret0;

 L6548: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[3] = x3;
      goto L6549;
    }
  goto ret0;

 L6549: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6550;
  goto ret0;

 L6550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6551;
  goto ret0;

 L6551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 448)
    goto L6552;
  goto ret0;

 L6552: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6553;
  goto ret0;

 L6553: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L6554;
  goto ret0;

 L6554: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 586 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT))
    {
      return 819;  /* mips_dpsqx_sa_w_ph */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_19 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 301L:
      goto L5277;
    case 303L:
      goto L5332;
    case 311L:
      goto L5418;
    case 323L:
      goto L5490;
    case 324L:
      goto L5523;
    case 328L:
      goto L5572;
    case 329L:
      goto L5597;
    case 330L:
      goto L5622;
    case 402L:
      goto L6131;
    case 417L:
      goto L6257;
    case 419L:
      goto L6307;
    case 431L:
      goto L6411;
    case 432L:
      goto L6422;
    default:
      break;
    }
  goto ret0;

 L5277: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5278;
    }
  goto ret0;

 L5278: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5279;
    }
  goto ret0;

 L5279: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5280;
  goto ret0;

 L5280: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5281;
  goto ret0;

 L5281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5282;
  goto ret0;

 L5282: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5283;
  goto ret0;

 L5283: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 689;  /* mips_addq_s_ph */
    }
  goto ret0;

 L5332: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5333;
    }
  goto ret0;

 L5333: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5334;
    }
  goto ret0;

 L5334: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5335;
  goto ret0;

 L5335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5336;
  goto ret0;

 L5336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5337;
  goto ret0;

 L5337: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5338;
  goto ret0;

 L5338: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 84 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 694;  /* mips_subq_s_ph */
    }
  goto ret0;

 L5418: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5419;
    }
  goto ret0;

 L5419: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5420;
    }
  goto ret0;

 L5420: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5421;
  goto ret0;

 L5421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5422;
  goto ret0;

 L5422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 311)
    goto L5423;
  goto ret0;

 L5423: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5424;
  goto ret0;

 L5424: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 182 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 704;  /* mips_precrq_rs_ph_w */
    }
  goto ret0;

 L5490: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5491;
    }
  goto ret0;

 L5491: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5492;
    }
  goto ret0;

 L5492: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5493;
  goto ret0;

 L5493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5494;
  goto ret0;

 L5494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 323)
    goto L5495;
  goto ret0;

 L5495: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5496;
  goto ret0;

 L5496: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 305 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 716;  /* mips_shll_ph */
    }
  goto ret0;

 L5523: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5524;
    }
  goto ret0;

 L5524: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5525;
    }
  goto ret0;

 L5525: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5526;
  goto ret0;

 L5526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5527;
  goto ret0;

 L5527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 324)
    goto L5528;
  goto ret0;

 L5528: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5529;
  goto ret0;

 L5529: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 327 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 719;  /* mips_shll_s_ph */
    }
  goto ret0;

 L5572: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5573;
    }
  goto ret0;

 L5573: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5574;
    }
  goto ret0;

 L5574: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5575;
  goto ret0;

 L5575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5576;
  goto ret0;

 L5576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 328)
    goto L5577;
  goto ret0;

 L5577: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5578;
  goto ret0;

 L5578: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 409 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 724;  /* mips_muleu_s_ph_qbl */
    }
  goto ret0;

 L5597: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5598;
    }
  goto ret0;

 L5598: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5599;
    }
  goto ret0;

 L5599: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5600;
  goto ret0;

 L5600: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5601;
  goto ret0;

 L5601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 329)
    goto L5602;
  goto ret0;

 L5602: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5603;
  goto ret0;

 L5603: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 423 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 725;  /* mips_muleu_s_ph_qbr */
    }
  goto ret0;

 L5622: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5623;
    }
  goto ret0;

 L5623: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5624;
    }
  goto ret0;

 L5624: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5625;
  goto ret0;

 L5625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5626;
  goto ret0;

 L5626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L5627;
  goto ret0;

 L5627: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5628;
  goto ret0;

 L5628: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 438 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 726;  /* mips_mulq_rs_ph */
    }
  goto ret0;

 L6131: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6132;
    }
  goto ret0;

 L6132: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6133;
    }
  goto ret0;

 L6133: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6134;
  goto ret0;

 L6134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6135;
  goto ret0;

 L6135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 402)
    goto L6136;
  goto ret0;

 L6136: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6137;
  goto ret0;

 L6137: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 35 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 777;  /* mips_addu_s_ph */
    }
  goto ret0;

 L6257: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6258;
    }
  goto ret0;

 L6258: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6259;
    }
  goto ret0;

 L6259: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6260;
  goto ret0;

 L6260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6261;
  goto ret0;

 L6261: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 417)
    goto L6262;
  goto ret0;

 L6262: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6263;
  goto ret0;

 L6263: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 195 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 788;  /* mips_mul_s_ph */
    }
  goto ret0;

 L6307: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6308;
    }
  goto ret0;

 L6308: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6309;
    }
  goto ret0;

 L6309: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6310;
  goto ret0;

 L6310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6311;
  goto ret0;

 L6311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 419)
    goto L6312;
  goto ret0;

 L6312: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6313;
  goto ret0;

 L6313: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 223 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 790;  /* mips_mulq_s_ph */
    }
  goto ret0;

 L6411: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6412;
    }
  goto ret0;

 L6412: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6413;
    }
  goto ret0;

 L6413: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6414;
  goto ret0;

 L6414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6415;
  goto ret0;

 L6415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 431)
    goto L6416;
  goto ret0;

 L6416: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6417;
  goto ret0;

 L6417: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 391 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 802;  /* mips_subu_ph */
    }
  goto ret0;

 L6422: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6423;
    }
  goto ret0;

 L6423: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6424;
    }
  goto ret0;

 L6424: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6425;
  goto ret0;

 L6425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6426;
  goto ret0;

 L6426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 432)
    goto L6427;
  goto ret0;

 L6427: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6428;
  goto ret0;

 L6428: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 404 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 803;  /* mips_subu_s_ph */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_20 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9498;
    case DImode:
      goto L9499;
    case V2HImode:
      goto L9500;
    case V4QImode:
      goto L9501;
    case UQQmode:
      goto L9502;
    case UHQmode:
      goto L9503;
    case UHAmode:
      goto L9504;
    case V4UQQmode:
      goto L9505;
    case V2UHQmode:
      goto L9506;
    case V2UHAmode:
      goto L9507;
    case HQmode:
      goto L9508;
    case SQmode:
      goto L9509;
    case HAmode:
      goto L9510;
    case SAmode:
      goto L9511;
    case V2HQmode:
      goto L9512;
    case V2HAmode:
      goto L9513;
    case DQmode:
      goto L9514;
    default:
      break;
    }
  goto ret0;

 L9498: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4604;
    }
  goto ret0;

 L4604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9515;
  goto ret0;

 L9515: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L4605;
    case MINUS:
      goto L4629;
    case UNSPEC:
      goto L9536;
    case SUBREG:
    case MEM:
      goto L9517;
    default:
      goto ret0;
   }
 L9517: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4689;
    }
  goto ret0;

 L4605: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4606;
    }
  goto ret0;

 L4606: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4607;
    }
  goto ret0;

 L4607: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4608;
  goto ret0;

 L4608: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4609;
  goto ret0;

 L4609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 40)
    goto L4610;
  goto ret0;

 L4610: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L4611;
  goto ret0;

 L4611: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4612;
  goto ret0;

 L4612: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 380 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 605;  /* sync_new_addsi */
    }
  goto ret0;

 L4629: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4630;
    }
  goto ret0;

 L4630: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4631;
    }
  goto ret0;

 L4631: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4632;
  goto ret0;

 L4632: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4633;
  goto ret0;

 L4633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 40)
    goto L4634;
  goto ret0;

 L4634: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L4635;
  goto ret0;

 L4635: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4636;
  goto ret0;

 L4636: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 397 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 607;  /* sync_new_subsi */
    }
  goto ret0;

 L9536: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L9554;
    case 3:
      goto L9557;
    case 1:
      goto L9558;
    default:
      break;
    }
  goto ret0;

 L9554: ATTRIBUTE_UNUSED_LABEL
  return recog_17 (x0, insn, pnum_clobbers);

 L9557: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 305L:
      goto L5365;
    case 362L:
      goto L5966;
    default:
      break;
    }
  goto ret0;

 L5365: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5366;
    }
  goto ret0;

 L5366: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5367;
    }
  goto ret0;

 L5367: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 184)
    goto L5368;
  goto ret0;

 L5368: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5369;
  goto ret0;

 L5369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5370;
  goto ret0;

 L5370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 305)
    goto L5371;
  goto ret0;

 L5371: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5372;
  goto ret0;

 L5372: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 113 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 697;  /* mips_addwc */
    }
  goto ret0;

 L5966: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5967;
    }
  goto ret0;

 L5967: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5968;
    }
  goto ret0;

 L5968: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == CCDSPmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 182)
    goto L5969;
  goto ret0;

 L5969: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5970;
  goto ret0;

 L5970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187)
    goto L5971;
  goto ret0;

 L5971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 362)
    goto L5972;
  goto ret0;

 L5972: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5973;
  goto ret0;

 L5973: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 898 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 762;  /* mips_extp */
    }
  goto ret0;

 L9558: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 308)
    goto L5388;
  goto ret0;

 L5388: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5389;
    }
  goto ret0;

 L5389: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5390;
  goto ret0;

 L5390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5391;
  goto ret0;

 L5391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 308)
    goto L5392;
  goto ret0;

 L5392: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 147 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 700;  /* mips_absq_s_w */
    }
  goto ret0;

 L4689: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4690;
  goto ret0;

 L4690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4691;
  goto ret0;

 L4691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9572;
  goto ret0;

 L9572: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE)
    goto L9576;
  goto ret0;

 L9576: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 1:
      goto L9580;
    case 3:
      goto L9583;
    default:
      break;
    }
  goto ret0;

 L9580: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 39L:
      goto L4692;
    case 40L:
      goto L4752;
    case 43L:
      goto L4858;
    default:
      break;
    }
  goto ret0;

 L4692: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode)
    goto L9584;
 L4822: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4823;
    }
  goto ret0;

 L9584: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L4693;
    case XOR:
      goto L4703;
    case AND:
      goto L4713;
    default:
     break;
   }
  goto L4822;

 L4693: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4694;
    }
  goto L4822;

 L4694: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 426 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 615;  /* sync_old_iorsi */
    }
  goto L4822;

 L4703: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4704;
    }
  goto L4822;

 L4704: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 426 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 616;  /* sync_old_xorsi */
    }
  goto L4822;

 L4713: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4714;
    }
  goto L4822;

 L4714: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 426 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 617;  /* sync_old_andsi */
    }
  goto L4822;

 L4823: ATTRIBUTE_UNUSED_LABEL
  if (
#line 473 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 629;  /* sync_old_nandsi */
    }
  goto ret0;

 L4752: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode)
    goto L9587;
 L4840: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4841;
    }
  goto ret0;

 L9587: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L4753;
    case XOR:
      goto L4763;
    case AND:
      goto L4773;
    default:
     break;
   }
  goto L4840;

 L4753: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4754;
    }
  goto L4840;

 L4754: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 444 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 621;  /* sync_new_iorsi */
    }
  goto L4840;

 L4763: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4764;
    }
  goto L4840;

 L4764: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 444 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 622;  /* sync_new_xorsi */
    }
  goto L4840;

 L4773: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4774;
    }
  goto L4840;

 L4774: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 444 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 623;  /* sync_new_andsi */
    }
  goto L4840;

 L4841: ATTRIBUTE_UNUSED_LABEL
  if (
#line 488 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 631;  /* sync_new_nandsi */
    }
  goto ret0;

 L4858: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4859;
    }
  goto ret0;

 L4859: ATTRIBUTE_UNUSED_LABEL
  if (
#line 503 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 633;  /* sync_lock_test_and_setsi */
    }
  goto ret0;

 L9583: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 44)
    goto L4876;
  goto ret0;

 L4876: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4877;
    }
  goto ret0;

 L4877: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L4878;
    }
  goto ret0;

 L4878: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (arith_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L4879;
    }
  goto ret0;

 L4879: ATTRIBUTE_UNUSED_LABEL
  if (
#line 533 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC))
    {
      return 635;  /* test_and_set_12 */
    }
  goto ret0;

 L9499: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4616;
    }
  goto ret0;

 L4616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L9590;
  goto ret0;

 L9590: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L4617;
    case MINUS:
      goto L4641;
    case UNSPEC:
      goto L9607;
    case SUBREG:
    case MEM:
      goto L9592;
    default:
      goto ret0;
   }
 L9592: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4719;
    }
  goto ret0;

 L4617: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4618;
    }
  goto ret0;

 L4618: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L4619;
    }
  goto ret0;

 L4619: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4620;
  goto ret0;

 L4620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4621;
  goto ret0;

 L4621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 40)
    goto L4622;
  goto ret0;

 L4622: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L4623;
  goto ret0;

 L4623: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4624;
  goto ret0;

 L4624: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (
#line 380 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 606;  /* sync_new_adddi */
    }
  goto ret0;

 L4641: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4642;
    }
  goto ret0;

 L4642: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L4643;
    }
  goto ret0;

 L4643: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4644;
  goto ret0;

 L4644: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4645;
  goto ret0;

 L4645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 40)
    goto L4646;
  goto ret0;

 L4646: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MINUS)
    goto L4647;
  goto ret0;

 L4647: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4648;
  goto ret0;

 L4648: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (
#line 397 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 608;  /* sync_new_subdi */
    }
  goto ret0;

 L9607: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 3)
    goto L9621;
  goto ret0;

 L9621: ATTRIBUTE_UNUSED_LABEL
  return recog_18 (x0, insn, pnum_clobbers);

 L4719: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4720;
  goto ret0;

 L4720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L4721;
  goto ret0;

 L4721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L9635;
  goto ret0;

 L9635: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC_VOLATILE)
    goto L9638;
  goto ret0;

 L9638: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L9641;
  goto ret0;

 L9641: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 39L:
      goto L4722;
    case 40L:
      goto L4782;
    case 43L:
      goto L4867;
    default:
      break;
    }
  goto ret0;

 L4722: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode)
    goto L9644;
 L4831: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L4832;
    }
  goto ret0;

 L9644: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L4723;
    case XOR:
      goto L4733;
    case AND:
      goto L4743;
    default:
     break;
   }
  goto L4831;

 L4723: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L4724;
    }
  goto L4831;

 L4724: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 426 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 618;  /* sync_old_iordi */
    }
  goto L4831;

 L4733: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L4734;
    }
  goto L4831;

 L4734: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 426 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 619;  /* sync_old_xordi */
    }
  goto L4831;

 L4743: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L4744;
    }
  goto L4831;

 L4744: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 426 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 620;  /* sync_old_anddi */
    }
  goto L4831;

 L4832: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 473 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 630;  /* sync_old_nanddi */
    }
  goto ret0;

 L4782: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode)
    goto L9647;
 L4849: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L4850;
    }
  goto ret0;

 L9647: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L4783;
    case XOR:
      goto L4793;
    case AND:
      goto L4803;
    default:
     break;
   }
  goto L4849;

 L4783: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L4784;
    }
  goto L4849;

 L4784: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 444 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 624;  /* sync_new_iordi */
    }
  goto L4849;

 L4793: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L4794;
    }
  goto L4849;

 L4794: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 444 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 625;  /* sync_new_xordi */
    }
  goto L4849;

 L4803: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (uns_arith_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L4804;
    }
  goto L4849;

 L4804: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && (
#line 444 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 626;  /* sync_new_anddi */
    }
  goto L4849;

 L4850: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 488 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 632;  /* sync_new_nanddi */
    }
  goto ret0;

 L4867: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L4868;
    }
  goto ret0;

 L4868: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 503 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 634;  /* sync_lock_test_and_setdi */
    }
  goto ret0;

 L9500: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HImode))
    {
      operands[0] = x2;
      goto L5243;
    }
  goto ret0;

 L5243: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode)
    goto L9650;
  goto ret0;

 L9650: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5244;
    case UNSPEC:
      goto L9667;
    case MINUS:
      goto L5299;
    case MULT:
      goto L6232;
    default:
     break;
   }
  goto ret0;

 L5244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5245;
    }
 L6120: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6121;
    }
  goto ret0;

 L5245: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5246;
    }
  x3 = XEXP (x2, 0);
  goto L6120;

 L5246: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5247;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6120;

 L5247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5248;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6120;

 L5248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 300)
    goto L5249;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6120;

 L5249: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5250;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6120;

 L5250: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 15 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 686;  /* addv2hi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L6120;

 L6121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_0_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6122;
    }
  goto ret0;

 L6122: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6123;
  goto ret0;

 L6123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6124;
  goto ret0;

 L6124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 401)
    goto L6125;
  goto ret0;

 L6125: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6126;
  goto ret0;

 L6126: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 22 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 776;  /* mips_addu_ph */
    }
  goto ret0;

 L9667: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L9681;
    case 1:
      goto L9683;
    default:
      break;
    }
  goto ret0;

 L9681: ATTRIBUTE_UNUSED_LABEL
  return recog_19 (x0, insn, pnum_clobbers);

 L9683: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 308)
    goto L5397;
  goto ret0;

 L5397: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5398;
    }
  goto ret0;

 L5398: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5399;
  goto ret0;

 L5399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5400;
  goto ret0;

 L5400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 308)
    goto L5401;
  goto ret0;

 L5401: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 147 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 701;  /* mips_absq_s_ph */
    }
  goto ret0;

 L5299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5300;
    }
  goto ret0;

 L5300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5301;
    }
  goto ret0;

 L5301: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5302;
  goto ret0;

 L5302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5303;
  goto ret0;

 L5303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 302)
    goto L5304;
  goto ret0;

 L5304: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5305;
  goto ret0;

 L5305: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 71 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 691;  /* subv2hi3 */
    }
  goto ret0;

 L6232: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L6233;
    }
  goto ret0;

 L6233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L6234;
    }
  goto ret0;

 L6234: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6235;
  goto ret0;

 L6235: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6236;
  goto ret0;

 L6236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 416)
    goto L6237;
  goto ret0;

 L6237: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6238;
  goto ret0;

 L6238: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 181 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 787;  /* mulv2hi3 */
    }
  goto ret0;

 L9501: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4QImode))
    {
      operands[0] = x2;
      goto L5254;
    }
  goto ret0;

 L5254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode)
    goto L9695;
  goto ret0;

 L9695: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5255;
    case UNSPEC:
      goto L9702;
    case MINUS:
      goto L5310;
    default:
     break;
   }
  goto ret0;

 L5255: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5256;
    }
  goto ret0;

 L5256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L5257;
    }
  goto ret0;

 L5257: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5258;
  goto ret0;

 L5258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5259;
  goto ret0;

 L5259: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 300)
    goto L5260;
  goto ret0;

 L5260: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5261;
  goto ret0;

 L5261: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 16 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 687;  /* addv4qi3 */
    }
  goto ret0;

 L9702: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L9707;
    case 1:
      goto L9711;
    default:
      break;
    }
  goto ret0;

 L9707: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 301L:
      goto L5288;
    case 303L:
      goto L5343;
    case 312L:
      goto L5429;
    case 323L:
      goto L5501;
    default:
      break;
    }
  goto ret0;

 L5288: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5289;
    }
  goto ret0;

 L5289: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L5290;
    }
  goto ret0;

 L5290: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5291;
  goto ret0;

 L5291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5292;
  goto ret0;

 L5292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L5293;
  goto ret0;

 L5293: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5294;
  goto ret0;

 L5294: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 690;  /* mips_addu_s_qb */
    }
  goto ret0;

 L5343: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5344;
    }
  goto ret0;

 L5344: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L5345;
    }
  goto ret0;

 L5345: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5346;
  goto ret0;

 L5346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5347;
  goto ret0;

 L5347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L5348;
  goto ret0;

 L5348: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5349;
  goto ret0;

 L5349: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 84 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 695;  /* mips_subu_s_qb */
    }
  goto ret0;

 L5429: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V2HImode))
    {
      operands[1] = x3;
      goto L5430;
    }
  goto ret0;

 L5430: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V2HImode))
    {
      operands[2] = x3;
      goto L5431;
    }
  goto ret0;

 L5431: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5432;
  goto ret0;

 L5432: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5433;
  goto ret0;

 L5433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 312)
    goto L5434;
  goto ret0;

 L5434: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5435;
  goto ret0;

 L5435: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 197 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 705;  /* mips_precrqu_s_qb_ph */
    }
  goto ret0;

 L5501: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5502;
    }
  goto ret0;

 L5502: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5503;
    }
  goto ret0;

 L5503: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5504;
  goto ret0;

 L5504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5505;
  goto ret0;

 L5505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 323)
    goto L5506;
  goto ret0;

 L5506: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5507;
  goto ret0;

 L5507: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 305 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 717;  /* mips_shll_qb */
    }
  goto ret0;

 L9711: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 400)
    goto L6111;
  goto ret0;

 L6111: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (reg_or_0_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L6112;
    }
  goto ret0;

 L6112: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6113;
  goto ret0;

 L6113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6114;
  goto ret0;

 L6114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 400)
    goto L6115;
  goto ret0;

 L6115: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 10 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2))
    {
      return 775;  /* mips_absq_s_qb */
    }
  goto ret0;

 L5310: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4QImode))
    {
      operands[1] = x3;
      goto L5311;
    }
  goto ret0;

 L5311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4QImode))
    {
      operands[2] = x3;
      goto L5312;
    }
  goto ret0;

 L5312: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5313;
  goto ret0;

 L5313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L5314;
  goto ret0;

 L5314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 302)
    goto L5315;
  goto ret0;

 L5315: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5316;
  goto ret0;

 L5316: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 71 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 692;  /* subv4qi3 */
    }
  goto ret0;

 L9502: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, UQQmode))
    {
      operands[0] = x2;
      goto L6632;
    }
  goto ret0;

 L6632: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == UQQmode)
    goto L9712;
  goto ret0;

 L9712: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L6633;
    case US_MINUS:
      goto L6839;
    default:
     break;
   }
  goto ret0;

 L6633: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UQQmode))
    {
      operands[1] = x3;
      goto L6634;
    }
  goto ret0;

 L6634: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UQQmode))
    {
      operands[2] = x3;
      goto L6635;
    }
  goto ret0;

 L6635: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6636;
  goto ret0;

 L6636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6637;
  goto ret0;

 L6637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L6638;
  goto ret0;

 L6638: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6639;
  goto ret0;

 L6639: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 16 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 834;  /* usadduqq3 */
    }
  goto ret0;

 L6839: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UQQmode))
    {
      operands[1] = x3;
      goto L6840;
    }
  goto ret0;

 L6840: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UQQmode))
    {
      operands[2] = x3;
      goto L6841;
    }
  goto ret0;

 L6841: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6842;
  goto ret0;

 L6842: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6843;
  goto ret0;

 L6843: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L6844;
  goto ret0;

 L6844: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6845;
  goto ret0;

 L6845: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 16 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 860;  /* ussubuqq3 */
    }
  goto ret0;

 L9503: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, UHQmode))
    {
      operands[0] = x2;
      goto L6643;
    }
  goto ret0;

 L6643: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == UHQmode)
    goto L9714;
  goto ret0;

 L9714: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L6644;
    case US_MINUS:
      goto L6850;
    default:
     break;
   }
  goto ret0;

 L6644: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UHQmode))
    {
      operands[1] = x3;
      goto L6645;
    }
  goto ret0;

 L6645: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UHQmode))
    {
      operands[2] = x3;
      goto L6646;
    }
  goto ret0;

 L6646: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6647;
  goto ret0;

 L6647: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6648;
  goto ret0;

 L6648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L6649;
  goto ret0;

 L6649: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6650;
  goto ret0;

 L6650: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 16 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 835;  /* usadduhq3 */
    }
  goto ret0;

 L6850: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UHQmode))
    {
      operands[1] = x3;
      goto L6851;
    }
  goto ret0;

 L6851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UHQmode))
    {
      operands[2] = x3;
      goto L6852;
    }
  goto ret0;

 L6852: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6853;
  goto ret0;

 L6853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6854;
  goto ret0;

 L6854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L6855;
  goto ret0;

 L6855: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6856;
  goto ret0;

 L6856: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 16 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 861;  /* ussubuhq3 */
    }
  goto ret0;

 L9504: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, UHAmode))
    {
      operands[0] = x2;
      goto L6654;
    }
  goto ret0;

 L6654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == UHAmode)
    goto L9716;
  goto ret0;

 L9716: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L6655;
    case US_MINUS:
      goto L6861;
    default:
     break;
   }
  goto ret0;

 L6655: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UHAmode))
    {
      operands[1] = x3;
      goto L6656;
    }
  goto ret0;

 L6656: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UHAmode))
    {
      operands[2] = x3;
      goto L6657;
    }
  goto ret0;

 L6657: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6658;
  goto ret0;

 L6658: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6659;
  goto ret0;

 L6659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L6660;
  goto ret0;

 L6660: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6661;
  goto ret0;

 L6661: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 17 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 836;  /* usadduha3 */
    }
  goto ret0;

 L6861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, UHAmode))
    {
      operands[1] = x3;
      goto L6862;
    }
  goto ret0;

 L6862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, UHAmode))
    {
      operands[2] = x3;
      goto L6863;
    }
  goto ret0;

 L6863: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6864;
  goto ret0;

 L6864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6865;
  goto ret0;

 L6865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L6866;
  goto ret0;

 L6866: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6867;
  goto ret0;

 L6867: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 17 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 862;  /* ussubuha3 */
    }
  goto ret0;

 L9505: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4UQQmode))
    {
      operands[0] = x2;
      goto L6665;
    }
  goto ret0;

 L6665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4UQQmode)
    goto L9718;
  goto ret0;

 L9718: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L6666;
    case US_MINUS:
      goto L6872;
    default:
     break;
   }
  goto ret0;

 L6666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4UQQmode))
    {
      operands[1] = x3;
      goto L6667;
    }
  goto ret0;

 L6667: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4UQQmode))
    {
      operands[2] = x3;
      goto L6668;
    }
  goto ret0;

 L6668: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6669;
  goto ret0;

 L6669: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6670;
  goto ret0;

 L6670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L6671;
  goto ret0;

 L6671: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6672;
  goto ret0;

 L6672: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 17 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 837;  /* usaddv4uqq3 */
    }
  goto ret0;

 L6872: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4UQQmode))
    {
      operands[1] = x3;
      goto L6873;
    }
  goto ret0;

 L6873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4UQQmode))
    {
      operands[2] = x3;
      goto L6874;
    }
  goto ret0;

 L6874: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6875;
  goto ret0;

 L6875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6876;
  goto ret0;

 L6876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L6877;
  goto ret0;

 L6877: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6878;
  goto ret0;

 L6878: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 17 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 863;  /* ussubv4uqq3 */
    }
  goto ret0;

 L9506: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2UHQmode))
    {
      operands[0] = x2;
      goto L6676;
    }
  goto ret0;

 L6676: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2UHQmode)
    goto L9720;
  goto ret0;

 L9720: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L6677;
    case US_MINUS:
      goto L6883;
    default:
     break;
   }
  goto ret0;

 L6677: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2UHQmode))
    {
      operands[1] = x3;
      goto L6678;
    }
  goto ret0;

 L6678: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2UHQmode))
    {
      operands[2] = x3;
      goto L6679;
    }
  goto ret0;

 L6679: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6680;
  goto ret0;

 L6680: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6681;
  goto ret0;

 L6681: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L6682;
  goto ret0;

 L6682: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6683;
  goto ret0;

 L6683: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 18 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 838;  /* usaddv2uhq3 */
    }
  goto ret0;

 L6883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2UHQmode))
    {
      operands[1] = x3;
      goto L6884;
    }
  goto ret0;

 L6884: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2UHQmode))
    {
      operands[2] = x3;
      goto L6885;
    }
  goto ret0;

 L6885: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6886;
  goto ret0;

 L6886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6887;
  goto ret0;

 L6887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L6888;
  goto ret0;

 L6888: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6889;
  goto ret0;

 L6889: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 18 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 864;  /* ussubv2uhq3 */
    }
  goto ret0;

 L9507: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2UHAmode))
    {
      operands[0] = x2;
      goto L6687;
    }
  goto ret0;

 L6687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2UHAmode)
    goto L9722;
  goto ret0;

 L9722: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case US_PLUS:
      goto L6688;
    case US_MINUS:
      goto L6894;
    default:
     break;
   }
  goto ret0;

 L6688: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2UHAmode))
    {
      operands[1] = x3;
      goto L6689;
    }
  goto ret0;

 L6689: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2UHAmode))
    {
      operands[2] = x3;
      goto L6690;
    }
  goto ret0;

 L6690: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6691;
  goto ret0;

 L6691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6692;
  goto ret0;

 L6692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L6693;
  goto ret0;

 L6693: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6694;
  goto ret0;

 L6694: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 18 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 839;  /* usaddv2uha3 */
    }
  goto ret0;

 L6894: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2UHAmode))
    {
      operands[1] = x3;
      goto L6895;
    }
  goto ret0;

 L6895: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2UHAmode))
    {
      operands[2] = x3;
      goto L6896;
    }
  goto ret0;

 L6896: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6897;
  goto ret0;

 L6897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6898;
  goto ret0;

 L6898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L6899;
  goto ret0;

 L6899: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6900;
  goto ret0;

 L6900: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 18 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2))
    {
      return 865;  /* ussubv2uha3 */
    }
  goto ret0;

 L9508: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HQmode))
    {
      operands[0] = x2;
      goto L6698;
    }
  goto ret0;

 L6698: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HQmode)
    goto L9724;
  goto ret0;

 L9724: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L6699;
    case SS_MINUS:
      goto L6905;
    case SS_MULT:
      goto L7010;
    default:
     break;
   }
  goto ret0;

 L6699: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HQmode))
    {
      operands[1] = x3;
      goto L6700;
    }
  goto ret0;

 L6700: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HQmode))
    {
      operands[2] = x3;
      goto L6701;
    }
  goto ret0;

 L6701: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6702;
  goto ret0;

 L6702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6703;
  goto ret0;

 L6703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L6704;
  goto ret0;

 L6704: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6705;
  goto ret0;

 L6705: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 55 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 840;  /* ssaddhq3 */
    }
  goto ret0;

 L6905: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HQmode))
    {
      operands[1] = x3;
      goto L6906;
    }
  goto ret0;

 L6906: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HQmode))
    {
      operands[2] = x3;
      goto L6907;
    }
  goto ret0;

 L6907: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6908;
  goto ret0;

 L6908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6909;
  goto ret0;

 L6909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L6910;
  goto ret0;

 L6910: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6911;
  goto ret0;

 L6911: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 88 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 866;  /* sssubhq3 */
    }
  goto ret0;

 L7010: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HQmode))
    {
      operands[1] = x3;
      goto L7011;
    }
  goto ret0;

 L7011: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HQmode))
    {
      operands[2] = x3;
      goto L7012;
    }
  goto ret0;

 L7012: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7013;
  goto ret0;

 L7013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7014;
  goto ret0;

 L7014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L7015;
  goto ret0;

 L7015: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7016;
  goto ret0;

 L7016: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 23 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 873;  /* ssmulhq3 */
    }
  goto ret0;

 L9509: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SQmode))
    {
      operands[0] = x2;
      goto L6709;
    }
  goto ret0;

 L6709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SQmode)
    goto L9727;
  goto ret0;

 L9727: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L6710;
    case SS_MINUS:
      goto L6916;
    case SS_MULT:
      goto L7035;
    default:
     break;
   }
  goto ret0;

 L6710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SQmode))
    {
      operands[1] = x3;
      goto L6711;
    }
  goto ret0;

 L6711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SQmode))
    {
      operands[2] = x3;
      goto L6712;
    }
  goto ret0;

 L6712: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6713;
  goto ret0;

 L6713: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6714;
  goto ret0;

 L6714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L6715;
  goto ret0;

 L6715: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6716;
  goto ret0;

 L6716: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 55 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 841;  /* ssaddsq3 */
    }
  goto ret0;

 L6916: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SQmode))
    {
      operands[1] = x3;
      goto L6917;
    }
  goto ret0;

 L6917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SQmode))
    {
      operands[2] = x3;
      goto L6918;
    }
  goto ret0;

 L6918: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6919;
  goto ret0;

 L6919: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6920;
  goto ret0;

 L6920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L6921;
  goto ret0;

 L6921: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6922;
  goto ret0;

 L6922: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 88 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 867;  /* sssubsq3 */
    }
  goto ret0;

 L7035: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SQmode))
    {
      operands[1] = x3;
      goto L7036;
    }
  goto ret0;

 L7036: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SQmode))
    {
      operands[2] = x3;
      goto L7037;
    }
  goto ret0;

 L7037: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7038;
  goto ret0;

 L7038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7039;
  goto ret0;

 L7039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L7040;
  goto ret0;

 L7040: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7041;
  goto ret0;

 L7041: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 24 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 874;  /* ssmulsq3 */
    }
  goto ret0;

 L9510: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HAmode))
    {
      operands[0] = x2;
      goto L6720;
    }
  goto ret0;

 L6720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HAmode)
    goto L9730;
  goto ret0;

 L9730: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L6721;
    case SS_MINUS:
      goto L6927;
    default:
     break;
   }
  goto ret0;

 L6721: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HAmode))
    {
      operands[1] = x3;
      goto L6722;
    }
  goto ret0;

 L6722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HAmode))
    {
      operands[2] = x3;
      goto L6723;
    }
  goto ret0;

 L6723: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6724;
  goto ret0;

 L6724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6725;
  goto ret0;

 L6725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L6726;
  goto ret0;

 L6726: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6727;
  goto ret0;

 L6727: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 55 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 842;  /* ssaddha3 */
    }
  goto ret0;

 L6927: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HAmode))
    {
      operands[1] = x3;
      goto L6928;
    }
  goto ret0;

 L6928: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HAmode))
    {
      operands[2] = x3;
      goto L6929;
    }
  goto ret0;

 L6929: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6930;
  goto ret0;

 L6930: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6931;
  goto ret0;

 L6931: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L6932;
  goto ret0;

 L6932: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6933;
  goto ret0;

 L6933: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 88 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 868;  /* sssubha3 */
    }
  goto ret0;

 L9511: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SAmode))
    {
      operands[0] = x2;
      goto L6731;
    }
  goto ret0;

 L6731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SAmode)
    goto L9732;
  goto ret0;

 L9732: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L6732;
    case SS_MINUS:
      goto L6938;
    default:
     break;
   }
  goto ret0;

 L6732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SAmode))
    {
      operands[1] = x3;
      goto L6733;
    }
  goto ret0;

 L6733: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SAmode))
    {
      operands[2] = x3;
      goto L6734;
    }
  goto ret0;

 L6734: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6735;
  goto ret0;

 L6735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6736;
  goto ret0;

 L6736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L6737;
  goto ret0;

 L6737: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6738;
  goto ret0;

 L6738: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 55 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 843;  /* ssaddsa3 */
    }
  goto ret0;

 L6938: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SAmode))
    {
      operands[1] = x3;
      goto L6939;
    }
  goto ret0;

 L6939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SAmode))
    {
      operands[2] = x3;
      goto L6940;
    }
  goto ret0;

 L6940: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6941;
  goto ret0;

 L6941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6942;
  goto ret0;

 L6942: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L6943;
  goto ret0;

 L6943: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6944;
  goto ret0;

 L6944: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 88 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 869;  /* sssubsa3 */
    }
  goto ret0;

 L9512: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HQmode))
    {
      operands[0] = x2;
      goto L6742;
    }
  goto ret0;

 L6742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HQmode)
    goto L9734;
  goto ret0;

 L9734: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L6743;
    case SS_MINUS:
      goto L6949;
    case SS_MULT:
      goto L6985;
    default:
     break;
   }
  goto ret0;

 L6743: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HQmode))
    {
      operands[1] = x3;
      goto L6744;
    }
  goto ret0;

 L6744: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HQmode))
    {
      operands[2] = x3;
      goto L6745;
    }
  goto ret0;

 L6745: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6746;
  goto ret0;

 L6746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6747;
  goto ret0;

 L6747: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L6748;
  goto ret0;

 L6748: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6749;
  goto ret0;

 L6749: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 55 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 844;  /* ssaddv2hq3 */
    }
  goto ret0;

 L6949: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HQmode))
    {
      operands[1] = x3;
      goto L6950;
    }
  goto ret0;

 L6950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HQmode))
    {
      operands[2] = x3;
      goto L6951;
    }
  goto ret0;

 L6951: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6952;
  goto ret0;

 L6952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6953;
  goto ret0;

 L6953: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L6954;
  goto ret0;

 L6954: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6955;
  goto ret0;

 L6955: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 88 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 870;  /* sssubv2hq3 */
    }
  goto ret0;

 L6985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HQmode))
    {
      operands[1] = x3;
      goto L6986;
    }
  goto ret0;

 L6986: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HQmode))
    {
      operands[2] = x3;
      goto L6987;
    }
  goto ret0;

 L6987: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6988;
  goto ret0;

 L6988: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6989;
  goto ret0;

 L6989: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 330)
    goto L6990;
  goto ret0;

 L6990: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6991;
  goto ret0;

 L6991: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 23 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 872;  /* ssmulv2hq3 */
    }
  goto ret0;

 L9513: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2HAmode))
    {
      operands[0] = x2;
      goto L6753;
    }
  goto ret0;

 L6753: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HAmode)
    goto L9737;
  goto ret0;

 L9737: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L6754;
    case SS_MINUS:
      goto L6960;
    default:
     break;
   }
  goto ret0;

 L6754: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HAmode))
    {
      operands[1] = x3;
      goto L6755;
    }
  goto ret0;

 L6755: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HAmode))
    {
      operands[2] = x3;
      goto L6756;
    }
  goto ret0;

 L6756: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6757;
  goto ret0;

 L6757: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6758;
  goto ret0;

 L6758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 301)
    goto L6759;
  goto ret0;

 L6759: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6760;
  goto ret0;

 L6760: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 55 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 845;  /* ssaddv2ha3 */
    }
  goto ret0;

 L6960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2HAmode))
    {
      operands[1] = x3;
      goto L6961;
    }
  goto ret0;

 L6961: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2HAmode))
    {
      operands[2] = x3;
      goto L6962;
    }
  goto ret0;

 L6962: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6963;
  goto ret0;

 L6963: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6964;
  goto ret0;

 L6964: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 303)
    goto L6965;
  goto ret0;

 L6965: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6966;
  goto ret0;

 L6966: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 88 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP))
    {
      return 871;  /* sssubv2ha3 */
    }
  goto ret0;

 L9514: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DQmode))
    {
      operands[0] = x2;
      goto L7045;
    }
  goto ret0;

 L7045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DQmode)
    goto L9739;
  goto ret0;

 L9739: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_PLUS:
      goto L7046;
    case SS_MINUS:
      goto L7062;
    default:
     break;
   }
  goto ret0;

 L7046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DQmode
      && GET_CODE (x3) == SS_MULT)
    goto L7047;
  goto ret0;

 L7047: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DQmode
      && GET_CODE (x4) == SAT_FRACT)
    goto L7048;
  goto ret0;

 L7048: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SQmode))
    {
      operands[1] = x5;
      goto L7049;
    }
  goto ret0;

 L7049: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DQmode
      && GET_CODE (x4) == SAT_FRACT)
    goto L7050;
  goto ret0;

 L7050: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SQmode))
    {
      operands[2] = x5;
      goto L7051;
    }
  goto ret0;

 L7051: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DQmode))
    {
      operands[3] = x3;
      goto L7052;
    }
  goto ret0;

 L7052: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7053;
  goto ret0;

 L7053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7054;
  goto ret0;

 L7054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 340)
    goto L7055;
  goto ret0;

 L7055: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7056;
  goto ret0;

 L7056: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7057;
  goto ret0;

 L7057: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 118 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 875;  /* ssmaddsqdq4 */
    }
  goto ret0;

 L7062: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DQmode))
    {
      operands[3] = x3;
      goto L7063;
    }
  goto ret0;

 L7063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DQmode
      && GET_CODE (x3) == SS_MULT)
    goto L7064;
  goto ret0;

 L7064: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DQmode
      && GET_CODE (x4) == SAT_FRACT)
    goto L7065;
  goto ret0;

 L7065: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SQmode))
    {
      operands[1] = x5;
      goto L7066;
    }
  goto ret0;

 L7066: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DQmode
      && GET_CODE (x4) == SAT_FRACT)
    goto L7067;
  goto ret0;

 L7067: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SQmode))
    {
      operands[2] = x5;
      goto L7068;
    }
  goto ret0;

 L7068: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7069;
  goto ret0;

 L7069: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L7070;
  goto ret0;

 L7070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 341)
    goto L7071;
  goto ret0;

 L7071: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7072;
  goto ret0;

 L7072: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L7073;
  goto ret0;

 L7073: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 135 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP && !TARGET_64BIT))
    {
      return 876;  /* ssmsubsqdq4 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_21 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L188;
    case 3:
      goto L260;
    case 4:
      goto L3785;
    case 6:
      goto L6012;
    default:
      break;
    }
 L8193: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 1)
    {
      operands[0] = x0;
      goto L4069;
    }
 L8194: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L4602;
  goto ret0;

 L188: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L189;
    case UNSPEC_VOLATILE:
      goto L9348;
    case RETURN:
      goto L3667;
    case UNSPEC:
      goto L9349;
    case CALL:
      goto L3746;
    default:
     break;
   }
  goto L8193;

 L189: ATTRIBUTE_UNUSED_LABEL
  tem = recog_14 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L8193;

 L9348: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L2712;
  goto L8193;

 L2712: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2713;
  goto L8193;

 L2713: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2714;
  goto L8193;

 L2714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9442;
    case DImode:
      goto L9443;
    default:
      break;
    }
  goto L8193;

 L9442: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (
#line 4755 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 381;  /* clear_hazard_si */
    }
  goto L8193;

 L9443: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (
#line 4755 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 382;  /* clear_hazard_di */
    }
  goto L8193;

 L3667: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3668;
  goto L8193;

 L3668: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (pmode_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      return 529;  /* return_internal */
    }
  goto L8193;

 L9349: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 7)
    goto L3671;
  goto L8193;

 L3671: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9444;
    case DImode:
      goto L9445;
    default:
      break;
    }
  goto L8193;

 L9444: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3672;
    }
  goto L8193;

 L3672: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3673;
  goto L8193;

 L3673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3674;
    }
  goto L8193;

 L3674: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5702 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(! TARGET_64BIT))
    {
      return 530;  /* eh_set_lr_si */
    }
  goto L8193;

 L9445: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3681;
    }
  goto L8193;

 L3681: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3682;
  goto L8193;

 L3682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3683;
    }
  goto L8193;

 L3683: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5708 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return 531;  /* eh_set_lr_di */
    }
  goto L8193;

 L3746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3747;
  goto L8193;

 L3747: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3748;
    }
 L3781: ATTRIBUTE_UNUSED_LABEL
  if (const_call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3782;
    }
  goto L8193;

 L3748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L3749;

 L3749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3750;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3781;

 L3750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 540;  /* call_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3781;

 L3782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L3783;

 L3783: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CONST_INT)
    goto L9446;
  goto L8193;

 L9446: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x1, 0) == 1L)
    goto L9448;
  goto L8193;

 L9448: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 542;  /* call_internal_direct */
    }
 L9449: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6002 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 543;  /* call_direct_split */
    }
  goto L8193;

 L260: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L261;
    case CALL:
      goto L3758;
    default:
     break;
   }
  goto L8193;

 L261: ATTRIBUTE_UNUSED_LABEL
  tem = recog_16 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L8193;

 L3758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3759;
  goto L8193;

 L3759: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3760;
    }
 L3773: ATTRIBUTE_UNUSED_LABEL
  if (const_call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3774;
    }
  goto L8193;

 L3760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L3761;

 L3761: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3762;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3773;

 L3762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L3763;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3773;

 L3763: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3764;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3773;

 L3764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 5972 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 541;  /* call_split */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3773;

 L3774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L3775;

 L3775: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3776;
  goto L8193;

 L3776: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3777;
  goto L8193;

 L3777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 542;  /* call_internal_direct */
    }
  goto L8193;

 L3785: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case CALL:
      goto L3786;
    case SET:
      goto L3854;
    default:
     break;
   }
  goto L8193;

 L3786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3787;
  goto L8193;

 L3787: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3788;
    }
  goto L8193;

 L3788: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L3789;

 L3789: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3790;
  goto L8193;

 L3790: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3791;
  goto L8193;

 L3791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L3792;
  goto L8193;

 L3792: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L3793;
  goto L8193;

 L3793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 6002 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 543;  /* call_direct_split */
    }
  goto L8193;

 L3854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3855;
    }
  goto L8193;

 L3855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3856;
  goto L8193;

 L3856: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3857;
  goto L8193;

 L3857: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (const_call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3858;
    }
 L3905: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3906;
    }
  goto L8193;

 L3858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3859;

 L3859: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L3860;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3905;

 L3860: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3861;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3905;

 L3861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L3862;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3905;

 L3862: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L3863;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3905;

 L3863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 6072 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 547;  /* call_value_direct_split */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L3905;

 L3906: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3907;

 L3907: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3908;
  goto L8193;

 L3908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3909;
    }
  goto L8193;

 L3909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3910;
  goto L8193;

 L3910: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3911;
  goto L8193;

 L3911: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3912;
  goto L8193;

 L3912: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3913;
  goto L8193;

 L3913: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3914;
  goto L8193;

 L3914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L3915;
  goto L8193;

 L3915: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L3916;
  goto L8193;

 L3916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && 
#line 6106 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS))
    {
      return 549;  /* call_value_multiple_split */
    }
  goto L8193;

 L6012: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L6013;
  goto L8193;

 L6013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 182)
    goto L6014;
  goto L8193;

 L6014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L6015;
  goto L8193;

 L6015: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L6016;
    }
  goto L8193;

 L6016: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_uimm6_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6017;
    }
  goto L8193;

 L6017: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6018;
  goto L8193;

 L6018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 183)
    goto L6019;
  goto L8193;

 L6019: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L6020;
  goto L8193;

 L6020: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6021;
  goto L8193;

 L6021: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L6022;
  goto L8193;

 L6022: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6023;
  goto L8193;

 L6023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 184)
    goto L6024;
  goto L8193;

 L6024: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L6025;
  goto L8193;

 L6025: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6026;
  goto L8193;

 L6026: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L6027;
  goto L8193;

 L6027: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L6028;
  goto L8193;

 L6028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 185)
    goto L6029;
  goto L8193;

 L6029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L6030;
  goto L8193;

 L6030: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6031;
  goto L8193;

 L6031: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L6032;
  goto L8193;

 L6032: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L6033;
  goto L8193;

 L6033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 186)
    goto L6034;
  goto L8193;

 L6034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L6035;
  goto L8193;

 L6035: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6036;
  goto L8193;

 L6036: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L6037;
  goto L8193;

 L6037: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == SET)
    goto L6038;
  goto L8193;

 L6038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 187)
    goto L6039;
  goto L8193;

 L6039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCDSPmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 366)
    goto L6040;
  goto L8193;

 L6040: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6041;
  goto L8193;

 L6041: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 988 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP))
    {
      return 766;  /* mips_wrdsp */
    }
  goto L8193;

 L4069: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L4070;
  goto L8194;

 L4070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4071;
    }
  goto L8194;

 L4071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L4072;
  goto L8194;

 L4072: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4073;
  goto L8194;

 L4073: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4074;
    }
  goto L8194;

 L4074: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6306 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(operands[1] == stack_pointer_rtx
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL)))
    {
      return 570;  /* *mips16e_save_restore */
    }
  goto L8194;

 L4602: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L4603;
  goto ret0;

 L4603: ATTRIBUTE_UNUSED_LABEL
  return recog_20 (x0, insn, pnum_clobbers);
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case UNSPEC:
      goto L8174;
    case TRAP_IF:
      goto L12;
    case SET:
      goto L22;
    case PARALLEL:
      goto L8178;
    case UNSPEC_VOLATILE:
      goto L8180;
    case RETURN:
      goto L8185;
    case CALL:
      goto L3720;
    case PREFETCH:
      goto L3931;
    case CONST_INT:
      goto L8188;
    default:
     break;
   }
  goto ret0;

 L8174: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1)
    goto L8196;
  goto ret0;

 L8196: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 530L:
      goto L1;
    case 531L:
      goto L3;
    case 532L:
      goto L5;
    case 533L:
      goto L7;
    case 7L:
      goto L3676;
    default:
      break;
    }
  goto ret0;

 L1: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 100 "../../gcc-4.4.7/gcc/config/mips/loongson2ef.md"
(TUNE_LOONGSON_2EF))
    {
      return 0;  /* ls2_alu1_turn_enabled_insn */
    }
  goto ret0;

 L3: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 111 "../../gcc-4.4.7/gcc/config/mips/loongson2ef.md"
(TUNE_LOONGSON_2EF))
    {
      return 1;  /* ls2_alu2_turn_enabled_insn */
    }
  goto ret0;

 L5: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 122 "../../gcc-4.4.7/gcc/config/mips/loongson2ef.md"
(TUNE_LOONGSON_2EF))
    {
      return 2;  /* ls2_falu1_turn_enabled_insn */
    }
  goto ret0;

 L7: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 133 "../../gcc-4.4.7/gcc/config/mips/loongson2ef.md"
(TUNE_LOONGSON_2EF))
    {
      return 3;  /* ls2_falu2_turn_enabled_insn */
    }
  goto ret0;

 L3676: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L8201;
    case DImode:
      goto L8202;
    default:
      break;
    }
  goto ret0;

 L8201: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3677;
    }
  goto ret0;

 L3677: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5702 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(! TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 530;  /* eh_set_lr_si */
    }
  goto ret0;

 L8202: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L3686;
    }
  goto ret0;

 L3686: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5708 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 531;  /* eh_set_lr_di */
    }
  goto ret0;

 L12: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L8203;
    case DImode:
      goto L8204;
    default:
      break;
    }
 L9: ATTRIBUTE_UNUSED_LABEL
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L10;
  goto ret0;

 L8203: ATTRIBUTE_UNUSED_LABEL
  if (trap_comparison_operator (x1, SImode))
    {
      operands[0] = x1;
      goto L13;
    }
  goto L9;

 L13: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L14;
    }
  goto L9;

 L14: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L15;
    }
  goto L9;

 L15: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1008 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP))
    {
      return 5;  /* *conditional_trapsi */
    }
  x1 = XEXP (x0, 0);
  goto L9;

 L8204: ATTRIBUTE_UNUSED_LABEL
  if (trap_comparison_operator (x1, DImode))
    {
      operands[0] = x1;
      goto L18;
    }
  goto L9;

 L18: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L19;
    }
  goto L9;

 L19: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L20;
    }
  goto L9;

 L20: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 1008 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return 6;  /* *conditional_trapdi */
    }
  x1 = XEXP (x0, 0);
  goto L9;

 L10: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 4;  /* trap */
    }
  goto ret0;

 L22: ATTRIBUTE_UNUSED_LABEL
  return recog_12 (x0, insn, pnum_clobbers);

 L8178: ATTRIBUTE_UNUSED_LABEL
  return recog_21 (x0, insn, pnum_clobbers);

 L8180: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 1:
      goto L9741;
    case 2:
      goto L9742;
    default:
      break;
    }
  goto ret0;

 L9741: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 4L:
      goto L2675;
    case 36L:
      goto L2698;
    case 35L:
      goto L2700;
    case 33L:
      goto L2716;
    case 9L:
      goto L4064;
    case 14L:
      goto L4067;
    default:
      break;
    }
  goto ret0;

 L2675: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 28)
    {
      return 372;  /* loadgp_blockage */
    }
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 527;  /* blockage */
    }
  goto ret0;

 L2698: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 4736 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_SYNC))
    {
      return 377;  /* sync */
    }
  goto ret0;

 L2700: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (pmode_register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2701;
    }
  goto ret0;

 L2701: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4742 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI))
    {
      return 378;  /* synci */
    }
  goto ret0;

 L2716: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT)
    goto L9749;
  goto ret0;

 L9749: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x1, 0) == 0L)
    goto L9751;
  goto ret0;

 L9751: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4755 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 381;  /* clear_hazard_si */
    }
 L9752: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4755 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 382;  /* clear_hazard_di */
    }
  goto ret0;

 L4064: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L4065;
    }
  goto ret0;

 L4065: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6268 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 568;  /* consttable_float */
    }
  goto ret0;

 L4067: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      return 569;  /* align */
    }
  goto ret0;

 L9742: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 5L:
      goto L2694;
    case 8L:
      goto L4060;
    default:
      break;
    }
  goto ret0;

 L2694: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2695;
    }
  goto ret0;

 L2695: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2696;
  goto ret0;

 L2696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28)
    {
      return 376;  /* cprestore */
    }
  goto ret0;

 L4060: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L4061;
    }
  goto ret0;

 L4061: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L4062;
    }
  goto ret0;

 L4062: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6257 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16))
    {
      return 567;  /* consttable_int */
    }
  goto ret0;

 L8185: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5667 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_can_use_return_insn ()))
    {
      return 528;  /* *return */
    }
  goto ret0;

 L3720: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == MEM)
    goto L3721;
  goto ret0;

 L3721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (call_insn_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3722;
    }
  goto ret0;

 L3722: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L3723;

 L3723: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5869 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 537;  /* sibcall_internal */
    }
 L3755: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 540;  /* call_internal */
    }
 L3769: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5972 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 541;  /* call_split */
    }
  goto ret0;

 L3931: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (address_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L3932;
    }
 L3936: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L9753;
    case DImode:
      goto L9754;
    default:
      break;
    }
  goto ret0;

 L3932: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L3933;
    }
  x1 = XEXP (x0, 0);
  goto L3936;

 L3933: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L3934;
    }
  x1 = XEXP (x0, 0);
  goto L3936;

 L3934: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6146 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS))
    {
      return 550;  /* prefetch */
    }
  x1 = XEXP (x0, 0);
  goto L3936;

 L9753: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L3937;
  goto ret0;

 L3937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3938;
    }
  goto ret0;

 L3938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3939;
    }
  goto ret0;

 L3939: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L3940;
    }
  goto ret0;

 L3940: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L3941;
    }
  goto ret0;

 L3941: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6161 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return 551;  /* *prefetch_indexed_si */
    }
  goto ret0;

 L9754: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L3944;
  goto ret0;

 L3944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3945;
    }
  goto ret0;

 L3945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3946;
    }
  goto ret0;

 L3946: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L3947;
    }
  goto ret0;

 L3947: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L3948;
    }
  goto ret0;

 L3948: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 6161 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return 552;  /* *prefetch_indexed_di */
    }
  goto ret0;

 L8188: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x0, 0) == XWINT (x0, 0))
    switch ((int) XWINT (x0, 0))
      {
      case 0L:
        goto L9755;
      case 1L:
        goto L9756;
      default:
        break;
      }
  goto ret0;

 L9755: ATTRIBUTE_UNUSED_LABEL
  return 553;  /* nop */

 L9756: ATTRIBUTE_UNUSED_LABEL
  return 554;  /* hazard_nop */
 ret0:
  return -1;
}

static rtx
split_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L9760;
    case DImode:
      goto L9761;
    case HImode:
      goto L9767;
    case QImode:
      goto L9768;
    case DFmode:
      goto L9770;
    case V2SFmode:
      goto L9771;
    case V2SImode:
      goto L9772;
    case V4HImode:
      goto L9773;
    case V8QImode:
      goto L9774;
    case TImode:
      goto L9775;
    case TFmode:
      goto L9776;
    default:
      break;
    }
 L7994: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L7995;
    }
  goto ret0;

 L9760: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L7517;
    }
 L9763: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L7779;
    }
 L9765: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L7894;
    }
  goto L7994;

 L7517: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9777;
  x1 = XEXP (x0, 0);
  goto L9763;

 L9777: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7518;
    case HIGH:
      goto L7850;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9763;

 L7518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L7519;
 L7524: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7525;
    }
  x1 = XEXP (x0, 0);
  goto L9763;

 L7519: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7520;
    }
  x2 = XEXP (x1, 0);
  goto L7524;

 L7520: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1084 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))))
    {
      return gen_split_953 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7524;

 L7525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7526;
    }
  x1 = XEXP (x0, 0);
  goto L9763;

 L7526: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1110 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))))
    {
      return gen_split_954 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9763;

 L7850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (absolute_symbolic_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7851;
    }
  x1 = XEXP (x0, 0);
  goto L9763;

 L7851: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3701 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed))
    {
      return gen_split_1029 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9763;

 L7779: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9779;
  x1 = XEXP (x0, 0);
  goto L9765;

 L9779: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTEND:
      goto L7780;
    case HIGH:
      goto L7855;
    case LO_SUM:
      goto L7865;
    case UNSPEC_VOLATILE:
      goto L9787;
    case LSHIFTRT:
      goto L8075;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L9782;
    default:
      x1 = XEXP (x0, 0);
      goto L9765;
   }
 L9782: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L7877;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L9790;
    case HImode:
      goto L9791;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L9790: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L7781;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L7808;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7781: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7782;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7782: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2784 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2786 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_997 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7808: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3004 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 3008 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_1011 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L9791: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L7787;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L7813;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7787: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7788;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7788: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2784 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2786 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_998 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7813: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3004 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 3008 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_1012 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9794;
  x1 = XEXP (x0, 0);
  goto L9765;

 L9794: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7856;
    }
 L9795: ATTRIBUTE_UNUSED_LABEL
  if (got_page_ofst_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7886;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7856: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3713 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3715 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1030 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9795;

 L7886: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3758 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1036 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7866;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (got_disp_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7867;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7867: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3729 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3731 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1032 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L9787: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9796;
    case 1:
      goto L9797;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L9796: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L8000;
  x1 = XEXP (x0, 0);
  goto L9765;

 L8000: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L8001;
 L8022: ATTRIBUTE_UNUSED_LABEL
  if (symbol_ref_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8023;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L8001: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8002;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L8022;

 L8002: ATTRIBUTE_UNUSED_LABEL
  if (
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return gen_split_1088 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L8022;

 L8023: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (symbol_ref_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8024;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L8024: ATTRIBUTE_UNUSED_LABEL
  if (
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return gen_split_1092 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L9797: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 22L:
      goto L8012;
    case 48L:
      goto L8034;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L8012: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L8013;

 L8013: ATTRIBUTE_UNUSED_LABEL
  if (
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    {
      return gen_split_1090 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L8034: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8035;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L8035: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 4689 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1094 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L8075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8076;
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L8076: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      return gen_split_1109 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7877: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3743 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3745 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1034 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9765;

 L7894: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9799;
 L7945: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L7946;
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L9799: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case CONST:
      goto L7895;
    case MEM:
      goto L7939;
    case ASHIFT:
      goto L8039;
    case ASHIFTRT:
      goto L8045;
    case LSHIFTRT:
      goto L8051;
    default:
     break;
   }
  goto L7945;

 L7895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 25)
    goto L7896;
  goto L7945;

 L7896: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3811 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed))
    {
      return gen_split_1040 (insn, operands);
    }
  goto L7945;

 L7939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L7940;
  goto L7945;

 L7940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L7941;
  goto L7945;

 L7941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7942;
    }
  goto L7945;

 L7942: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0))))
    {
      return gen_split_1057 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L7945;

 L8039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8040;
    }
  goto L7945;

 L8040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8041;
    }
  goto L7945;

 L8041: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4957 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_1103 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L7945;

 L8045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8046;
    }
  goto L7945;

 L8046: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8047;
    }
  goto L7945;

 L8047: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4957 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_1104 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L7945;

 L8051: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L8052;
    }
  goto L7945;

 L8052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8053;
    }
  goto L7945;

 L8053: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4957 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_1105 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L7945;

 L7946: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4031 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f))
    {
      return gen_split_1058 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L9761: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L7529;
    }
 L9762: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L7541;
    }
 L9766: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L7899;
    }
 L9769: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L7963;
    }
  goto L7994;

 L7529: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == PLUS)
    goto L7530;
  x1 = XEXP (x0, 0);
  goto L9762;

 L7530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L7531;
 L7536: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7537;
    }
  x1 = XEXP (x0, 0);
  goto L9762;

 L7531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7532;
    }
  x2 = XEXP (x1, 0);
  goto L7536;

 L7532: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1137 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))))
    {
      return gen_split_955 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7536;

 L7537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7538;
    }
  x1 = XEXP (x0, 0);
  goto L9762;

 L7538: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1163 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))))
    {
      return gen_split_956 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9762;

 L7541: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L9804;
  x1 = XEXP (x0, 0);
  goto L9766;

 L9804: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTEND:
      goto L7542;
    case ZERO_EXTEND:
      goto L7792;
    case AND:
      goto L7797;
    case HIGH:
      goto L7832;
    case LO_SUM:
      goto L7871;
    case UNSPEC_VOLATILE:
      goto L9812;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L9809;
    default:
      x1 = XEXP (x0, 0);
      goto L9766;
   }
 L9809: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L7881;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9814;
    case QImode:
      goto L9815;
    case HImode:
      goto L9816;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L9814: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L7543;
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7803;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7544;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7545;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7545: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1205 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 1207 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_957 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7803: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2972 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2976 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode))))
    {
      return gen_split_1006 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L9815: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L7769;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L7818;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7769: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7770;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7770: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2766 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2768 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_995 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7818: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3004 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 3008 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_1013 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L9816: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L7775;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L7823;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7775: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7776;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7776: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2766 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2768 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_996 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7823: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3004 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 3008 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_1014 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7792: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7793;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7793: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 2839 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2843 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_999 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7797: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7798;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 4294967295L
      && (
#line 2859 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2867 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_1000 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9820;
  x1 = XEXP (x0, 0);
  goto L9766;

 L9820: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7833;
    }
 L9821: ATTRIBUTE_UNUSED_LABEL
  if (got_disp_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7861;
    }
 L9822: ATTRIBUTE_UNUSED_LABEL
  if (got_page_ofst_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7891;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7833: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3623 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 3625 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( epilogue_completed)))
    {
      return gen_split_1026 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9821;

 L7861: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3713 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3715 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1031 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9822;

 L7891: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3758 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1037 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7872;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (got_disp_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7873;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7873: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3729 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3731 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1033 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L9812: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L9823;
    case 1:
      goto L9824;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L9823: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L8006;
  x1 = XEXP (x0, 0);
  goto L9766;

 L8006: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L8007;
 L8028: ATTRIBUTE_UNUSED_LABEL
  if (symbol_ref_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8029;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L8007: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8008;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L8028;

 L8008: ATTRIBUTE_UNUSED_LABEL
  if (
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return gen_split_1089 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L8028;

 L8029: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (symbol_ref_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8030;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L8030: ATTRIBUTE_UNUSED_LABEL
  if (
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return gen_split_1093 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L9824: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 22)
    goto L8017;
  x1 = XEXP (x0, 0);
  goto L9766;

 L8017: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L8018;

 L8018: ATTRIBUTE_UNUSED_LABEL
  if (
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    {
      return gen_split_1091 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7881: ATTRIBUTE_UNUSED_LABEL
  if (((
#line 3743 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3745 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1035 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L7899: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L9825;
  x1 = XEXP (x0, 0);
  goto L9769;

 L9825: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case CONST:
      goto L7900;
    case MEM:
      goto L7932;
    case ASHIFT:
      goto L8057;
    case ASHIFTRT:
      goto L8063;
    case LSHIFTRT:
      goto L8069;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9769;

 L7900: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 25)
    goto L7901;
  x1 = XEXP (x0, 0);
  goto L9769;

 L7901: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (
#line 3811 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_1041 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9769;

 L7932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L7933;
  x1 = XEXP (x0, 0);
  goto L9769;

 L7933: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L7934;
  x1 = XEXP (x0, 0);
  goto L9769;

 L7934: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7935;
    }
  x1 = XEXP (x0, 0);
  goto L9769;

 L7935: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3915 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0))))
    {
      return gen_split_1047 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9769;

 L8057: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8058;
    }
  x1 = XEXP (x0, 0);
  goto L9769;

 L8058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8059;
    }
  x1 = XEXP (x0, 0);
  goto L9769;

 L8059: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4957 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_1106 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9769;

 L8063: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8064;
    }
  x1 = XEXP (x0, 0);
  goto L9769;

 L8064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8065;
    }
  x1 = XEXP (x0, 0);
  goto L9769;

 L8065: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4957 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_1107 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9769;

 L8069: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8070;
    }
  x1 = XEXP (x0, 0);
  goto L9769;

 L8070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8071;
    }
  x1 = XEXP (x0, 0);
  goto L9769;

 L8071: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4957 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_1108 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9769;

 L7963: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L7964;
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L7964: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])))
    {
      return gen_split_1069 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L9767: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L7949;
    }
 L9764: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L7826;
    }
  goto L7994;

 L7949: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == MEM)
    goto L7950;
  x1 = XEXP (x0, 0);
  goto L9764;

 L7950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L7951;
  x1 = XEXP (x0, 0);
  goto L9764;

 L7951: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L7952;
  x1 = XEXP (x0, 0);
  goto L9764;

 L7952: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7953;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L7953: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4180 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0))))
    {
      return gen_split_1062 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L7826: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == SIGN_EXTEND)
    goto L7827;
  x1 = XEXP (x0, 0);
  goto L7994;

 L7827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L7828;
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L7828: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3049 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 3053 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1]))))
    {
      return gen_split_1016 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L9768: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L7956;
    }
  goto L7994;

 L7956: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == MEM)
    goto L7957;
  x1 = XEXP (x0, 0);
  goto L7994;

 L7957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L7958;
  x1 = XEXP (x0, 0);
  goto L7994;

 L7958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L7959;
  x1 = XEXP (x0, 0);
  goto L7994;

 L7959: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7960;
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L7960: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4255 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f))))
    {
      return gen_split_1064 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L9770: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L7967;
    }
  goto L7994;

 L7967: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L7968;
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L7968: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])))
    {
      return gen_split_1070 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L9771: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L7971;
    }
  goto L7994;

 L7971: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L7972;
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L7972: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && 
#line 664 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return gen_split_1071 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L9772: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L7975;
    }
  goto L7994;

 L7975: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L7976;
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L7976: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && 
#line 665 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)))
    {
      return gen_split_1072 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L9773: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L7979;
    }
  goto L7994;

 L7979: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L7980;
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L7980: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && 
#line 666 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)))
    {
      return gen_split_1073 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L9774: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L7983;
    }
  goto L7994;

 L7983: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L7984;
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L7984: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && 
#line 667 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)))
    {
      return gen_split_1074 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L9775: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L7987;
    }
  goto L7994;

 L7987: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L7988;
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L7988: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4437 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && reload_completed))
    {
      return gen_split_1075 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L9776: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L7991;
    }
  goto L7994;

 L7991: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L7992;
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L7992: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4437 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && reload_completed))
    {
      return gen_split_1076 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L7994;

 L7995: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L7996;
    }
  goto ret0;

 L7996: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4449 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0))
    {
      return gen_split_1077 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
split_2 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9837;
    case DImode:
      goto L9838;
    default:
      break;
    }
 L8108: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L8109;
    }
  goto ret0;

 L9837: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7668;
    }
 L9839: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 28)
    goto L8086;
  goto L8108;

 L7668: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9840;
 L7905: ATTRIBUTE_UNUSED_LABEL
  if (splittable_const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7906;
    }
 L7918: ATTRIBUTE_UNUSED_LABEL
  operands[1] = x2;
  goto L7919;

 L9840: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case TRUNCATE:
      goto L7669;
    case DIV:
      goto L7725;
    case UDIV:
      goto L7747;
    default:
     break;
   }
  goto L7905;

 L7669: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L7670;
  goto L7905;

 L7670: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L7671;
  goto L7905;

 L7671: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L9843;
  goto L7905;

 L9843: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L7672;
    case ZERO_EXTEND:
      goto L7686;
    default:
     break;
   }
  goto L7905;

 L7672: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L7673;
    }
  goto L7905;

 L7673: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L7674;
  goto L7905;

 L7674: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L7675;
    }
  goto L7905;

 L7675: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L7676;
  goto L7905;

 L7676: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7677;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7678;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7678: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1926 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI) && 
#line 1928 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000)))
    {
      return gen_split_976 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7686: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L7687;
    }
  goto L7905;

 L7687: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L7688;
  goto L7905;

 L7688: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L7689;
    }
  goto L7905;

 L7689: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L7690;
  goto L7905;

 L7690: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7691;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7692;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7692: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1926 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI) && 
#line 1928 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000)))
    {
      return gen_split_977 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7725: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7726;
    }
  goto L7905;

 L7726: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7727;
    }
  goto L7905;

 L7727: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7728;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7728: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7729;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7729: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L7730;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7730: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7731;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 2312 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_985 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7747: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7748;
    }
  goto L7905;

 L7748: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7749;
    }
  goto L7905;

 L7749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7750;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7751;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L7752;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7752: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7753;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7753: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 2344 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed))
    {
      return gen_split_987 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7905;

 L7906: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7907;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7918;

 L7907: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return gen_split_1042 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7918;

 L7919: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7920;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9839;

 L7920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7921;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9839;

 L7921: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3833 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)))
    {
      return gen_split_1044 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9839;

 L8086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 6)
    goto L8087;
  x2 = XEXP (x1, 0);
  goto L8108;

 L8087: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8088;
  x2 = XEXP (x1, 0);
  goto L8108;

 L8088: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8089;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8108;

 L8089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L8090;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8108;

 L8090: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 5749 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 5751 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1155 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8108;

 L9838: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L7696;
    }
  goto L8108;

 L7696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L9845;
 L7911: ATTRIBUTE_UNUSED_LABEL
  if (splittable_const_int_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7912;
    }
 L7925: ATTRIBUTE_UNUSED_LABEL
  operands[1] = x2;
  goto L7926;

 L9845: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case TRUNCATE:
      goto L7697;
    case DIV:
      goto L7736;
    case UDIV:
      goto L7758;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L9848;
    default:
      goto L7911;
   }
 L9848: ATTRIBUTE_UNUSED_LABEL
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7844;
    }
  goto L7911;

 L7697: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L7698;
  goto L7911;

 L7698: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == MULT)
    goto L7699;
  goto L7911;

 L7699: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == TImode)
    goto L9849;
  goto L7911;

 L9849: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L7700;
    case ZERO_EXTEND:
      goto L7714;
    default:
     break;
   }
  goto L7911;

 L7700: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L7701;
    }
  goto L7911;

 L7701: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L7702;
  goto L7911;

 L7702: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L7703;
    }
  goto L7911;

 L7703: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L7704;
  goto L7911;

 L7704: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7705;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7705: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L7706;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7706: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && 
#line 1993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000)))
    {
      return gen_split_978 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7714: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L7715;
    }
  goto L7911;

 L7715: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L7716;
  goto L7911;

 L7716: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L7717;
    }
  goto L7911;

 L7717: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L7718;
  goto L7911;

 L7718: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7719;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7719: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L7720;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7720: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && 
#line 1993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000)))
    {
      return gen_split_979 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7736: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7737;
    }
  goto L7911;

 L7737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L7738;
    }
  goto L7911;

 L7738: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7739;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L7740;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MOD)
    goto L7741;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7742;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7742: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && ((
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2312 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_986 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7758: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7759;
    }
  goto L7911;

 L7759: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L7760;
    }
  goto L7911;

 L7760: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7761;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7761: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L7762;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UMOD)
    goto L7763;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7763: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7764;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7764: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (
#line 2344 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)))
    {
      return gen_split_988 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7844: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7845;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7846;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7846: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3677 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 3679 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1028 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7911;

 L7912: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7913;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7925;

 L7913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7914;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7925;

 L7914: ATTRIBUTE_UNUSED_LABEL
  if (
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    {
      return gen_split_1043 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L7925;

 L7926: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7927;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8108;

 L7927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7928;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8108;

 L7928: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 3833 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)))
    {
      return gen_split_1045 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8108;

 L8109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L8110;
  goto ret0;

 L8110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L8111;
  goto ret0;

 L8111: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L8112;
    }
  goto ret0;

 L8112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L8113;

 L8113: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8114;
  goto ret0;

 L8114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && 
#line 6026 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)))
    {
      return gen_split_1164 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
split_insns (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L7516;
    case PARALLEL:
      goto L9757;
    default:
     break;
   }
 L8140: ATTRIBUTE_UNUSED_LABEL
  if (small_data_pattern (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L8141;
    }
 L8142: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L9759;
    case SET:
      goto L8157;
    default:
     break;
   }
  goto ret0;

 L7516: ATTRIBUTE_UNUSED_LABEL
  tem = split_1 (x0, insn);
  if (tem != 0)
    return tem;
  goto L8140;

 L9757: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 3:
      goto L7568;
    case 2:
      goto L7666;
    default:
      break;
    }
  goto L8140;

 L7568: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L7569;
    case CALL:
      goto L8100;
    default:
     break;
   }
  goto L8140;

 L7569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9830;
    case DImode:
      goto L9833;
    default:
      break;
    }
 L8117: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L8118;
    }
  goto L8140;

 L9830: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7570;
    }
 L9831: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7583;
    }
 L9832: ATTRIBUTE_UNUSED_LABEL
  if (d_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7629;
    }
  goto L8117;

 L7570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L7571;
  x2 = XEXP (x1, 0);
  goto L9831;

 L7571: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L7572;
  x2 = XEXP (x1, 0);
  goto L9831;

 L7572: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (d_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7573;
    }
  x2 = XEXP (x1, 0);
  goto L9831;

 L7573: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (d_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7574;
    }
  x2 = XEXP (x1, 0);
  goto L9831;

 L7574: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (d_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7575;
    }
  x2 = XEXP (x1, 0);
  goto L9831;

 L7575: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7576;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9831;

 L7576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (lo_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L7577;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9831;

 L7577: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7578;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9831;

 L7578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L7579;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9831;

 L7579: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1548 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed))
    {
      return gen_split_964 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9831;

 L7583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L7584;
  x2 = XEXP (x1, 0);
  goto L9832;

 L7584: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7585;
    }
  x2 = XEXP (x1, 0);
  goto L9832;

 L7585: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L7586;
  x2 = XEXP (x1, 0);
  goto L9832;

 L7586: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7587;
    }
  x2 = XEXP (x1, 0);
  goto L9832;

 L7587: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L7588;
    }
  x2 = XEXP (x1, 0);
  goto L9832;

 L7588: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7589;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9832;

 L7589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L7590;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9832;

 L7590: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7591;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9832;

 L7591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L7592;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9832;

 L7592: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1602 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_965 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9832;

 L7629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L7630;
  x2 = XEXP (x1, 0);
  goto L8117;

 L7630: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (d_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7631;
    }
  x2 = XEXP (x1, 0);
  goto L8117;

 L7631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L7632;
  x2 = XEXP (x1, 0);
  goto L8117;

 L7632: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (d_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7633;
    }
  x2 = XEXP (x1, 0);
  goto L8117;

 L7633: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (d_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L7634;
    }
  x2 = XEXP (x1, 0);
  goto L8117;

 L7634: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7635;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (lo_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L7636;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7636: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7637;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L7638;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7638: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1759 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed))
    {
      return gen_split_969 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L9833: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L7642;
    }
  goto L8117;

 L7642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L7643;
  x2 = XEXP (x1, 0);
  goto L8117;

 L7643: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L9834;
  x2 = XEXP (x1, 0);
  goto L8117;

 L9834: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L7644;
    case ZERO_EXTEND:
      goto L7657;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L8117;

 L7644: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7645;
    }
  x2 = XEXP (x1, 0);
  goto L8117;

 L7645: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L7646;
  x2 = XEXP (x1, 0);
  goto L8117;

 L7646: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7647;
    }
  x2 = XEXP (x1, 0);
  goto L8117;

 L7647: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7648;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, TImode))
    {
      operands[3] = x2;
      goto L7649;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7649: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7650;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L7651;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7651: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1820 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1822 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_972 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7657: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7658;
    }
  x2 = XEXP (x1, 0);
  goto L8117;

 L7658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L7659;
  x2 = XEXP (x1, 0);
  goto L8117;

 L7659: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7660;
    }
  x2 = XEXP (x1, 0);
  goto L8117;

 L7660: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7661;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, TImode))
    {
      operands[3] = x2;
      goto L7662;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7662: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7663;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7663: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L7664;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L7664: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 1820 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1822 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_973 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L8117;

 L8118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L8119;
  goto L8140;

 L8119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L8120;
  goto L8140;

 L8120: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (const_call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L8121;
    }
 L8130: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L8131;
    }
  goto L8140;

 L8121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L8122;

 L8122: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8123;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L8130;

 L8123: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L8124;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L8130;

 L8124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && 
#line 6055 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)))
    {
      return gen_split_1165 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L8130;

 L8131: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L8132;

 L8132: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L8133;
  goto L8140;

 L8133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L8134;
    }
  goto L8140;

 L8134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L8135;
  goto L8140;

 L8135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L8136;
  goto L8140;

 L8136: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L8137;
  goto L8140;

 L8137: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L8138;
  goto L8140;

 L8138: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L8139;
  goto L8140;

 L8139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && 
#line 6087 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)))
    {
      return gen_split_1166 (insn, operands);
    }
  goto L8140;

 L8100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L8101;
  goto L8140;

 L8101: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L8102;
    }
  goto L8140;

 L8102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L8103;

 L8103: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L8104;
  goto L8140;

 L8104: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L8105;
  goto L8140;

 L8105: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && 
#line 5987 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)))
    {
      return gen_split_1162 (insn, operands);
    }
  goto L8140;

 L7666: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L7667;
    case UNSPEC:
      goto L9836;
    case CALL:
      goto L8093;
    default:
     break;
   }
  goto L8140;

 L7667: ATTRIBUTE_UNUSED_LABEL
  tem = split_2 (x0, insn);
  if (tem != 0)
    return tem;
  goto L8140;

 L9836: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 7)
    goto L8079;
  goto L8140;

 L8079: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L8080;
    }
  goto L8140;

 L8080: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8081;
  goto L8140;

 L8081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L8082;
    }
  goto L8140;

 L8082: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5714 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed))
    {
      return gen_split_1152 (insn, operands);
    }
  goto L8140;

 L8093: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L8094;
  goto L8140;

 L8094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L8095;
    }
  goto L8140;

 L8095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L8096;

 L8096: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8097;
  goto L8140;

 L8097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && 
#line 5959 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)))
    {
      return gen_split_1161 (insn, operands);
    }
  goto L8140;

 L8141: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6289 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed))
    {
      return gen_split_1172 (insn, operands);
    }
  goto L8142;

 L9759: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L8143;
  goto ret0;

 L8143: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L8144;
  goto ret0;

 L8144: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9851;
    case DImode:
      goto L9852;
    default:
      break;
    }
  goto ret0;

 L9851: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L8145;
    }
  goto ret0;

 L8145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L8146;
  goto ret0;

 L8146: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8147;
  goto ret0;

 L8147: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8148;
  goto ret0;

 L8148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 3
      && ((
#line 6331 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 6333 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1173 (insn, operands);
    }
  goto ret0;

 L9852: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L8152;
    }
  goto ret0;

 L8152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L8153;
  goto ret0;

 L8153: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8154;
  goto ret0;

 L8154: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8155;
  goto ret0;

 L8155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 3
      && ((
#line 6331 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 6333 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed)))
    {
      return gen_split_1174 (insn, operands);
    }
  goto ret0;

 L8157: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (register_operand (x1, CCV4mode))
    {
      operands[0] = x1;
      goto L8158;
    }
  goto ret0;

 L8158: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV4mode)
    goto L9853;
  goto ret0;

 L9853: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L9855;
  goto ret0;

 L9855: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 5)
    goto L9857;
  goto ret0;

 L9857: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 201L:
      goto L8159;
    case 203L:
      goto L8168;
    default:
      break;
    }
  goto ret0;

 L8159: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8160;
    }
  goto ret0;

 L8160: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8161;
    }
  goto ret0;

 L8161: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L8162;
    }
  goto ret0;

 L8162: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L8163;
    }
  goto ret0;

 L8163: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L8164;
    }
  goto ret0;

 L8164: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 331 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 333 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
( reload_completed)))
    {
      return gen_split_1223 (insn, operands);
    }
  goto ret0;

 L8168: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8169;
    }
  goto ret0;

 L8169: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8170;
    }
  goto ret0;

 L8170: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L8171;
    }
  goto ret0;

 L8171: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L8172;
    }
  goto ret0;

 L8172: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L8173;
    }
  goto ret0;

 L8173: ATTRIBUTE_UNUSED_LABEL
  if ((
#line 360 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 362 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
( reload_completed)))
    {
      return gen_split_1224 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
peephole2_insns (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  if (peep2_current_count >= 2)
    goto L7547;
 L7613: ATTRIBUTE_UNUSED_LABEL
  if (peep2_current_count >= 3)
    goto L7614;
 L7835: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L7836;
  goto ret0;

 L7547: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L9859;
    case SET:
      goto L7560;
    default:
     break;
   }
  goto L7613;

 L9859: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L7548;
  goto L7613;

 L7548: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L7549;
  goto L7613;

 L7549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (lo_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7550;
    }
  goto L7613;

 L7550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9860;
  goto L7613;

 L9860: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L7551;
  if (macc_msac_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7598;
    }
  goto L7613;

 L7551: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (d_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7552;
    }
  goto L7613;

 L7552: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (d_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7553;
    }
  goto L7613;

 L7553: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7554;
  goto L7613;

 L7554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SCRATCH)
    goto L7555;
  goto L7613;

 L7555: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L7556;
  goto L7613;

 L7556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7557;
    }
  goto L7613;

 L7557: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1435 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_962 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L7613;

 L7598: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7599;
  goto L7613;

 L7599: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SCRATCH)
    goto L7600;
  goto L7613;

 L7600: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L7601;
  goto L7613;

 L7601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7602;
    }
  goto L7613;

 L7602: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_966 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L7613;

 L7560: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode)
    goto L9862;
  goto L7613;

 L9862: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG)
    goto L9864;
  goto L7613;

 L9864: ATTRIBUTE_UNUSED_LABEL
  if (lo_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L7561;
    }
 L9865: ATTRIBUTE_UNUSED_LABEL
  if (lo_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L7606;
    }
  goto L7613;

 L7561: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == MULT)
    goto L7562;
  x1 = XEXP (x0, 0);
  goto L9865;

 L7562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7563;
    }
  x1 = XEXP (x0, 0);
  goto L9865;

 L7563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (d_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7564;
    }
  x1 = XEXP (x0, 0);
  goto L9865;

 L7564: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L7565;
  x1 = XEXP (x0, 0);
  goto L9865;

 L7565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7566;
    }
  x1 = XEXP (x0, 0);
  goto L9865;

 L7566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1476 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MUL3))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_963 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L9865;

 L7606: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (d_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L7607;
    }
  goto L7613;

 L7607: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L7608;
  goto L7613;

 L7608: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L7609;
  goto L7613;

 L7609: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (d_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7610;
    }
  goto L7613;

 L7610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (macc_msac_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L7611;
    }
  goto L7613;

 L7611: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7612;
  goto L7613;

 L7612: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 1689 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[1])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_967 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L7613;

 L7614: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L7615;
  goto L7835;

 L7615: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (lo_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L7616;
    }
  goto L7835;

 L7616: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (d_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L7617;
    }
  goto L7835;

 L7617: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 2)
    goto L7618;
  goto L7835;

 L7618: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L7619;
  goto L7835;

 L7619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L7620;
  goto L7835;

 L7620: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (macc_msac_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7621;
    }
  goto L7835;

 L7621: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7622;
  goto L7835;

 L7622: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SCRATCH)
    goto L7623;
  goto L7835;

 L7623: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L7624;
  goto L7835;

 L7624: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (d_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L7625;
    }
  goto L7835;

 L7625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1])
      && 
#line 1722 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (3, operands[1])))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_968 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto L7835;

 L7836: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (d_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L7837;
    }
  goto ret0;

 L7837: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == HIGH)
    goto L7838;
  goto ret0;

 L7838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (absolute_symbolic_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7839;
    }
  goto ret0;

 L7839: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (0);
  x1 = PATTERN (tem);
  if (
#line 3649 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_1027 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

