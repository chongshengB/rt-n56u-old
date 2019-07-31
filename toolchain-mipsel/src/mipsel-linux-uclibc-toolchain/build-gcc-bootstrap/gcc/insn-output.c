/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char *
output_0 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 101 "../../gcc-4.4.7/gcc/config/mips/loongson2ef.md"
{ gcc_unreachable (); }
}

static const char *
output_1 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 112 "../../gcc-4.4.7/gcc/config/mips/loongson2ef.md"
{ gcc_unreachable (); }
}

static const char *
output_2 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 123 "../../gcc-4.4.7/gcc/config/mips/loongson2ef.md"
{ gcc_unreachable (); }
}

static const char *
output_3 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 134 "../../gcc-4.4.7/gcc/config/mips/loongson2ef.md"
{ gcc_unreachable (); }
}

static const char *
output_4 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (ISA_HAS_COND_TRAP)
    return "teq\t$0,$0";
  else if (TARGET_MIPS16)
    return "break 0";
  else
    return "break";
}
}

static const char * const output_10[] = {
  "addu\t%0,%1,%2",
  "addiu\t%0,%1,%2",
};

static const char * const output_11[] = {
  "daddu\t%0,%1,%2",
  "daddiu\t%0,%1,%2",
};

static const char * const output_12[] = {
  "addiu\t%0,%2",
  "addiu\t%0,%1,%2",
  "addiu\t%0,%2",
  "addiu\t%0,%1,%2",
  "addu\t%0,%1,%2",
};

static const char * const output_13[] = {
  "daddiu\t%0,%2",
  "daddiu\t%0,%1,%2",
  "daddiu\t%0,%2",
  "daddiu\t%0,%1,%2",
  "daddu\t%0,%1,%2",
};

static const char * const output_14[] = {
  "addu\t%0,%1,%2",
  "addiu\t%0,%1,%2",
};

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1409 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (which_alternative == 1)
    return "mult\t%1,%2";
  if (SImode == SImode && TARGET_MIPS3900)
    return "mult\t%0,%1,%2";
  return "mul\t%0,%1,%2";
}
}

static const char *
output_34 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1409 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (which_alternative == 1)
    return "dmult\t%1,%2";
  if (DImode == SImode && TARGET_MIPS3900)
    return "mult\t%0,%1,%2";
  return "dmul\t%0,%1,%2";
}
}

static const char * const output_39[] = {
  "madd\t%1,%2",
  "#",
};

static const char * const output_40[] = {
  "madd\t%1,%2",
  "madd\t%0,%1,%2",
  "#",
};

static const char *
output_41 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1562 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (which_alternative == 1)
    return "macc\t%0,%1,%2";
  else if (TARGET_MIPS5500)
    return "madd\t%1,%2";
  else
    /* The VR4130 assumes that there is a two-cycle latency between a macc
       that "writes" to $0 and an instruction that reads from it.  We avoid
       this by assigning to $1 instead.  */
    return "%[macc\t%@,%1,%2%]";
}
}

static const char *
output_42 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1583 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (which_alternative == 1)
    return "msac\t%0,%2,%3";
  else if (TARGET_MIPS5500)
    return "msub\t%2,%3";
  else
    return "msac\t$0,%2,%3";
}
}

static const char * const output_46[] = {
  "msub\t%2,%3",
  "#",
};

static const char * const output_47[] = {
  "muls\t$0,%1,%2",
  "muls\t%0,%1,%2",
};

static const char *
output_58 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1886 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (ISA_HAS_DSPR2)
    return "msub\t%q0,%1,%2";
  else if (TARGET_MIPS5500 || GENERATE_MADD_MSUB)
    return "msub\t%1,%2";
  else
    return "msac\t$0,%1,%2";
}
}

static const char *
output_59 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1886 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (ISA_HAS_DSPR2)
    return "msubu\t%q0,%1,%2";
  else if (TARGET_MIPS5500 || GENERATE_MADD_MSUB)
    return "msubu\t%1,%2";
  else
    return "msacu\t$0,%1,%2";
}
}

static const char *
output_60 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1927 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return TARGET_FIX_R4000 ? "mult\t%1,%2\n\tmfhi\t%0" : "#"; }
}

static const char *
output_61 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1927 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return TARGET_FIX_R4000 ? "multu\t%1,%2\n\tmfhi\t%0" : "#"; }
}

static const char *
output_66 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1992 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return TARGET_FIX_R4000 ? "dmult\t%1,%2\n\tmfhi\t%0" : "#"; }
}

static const char *
output_67 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1992 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return TARGET_FIX_R4000 ? "dmultu\t%1,%2\n\tmfhi\t%0" : "#"; }
}

static const char *
output_73 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2066 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_MAD)
    return "mad\t%1,%2";
  else if (ISA_HAS_DSPR2)
    return "madd\t%q0,%1,%2";
  else if (GENERATE_MADD_MSUB || TARGET_MIPS5500)
    return "madd\t%1,%2";
  else
    /* See comment in *macc.  */
    return "%[macc\t%@,%1,%2%]";
}
}

static const char *
output_74 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2066 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_MAD)
    return "madu\t%1,%2";
  else if (ISA_HAS_DSPR2)
    return "maddu\t%q0,%1,%2";
  else if (GENERATE_MADD_MSUB || TARGET_MIPS5500)
    return "maddu\t%1,%2";
  else
    /* See comment in *macc.  */
    return "%[maccu\t%@,%1,%2%]";
}
}

static const char *
output_111 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2270 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "div.s\t%0,%1,%2\n\tmov.s\t%0,%0";
  else
    return "div.s\t%0,%1,%2";
}
}

static const char *
output_112 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2270 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "div.d\t%0,%1,%2\n\tmov.d\t%0,%0";
  else
    return "div.d\t%0,%1,%2";
}
}

static const char *
output_113 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2270 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "div.ps\t%0,%1,%2\n\tmov.ps\t%0,%0";
  else
    return "div.ps\t%0,%1,%2";
}
}

static const char *
output_114 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2288 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "recip.s\t%0,%2\n\tmov.s\t%0,%0";
  else
    return "recip.s\t%0,%2";
}
}

static const char *
output_115 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2288 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "recip.d\t%0,%2\n\tmov.d\t%0,%0";
  else
    return "recip.d\t%0,%2";
}
}

static const char *
output_116 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2288 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "recip.ps\t%0,%2\n\tmov.ps\t%0,%0";
  else
    return "recip.ps\t%0,%2";
}
}

static const char *
output_121 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2374 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_division ("div\t%.,%1,%2", operands); }
}

static const char *
output_122 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2374 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_division ("divu\t%.,%1,%2", operands); }
}

static const char *
output_123 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2374 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_division ("div\t%.,%1,%2", operands); }
}

static const char *
output_124 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2374 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_division ("divu\t%.,%1,%2", operands); }
}

static const char *
output_125 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2374 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_division ("ddiv\t%.,%1,%2", operands); }
}

static const char *
output_126 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2374 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_division ("ddivu\t%.,%1,%2", operands); }
}

static const char *
output_127 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2392 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "sqrt.s\t%0,%1\n\tmov.s\t%0,%0";
  else
    return "sqrt.s\t%0,%1";
}
}

static const char *
output_128 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2392 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "sqrt.d\t%0,%1\n\tmov.d\t%0,%0";
  else
    return "sqrt.d\t%0,%1";
}
}

static const char *
output_129 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2392 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "sqrt.ps\t%0,%1\n\tmov.ps\t%0,%0";
  else
    return "sqrt.ps\t%0,%1";
}
}

static const char *
output_130 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2410 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "rsqrt.s\t%0,%2\n\tmov.s\t%0,%0";
  else
    return "rsqrt.s\t%0,%2";
}
}

static const char *
output_131 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2410 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "rsqrt.d\t%0,%2\n\tmov.d\t%0,%0";
  else
    return "rsqrt.d\t%0,%2";
}
}

static const char *
output_132 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2410 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "rsqrt.ps\t%0,%2\n\tmov.ps\t%0,%0";
  else
    return "rsqrt.ps\t%0,%2";
}
}

static const char *
output_133 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2428 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "rsqrt.s\t%0,%2\n\tmov.s\t%0,%0";
  else
    return "rsqrt.s\t%0,%2";
}
}

static const char *
output_134 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2428 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "rsqrt.d\t%0,%2\n\tmov.d\t%0,%0";
  else
    return "rsqrt.d\t%0,%2";
}
}

static const char *
output_135 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2428 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_FIX_SB1)
    return "rsqrt.ps\t%0,%2\n\tmov.ps\t%0,%0";
  else
    return "rsqrt.ps\t%0,%2";
}
}

static const char *
output_143 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2506 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    return "neg\t%0,%1";
  else
    return "subu\t%0,%.,%1";
}
}

static const char *
output_148 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2539 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    return "not\t%0,%1";
  else
    return "nor\t%0,%.,%1";
}
}

static const char *
output_149 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2539 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_MIPS16)
    return "not\t%0,%1";
  else
    return "nor\t%0,%.,%1";
}
}

static const char * const output_150[] = {
  "and\t%0,%1,%2",
  "andi\t%0,%1,%x2",
};

static const char * const output_151[] = {
  "and\t%0,%1,%2",
  "andi\t%0,%1,%x2",
};

static const char * const output_154[] = {
  "or\t%0,%1,%2",
  "ori\t%0,%1,%x2",
};

static const char * const output_155[] = {
  "or\t%0,%1,%2",
  "ori\t%0,%1,%x2",
};

static const char * const output_158[] = {
  "xor\t%0,%1,%2",
  "xori\t%0,%1,%x2",
};

static const char * const output_159[] = {
  "xor\t%0,%1,%2",
  "xori\t%0,%1,%x2",
};

static const char * const output_160[] = {
  "xor\t%0,%2",
  "cmpi\t%1,%2",
  "cmp\t%1,%2",
};

static const char * const output_161[] = {
  "xor\t%0,%2",
  "cmpi\t%1,%2",
  "cmp\t%1,%2",
};

static const char * const output_165[] = {
  "sll\t%0,%1,0",
  "sw\t%1,%0",
};

static const char * const output_166[] = {
  "sll\t%0,%1,0",
  "sh\t%1,%0",
};

static const char * const output_167[] = {
  "sll\t%0,%1,0",
  "sb\t%1,%0",
};

static const char * const output_189[] = {
  "#",
  "lwu\t%0,%1",
};

static const char *
output_190 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2860 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (which_alternative == 0)
    return "#";

  operands[1] = gen_lowpart (SImode, operands[1]);
  return "lwu\t%0,%1";
}
}

static const char * const output_191[] = {
  "andi\t%0,%1,0x00ff",
  "lbu\t%0,%1",
};

static const char * const output_192[] = {
  "andi\t%0,%1,0xffff",
  "lhu\t%0,%1",
};

static const char * const output_193[] = {
  "andi\t%0,%1,0x00ff",
  "lbu\t%0,%1",
};

static const char * const output_194[] = {
  "andi\t%0,%1,0xffff",
  "lhu\t%0,%1",
};

static const char * const output_203[] = {
  "andi\t%0,%1,0x00ff",
  "lbu\t%0,%1",
};

static const char * const output_205[] = {
  "#",
  "lw\t%0,%1",
};

static const char * const output_206[] = {
  "seb\t%0",
  "lb\t%0,%1",
};

static const char * const output_207[] = {
  "seh\t%0",
  "lh\t%0,%1",
};

static const char * const output_208[] = {
  "seb\t%0",
  "lb\t%0,%1",
};

static const char * const output_209[] = {
  "seh\t%0",
  "lh\t%0,%1",
};

static const char * const output_210[] = {
  "#",
  "lb\t%0,%1",
};

static const char * const output_211[] = {
  "#",
  "lh\t%0,%1",
};

static const char * const output_212[] = {
  "#",
  "lb\t%0,%1",
};

static const char * const output_213[] = {
  "#",
  "lh\t%0,%1",
};

static const char * const output_214[] = {
  "seb\t%0,%1",
  "lb\t%0,%1",
};

static const char * const output_215[] = {
  "seh\t%0,%1",
  "lh\t%0,%1",
};

static const char * const output_216[] = {
  "seb\t%0,%1",
  "lb\t%0,%1",
};

static const char * const output_217[] = {
  "seh\t%0,%1",
  "lh\t%0,%1",
};

static const char * const output_218[] = {
  "seb\t%0",
  "lb\t%0,%1",
};

static const char * const output_219[] = {
  "#",
  "lb\t%0,%1",
};

static const char * const output_220[] = {
  "seb\t%0,%1",
  "lb\t%0,%1",
};

static const char *
output_223 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3118 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (set_nomacro)
    return ".set\tmacro\n\ttrunc.w.d %0,%1,%2\n\t.set\tnomacro";
  else
    return "trunc.w.d %0,%1,%2";
}
}

static const char *
output_225 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3155 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (set_nomacro)
    return ".set\tmacro\n\ttrunc.w.s %0,%1,%2\n\t.set\tnomacro";
  else
    return "trunc.w.s %0,%1,%2";
}
}

static const char *
output_240 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3543 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[3] =
    GEN_INT (mask_low_and_shift_len (SImode, operands[3], operands[2]));
  return "cins\t%0,%1,%2,%m3";
}
}

static const char *
output_241 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3543 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[3] =
    GEN_INT (mask_low_and_shift_len (DImode, operands[3], operands[2]));
  return "cins\t%0,%1,%2,%m3";
}
}

static const char *
output_268 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3873 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_269 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3883 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_270 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3893 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_271 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3903 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_272 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3971 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_273 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3971 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_274 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3971 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_275 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3971 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_276 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3971 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_277 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3971 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_278 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3971 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_279 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3971 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_280 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3971 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_281 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3981 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_282 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3981 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_283 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3981 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_284 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3981 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_285 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3981 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_286 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3981 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_287 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3981 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_288 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3981 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_289 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3981 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_290 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4052 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_312 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4158 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_313 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4168 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_314 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4233 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_315 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4243 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_316 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4291 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_317 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4301 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_318 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4311 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_319 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4332 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_320 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4342 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_321 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4352 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_326 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4477 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_327 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4492 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return ISA_HAS_MACCHI ? "macchi\t%0,%.,%." : "mfhi\t%0"; }
}

static const char *
output_328 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4492 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return ISA_HAS_MACCHI ? "macchi\t%0,%.,%." : "mfhi\t%0"; }
}

static const char *
output_329 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4492 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return ISA_HAS_MACCHI ? "dmacchi\t%0,%.,%." : "mfhi\t%0"; }
}

static const char *
output_333 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4550 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_334 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4550 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_335 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4550 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_336 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4550 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_337 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4550 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_338 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4550 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_339 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4550 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_340 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4565 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_341 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4565 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_342 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4565 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_343 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4565 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_344 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4565 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_345 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4565 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_346 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4565 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_347 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4580 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_348 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4580 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_349 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4580 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_350 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4580 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_351 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4580 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_352 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4580 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_353 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4580 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[1] = mips_subword (operands[1], INTVAL (operands[2]));
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_376 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4700 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (set_nomacro && which_alternative == 1)
    return ".set\tmacro\n\t.cprestore\t%0\n\t.set\tnomacro";
  else
    return ".cprestore\t%0";
}
}

static const char *
output_381 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return "%(%<bal\t1f\n"
         "\tnop\n"
         "1:\taddiu\t$31,$31,12\n"
         "\tjr.hb\t$31\n"
         "\tnop%>%)";
}
}

static const char *
output_382 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return "%(%<bal\t1f\n"
         "\tnop\n"
         "1:\tdaddiu\t$31,$31,12\n"
         "\tjr.hb\t$31\n"
         "\tnop%>%)";
}
}

static const char *
output_385 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4846 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (SImode) - 1));

  return "sll\t%0,%1,%2";
}
}

static const char *
output_386 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4846 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (SImode) - 1));

  return "sra\t%0,%1,%2";
}
}

static const char *
output_387 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4846 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (SImode) - 1));

  return "srl\t%0,%1,%2";
}
}

static const char *
output_388 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4846 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (DImode) - 1));

  return "dsll\t%0,%1,%2";
}
}

static const char *
output_389 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4846 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (DImode) - 1));

  return "dsra\t%0,%1,%2";
}
}

static const char *
output_390 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4846 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (DImode) - 1));

  return "dsrl\t%0,%1,%2";
}
}

static const char *
output_391 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4862 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sll\t%0,%1,%2";
}
}

static const char *
output_392 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4862 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sra\t%0,%1,%2";
}
}

static const char *
output_393 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4862 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "srl\t%0,%1,%2";
}
}

static const char *
output_394 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4876 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (which_alternative == 0)
    return "sll\t%0,%2";

  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "sll\t%0,%1,%2";
}
}

static const char *
output_395 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4876 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (which_alternative == 0)
    return "sra\t%0,%2";

  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "sra\t%0,%1,%2";
}
}

static const char *
output_396 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4876 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (which_alternative == 0)
    return "srl\t%0,%2";

  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "srl\t%0,%1,%2";
}
}

static const char *
output_397 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4898 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (which_alternative == 0)
    return "dsll\t%0,%2";

  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);
  return "dsll\t%0,%1,%2";
}
}

static const char *
output_398 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4918 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsra\t%0,%2";
}
}

static const char *
output_399 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4937 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsrl\t%0,%2";
}
}

static const char *
output_401 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4992 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    gcc_assert (INTVAL (operands[2]) >= 0
		&& INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode));

  return "ror\t%0,%1,%2";
}
}

static const char *
output_402 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4992 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (GET_CODE (operands[2]) == CONST_INT)
    gcc_assert (INTVAL (operands[2]) >= 0
		&& INTVAL (operands[2]) < GET_MODE_BITSIZE (DImode));

  return "dror\t%0,%1,%2";
}
}

static const char *
output_403 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5064 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%F0", "%Z2%1"),
					 MIPS_BRANCH ("b%W0", "%Z2%1"));
}
}

static const char *
output_404 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5081 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%W0", "%Z2%1"),
					 MIPS_BRANCH ("b%F0", "%Z2%1"));
}
}

static const char *
output_405 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5100 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_order_conditional_branch (insn, operands, false); }
}

static const char *
output_406 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5100 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_order_conditional_branch (insn, operands, false); }
}

static const char *
output_407 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5113 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_order_conditional_branch (insn, operands, true); }
}

static const char *
output_408 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5113 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips_output_order_conditional_branch (insn, operands, true); }
}

static const char *
output_409 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5128 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%C0", "%2,%z3,%1"),
					 MIPS_BRANCH ("b%N0", "%2,%z3,%1"));
}
}

static const char *
output_410 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5128 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%C0", "%2,%z3,%1"),
					 MIPS_BRANCH ("b%N0", "%2,%z3,%1"));
}
}

static const char *
output_411 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5145 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%N0", "%2,%z3,%1"),
					 MIPS_BRANCH ("b%C0", "%2,%z3,%1"));
}
}

static const char *
output_412 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5145 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%N0", "%2,%z3,%1"),
					 MIPS_BRANCH ("b%C0", "%2,%z3,%1"));
}
}

static const char *
output_413 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5164 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (operands[2] != pc_rtx)
    {
      if (which_alternative == 0)
	return "b%C0z\t%1,%2";
      else
	return "bt%C0z\t%2";
    }
  else
    {
      if (which_alternative == 0)
	return "b%N0z\t%1,%3";
      else
	return "bt%N0z\t%3";
    }
}
}

static const char *
output_414 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5164 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (operands[2] != pc_rtx)
    {
      if (which_alternative == 0)
	return "b%C0z\t%1,%2";
      else
	return "bt%C0z\t%2";
    }
  else
    {
      if (which_alternative == 0)
	return "b%N0z\t%1,%3";
      else
	return "bt%N0z\t%3";
    }
}
}

static const char *
output_415 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5215 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit0", "%0,%2,%1"),
				    MIPS_BRANCH ("bbit1", "%0,%2,%1"));
}
}

static const char *
output_416 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5215 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit1", "%0,%2,%1"),
				    MIPS_BRANCH ("bbit0", "%0,%2,%1"));
}
}

static const char *
output_417 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5215 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit0", "%0,%2,%1"),
				    MIPS_BRANCH ("bbit1", "%0,%2,%1"));
}
}

static const char *
output_418 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5215 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit1", "%0,%2,%1"),
				    MIPS_BRANCH ("bbit0", "%0,%2,%1"));
}
}

static const char *
output_419 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5236 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit1", "%0,%2,%1"),
				    MIPS_BRANCH ("bbit0", "%0,%2,%1"));
}
}

static const char *
output_420 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5236 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit0", "%0,%2,%1"),
				    MIPS_BRANCH ("bbit1", "%0,%2,%1"));
}
}

static const char *
output_421 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5236 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit1", "%0,%2,%1"),
				    MIPS_BRANCH ("bbit0", "%0,%2,%1"));
}
}

static const char *
output_422 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5236 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  return
    mips_output_conditional_branch (insn, operands,
				    MIPS_BRANCH ("bbit0", "%0,%2,%1"),
				    MIPS_BRANCH ("bbit1", "%0,%2,%1"));
}
}

static const char * const output_431[] = {
  "seq\t%0,%1,%2",
  "sltiu\t%0,%1,1",
  "seqi\t%0,%1,%2",
};

static const char * const output_432[] = {
  "seq\t%0,%1,%2",
  "sltiu\t%0,%1,1",
  "seqi\t%0,%1,%2",
};

static const char * const output_433[] = {
  "seq\t%0,%1,%2",
  "sltiu\t%0,%1,1",
  "seqi\t%0,%1,%2",
};

static const char * const output_434[] = {
  "seq\t%0,%1,%2",
  "sltiu\t%0,%1,1",
  "seqi\t%0,%1,%2",
};

static const char * const output_439[] = {
  "sne\t%0,%1,%2",
  "sltu\t%0,%.,%1",
  "snei\t%0,%1,%2",
};

static const char * const output_440[] = {
  "sne\t%0,%1,%2",
  "sltu\t%0,%.,%1",
  "snei\t%0,%1,%2",
};

static const char * const output_441[] = {
  "sne\t%0,%1,%2",
  "sltu\t%0,%.,%1",
  "snei\t%0,%1,%2",
};

static const char * const output_442[] = {
  "sne\t%0,%1,%2",
  "sltu\t%0,%.,%1",
  "snei\t%0,%1,%2",
};

static const char *
output_483 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%0,%1,%2";
}
}

static const char *
output_484 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%0,%1,%2";
}
}

static const char *
output_485 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%0,%1,%2";
}
}

static const char *
output_486 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%0,%1,%2";
}
}

static const char *
output_487 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%0,%1,%2";
}
}

static const char *
output_488 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%0,%1,%2";
}
}

static const char *
output_489 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%0,%1,%2";
}
}

static const char *
output_490 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%0,%1,%2";
}
}

static const char *
output_491 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5420 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%1,%2";
}
}

static const char *
output_492 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5420 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%1,%2";
}
}

static const char *
output_493 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5420 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%1,%2";
}
}

static const char *
output_494 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5420 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%1,%2";
}
}

static const char *
output_495 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5420 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%1,%2";
}
}

static const char *
output_496 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5420 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%1,%2";
}
}

static const char *
output_497 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5420 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%1,%2";
}
}

static const char *
output_498 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5420 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%1,%2";
}
}

static const char *
output_521 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5468 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (flag_pic)
    {
      if (get_attr_length (insn) <= 8)
	return "%*b\t%l0%/";
      else
	{
	  output_asm_insn (mips_output_load_label (), operands);
	  return "%*jr\t%@%/%]";
	}
    }
  else
    return "%*j\t%l0%/";
}
}

static const char *
output_537 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5870 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return MIPS_CALL ("j", operands, 0); }
}

static const char *
output_538 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5890 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return MIPS_CALL ("j", operands, 1); }
}

static const char *
output_539 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5901 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return MIPS_CALL ("j", operands, 1); }
}

static const char *
output_540 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5958 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return TARGET_SPLIT_CALLS ? "#" : MIPS_CALL ("jal", operands, 0); }
}

static const char *
output_541 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5973 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return MIPS_CALL ("jal", operands, 0); }
}

static const char *
output_542 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5986 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return TARGET_SPLIT_CALLS ? "#" : MIPS_CALL ("jal", operands, 0); }
}

static const char *
output_543 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6003 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return MIPS_CALL ("jal", operands, 0); }
}

static const char *
output_544 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6025 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return TARGET_SPLIT_CALLS ? "#" : MIPS_CALL ("jal", operands, 1); }
}

static const char *
output_545 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6043 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return MIPS_CALL ("jal", operands, 1); }
}

static const char *
output_546 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6054 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return TARGET_SPLIT_CALLS ? "#" : MIPS_CALL ("jal", operands, 1); }
}

static const char *
output_547 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6073 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return MIPS_CALL ("jal", operands, 1); }
}

static const char *
output_548 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6086 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return TARGET_SPLIT_CALLS ? "#" : MIPS_CALL ("jal", operands, 1); }
}

static const char *
output_549 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return MIPS_CALL ("jal", operands, 1); }
}

static const char *
output_550 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6147 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  if (TARGET_LOONGSON_2EF)
    /* Loongson 2[ef] use load to $0 to perform prefetching.  */
    return "ld\t$0,%a0";
  operands[1] = mips_prefetch_cookie (operands[1], operands[2]);
  return "pref\t%1,%a0";
}
}

static const char *
output_551 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6162 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = mips_prefetch_cookie (operands[2], operands[3]);
  return "prefx\t%2,%1(%0)";
}
}

static const char *
output_552 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6162 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  operands[2] = mips_prefetch_cookie (operands[2], operands[3]);
  return "prefx\t%2,%1(%0)";
}
}

static const char *
output_554 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6179 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
    if (set_noreorder)
      return "nop";
    else
      return "#nop";
  }
}

static const char * const output_555[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_556[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_557[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_558[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_559[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_560[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_561[] = {
  "mov%T4.s\t%0,%2,%1",
  "mov%t4.s\t%0,%3,%1",
};

static const char * const output_562[] = {
  "mov%T4.s\t%0,%2,%1",
  "mov%t4.s\t%0,%3,%1",
};

static const char * const output_563[] = {
  "mov%T4.s\t%0,%2,%1",
  "mov%t4.s\t%0,%3,%1",
};

static const char * const output_564[] = {
  "mov%T4.d\t%0,%2,%1",
  "mov%t4.d\t%0,%3,%1",
};

static const char * const output_565[] = {
  "mov%T4.d\t%0,%2,%1",
  "mov%t4.d\t%0,%3,%1",
};

static const char * const output_566[] = {
  "mov%T4.d\t%0,%2,%1",
  "mov%t4.d\t%0,%3,%1",
};

static const char *
output_567 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6258 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  assemble_integer (operands[0], INTVAL (operands[1]),
		    BITS_PER_UNIT * INTVAL (operands[1]), 1);
  return "";
}
}

static const char *
output_568 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6269 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{
  REAL_VALUE_TYPE d;

  gcc_assert (GET_CODE (operands[0]) == CONST_DOUBLE);
  REAL_VALUE_FROM_CONST_DOUBLE (d, operands[0]);
  assemble_real (d, GET_MODE (operands[0]),
		 GET_MODE_BITSIZE (GET_MODE (operands[0])));
  return "";
}
}

static const char *
output_570 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6308 "../../gcc-4.4.7/gcc/config/mips/mips.md"
{ return mips16e_output_save_restore (operands[0], INTVAL (operands[2])); }
}

static const char *
output_576 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 53 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_COMPARE_AND_SWAP ("", "li"));
  else
    return mips_output_sync_loop (MIPS_COMPARE_AND_SWAP ("", "move"));
}
}

static const char *
output_577 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 53 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_COMPARE_AND_SWAP ("d", "li"));
  else
    return mips_output_sync_loop (MIPS_COMPARE_AND_SWAP ("d", "move"));
}
}

static const char *
output_578 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 86 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_COMPARE_AND_SWAP_12 (MIPS_COMPARE_AND_SWAP_12_NONZERO_OP)));
  else
    return (mips_output_sync_loop
	    (MIPS_COMPARE_AND_SWAP_12 (MIPS_COMPARE_AND_SWAP_12_ZERO_OP)));
}
}

static const char *
output_579 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 103 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_OP ("", "addiu"));
  else
    return mips_output_sync_loop (MIPS_SYNC_OP ("", "addu"));
}
}

static const char *
output_580 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 103 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_OP ("d", "daddiu"));
  else
    return mips_output_sync_loop (MIPS_SYNC_OP ("d", "daddu"));
}
}

static const char *
output_581 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 137 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_OP_12 ("addu", MIPS_SYNC_OP_12_AND)));
}
}

static const char *
output_582 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 137 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_OP_12 ("subu", MIPS_SYNC_OP_12_AND)));
}
}

static const char *
output_583 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 137 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_OP_12 ("or", MIPS_SYNC_OP_12_AND)));
}
}

static const char *
output_584 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 137 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_OP_12 ("xor", MIPS_SYNC_OP_12_AND)));
}
}

static const char *
output_585 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 137 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_OP_12 ("and", MIPS_SYNC_OP_12_AND)));
}
}

static const char *
output_586 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_OLD_OP_12 ("addu", MIPS_SYNC_OLD_OP_12_AND)));
}
}

static const char *
output_587 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_OLD_OP_12 ("subu", MIPS_SYNC_OLD_OP_12_AND)));
}
}

static const char *
output_588 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_OLD_OP_12 ("or", MIPS_SYNC_OLD_OP_12_AND)));
}
}

static const char *
output_589 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_OLD_OP_12 ("xor", MIPS_SYNC_OLD_OP_12_AND)));
}
}

static const char *
output_590 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_OLD_OP_12 ("and", MIPS_SYNC_OLD_OP_12_AND)));
}
}

static const char *
output_591 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 216 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_NEW_OP_12 ("addu", MIPS_SYNC_NEW_OP_12_AND)));
}
}

static const char *
output_592 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 216 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_NEW_OP_12 ("subu", MIPS_SYNC_NEW_OP_12_AND)));
}
}

static const char *
output_593 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 216 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_NEW_OP_12 ("or", MIPS_SYNC_NEW_OP_12_AND)));
}
}

static const char *
output_594 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 216 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_NEW_OP_12 ("xor", MIPS_SYNC_NEW_OP_12_AND)));
}
}

static const char *
output_595 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 216 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_NEW_OP_12 ("and", MIPS_SYNC_NEW_OP_12_AND)));
}
}

static const char *
output_596 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 248 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_OP_12 ("and", MIPS_SYNC_OP_12_XOR)));
}
}

static const char *
output_597 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 283 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_OLD_OP_12 ("and", MIPS_SYNC_OLD_OP_12_XOR)));
}
}

static const char *
output_598 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 323 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
    return (mips_output_sync_loop
	    (MIPS_SYNC_NEW_OP_12 ("and", MIPS_SYNC_NEW_OP_12_XOR)));
}
}

static const char *
output_599 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 336 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  return mips_output_sync_loop (MIPS_SYNC_OP ("", "subu"));
}
}

static const char *
output_600 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 336 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  return mips_output_sync_loop (MIPS_SYNC_OP ("d", "dsubu"));
}
}

static const char *
output_601 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 350 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_OLD_OP ("", "addiu"));
  else
    return mips_output_sync_loop (MIPS_SYNC_OLD_OP ("", "addu"));
}
}

static const char *
output_602 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 350 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_OLD_OP ("d", "daddiu"));
  else
    return mips_output_sync_loop (MIPS_SYNC_OLD_OP ("d", "daddu"));
}
}

static const char *
output_603 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 367 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  return mips_output_sync_loop (MIPS_SYNC_OLD_OP ("", "subu"));
}
}

static const char *
output_604 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 367 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  return mips_output_sync_loop (MIPS_SYNC_OLD_OP ("d", "dsubu"));
}
}

static const char *
output_605 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 381 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_NEW_OP ("", "addiu"));
  else
    return mips_output_sync_loop (MIPS_SYNC_NEW_OP ("", "addu"));
}
}

static const char *
output_606 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 381 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_NEW_OP ("d", "daddiu"));
  else
    return mips_output_sync_loop (MIPS_SYNC_NEW_OP ("d", "daddu"));
}
}

static const char *
output_607 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 398 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  return mips_output_sync_loop (MIPS_SYNC_NEW_OP ("", "subu"));
}
}

static const char *
output_608 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 398 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  return mips_output_sync_loop (MIPS_SYNC_NEW_OP ("d", "dsubu"));
}
}

static const char *
output_609 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 410 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_OP ("", "ori"));
  else
    return mips_output_sync_loop (MIPS_SYNC_OP ("", "or"));
}
}

static const char *
output_610 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 410 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_OP ("", "xori"));
  else
    return mips_output_sync_loop (MIPS_SYNC_OP ("", "xor"));
}
}

static const char *
output_611 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 410 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_OP ("", "andi"));
  else
    return mips_output_sync_loop (MIPS_SYNC_OP ("", "and"));
}
}

static const char *
output_612 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 410 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_OP ("d", "ori"));
  else
    return mips_output_sync_loop (MIPS_SYNC_OP ("d", "or"));
}
}

static const char *
output_613 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 410 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_OP ("d", "xori"));
  else
    return mips_output_sync_loop (MIPS_SYNC_OP ("d", "xor"));
}
}

static const char *
output_614 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 410 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_OP ("d", "andi"));
  else
    return mips_output_sync_loop (MIPS_SYNC_OP ("d", "and"));
}
}

static const char *
output_615 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_OLD_OP ("", "ori")));
  else
    return mips_output_sync_loop (MIPS_SYNC_OLD_OP ("", "or"));
}
}

static const char *
output_616 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_OLD_OP ("", "xori")));
  else
    return mips_output_sync_loop (MIPS_SYNC_OLD_OP ("", "xor"));
}
}

static const char *
output_617 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_OLD_OP ("", "andi")));
  else
    return mips_output_sync_loop (MIPS_SYNC_OLD_OP ("", "and"));
}
}

static const char *
output_618 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_OLD_OP ("d", "ori")));
  else
    return mips_output_sync_loop (MIPS_SYNC_OLD_OP ("d", "or"));
}
}

static const char *
output_619 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_OLD_OP ("d", "xori")));
  else
    return mips_output_sync_loop (MIPS_SYNC_OLD_OP ("d", "xor"));
}
}

static const char *
output_620 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 427 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_OLD_OP ("d", "andi")));
  else
    return mips_output_sync_loop (MIPS_SYNC_OLD_OP ("d", "and"));
}
}

static const char *
output_621 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 445 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_NEW_OP ("", "ori")));
  else
    return mips_output_sync_loop (MIPS_SYNC_NEW_OP ("", "or"));
}
}

static const char *
output_622 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 445 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_NEW_OP ("", "xori")));
  else
    return mips_output_sync_loop (MIPS_SYNC_NEW_OP ("", "xor"));
}
}

static const char *
output_623 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 445 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_NEW_OP ("", "andi")));
  else
    return mips_output_sync_loop (MIPS_SYNC_NEW_OP ("", "and"));
}
}

static const char *
output_624 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 445 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_NEW_OP ("d", "ori")));
  else
    return mips_output_sync_loop (MIPS_SYNC_NEW_OP ("d", "or"));
}
}

static const char *
output_625 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 445 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_NEW_OP ("d", "xori")));
  else
    return mips_output_sync_loop (MIPS_SYNC_NEW_OP ("d", "xor"));
}
}

static const char *
output_626 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 445 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_NEW_OP ("d", "andi")));
  else
    return mips_output_sync_loop (MIPS_SYNC_NEW_OP ("d", "and"));
}
}

static const char *
output_627 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 459 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_NAND ("", "andi"));
  else
    return mips_output_sync_loop (MIPS_SYNC_NAND ("", "and"));
}
}

static const char *
output_628 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 459 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_NAND ("d", "andi"));
  else
    return mips_output_sync_loop (MIPS_SYNC_NAND ("d", "and"));
}
}

static const char *
output_629 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 474 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_OLD_NAND ("", "andi"));
  else
    return mips_output_sync_loop (MIPS_SYNC_OLD_NAND ("", "and"));
}
}

static const char *
output_630 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 474 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_OLD_NAND ("d", "andi"));
  else
    return mips_output_sync_loop (MIPS_SYNC_OLD_NAND ("d", "and"));
}
}

static const char *
output_631 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 489 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_NEW_NAND ("", "andi"));
  else
    return mips_output_sync_loop (MIPS_SYNC_NEW_NAND ("", "and"));
}
}

static const char *
output_632 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 489 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_NEW_NAND ("d", "andi"));
  else
    return mips_output_sync_loop (MIPS_SYNC_NEW_NAND ("d", "and"));
}
}

static const char *
output_633 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 504 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_EXCHANGE ("", "li"));
  else
    return mips_output_sync_loop (MIPS_SYNC_EXCHANGE ("", "move"));
}
}

static const char *
output_634 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 504 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return mips_output_sync_loop (MIPS_SYNC_EXCHANGE ("d", "li"));
  else
    return mips_output_sync_loop (MIPS_SYNC_EXCHANGE ("d", "move"));
}
}

static const char *
output_635 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 534 "../../gcc-4.4.7/gcc/config/mips/sync.md"
{
  if (which_alternative == 0)
    return (mips_output_sync_loop
	    (MIPS_SYNC_EXCHANGE_12 (MIPS_SYNC_EXCHANGE_12_NONZERO_OP)));
  else
    return (mips_output_sync_loop
	    (MIPS_SYNC_EXCHANGE_12 (MIPS_SYNC_EXCHANGE_12_ZERO_OP)));
}
}

static const char * const output_636[] = {
  "mov%T4.ps\t%0,%2,%1",
  "mov%t4.ps\t%0,%3,%1",
};

static const char * const output_637[] = {
  "mov%T4.ps\t%0,%2,%1",
  "mov%t4.ps\t%0,%3,%1",
};

static const char * const output_638[] = {
  "movt.ps\t%0,%1,%3",
  "movf.ps\t%0,%2,%3",
};

static const char *
output_643 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 142 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
{
  if (BYTES_BIG_ENDIAN)
    return "cvt.ps.s\t%0,%1,%2";
  else
    return "cvt.ps.s\t%0,%2,%1";
}
}

static const char *
output_644 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 161 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
{
  if (INTVAL (operands[2]) == !BYTES_BIG_ENDIAN)
    return "cvt.s.pu\t%0,%1";
  else
    return "cvt.s.pl\t%0,%1";
}
}

static const char *
output_672 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 508 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
{
  operands[2]
    = gen_rtx_REG (CCmode, REGNO (operands[2]) + INTVAL (operands[3]));
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%F0", "%2,%1"),
					 MIPS_BRANCH ("b%W0", "%2,%1"));
}
}

static const char *
output_673 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 530 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
{
  operands[2]
    = gen_rtx_REG (CCmode, REGNO (operands[2]) + INTVAL (operands[3]));
  return mips_output_conditional_branch (insn, operands,
					 MIPS_BRANCH ("b%W0", "%2,%1"),
					 MIPS_BRANCH ("b%F0", "%2,%1"));
}
}

static const char *
output_716 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 306 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2])
	  & ~(unsigned HOST_WIDE_INT) 0xf)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0xf);
      return "shll.ph\t%0,%1,%2";
    }
  return "shllv.ph\t%0,%1,%2";
}
}

static const char *
output_717 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 306 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2])
	  & ~(unsigned HOST_WIDE_INT) 0x7)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x7);
      return "shll.qb\t%0,%1,%2";
    }
  return "shllv.qb\t%0,%1,%2";
}
}

static const char *
output_718 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 328 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2])
          & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "shll_s.w\t%0,%1,%2";
    }
  return "shllv_s.w\t%0,%1,%2";
}
}

static const char *
output_719 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 328 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2])
          & ~(unsigned HOST_WIDE_INT) 0xf)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0xf);
      return "shll_s.ph\t%0,%1,%2";
    }
  return "shllv_s.ph\t%0,%1,%2";
}
}

static const char *
output_720 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 348 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x7)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x7);
      return "shrl.qb\t%0,%1,%2";
    }
  return "shrlv.qb\t%0,%1,%2";
}
}

static const char *
output_721 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 367 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0xf)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0xf);
      return "shra.ph\t%0,%1,%2";
    }
  return "shrav.ph\t%0,%1,%2";
}
}

static const char *
output_722 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 385 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2])
	  & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "shra_r.w\t%0,%1,%2";
    }
  return "shrav_r.w\t%0,%1,%2";
}
}

static const char *
output_723 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 385 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2])
	  & ~(unsigned HOST_WIDE_INT) 0xf)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0xf);
      return "shra_r.ph\t%0,%1,%2";
    }
  return "shrav_r.ph\t%0,%1,%2";
}
}

static const char *
output_744 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 690 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[1]) & ~(unsigned HOST_WIDE_INT) 0xff)
	operands[1] = GEN_INT (INTVAL (operands[1]) & 0xff);
      return "repl.qb\t%0,%1";
    }
  return "replv.qb\t%0,%1";
}
}

static const char * const output_745[] = {
  "repl.ph\t%0,%1",
  "replv.ph\t%0,%1",
};

static const char *
output_758 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 812 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "extr.w\t%0,%q1,%2";
    }
  return "extrv.w\t%0,%q1,%2";
}
}

static const char *
output_759 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 833 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "extr_r.w\t%0,%q1,%2";
    }
  return "extrv_r.w\t%0,%q1,%2";
}
}

static const char *
output_760 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 854 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "extr_rs.w\t%0,%q1,%2";
    }
  return "extrv_rs.w\t%0,%q1,%2";
}
}

static const char *
output_761 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 876 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "extr_s.h\t%0,%q1,%2";
    }
  return "extrv_s.h\t%0,%q1,%2";
}
}

static const char *
output_762 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 899 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "extp\t%0,%q1,%2";
    }
  return "extpv\t%0,%q1,%2";
}
}

static const char *
output_763 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 924 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 0x1f)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
      return "extpdp\t%0,%q1,%2";
    }
  return "extpdpv\t%0,%q1,%2";
}
}

static const char *
output_764 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 943 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) < -32 || INTVAL (operands[2]) > 31)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);
      return "shilo\t%q0,%2";
    }
  return "shilov\t%q0,%2";
}
}

static const char *
output_780 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 67 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
{
  if (INTVAL (operands[3]) & ~(unsigned HOST_WIDE_INT) 31)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 31);
  return "append\t%0,%z2,%3";
}
}

static const char *
output_781 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 82 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
{
  if (INTVAL (operands[3]) & ~(unsigned HOST_WIDE_INT) 3)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 3);
  return "balign\t%0,%z2,%3";
}
}

static const char *
output_796 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 290 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
{
  if (INTVAL (operands[3]) & ~(unsigned HOST_WIDE_INT) 31)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 31);
  return "precr_sra.ph.w\t%0,%z2,%3";
}
}

static const char *
output_797 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 305 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
{
  if (INTVAL (operands[3]) & ~(unsigned HOST_WIDE_INT) 31)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 31);
  return "precr_sra_r.ph.w\t%0,%z2,%3";
}
}

static const char *
output_798 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 320 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
{
  if (INTVAL (operands[3]) & ~(unsigned HOST_WIDE_INT) 31)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 31);
  return "prepend\t%0,%z2,%3";
}
}

static const char *
output_799 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 334 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 7)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 7);
      return "shra.qb\t%0,%z1,%2";
    }
  return "shrav.qb\t%0,%z1,%2";
}
}

static const char *
output_800 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 353 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 7)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 7);
      return "shra_r.qb\t%0,%z1,%2";
    }
  return "shrav_r.qb\t%0,%z1,%2";
}
}

static const char *
output_801 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 371 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
{
  if (which_alternative == 0)
    {
      if (INTVAL (operands[2]) & ~(unsigned HOST_WIDE_INT) 15)
	operands[2] = GEN_INT (INTVAL (operands[2]) & 15);
      return "shrl.ph\t%0,%z1,%2";
    }
  return "shrlv.ph\t%0,%z1,%2";
}
}

static const char *
output_877 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 85 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_878 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 85 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_879 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 85 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_942 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 484 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
{ return mips_output_division ("div.g\t%0,%1,%2", operands); }
}

static const char *
output_943 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 484 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
{ return mips_output_division ("divu.g\t%0,%1,%2", operands); }
}

static const char *
output_944 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 484 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
{ return mips_output_division ("ddiv.g\t%0,%1,%2", operands); }
}

static const char *
output_945 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 484 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
{ return mips_output_division ("ddivu.g\t%0,%1,%2", operands); }
}

static const char *
output_946 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 493 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
{ return mips_output_division ("mod.g\t%0,%1,%2", operands); }
}

static const char *
output_947 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 493 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
{ return mips_output_division ("modu.g\t%0,%1,%2", operands); }
}

static const char *
output_948 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 493 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
{ return mips_output_division ("dmod.g\t%0,%1,%2", operands); }
}

static const char *
output_949 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 493 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
{ return mips_output_division ("dmodu.g\t%0,%1,%2", operands); }
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    trap_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    1
  },
  {
    trap_comparison_operator,
    "",
    DImode,
    0,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,Q",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,Q",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=ks,d,d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "ks,ks,0,d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "Q,Q,Q,O,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=ks,d,d,d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "ks,ks,0,d,d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "Q,Q,Q,O,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,Q",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "Q,O,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,X",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d,l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,X",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=l*?*?,d?",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,&d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l*?*?,d*?,d?",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,3,l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,3",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,1",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=d,d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l*?*?,d?",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,&d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    TImode,
    0,
    0
  },
  {
    scratch_operand,
    "=d",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=ka",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    TImode,
    0,
    0
  },
  {
    register_operand,
    "+l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    const_1_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    const_1_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    const_1_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%d,d",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "d,K",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%d,d",
    DImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "d,K",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,t,t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0,d,d",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "d,K,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,t,t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0,d,d",
    DImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "d,K,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    const_arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    const_arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    const_arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,W",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,W",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "+d",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+d",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    BLKmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    BLKmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    absolute_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&d",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    got_disp_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    got_disp_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    got_disp_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    got_disp_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    got_page_ofst_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    got_page_ofst_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    stack_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    stack_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*a,*d,*f,*f,*d,*m,*B*C*D,*B*C*D,*d,*m",
    DImode,
    0,
    1
  },
  {
    move_operand,
    "d,i,m,d,*J*d,*a,*J*d,*m,*f,*f,*d,*m,*B*C*D,*B*C*D",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m,*d",
    DImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,m,d,*x",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*a,*d,*B*C*D,*B*C*D,*d,*m",
    DImode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    DImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    SImode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V2HImode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V2HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V4QImode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V4QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V2HQmode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V2HQmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V2UHQmode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V2UHQmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V2HAmode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V2HAmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V2UHAmode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V2UHAmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V4QQmode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V4QQmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*d,*m,*d,*z,*a,*d,*B*C*D,*B*C*D,*d,*m",
    V4UQQmode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*d*J,*m,*f,*f,*z,*d,*J*d,*a,*d,*m,*B*C*D,*B*C*D",
    V4UQQmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    SImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V2HImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V2HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V4QImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V4QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V2HQmode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V2HQmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V2UHQmode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V2UHQmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V2HAmode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V2HAmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V2UHAmode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V2UHAmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V4QQmode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V4QQmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,d,m,*d",
    V4UQQmode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,kf,m,d,*a",
    V4UQQmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,*d,*d,*m,*d,*f,*f,*f,*m",
    CCmode,
    0,
    1
  },
  {
    general_operand,
    "z,*d,*m,*d,*f,*d,*f,*m,*f",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2HQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2UHQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2HAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2UHAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V4QQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V4UQQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*a,*d",
    HImode,
    0,
    1
  },
  {
    move_operand,
    "d,I,m,dJ,*d*J,*a",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m,*d",
    HImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,m,d,*a",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*a,*d",
    QImode,
    0,
    1
  },
  {
    move_operand,
    "d,I,m,dJ,*d*J,*a",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m,*d",
    QImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,m,d,*a",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,m,*f,*d,*d,*d,*m",
    SFmode,
    0,
    1
  },
  {
    move_operand,
    "f,G,m,f,G,*d,*f,*G*d,*m,*d",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,m",
    SFmode,
    0,
    1
  },
  {
    move_operand,
    "Gd,m,d",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,m",
    SFmode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,m,d",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,m,*f,*d,*d,*d,*m",
    DFmode,
    0,
    1
  },
  {
    move_operand,
    "f,G,m,f,G,*d,*f,*d*G,*m,*d",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,m",
    DFmode,
    0,
    1
  },
  {
    move_operand,
    "dG,m,dG",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,m",
    DFmode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,m,d",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*a,*d",
    TImode,
    0,
    1
  },
  {
    move_operand,
    "d,i,m,dJ,*d*J,*a",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m,*d",
    TImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,m,d,*a",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,m,f,d,f,m",
    TFmode,
    0,
    1
  },
  {
    move_operand,
    "dG,m,dG,dG,f,m,f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,m",
    TFmode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,m,d",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,m,*f,*d,*d,*d,*m",
    V2SFmode,
    0,
    1
  },
  {
    move_operand,
    "f,YG,m,f,YG,*d,*f,*d*YG,*m,*d",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    V2SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    V2SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    V4HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    V8QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    TFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V8QImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    TFmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "",
    SImode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "",
    DImode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "I,i",
    VOIDmode,
    0,
    1
  },
  {
    pmode_register_operand,
    "d",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "z",
    CCmode,
    0,
    1
  },
  {
    order_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    order_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "d,t",
    SImode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "d,t",
    DImode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%d,d,d",
    SImode,
    0,
    1
  },
  {
    reg_imm10_operand,
    "d,J,YB",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%d,d,d",
    SImode,
    0,
    1
  },
  {
    reg_imm10_operand,
    "d,J,YB",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%d,d,d",
    DImode,
    0,
    1
  },
  {
    reg_imm10_operand,
    "d,J,YB",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%d,d,d",
    DImode,
    0,
    1
  },
  {
    reg_imm10_operand,
    "d,J,YB",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t,t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t,t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t,t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t,t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    sle_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    sle_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    sle_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    sle_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    sle_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    sle_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    sle_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    sle_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    pmode_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&d",
    DImode,
    0,
    0
  },
  {
    call_insn_operand,
    "j,S",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "j,S",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "c,S",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "cS",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_call_insn_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "cS",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_call_insn_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "c,S",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "p",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    CCmode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    DImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    DImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    DImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    CCmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    CCmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    CCmode,
    0,
    0
  },
  {
    consttable_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,dJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+R,R",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,dJ",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,dJ",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "d,J",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+R,R",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+R",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+R",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&d",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "+R",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+R,R",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+R",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "K,d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+R,R",
    DImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "K,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "K,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+R,R",
    DImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "K,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+R,R",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,J",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    V2SFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    V2SFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "z,z",
    CCV2mode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    const_0_or_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCV4mode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCV2mode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "z",
    CCV4mode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "z",
    CCV2mode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "z",
    CCV2mode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    V2HImode,
    0,
    1
  },
  {
    reg_imm10_operand,
    "YB,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a,a",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a,a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    const_uimm6_operand,
    "YA",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    const_uimm6_operand,
    "YA",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V4QImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V4QImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V4QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V4QImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    V4QImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG,dYG",
    V4QImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    V2HImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dYG,dYG",
    V2HImode,
    0,
    1
  },
  {
    arith_operand,
    "I,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    QQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    QQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    QQmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    HQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    HQmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SQmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DQmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    UQQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    UQQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    UQQmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    UHQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    UHQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    UHQmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    USQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    USQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    USQmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    UDQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    UDQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    UDQmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    HAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    HAmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SAmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DAmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    UHAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    UHAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    UHAmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    USAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    USAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    USAmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    UDAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    UDAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    UDAmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V4UQQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V4UQQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V4UQQmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2UHQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2UHQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2UHQmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2UHAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2UHAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2UHAmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2HQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HQmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2HAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HAmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HAmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    V2HQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    V2HQmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    HQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    HQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    HQmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SQmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    DQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SQmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SQmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DQmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,f,d,f,d,m,d",
    V2SImode,
    0,
    1
  },
  {
    move_operand,
    "f,m,f,dYG,dYG,dYG,m",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,f,d,f,d,m,d",
    V4HImode,
    0,
    1
  },
  {
    move_operand,
    "f,m,f,dYG,dYG,dYG,m",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,f,d,f,d,m,d",
    V8QImode,
    0,
    1
  },
  {
    move_operand,
    "f,m,f,dYG,dYG,dYG,m",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    d_operand,
    "",
    DImode,
    0,
    1
  },
  {
    d_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    lo_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    lo_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    lo_operand,
    "",
    SImode,
    0,
    1
  },
  {
    macc_msac_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "d",
    SImode,
    0,
    0
  },
  {
    lo_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    macc_msac_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "d",
    SImode,
    0,
    0
  },
  {
    lo_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    macc_msac_operand,
    "",
    SImode,
    0,
    1
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    TImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    reg_or_1_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    reg_or_1_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    reg_or_1_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    absolute_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "d",
    DImode,
    0,
    0
  },
  {
    d_operand,
    "",
    DImode,
    0,
    1
  },
  {
    absolute_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    absolute_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    d_operand,
    "",
    SImode,
    0,
    1
  },
  {
    absolute_symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    got_disp_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    got_disp_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    got_disp_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    got_disp_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    got_page_ofst_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    got_page_ofst_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    splittable_const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    splittable_const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    V2HImode,
    0,
    1
  },
  {
    0,
    "",
    V2HImode,
    0,
    1
  },
  {
    0,
    "",
    V4QImode,
    0,
    1
  },
  {
    0,
    "",
    V4QImode,
    0,
    1
  },
  {
    0,
    "",
    V2HQmode,
    0,
    1
  },
  {
    0,
    "",
    V2HQmode,
    0,
    1
  },
  {
    0,
    "",
    V2UHQmode,
    0,
    1
  },
  {
    0,
    "",
    V2UHQmode,
    0,
    1
  },
  {
    0,
    "",
    V2HAmode,
    0,
    1
  },
  {
    0,
    "",
    V2HAmode,
    0,
    1
  },
  {
    0,
    "",
    V2UHAmode,
    0,
    1
  },
  {
    0,
    "",
    V2UHAmode,
    0,
    1
  },
  {
    0,
    "",
    V4QQmode,
    0,
    1
  },
  {
    0,
    "",
    V4QQmode,
    0,
    1
  },
  {
    0,
    "",
    V4UQQmode,
    0,
    1
  },
  {
    0,
    "",
    V4UQQmode,
    0,
    1
  },
  {
    fcc_reload_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    general_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "=&f",
    TFmode,
    0,
    1
  },
  {
    fcc_reload_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "=&f",
    TFmode,
    0,
    1
  },
  {
    0,
    "",
    HImode,
    0,
    1
  },
  {
    0,
    "",
    HImode,
    0,
    1
  },
  {
    d_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    d_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    TImode,
    0,
    1
  },
  {
    0,
    "",
    TImode,
    0,
    1
  },
  {
    0,
    "",
    TFmode,
    0,
    1
  },
  {
    0,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    move_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    move_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    move_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    move_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    move_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    move_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    move_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    move_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    d_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    V2SFmode,
    0,
    1
  },
  {
    0,
    "",
    V2SFmode,
    0,
    1
  },
  {
    0,
    "",
    V2SImode,
    0,
    1
  },
  {
    0,
    "",
    V2SImode,
    0,
    1
  },
  {
    0,
    "",
    V4HImode,
    0,
    1
  },
  {
    0,
    "",
    V4HImode,
    0,
    1
  },
  {
    0,
    "",
    V8QImode,
    0,
    1
  },
  {
    0,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "",
    SImode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "",
    DImode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "",
    DImode,
    0,
    1
  },
  {
    pmode_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    pmode_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    small_data_pattern,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    0,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    const_0_or_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    CCV4mode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    CCV2mode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    pmode_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  /* ../../gcc-4.4.7/gcc/config/mips/loongson2ef.md:98 */
  {
    "ls2_alu1_turn_enabled_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_0 },
#else
    { 0, 0, output_0 },
#endif
    (insn_gen_fn) gen_ls2_alu1_turn_enabled_insn,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson2ef.md:109 */
  {
    "ls2_alu2_turn_enabled_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1 },
#else
    { 0, 0, output_1 },
#endif
    (insn_gen_fn) gen_ls2_alu2_turn_enabled_insn,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson2ef.md:120 */
  {
    "ls2_falu1_turn_enabled_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_2 },
#else
    { 0, 0, output_2 },
#endif
    (insn_gen_fn) gen_ls2_falu1_turn_enabled_insn,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson2ef.md:131 */
  {
    "ls2_falu2_turn_enabled_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_3 },
#else
    { 0, 0, output_3 },
#endif
    (insn_gen_fn) gen_ls2_falu2_turn_enabled_insn,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:975 */
  {
    "trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_4 },
#else
    { 0, 0, output_4 },
#endif
    (insn_gen_fn) gen_trap,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1003 */
  {
    "*conditional_trapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "t%C0\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1003 */
  {
    "*conditional_trapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "t%C0\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[4],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1020 */
  {
    "addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addsf3,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1020 */
  {
    "adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adddf3,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1020 */
  {
    "addv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv2sf3,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1035 */
  {
    "*addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_10 },
#else
    { 0, output_10, 0 },
#endif
    0,
    &operand_data[16],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1035 */
  {
    "*adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_11 },
#else
    { 0, output_11, 0 },
#endif
    0,
    &operand_data[19],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1046 */
  {
    "*addsi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_12 },
#else
    { 0, output_12, 0 },
#endif
    0,
    &operand_data[22],
    3,
    0,
    5,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1046 */
  {
    "*adddi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_13 },
#else
    { 0, output_13, 0 },
#endif
    0,
    &operand_data[25],
    3,
    0,
    5,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1186 */
  {
    "*addsi3_extended",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_14 },
#else
    { 0, output_14, 0 },
#endif
    0,
    &operand_data[28],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1200 */
  {
    "*addsi3_extended_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[31],
    3,
    0,
    3,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1216 */
  {
    "*baddu_si_eb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "baddu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1226 */
  {
    "*baddu_si_el",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "baddu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1236 */
  {
    "*baddu_disi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "baddu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1236 */
  {
    "*baddu_didi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "baddu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1254 */
  {
    "subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsf3,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1254 */
  {
    "subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdf3,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1254 */
  {
    "subv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv2sf3,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1263 */
  {
    "subsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsi3,
    &operand_data[34],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1263 */
  {
    "subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdi3,
    &operand_data[40],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1272 */
  {
    "*subsi3_extended",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1297 */
  {
    "*mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1297 */
  {
    "*muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1310 */
  {
    "*mulsf3_r4300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.s\t%0,%1,%2\n\tnop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1310 */
  {
    "*muldf3_r4300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.d\t%0,%1,%2\n\tnop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1320 */
  {
    "mulv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv2sf3,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1394 */
  {
    "mulsi3_mul3_ls2ef",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu.g\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3_mul3_ls2ef,
    &operand_data[34],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1394 */
  {
    "muldi3_mul3_ls2ef",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmultu.g\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldi3_mul3_ls2ef,
    &operand_data[40],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1403 */
  {
    "mulsi3_mul3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    (insn_gen_fn) gen_mulsi3_mul3,
    &operand_data[46],
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1403 */
  {
    "muldi3_mul3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_34 },
#else
    { 0, 0, output_34 },
#endif
    (insn_gen_fn) gen_muldi3_mul3,
    &operand_data[50],
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1442 */
  {
    "mulsi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3_internal,
    &operand_data[54],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1442 */
  {
    "muldi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldi3_internal,
    &operand_data[57],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1451 */
  {
    "mulsi3_r4000",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2\n\tmflo\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3_r4000,
    &operand_data[60],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1451 */
  {
    "muldi3_r4000",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2\n\tmflo\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldi3_r4000,
    &operand_data[64],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1506 */
  {
    "*mul_acc_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_39 },
#else
    { 0, output_39, 0 },
#endif
    0,
    &operand_data[68],
    6,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1523 */
  {
    "*mul_acc_si_r3900",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_40 },
#else
    { 0, output_40, 0 },
#endif
    0,
    &operand_data[74],
    6,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1555 */
  {
    "*macc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_41 },
#else
    { 0, 0, output_41 },
#endif
    0,
    &operand_data[80],
    5,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1576 */
  {
    "*msac",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_42 },
#else
    { 0, 0, output_42 },
#endif
    0,
    &operand_data[85],
    5,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1595 */
  {
    "*msac_using_macc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[85],
    6,
    0,
    2,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1619 */
  {
    "*macc2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "macc\t%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[91],
    4,
    4,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1633 */
  {
    "*msac2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msac\t%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[91],
    4,
    4,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1735 */
  {
    "*mul_sub_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_46 },
#else
    { 0, output_46, 0 },
#endif
    0,
    &operand_data[95],
    6,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1766 */
  {
    "*muls",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_47 },
#else
    { 0, output_47, 0 },
#endif
    0,
    &operand_data[101],
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1794 */
  {
    "mulsidi3_32bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3_32bit,
    &operand_data[105],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1794 */
  {
    "umulsidi3_32bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3_32bit,
    &operand_data[105],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1803 */
  {
    "mulsidi3_32bit_r4000",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2\n\tmflo\t%L0\n\tmfhi\t%M0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3_32bit_r4000,
    &operand_data[108],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1803 */
  {
    "umulsidi3_32bit_r4000",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu\t%1,%2\n\tmflo\t%L0\n\tmfhi\t%M0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3_32bit_r4000,
    &operand_data[108],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1814 */
  {
    "mulsidi3_64bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3_64bit,
    &operand_data[112],
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1814 */
  {
    "umulsidi3_64bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3_64bit,
    &operand_data[112],
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1854 */
  {
    "mulsidi3_64bit_hilo",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3_64bit_hilo,
    &operand_data[117],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1854 */
  {
    "umulsidi3_64bit_hilo",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3_64bit_hilo,
    &operand_data[117],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1867 */
  {
    "*muls_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls\t$0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[105],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1867 */
  {
    "*mulsu_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsu\t$0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[105],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1878 */
  {
    "msubsidi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_58 },
#else
    { 0, 0, output_58 },
#endif
    (insn_gen_fn) gen_msubsidi4,
    &operand_data[120],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1878 */
  {
    "umsubsidi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_59 },
#else
    { 0, 0, output_59 },
#endif
    (insn_gen_fn) gen_umsubsidi4,
    &operand_data[120],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1918 */
  {
    "smulsi3_highpart_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_60 },
#else
    { 0, 0, output_60 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart_internal,
    &operand_data[60],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1918 */
  {
    "umulsi3_highpart_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_61 },
#else
    { 0, 0, output_61 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart_internal,
    &operand_data[60],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1951 */
  {
    "smulsi3_highpart_mulhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhi\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart_mulhi_internal,
    &operand_data[60],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1951 */
  {
    "umulsi3_highpart_mulhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhiu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart_mulhi_internal,
    &operand_data[60],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1965 */
  {
    "*smulsi3_highpart_neg_mulhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulshi\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[60],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1965 */
  {
    "*umulsi3_highpart_neg_mulhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulshiu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[60],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1983 */
  {
    "smuldi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_66 },
#else
    { 0, 0, output_66 },
#endif
    (insn_gen_fn) gen_smuldi3_highpart,
    &operand_data[64],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1983 */
  {
    "umuldi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_67 },
#else
    { 0, 0, output_67 },
#endif
    (insn_gen_fn) gen_umuldi3_highpart,
    &operand_data[64],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2021 */
  {
    "mulditi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulditi3_internal,
    &operand_data[124],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2021 */
  {
    "umulditi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmultu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulditi3_internal,
    &operand_data[124],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2032 */
  {
    "mulditi3_r4000",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2\n\tmflo\t%L0\n\tmfhi\t%M0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulditi3_r4000,
    &operand_data[127],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2032 */
  {
    "umulditi3_r4000",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmultu\t%1,%2\n\tmflo\t%L0\n\tmfhi\t%M0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulditi3_r4000,
    &operand_data[127],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2048 */
  {
    "madsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mad\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_madsi,
    &operand_data[131],
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2058 */
  {
    "maddsidi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_73 },
#else
    { 0, 0, output_73 },
#endif
    (insn_gen_fn) gen_maddsidi4,
    &operand_data[120],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2058 */
  {
    "umaddsidi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_74 },
#else
    { 0, 0, output_74 },
#endif
    (insn_gen_fn) gen_umaddsidi4,
    &operand_data[120],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2082 */
  {
    "*madd4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[134],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2082 */
  {
    "*madd4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[138],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2082 */
  {
    "*madd4v2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.ps\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[142],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2092 */
  {
    "*madd3sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[146],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2092 */
  {
    "*madd3df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[150],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2092 */
  {
    "*madd3v2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[154],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2102 */
  {
    "*msub4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[134],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2102 */
  {
    "*msub4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[138],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2102 */
  {
    "*msub4v2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.ps\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[142],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2112 */
  {
    "*msub3sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[146],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2112 */
  {
    "*msub3df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[150],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2112 */
  {
    "*msub3v2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[154],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2122 */
  {
    "*nmadd4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[134],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2122 */
  {
    "*nmadd4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[138],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2122 */
  {
    "*nmadd4v2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.ps\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[142],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2136 */
  {
    "*nmadd3sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[146],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2136 */
  {
    "*nmadd3df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[150],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2136 */
  {
    "*nmadd3v2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[154],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2150 */
  {
    "*nmadd4sf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[134],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2150 */
  {
    "*nmadd4df_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[138],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2150 */
  {
    "*nmadd4v2sf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.ps\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[142],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2164 */
  {
    "*nmadd3sf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[146],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2164 */
  {
    "*nmadd3df_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[150],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2164 */
  {
    "*nmadd3v2sf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[154],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2178 */
  {
    "*nmsub4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[134],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2178 */
  {
    "*nmsub4df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[138],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2178 */
  {
    "*nmsub4v2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.ps\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[142],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2192 */
  {
    "*nmsub3sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[158],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2192 */
  {
    "*nmsub3df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[162],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2192 */
  {
    "*nmsub3v2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[166],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2206 */
  {
    "*nmsub4sf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[134],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2206 */
  {
    "*nmsub4df_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[138],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2206 */
  {
    "*nmsub4v2sf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.ps\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[142],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2220 */
  {
    "*nmsub3sf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[146],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2220 */
  {
    "*nmsub3df_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[150],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2220 */
  {
    "*nmsub3v2sf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[154],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2265 */
  {
    "*divsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_111 },
#else
    { 0, 0, output_111 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2265 */
  {
    "*divdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_112 },
#else
    { 0, 0, output_112 },
#endif
    0,
    &operand_data[10],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2265 */
  {
    "*divv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_113 },
#else
    { 0, 0, output_113 },
#endif
    0,
    &operand_data[13],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2283 */
  {
    "*recipsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_114 },
#else
    { 0, 0, output_114 },
#endif
    0,
    &operand_data[170],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2283 */
  {
    "*recipdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_115 },
#else
    { 0, 0, output_115 },
#endif
    0,
    &operand_data[173],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2283 */
  {
    "*recipv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_116 },
#else
    { 0, 0, output_116 },
#endif
    0,
    &operand_data[176],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2303 */
  {
    "divmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divmodsi4,
    &operand_data[91],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2303 */
  {
    "divmoddi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divmoddi4,
    &operand_data[179],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2335 */
  {
    "udivmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivmodsi4,
    &operand_data[91],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2335 */
  {
    "udivmoddi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivmoddi4,
    &operand_data[179],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2367 */
  {
    "divmodsi4_hilo_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_121 },
#else
    { 0, 0, output_121 },
#endif
    (insn_gen_fn) gen_divmodsi4_hilo_di,
    &operand_data[105],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2367 */
  {
    "udivmodsi4_hilo_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_122 },
#else
    { 0, 0, output_122 },
#endif
    (insn_gen_fn) gen_udivmodsi4_hilo_di,
    &operand_data[105],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2367 */
  {
    "divmodsi4_hilo_ti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_123 },
#else
    { 0, 0, output_123 },
#endif
    (insn_gen_fn) gen_divmodsi4_hilo_ti,
    &operand_data[117],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2367 */
  {
    "udivmodsi4_hilo_ti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_124 },
#else
    { 0, 0, output_124 },
#endif
    (insn_gen_fn) gen_udivmodsi4_hilo_ti,
    &operand_data[117],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2367 */
  {
    "divmoddi4_hilo_ti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_125 },
#else
    { 0, 0, output_125 },
#endif
    (insn_gen_fn) gen_divmoddi4_hilo_ti,
    &operand_data[124],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2367 */
  {
    "udivmoddi4_hilo_ti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_126 },
#else
    { 0, 0, output_126 },
#endif
    (insn_gen_fn) gen_udivmoddi4_hilo_ti,
    &operand_data[124],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2388 */
  {
    "sqrtsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_127 },
#else
    { 0, 0, output_127 },
#endif
    (insn_gen_fn) gen_sqrtsf2,
    &operand_data[7],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2388 */
  {
    "sqrtdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_128 },
#else
    { 0, 0, output_128 },
#endif
    (insn_gen_fn) gen_sqrtdf2,
    &operand_data[10],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2388 */
  {
    "sqrtv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_129 },
#else
    { 0, 0, output_129 },
#endif
    (insn_gen_fn) gen_sqrtv2sf2,
    &operand_data[13],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2405 */
  {
    "*rsqrtsfa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_130 },
#else
    { 0, 0, output_130 },
#endif
    0,
    &operand_data[170],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2405 */
  {
    "*rsqrtdfa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_131 },
#else
    { 0, 0, output_131 },
#endif
    0,
    &operand_data[173],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2405 */
  {
    "*rsqrtv2sfa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_132 },
#else
    { 0, 0, output_132 },
#endif
    0,
    &operand_data[176],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2423 */
  {
    "*rsqrtsfb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_133 },
#else
    { 0, 0, output_133 },
#endif
    0,
    &operand_data[170],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2423 */
  {
    "*rsqrtdfb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_134 },
#else
    { 0, 0, output_134 },
#endif
    0,
    &operand_data[173],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2423 */
  {
    "*rsqrtv2sfb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_135 },
#else
    { 0, 0, output_135 },
#endif
    0,
    &operand_data[176],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2455 */
  {
    "abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_abssf2,
    &operand_data[7],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2455 */
  {
    "absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absdf2,
    &operand_data[10],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2455 */
  {
    "absv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.ps\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv2sf2,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2471 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzsi2,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2471 */
  {
    "clzdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dclz\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzdi2,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2487 */
  {
    "popcountsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_popcountsi2,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2487 */
  {
    "popcountdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpop\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_popcountdi2,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2502 */
  {
    "negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_143 },
#else
    { 0, 0, output_143 },
#endif
    (insn_gen_fn) gen_negsi2,
    &operand_data[34],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2515 */
  {
    "negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negdi2,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2527 */
  {
    "negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negsf2,
    &operand_data[7],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2527 */
  {
    "negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negdf2,
    &operand_data[10],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2527 */
  {
    "negv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.ps\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negv2sf2,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2535 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_148 },
#else
    { 0, 0, output_148 },
#endif
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[34],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2535 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_149 },
#else
    { 0, 0, output_149 },
#endif
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[40],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2569 */
  {
    "*andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_150 },
#else
    { 0, output_150, 0 },
#endif
    0,
    &operand_data[183],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2569 */
  {
    "*anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_151 },
#else
    { 0, output_151, 0 },
#endif
    0,
    &operand_data[186],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2580 */
  {
    "*andsi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[189],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2580 */
  {
    "*anddi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[192],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2599 */
  {
    "*iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_154 },
#else
    { 0, output_154, 0 },
#endif
    0,
    &operand_data[183],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2599 */
  {
    "*iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_155 },
#else
    { 0, output_155, 0 },
#endif
    0,
    &operand_data[186],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2610 */
  {
    "*iorsi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[189],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2610 */
  {
    "*iordi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[192],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2626 */
  {
    "*mips.md:2626",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_158 },
#else
    { 0, output_158, 0 },
#endif
    0,
    &operand_data[183],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2626 */
  {
    "*mips.md:2626",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_159 },
#else
    { 0, output_159, 0 },
#endif
    0,
    &operand_data[186],
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2637 */
  {
    "*mips.md:2637",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_160 },
#else
    { 0, output_160, 0 },
#endif
    0,
    &operand_data[195],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2637 */
  {
    "*mips.md:2637",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_161 },
#else
    { 0, output_161, 0 },
#endif
    0,
    &operand_data[198],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2655 */
  {
    "*norsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2655 */
  {
    "*nordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2673 */
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.s.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2,
    &operand_data[201],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2695 */
  {
    "truncdisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_165 },
#else
    { 0, output_165, 0 },
#endif
    (insn_gen_fn) gen_truncdisi2,
    &operand_data[203],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2705 */
  {
    "truncdihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_166 },
#else
    { 0, output_166, 0 },
#endif
    (insn_gen_fn) gen_truncdihi2,
    &operand_data[205],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2715 */
  {
    "truncdiqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_167 },
#else
    { 0, output_167, 0 },
#endif
    (insn_gen_fn) gen_truncdiqi2,
    &operand_data[207],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2727 */
  {
    "*ashr_truncqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[209],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2727 */
  {
    "*ashr_trunchi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[212],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2727 */
  {
    "*ashr_truncsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[215],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2737 */
  {
    "*lshr32_truncqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,32",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[209],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2737 */
  {
    "*lshr32_trunchi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,32",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[212],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2737 */
  {
    "*lshr32_truncsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,32",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2749 */
  {
    "*ashr_truncqi_exts",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%2,31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[209],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2749 */
  {
    "*lshr_truncqi_exts",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%2,31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[209],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2749 */
  {
    "*ashr_trunchi_exts",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%2,31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[212],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2749 */
  {
    "*lshr_trunchi_exts",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%2,31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[212],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2749 */
  {
    "*ashr_truncsi_exts",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%2,31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[215],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2749 */
  {
    "*lshr_truncsi_exts",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%2,31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[215],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2762 */
  {
    "*extenddi_truncateqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2762 */
  {
    "*extenddi_truncatehi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2780 */
  {
    "*extendsi_truncateqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2780 */
  {
    "*extendsi_truncatehi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2800 */
  {
    "*zero_extendsi_trunchi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andi\t%0,%1,0xffff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2800 */
  {
    "*zero_extenddi_trunchi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andi\t%0,%1,0xffff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2809 */
  {
    "*zero_extendsi_truncqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andi\t%0,%1,0xff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2809 */
  {
    "*zero_extenddi_truncqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andi\t%0,%1,0xff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2818 */
  {
    "*mips.md:2818",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andi\t%0,%1,0xff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[212],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2836 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_189 },
#else
    { 0, output_189, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[218],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2855 */
  {
    "*clear_upper32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_190 },
#else
    { 0, 0, output_190 },
#endif
    0,
    &operand_data[220],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2892 */
  {
    "*zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_191 },
#else
    { 0, output_191, 0 },
#endif
    0,
    &operand_data[222],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2892 */
  {
    "*zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_192 },
#else
    { 0, output_192, 0 },
#endif
    0,
    &operand_data[224],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2892 */
  {
    "*zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_193 },
#else
    { 0, output_193, 0 },
#endif
    0,
    &operand_data[226],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2892 */
  {
    "*zero_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_194 },
#else
    { 0, output_194, 0 },
#endif
    0,
    &operand_data[228],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2903 */
  {
    "*zero_extendqisi2_mips16e",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "zeb\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[230],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2903 */
  {
    "*zero_extendhisi2_mips16e",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "zeh\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[232],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2903 */
  {
    "*zero_extendqidi2_mips16e",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "zeb\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[234],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2903 */
  {
    "*zero_extendhidi2_mips16e",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "zeh\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[236],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2912 */
  {
    "*zero_extendqisi2_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[238],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2912 */
  {
    "*zero_extendhisi2_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[240],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2912 */
  {
    "*zero_extendqidi2_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[242],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2912 */
  {
    "*zero_extendhidi2_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[244],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2933 */
  {
    "*zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_203 },
#else
    { 0, output_203, 0 },
#endif
    0,
    &operand_data[246],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2943 */
  {
    "*zero_extendqihi2_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[248],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2969 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_205 },
#else
    { 0, output_205, 0 },
#endif
    (insn_gen_fn) gen_extendsidi2,
    &operand_data[250],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2990 */
  {
    "*extendqisi2_mips16e",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_206 },
#else
    { 0, output_206, 0 },
#endif
    0,
    &operand_data[252],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2990 */
  {
    "*extendhisi2_mips16e",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_207 },
#else
    { 0, output_207, 0 },
#endif
    0,
    &operand_data[254],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2990 */
  {
    "*extendqidi2_mips16e",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_208 },
#else
    { 0, output_208, 0 },
#endif
    0,
    &operand_data[256],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2990 */
  {
    "*extendhidi2_mips16e",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_209 },
#else
    { 0, output_209, 0 },
#endif
    0,
    &operand_data[258],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3000 */
  {
    "*extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_210 },
#else
    { 0, output_210, 0 },
#endif
    0,
    &operand_data[222],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3000 */
  {
    "*extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_211 },
#else
    { 0, output_211, 0 },
#endif
    0,
    &operand_data[224],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3000 */
  {
    "*extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_212 },
#else
    { 0, output_212, 0 },
#endif
    0,
    &operand_data[226],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3000 */
  {
    "*extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_213 },
#else
    { 0, output_213, 0 },
#endif
    0,
    &operand_data[228],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3019 */
  {
    "*extendqisi2_seb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_214 },
#else
    { 0, output_214, 0 },
#endif
    0,
    &operand_data[222],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3019 */
  {
    "*extendhisi2_seh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_215 },
#else
    { 0, output_215, 0 },
#endif
    0,
    &operand_data[224],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3019 */
  {
    "*extendqidi2_seb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_216 },
#else
    { 0, output_216, 0 },
#endif
    0,
    &operand_data[226],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3019 */
  {
    "*extendhidi2_seh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_217 },
#else
    { 0, output_217, 0 },
#endif
    0,
    &operand_data[228],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3035 */
  {
    "*extendqihi2_mips16e",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_218 },
#else
    { 0, output_218, 0 },
#endif
    0,
    &operand_data[260],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3045 */
  {
    "*extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_219 },
#else
    { 0, output_219, 0 },
#endif
    0,
    &operand_data[246],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3065 */
  {
    "*extendqihi2_seb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_220 },
#else
    { 0, output_220, 0 },
#endif
    0,
    &operand_data[246],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3076 */
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.d.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendsfdf2,
    &operand_data[262],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3104 */
  {
    "fix_truncdfsi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.w.d %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2_insn,
    &operand_data[264],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3113 */
  {
    "fix_truncdfsi2_macro",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_223 },
#else
    { 0, 0, output_223 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2_macro,
    &operand_data[264],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3141 */
  {
    "fix_truncsfsi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.w.s %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2_insn,
    &operand_data[267],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3150 */
  {
    "fix_truncsfsi2_macro",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_225 },
#else
    { 0, 0, output_225 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2_macro,
    &operand_data[267],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3167 */
  {
    "fix_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.l.d %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfdi2,
    &operand_data[270],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3177 */
  {
    "fix_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.l.s %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfdi2,
    &operand_data[272],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3187 */
  {
    "floatsidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.d.w\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatsidf2,
    &operand_data[274],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3197 */
  {
    "floatdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.d.l\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2,
    &operand_data[276],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3207 */
  {
    "floatsisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.s.w\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatsisf2,
    &operand_data[278],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3217 */
  {
    "floatdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.s.l\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2,
    &operand_data[280],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3432 */
  {
    "extvsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%3,%m2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extvsi,
    &operand_data[282],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3432 */
  {
    "extvdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%3,%m2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extvdi,
    &operand_data[286],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3469 */
  {
    "extzvsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ext\t%0,%1,%3,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extzvsi,
    &operand_data[282],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3469 */
  {
    "extzvdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dext\t%0,%1,%3,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extzvdi,
    &operand_data[286],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3480 */
  {
    "*extzv_truncsi_exts",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%3,31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[290],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3480 */
  {
    "*extzv_truncdi_exts",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts\t%0,%1,%3,31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[286],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3518 */
  {
    "insvsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ins\t%0,%z3,%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_insvsi,
    &operand_data[294],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3518 */
  {
    "insvdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dins\t%0,%z3,%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_insvdi,
    &operand_data[298],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3535 */
  {
    "*cinssi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_240 },
#else
    { 0, 0, output_240 },
#endif
    0,
    &operand_data[302],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3535 */
  {
    "*cinsdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_241 },
#else
    { 0, 0, output_241 },
#endif
    0,
    &operand_data[306],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3563 */
  {
    "mov_lwl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwl\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_lwl,
    &operand_data[310],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3563 */
  {
    "mov_ldl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldl\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_ldl,
    &operand_data[313],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3573 */
  {
    "mov_lwr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwr\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_lwr,
    &operand_data[316],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3573 */
  {
    "mov_ldr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_ldr,
    &operand_data[320],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3584 */
  {
    "mov_swl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swl\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_swl,
    &operand_data[324],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3584 */
  {
    "mov_sdl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdl\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_sdl,
    &operand_data[327],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3594 */
  {
    "mov_swr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swr\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_swr,
    &operand_data[330],
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3594 */
  {
    "mov_sdr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdr\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_sdr,
    &operand_data[333],
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3620 */
  {
    "*lea_high64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[336],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3673 */
  {
    "*lea64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[336],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3710 */
  {
    "*xgot_hisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[339],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3710 */
  {
    "*xgot_hidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[341],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3725 */
  {
    "*xgot_losi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[343],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3725 */
  {
    "*xgot_lodi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[346],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3740 */
  {
    "*got_dispsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[339],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3740 */
  {
    "*got_dispdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[341],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3753 */
  {
    "*got_pagesi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[349],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3753 */
  {
    "*got_pagedi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[351],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3773 */
  {
    "load_gotsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%0,%R2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_gotsi,
    &operand_data[353],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3773 */
  {
    "load_gotdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%0,%R2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_gotdi,
    &operand_data[356],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3787 */
  {
    "*lowsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addiu\t%0,%1,%R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[353],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3787 */
  {
    "*lowdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddiu\t%0,%1,%R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[356],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3796 */
  {
    "*lowsi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addiu\t%0,%R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[359],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3796 */
  {
    "*lowdi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddiu\t%0,%R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[362],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3859 */
  {
    "*movsi_ra",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sw\t$31,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[365],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3859 */
  {
    "*movdi_ra",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sd\t$31,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[366],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3867 */
  {
    "*movdi_32bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_268 },
#else
    { 0, 0, output_268 },
#endif
    0,
    &operand_data[367],
    2,
    0,
    14,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3877 */
  {
    "*movdi_32bit_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_269 },
#else
    { 0, 0, output_269 },
#endif
    0,
    &operand_data[369],
    2,
    0,
    8,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3887 */
  {
    "*movdi_64bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_270 },
#else
    { 0, 0, output_270 },
#endif
    0,
    &operand_data[371],
    2,
    0,
    15,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3897 */
  {
    "*movdi_64bit_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_271 },
#else
    { 0, 0, output_271 },
#endif
    0,
    &operand_data[373],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3965 */
  {
    "*movsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_272 },
#else
    { 0, 0, output_272 },
#endif
    0,
    &operand_data[375],
    2,
    0,
    17,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3965 */
  {
    "*movv2hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_273 },
#else
    { 0, 0, output_273 },
#endif
    0,
    &operand_data[377],
    2,
    0,
    17,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3965 */
  {
    "*movv4qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_274 },
#else
    { 0, 0, output_274 },
#endif
    0,
    &operand_data[379],
    2,
    0,
    17,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3965 */
  {
    "*movv2hq_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_275 },
#else
    { 0, 0, output_275 },
#endif
    0,
    &operand_data[381],
    2,
    0,
    17,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3965 */
  {
    "*movv2uhq_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_276 },
#else
    { 0, 0, output_276 },
#endif
    0,
    &operand_data[383],
    2,
    0,
    17,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3965 */
  {
    "*movv2ha_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_277 },
#else
    { 0, 0, output_277 },
#endif
    0,
    &operand_data[385],
    2,
    0,
    17,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3965 */
  {
    "*movv2uha_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_278 },
#else
    { 0, 0, output_278 },
#endif
    0,
    &operand_data[387],
    2,
    0,
    17,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3965 */
  {
    "*movv4qq_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_279 },
#else
    { 0, 0, output_279 },
#endif
    0,
    &operand_data[389],
    2,
    0,
    17,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3965 */
  {
    "*movv4uqq_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_280 },
#else
    { 0, 0, output_280 },
#endif
    0,
    &operand_data[391],
    2,
    0,
    17,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3975 */
  {
    "*movsi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_281 },
#else
    { 0, 0, output_281 },
#endif
    0,
    &operand_data[393],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3975 */
  {
    "*movv2hi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_282 },
#else
    { 0, 0, output_282 },
#endif
    0,
    &operand_data[395],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3975 */
  {
    "*movv4qi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_283 },
#else
    { 0, 0, output_283 },
#endif
    0,
    &operand_data[397],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3975 */
  {
    "*movv2hq_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_284 },
#else
    { 0, 0, output_284 },
#endif
    0,
    &operand_data[399],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3975 */
  {
    "*movv2uhq_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_285 },
#else
    { 0, 0, output_285 },
#endif
    0,
    &operand_data[401],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3975 */
  {
    "*movv2ha_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_286 },
#else
    { 0, 0, output_286 },
#endif
    0,
    &operand_data[403],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3975 */
  {
    "*movv2uha_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_287 },
#else
    { 0, 0, output_287 },
#endif
    0,
    &operand_data[405],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3975 */
  {
    "*movv4qq_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_288 },
#else
    { 0, 0, output_288 },
#endif
    0,
    &operand_data[407],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3975 */
  {
    "*movv4uqq_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_289 },
#else
    { 0, 0, output_289 },
#endif
    0,
    &operand_data[409],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4048 */
  {
    "movcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_290 },
#else
    { 0, 0, output_290 },
#endif
    (insn_gen_fn) gen_movcc,
    &operand_data[411],
    2,
    0,
    9,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4103 */
  {
    "*lwxc1_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[413],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4103 */
  {
    "*ldxc1_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[416],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4103 */
  {
    "*ldxc1_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[419],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4103 */
  {
    "*lwxc1_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[422],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4103 */
  {
    "*ldxc1_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[425],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4103 */
  {
    "*ldxc1_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[428],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4112 */
  {
    "*swxc1_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4112 */
  {
    "*sdxc1_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[434],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4112 */
  {
    "*sdxc1_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4112 */
  {
    "*swxc1_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[440],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4112 */
  {
    "*sdxc1_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[443],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4112 */
  {
    "*sdxc1_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[446],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4125 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4125 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[449],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4125 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[452],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4125 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[455],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4125 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4125 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[461],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4125 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[464],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4125 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[467],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4125 */
  {
    "*lwxs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxs\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[470],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4152 */
  {
    "*movhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_312 },
#else
    { 0, 0, output_312 },
#endif
    0,
    &operand_data[473],
    2,
    0,
    6,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4162 */
  {
    "*movhi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_313 },
#else
    { 0, 0, output_313 },
#endif
    0,
    &operand_data[475],
    2,
    0,
    8,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4227 */
  {
    "*movqi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_314 },
#else
    { 0, 0, output_314 },
#endif
    0,
    &operand_data[477],
    2,
    0,
    6,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4237 */
  {
    "*movqi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_315 },
#else
    { 0, 0, output_315 },
#endif
    0,
    &operand_data[479],
    2,
    0,
    8,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4285 */
  {
    "*movsf_hardfloat",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_316 },
#else
    { 0, 0, output_316 },
#endif
    0,
    &operand_data[481],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4295 */
  {
    "*movsf_softfloat",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_317 },
#else
    { 0, 0, output_317 },
#endif
    0,
    &operand_data[483],
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4305 */
  {
    "*movsf_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_318 },
#else
    { 0, 0, output_318 },
#endif
    0,
    &operand_data[485],
    2,
    0,
    5,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4326 */
  {
    "*movdf_hardfloat",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_319 },
#else
    { 0, 0, output_319 },
#endif
    0,
    &operand_data[487],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4336 */
  {
    "*movdf_softfloat",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_320 },
#else
    { 0, 0, output_320 },
#endif
    0,
    &operand_data[489],
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4346 */
  {
    "*movdf_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_321 },
#else
    { 0, 0, output_321 },
#endif
    0,
    &operand_data[491],
    2,
    0,
    5,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4367 */
  {
    "*movti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[493],
    2,
    0,
    6,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4378 */
  {
    "*movti_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[495],
    2,
    0,
    8,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4401 */
  {
    "*movtf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[497],
    2,
    0,
    7,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4412 */
  {
    "*movtf_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[499],
    2,
    0,
    5,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4470 */
  {
    "*movv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_326 },
#else
    { 0, 0, output_326 },
#endif
    0,
    &operand_data[501],
    2,
    0,
    10,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4487 */
  {
    "mfhisi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_327 },
#else
    { 0, 0, output_327 },
#endif
    (insn_gen_fn) gen_mfhisi_di,
    &operand_data[503],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4487 */
  {
    "mfhisi_ti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_328 },
#else
    { 0, 0, output_328 },
#endif
    (insn_gen_fn) gen_mfhisi_ti,
    &operand_data[505],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4487 */
  {
    "mfhidi_ti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_329 },
#else
    { 0, 0, output_329 },
#endif
    (insn_gen_fn) gen_mfhidi_ti,
    &operand_data[507],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4499 */
  {
    "mthisi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthi\t%z1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mthisi_di,
    &operand_data[509],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4499 */
  {
    "mthisi_ti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthi\t%z1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mthisi_ti,
    &operand_data[512],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4499 */
  {
    "mthidi_ti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthi\t%z1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mthidi_ti,
    &operand_data[515],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4545 */
  {
    "load_lowdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_333 },
#else
    { 0, 0, output_333 },
#endif
    (insn_gen_fn) gen_load_lowdf,
    &operand_data[518],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4545 */
  {
    "load_lowdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_334 },
#else
    { 0, 0, output_334 },
#endif
    (insn_gen_fn) gen_load_lowdi,
    &operand_data[520],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4545 */
  {
    "load_lowv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_335 },
#else
    { 0, 0, output_335 },
#endif
    (insn_gen_fn) gen_load_lowv2sf,
    &operand_data[522],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4545 */
  {
    "load_lowv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_336 },
#else
    { 0, 0, output_336 },
#endif
    (insn_gen_fn) gen_load_lowv2si,
    &operand_data[524],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4545 */
  {
    "load_lowv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_337 },
#else
    { 0, 0, output_337 },
#endif
    (insn_gen_fn) gen_load_lowv4hi,
    &operand_data[526],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4545 */
  {
    "load_lowv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_338 },
#else
    { 0, 0, output_338 },
#endif
    (insn_gen_fn) gen_load_lowv8qi,
    &operand_data[528],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4545 */
  {
    "load_lowtf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_339 },
#else
    { 0, 0, output_339 },
#endif
    (insn_gen_fn) gen_load_lowtf,
    &operand_data[530],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4559 */
  {
    "load_highdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_340 },
#else
    { 0, 0, output_340 },
#endif
    (insn_gen_fn) gen_load_highdf,
    &operand_data[532],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4559 */
  {
    "load_highdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_341 },
#else
    { 0, 0, output_341 },
#endif
    (insn_gen_fn) gen_load_highdi,
    &operand_data[535],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4559 */
  {
    "load_highv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_342 },
#else
    { 0, 0, output_342 },
#endif
    (insn_gen_fn) gen_load_highv2sf,
    &operand_data[538],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4559 */
  {
    "load_highv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_343 },
#else
    { 0, 0, output_343 },
#endif
    (insn_gen_fn) gen_load_highv2si,
    &operand_data[541],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4559 */
  {
    "load_highv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_344 },
#else
    { 0, 0, output_344 },
#endif
    (insn_gen_fn) gen_load_highv4hi,
    &operand_data[544],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4559 */
  {
    "load_highv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_345 },
#else
    { 0, 0, output_345 },
#endif
    (insn_gen_fn) gen_load_highv8qi,
    &operand_data[547],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4559 */
  {
    "load_hightf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_346 },
#else
    { 0, 0, output_346 },
#endif
    (insn_gen_fn) gen_load_hightf,
    &operand_data[550],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4574 */
  {
    "store_worddf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_347 },
#else
    { 0, 0, output_347 },
#endif
    (insn_gen_fn) gen_store_worddf,
    &operand_data[553],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4574 */
  {
    "store_worddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_348 },
#else
    { 0, 0, output_348 },
#endif
    (insn_gen_fn) gen_store_worddi,
    &operand_data[556],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4574 */
  {
    "store_wordv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_349 },
#else
    { 0, 0, output_349 },
#endif
    (insn_gen_fn) gen_store_wordv2sf,
    &operand_data[559],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4574 */
  {
    "store_wordv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_350 },
#else
    { 0, 0, output_350 },
#endif
    (insn_gen_fn) gen_store_wordv2si,
    &operand_data[562],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4574 */
  {
    "store_wordv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_351 },
#else
    { 0, 0, output_351 },
#endif
    (insn_gen_fn) gen_store_wordv4hi,
    &operand_data[565],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4574 */
  {
    "store_wordv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_352 },
#else
    { 0, 0, output_352 },
#endif
    (insn_gen_fn) gen_store_wordv8qi,
    &operand_data[568],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4574 */
  {
    "store_wordtf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_353 },
#else
    { 0, 0, output_353 },
#endif
    (insn_gen_fn) gen_store_wordtf,
    &operand_data[571],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4589 */
  {
    "mthc1df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mthc1df,
    &operand_data[574],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4589 */
  {
    "mthc1di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mthc1di,
    &operand_data[577],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4589 */
  {
    "mthc1v2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mthc1v2sf,
    &operand_data[580],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4589 */
  {
    "mthc1v2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mthc1v2si,
    &operand_data[583],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4589 */
  {
    "mthc1v4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mthc1v4hi,
    &operand_data[586],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4589 */
  {
    "mthc1v8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mthc1v8qi,
    &operand_data[589],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4589 */
  {
    "mthc1tf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthc1\t%z1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mthc1tf,
    &operand_data[592],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4600 */
  {
    "mfhc1df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mfhc1df,
    &operand_data[595],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4600 */
  {
    "mfhc1di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mfhc1di,
    &operand_data[597],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4600 */
  {
    "mfhc1v2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mfhc1v2sf,
    &operand_data[599],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4600 */
  {
    "mfhc1v2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mfhc1v2si,
    &operand_data[601],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4600 */
  {
    "mfhc1v4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mfhc1v4hi,
    &operand_data[603],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4600 */
  {
    "mfhc1v8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mfhc1v8qi,
    &operand_data[605],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4600 */
  {
    "mfhc1tf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfhc1\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mfhc1tf,
    &operand_data[607],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4617 */
  {
    "loadgp_newabi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loadgp_newabi_si,
    &operand_data[609],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4617 */
  {
    "loadgp_newabi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loadgp_newabi_di,
    &operand_data[612],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4636 */
  {
    "loadgp_absolute_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loadgp_absolute_si,
    &operand_data[615],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4636 */
  {
    "loadgp_absolute_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loadgp_absolute_di,
    &operand_data[617],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4652 */
  {
    "loadgp_blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loadgp_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4661 */
  {
    "loadgp_rtp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loadgp_rtp_si,
    &operand_data[619],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4661 */
  {
    "loadgp_rtp_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loadgp_rtp_di,
    &operand_data[622],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4683 */
  {
    "copygp_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_copygp_mips16,
    &operand_data[625],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4695 */
  {
    "cprestore",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_376 },
#else
    { 0, 0, output_376 },
#endif
    (insn_gen_fn) gen_cprestore,
    &operand_data[627],
    1,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4734 */
  {
    "sync",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%|sync%-",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4739 */
  {
    "synci",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "synci\t0(%0)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_synci,
    &operand_data[628],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4745 */
  {
    "rdhwr_synci_step_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdhwr\t%0,$1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rdhwr_synci_step_si,
    &operand_data[34],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4745 */
  {
    "rdhwr_synci_step_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdhwr\t%0,$1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rdhwr_synci_step_di,
    &operand_data[40],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4752 */
  {
    "clear_hazard_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_381 },
#else
    { 0, 0, output_381 },
#endif
    (insn_gen_fn) gen_clear_hazard_si,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4752 */
  {
    "clear_hazard_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_382 },
#else
    { 0, 0, output_382 },
#endif
    (insn_gen_fn) gen_clear_hazard_di,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4766 */
  {
    "mips_cache",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cache\t%X0,%a1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cache,
    &operand_data[629],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4778 */
  {
    "r10k_cache_barrier",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cache\t0x14,0(%$)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_r10k_cache_barrier,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4841 */
  {
    "*ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_385 },
#else
    { 0, 0, output_385 },
#endif
    0,
    &operand_data[631],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4841 */
  {
    "*ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_386 },
#else
    { 0, 0, output_386 },
#endif
    0,
    &operand_data[631],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4841 */
  {
    "*lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_387 },
#else
    { 0, 0, output_387 },
#endif
    0,
    &operand_data[631],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4841 */
  {
    "*ashldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_388 },
#else
    { 0, 0, output_388 },
#endif
    0,
    &operand_data[634],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4841 */
  {
    "*ashrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_389 },
#else
    { 0, 0, output_389 },
#endif
    0,
    &operand_data[634],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4841 */
  {
    "*lshrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_390 },
#else
    { 0, 0, output_390 },
#endif
    0,
    &operand_data[634],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4856 */
  {
    "*ashlsi3_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_391 },
#else
    { 0, 0, output_391 },
#endif
    0,
    &operand_data[637],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4856 */
  {
    "*ashrsi3_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_392 },
#else
    { 0, 0, output_392 },
#endif
    0,
    &operand_data[637],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4856 */
  {
    "*lshrsi3_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_393 },
#else
    { 0, 0, output_393 },
#endif
    0,
    &operand_data[637],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4871 */
  {
    "*ashlsi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_394 },
#else
    { 0, 0, output_394 },
#endif
    0,
    &operand_data[640],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4871 */
  {
    "*ashrsi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_395 },
#else
    { 0, 0, output_395 },
#endif
    0,
    &operand_data[640],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4871 */
  {
    "*lshrsi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_396 },
#else
    { 0, 0, output_396 },
#endif
    0,
    &operand_data[640],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4893 */
  {
    "*ashldi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_397 },
#else
    { 0, 0, output_397 },
#endif
    0,
    &operand_data[643],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4913 */
  {
    "*ashrdi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_398 },
#else
    { 0, 0, output_398 },
#endif
    0,
    &operand_data[646],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4932 */
  {
    "*lshrdi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_399 },
#else
    { 0, 0, output_399 },
#endif
    0,
    &operand_data[646],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4973 */
  {
    "*mips.md:4973",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[649],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4987 */
  {
    "rotrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_401 },
#else
    { 0, 0, output_401 },
#endif
    (insn_gen_fn) gen_rotrsi3,
    &operand_data[631],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4987 */
  {
    "rotrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_402 },
#else
    { 0, 0, output_402 },
#endif
    (insn_gen_fn) gen_rotrdi3,
    &operand_data[634],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5055 */
  {
    "*branch_fp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_403 },
#else
    { 0, 0, output_403 },
#endif
    0,
    &operand_data[652],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5072 */
  {
    "*branch_fp_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_404 },
#else
    { 0, 0, output_404 },
#endif
    0,
    &operand_data[652],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5091 */
  {
    "*branch_ordersi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_405 },
#else
    { 0, 0, output_405 },
#endif
    0,
    &operand_data[655],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5091 */
  {
    "*branch_orderdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_406 },
#else
    { 0, 0, output_406 },
#endif
    0,
    &operand_data[658],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5104 */
  {
    "*branch_ordersi_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_407 },
#else
    { 0, 0, output_407 },
#endif
    0,
    &operand_data[655],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5104 */
  {
    "*branch_orderdi_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_408 },
#else
    { 0, 0, output_408 },
#endif
    0,
    &operand_data[658],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5119 */
  {
    "*branch_equalitysi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_409 },
#else
    { 0, 0, output_409 },
#endif
    0,
    &operand_data[661],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5119 */
  {
    "*branch_equalitydi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_410 },
#else
    { 0, 0, output_410 },
#endif
    0,
    &operand_data[665],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5136 */
  {
    "*branch_equalitysi_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_411 },
#else
    { 0, 0, output_411 },
#endif
    0,
    &operand_data[661],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5136 */
  {
    "*branch_equalitydi_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_412 },
#else
    { 0, 0, output_412 },
#endif
    0,
    &operand_data[665],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5155 */
  {
    "*branch_equalitysi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_413 },
#else
    { 0, 0, output_413 },
#endif
    0,
    &operand_data[669],
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5155 */
  {
    "*branch_equalitydi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_414 },
#else
    { 0, 0, output_414 },
#endif
    0,
    &operand_data[673],
    4,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5204 */
  {
    "*branch_bit0si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_415 },
#else
    { 0, 0, output_415 },
#endif
    0,
    &operand_data[677],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5204 */
  {
    "*branch_bit1si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_416 },
#else
    { 0, 0, output_416 },
#endif
    0,
    &operand_data[677],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5204 */
  {
    "*branch_bit0di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_417 },
#else
    { 0, 0, output_417 },
#endif
    0,
    &operand_data[680],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5204 */
  {
    "*branch_bit1di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_418 },
#else
    { 0, 0, output_418 },
#endif
    0,
    &operand_data[680],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5225 */
  {
    "*branch_bit0si_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_419 },
#else
    { 0, 0, output_419 },
#endif
    0,
    &operand_data[677],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5225 */
  {
    "*branch_bit1si_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_420 },
#else
    { 0, 0, output_420 },
#endif
    0,
    &operand_data[677],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5225 */
  {
    "*branch_bit0di_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_421 },
#else
    { 0, 0, output_421 },
#endif
    0,
    &operand_data[680],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5225 */
  {
    "*branch_bit1di_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_422 },
#else
    { 0, 0, output_422 },
#endif
    0,
    &operand_data[680],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5262 */
  {
    "*seq_zero_sisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5262 */
  {
    "*seq_zero_sidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5262 */
  {
    "*seq_zero_disi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5262 */
  {
    "*seq_zero_didi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5271 */
  {
    "*seq_zero_sisi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[683],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5271 */
  {
    "*seq_zero_sidi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[685],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5271 */
  {
    "*seq_zero_disi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[687],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5271 */
  {
    "*seq_zero_didi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[689],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5281 */
  {
    "*seq_sisi_seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_431 },
#else
    { 0, output_431, 0 },
#endif
    0,
    &operand_data[691],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5281 */
  {
    "*seq_sidi_seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_432 },
#else
    { 0, output_432, 0 },
#endif
    0,
    &operand_data[694],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5281 */
  {
    "*seq_disi_seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_433 },
#else
    { 0, output_433, 0 },
#endif
    0,
    &operand_data[697],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5281 */
  {
    "*seq_didi_seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_434 },
#else
    { 0, output_434, 0 },
#endif
    0,
    &operand_data[700],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5303 */
  {
    "*sne_zero_sisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5303 */
  {
    "*sne_zero_sidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5303 */
  {
    "*sne_zero_disi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5303 */
  {
    "*sne_zero_didi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5313 */
  {
    "*sne_sisi_sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_439 },
#else
    { 0, output_439, 0 },
#endif
    0,
    &operand_data[691],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5313 */
  {
    "*sne_sidi_sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_440 },
#else
    { 0, output_440, 0 },
#endif
    0,
    &operand_data[694],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5313 */
  {
    "*sne_disi_sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_441 },
#else
    { 0, output_441, 0 },
#endif
    0,
    &operand_data[697],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5313 */
  {
    "*sne_didi_sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_442 },
#else
    { 0, output_442, 0 },
#endif
    0,
    &operand_data[700],
    3,
    0,
    3,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5332 */
  {
    "*sgt_sisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[703],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5332 */
  {
    "*sgtu_sisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[703],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5332 */
  {
    "*sgt_sidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[706],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5332 */
  {
    "*sgtu_sidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[706],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5332 */
  {
    "*sgt_disi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[709],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5332 */
  {
    "*sgtu_disi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[709],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5332 */
  {
    "*sgt_didi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[712],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5332 */
  {
    "*sgtu_didi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[712],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5341 */
  {
    "*sgt_sisi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[715],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5341 */
  {
    "*sgtu_sisi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[715],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5341 */
  {
    "*sgt_sidi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[718],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5341 */
  {
    "*sgtu_sidi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[718],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5341 */
  {
    "*sgt_disi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[721],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5341 */
  {
    "*sgtu_disi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[721],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5341 */
  {
    "*sgt_didi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[724],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5341 */
  {
    "*sgtu_didi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[724],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5357 */
  {
    "*sge_sisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5357 */
  {
    "*sgeu_sisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5357 */
  {
    "*sge_sidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5357 */
  {
    "*sgeu_sidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5357 */
  {
    "*sge_disi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5357 */
  {
    "*sgeu_disi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5357 */
  {
    "*sge_didi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5357 */
  {
    "*sgeu_didi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5373 */
  {
    "*slt_sisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[631],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5373 */
  {
    "*sltu_sisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[631],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5373 */
  {
    "*slt_sidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[637],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5373 */
  {
    "*sltu_sidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[637],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5373 */
  {
    "*slt_disi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5373 */
  {
    "*sltu_disi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[727],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5373 */
  {
    "*slt_didi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[730],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5373 */
  {
    "*sltu_didi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[730],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5382 */
  {
    "*slt_sisi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[733],
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5382 */
  {
    "*sltu_sisi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[733],
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5382 */
  {
    "*slt_sidi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[736],
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5382 */
  {
    "*sltu_sidi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[736],
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5382 */
  {
    "*slt_disi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[739],
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5382 */
  {
    "*sltu_disi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[739],
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5382 */
  {
    "*slt_didi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[742],
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5382 */
  {
    "*sltu_didi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[742],
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5403 */
  {
    "*sle_sisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_483 },
#else
    { 0, 0, output_483 },
#endif
    0,
    &operand_data[745],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5403 */
  {
    "*sleu_sisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_484 },
#else
    { 0, 0, output_484 },
#endif
    0,
    &operand_data[745],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5403 */
  {
    "*sle_sidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_485 },
#else
    { 0, 0, output_485 },
#endif
    0,
    &operand_data[748],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5403 */
  {
    "*sleu_sidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_486 },
#else
    { 0, 0, output_486 },
#endif
    0,
    &operand_data[748],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5403 */
  {
    "*sle_disi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_487 },
#else
    { 0, 0, output_487 },
#endif
    0,
    &operand_data[751],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5403 */
  {
    "*sleu_disi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_488 },
#else
    { 0, 0, output_488 },
#endif
    0,
    &operand_data[751],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5403 */
  {
    "*sle_didi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_489 },
#else
    { 0, 0, output_489 },
#endif
    0,
    &operand_data[754],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5403 */
  {
    "*sleu_didi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_490 },
#else
    { 0, 0, output_490 },
#endif
    0,
    &operand_data[754],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5415 */
  {
    "*sle_sisi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_491 },
#else
    { 0, 0, output_491 },
#endif
    0,
    &operand_data[757],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5415 */
  {
    "*sleu_sisi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_492 },
#else
    { 0, 0, output_492 },
#endif
    0,
    &operand_data[757],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5415 */
  {
    "*sle_sidi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_493 },
#else
    { 0, 0, output_493 },
#endif
    0,
    &operand_data[760],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5415 */
  {
    "*sleu_sidi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_494 },
#else
    { 0, 0, output_494 },
#endif
    0,
    &operand_data[760],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5415 */
  {
    "*sle_disi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_495 },
#else
    { 0, 0, output_495 },
#endif
    0,
    &operand_data[763],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5415 */
  {
    "*sleu_disi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_496 },
#else
    { 0, 0, output_496 },
#endif
    0,
    &operand_data[763],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5415 */
  {
    "*sle_didi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_497 },
#else
    { 0, 0, output_497 },
#endif
    0,
    &operand_data[766],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5415 */
  {
    "*sleu_didi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_498 },
#else
    { 0, 0, output_498 },
#endif
    0,
    &operand_data[766],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "sunordered_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.un.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunordered_sf,
    &operand_data[769],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "suneq_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ueq.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_suneq_sf,
    &operand_data[769],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "sunlt_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunlt_sf,
    &operand_data[769],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "sunle_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunle_sf,
    &operand_data[769],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "seq_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.eq.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_seq_sf,
    &operand_data[769],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "slt_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_slt_sf,
    &operand_data[769],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "sle_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sle_sf,
    &operand_data[769],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "sunordered_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.un.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunordered_df,
    &operand_data[772],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "suneq_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ueq.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_suneq_df,
    &operand_data[772],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "sunlt_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunlt_df,
    &operand_data[772],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "sunle_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunle_df,
    &operand_data[772],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "seq_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.eq.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_seq_df,
    &operand_data[772],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "slt_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_slt_df,
    &operand_data[772],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5437 */
  {
    "sle_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sle_df,
    &operand_data[772],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5446 */
  {
    "sge_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sge_sf,
    &operand_data[769],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5446 */
  {
    "sgt_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sgt_sf,
    &operand_data[769],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5446 */
  {
    "sunge_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunge_sf,
    &operand_data[769],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5446 */
  {
    "sungt_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sungt_sf,
    &operand_data[769],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5446 */
  {
    "sge_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sge_df,
    &operand_data[772],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5446 */
  {
    "sgt_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sgt_df,
    &operand_data[772],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5446 */
  {
    "sunge_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunge_df,
    &operand_data[772],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5446 */
  {
    "sungt_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sungt_df,
    &operand_data[772],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5464 */
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_521 },
#else
    { 0, 0, output_521 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[653],
    1,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5498 */
  {
    "*mips.md:5498",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "b\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[653],
    1,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5518 */
  {
    "indirect_jumpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jumpsi,
    &operand_data[35],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5518 */
  {
    "indirect_jumpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jumpdi,
    &operand_data[38],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5556 */
  {
    "tablejumpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tablejumpsi,
    &operand_data[677],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5556 */
  {
    "tablejumpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tablejumpdi,
    &operand_data[680],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5634 */
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5665 */
  {
    "*return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t$31%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5674 */
  {
    "return_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_internal,
    &operand_data[775],
    1,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5699 */
  {
    "eh_set_lr_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_set_lr_si,
    &operand_data[776],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5705 */
  {
    "eh_set_lr_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_set_lr_di,
    &operand_data[778],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5745 */
  {
    "restore_gp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_restore_gp,
    &operand_data[777],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5817 */
  {
    "load_callsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%0,%R2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_callsi,
    &operand_data[353],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5817 */
  {
    "load_calldi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%0,%R2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_calldi,
    &operand_data[356],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5827 */
  {
    "set_got_version",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_set_got_version,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5834 */
  {
    "update_got_version",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_update_got_version,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5866 */
  {
    "sibcall_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_537 },
#else
    { 0, 0, output_537 },
#endif
    (insn_gen_fn) gen_sibcall_internal,
    &operand_data[780],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5885 */
  {
    "sibcall_value_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_538 },
#else
    { 0, 0, output_538 },
#endif
    (insn_gen_fn) gen_sibcall_value_internal,
    &operand_data[782],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5893 */
  {
    "sibcall_value_multiple_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_539 },
#else
    { 0, 0, output_539 },
#endif
    (insn_gen_fn) gen_sibcall_value_multiple_internal,
    &operand_data[782],
    4,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5953 */
  {
    "call_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_540 },
#else
    { 0, 0, output_540 },
#endif
    (insn_gen_fn) gen_call_internal,
    &operand_data[786],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5967 */
  {
    "call_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_541 },
#else
    { 0, 0, output_541 },
#endif
    (insn_gen_fn) gen_call_split,
    &operand_data[788],
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5980 */
  {
    "call_internal_direct",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_542 },
#else
    { 0, 0, output_542 },
#endif
    (insn_gen_fn) gen_call_internal_direct,
    &operand_data[790],
    2,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5996 */
  {
    "call_direct_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_543 },
#else
    { 0, 0, output_543 },
#endif
    (insn_gen_fn) gen_call_direct_split,
    &operand_data[790],
    2,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6019 */
  {
    "call_value_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_544 },
#else
    { 0, 0, output_544 },
#endif
    (insn_gen_fn) gen_call_value_internal,
    &operand_data[785],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6036 */
  {
    "call_value_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_545 },
#else
    { 0, 0, output_545 },
#endif
    (insn_gen_fn) gen_call_value_split,
    &operand_data[792],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6047 */
  {
    "call_value_internal_direct",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_546 },
#else
    { 0, 0, output_546 },
#endif
    (insn_gen_fn) gen_call_value_internal_direct,
    &operand_data[795],
    3,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6065 */
  {
    "call_value_direct_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_547 },
#else
    { 0, 0, output_547 },
#endif
    (insn_gen_fn) gen_call_value_direct_split,
    &operand_data[795],
    3,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6077 */
  {
    "call_value_multiple_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_548 },
#else
    { 0, 0, output_548 },
#endif
    (insn_gen_fn) gen_call_value_multiple_internal,
    &operand_data[798],
    4,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6097 */
  {
    "call_value_multiple_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_549 },
#else
    { 0, 0, output_549 },
#endif
    (insn_gen_fn) gen_call_value_multiple_split,
    &operand_data[792],
    4,
    2,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6142 */
  {
    "prefetch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_550 },
#else
    { 0, 0, output_550 },
#endif
    (insn_gen_fn) gen_prefetch,
    &operand_data[802],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6156 */
  {
    "*prefetch_indexed_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_551 },
#else
    { 0, 0, output_551 },
#endif
    0,
    &operand_data[805],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6156 */
  {
    "*prefetch_indexed_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_552 },
#else
    { 0, 0, output_552 },
#endif
    0,
    &operand_data[809],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6168 */
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%(nop%)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6176 */
  {
    "hazard_nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_554 },
#else
    { 0, 0, output_554 },
#endif
    (insn_gen_fn) gen_hazard_nop,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6189 */
  {
    "*movsi_on_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_555 },
#else
    { 0, output_555, 0 },
#endif
    0,
    &operand_data[813],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6189 */
  {
    "*movsi_on_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_556 },
#else
    { 0, output_556, 0 },
#endif
    0,
    &operand_data[818],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6189 */
  {
    "*movsi_on_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_557 },
#else
    { 0, output_557, 0 },
#endif
    0,
    &operand_data[823],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6189 */
  {
    "*movdi_on_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_558 },
#else
    { 0, output_558, 0 },
#endif
    0,
    &operand_data[828],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6189 */
  {
    "*movdi_on_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_559 },
#else
    { 0, output_559, 0 },
#endif
    0,
    &operand_data[833],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6189 */
  {
    "*movdi_on_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_560 },
#else
    { 0, output_560, 0 },
#endif
    0,
    &operand_data[838],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6204 */
  {
    "*movsf_on_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_561 },
#else
    { 0, output_561, 0 },
#endif
    0,
    &operand_data[843],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6204 */
  {
    "*movsf_on_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_562 },
#else
    { 0, output_562, 0 },
#endif
    0,
    &operand_data[848],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6204 */
  {
    "*movsf_on_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_563 },
#else
    { 0, output_563, 0 },
#endif
    0,
    &operand_data[853],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6204 */
  {
    "*movdf_on_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_564 },
#else
    { 0, output_564, 0 },
#endif
    0,
    &operand_data[858],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6204 */
  {
    "*movdf_on_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_565 },
#else
    { 0, output_565, 0 },
#endif
    0,
    &operand_data[863],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6204 */
  {
    "*movdf_on_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_566 },
#else
    { 0, output_566, 0 },
#endif
    0,
    &operand_data[868],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6253 */
  {
    "consttable_int",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_567 },
#else
    { 0, 0, output_567 },
#endif
    (insn_gen_fn) gen_consttable_int,
    &operand_data[873],
    2,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6265 */
  {
    "consttable_float",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_568 },
#else
    { 0, 0, output_568 },
#endif
    (insn_gen_fn) gen_consttable_float,
    &operand_data[873],
    1,
    0,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6281 */
  {
    "align",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    ".align\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_align,
    &operand_data[284],
    1,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6301 */
  {
    "*mips16e_save_restore",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_570 },
#else
    { 0, 0, output_570 },
#endif
    0,
    &operand_data[875],
    3,
    1,
    0,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6327 */
  {
    "tls_get_tp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tls_get_tp_si,
    &operand_data[34],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6327 */
  {
    "tls_get_tp_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tls_get_tp_di,
    &operand_data[40],
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6345 */
  {
    "*tls_get_tp_si_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    ".set\tpush\n\t.set\tmips32r2\t\n\trdhwr\t$3,$29\n\t.set\tpop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6345 */
  {
    "*tls_get_tp_di_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    ".set\tpush\n\t.set\tmips32r2\t\n\trdhwr\t$3,$29\n\t.set\tpop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:39 */
  {
    "*memory_barrier",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%|sync%-",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[878],
    1,
    1,
    0,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:45 */
  {
    "sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_576 },
#else
    { 0, 0, output_576 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapsi,
    &operand_data[879],
    4,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:45 */
  {
    "sync_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_577 },
#else
    { 0, 0, output_577 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapdi,
    &operand_data[883],
    4,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:76 */
  {
    "compare_and_swap_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_578 },
#else
    { 0, 0, output_578 },
#endif
    (insn_gen_fn) gen_compare_and_swap_12,
    &operand_data[887],
    6,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:96 */
  {
    "sync_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_579 },
#else
    { 0, 0, output_579 },
#endif
    (insn_gen_fn) gen_sync_addsi,
    &operand_data[893],
    2,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:96 */
  {
    "sync_adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_580 },
#else
    { 0, 0, output_580 },
#endif
    (insn_gen_fn) gen_sync_adddi,
    &operand_data[895],
    2,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:127 */
  {
    "sync_add_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_581 },
#else
    { 0, 0, output_581 },
#endif
    (insn_gen_fn) gen_sync_add_12,
    &operand_data[897],
    5,
    1,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:127 */
  {
    "sync_sub_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_582 },
#else
    { 0, 0, output_582 },
#endif
    (insn_gen_fn) gen_sync_sub_12,
    &operand_data[897],
    5,
    1,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:127 */
  {
    "sync_ior_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_583 },
#else
    { 0, 0, output_583 },
#endif
    (insn_gen_fn) gen_sync_ior_12,
    &operand_data[897],
    5,
    1,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:127 */
  {
    "sync_xor_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_584 },
#else
    { 0, 0, output_584 },
#endif
    (insn_gen_fn) gen_sync_xor_12,
    &operand_data[897],
    5,
    1,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:127 */
  {
    "sync_and_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_585 },
#else
    { 0, 0, output_585 },
#endif
    (insn_gen_fn) gen_sync_and_12,
    &operand_data[897],
    5,
    1,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:162 */
  {
    "sync_old_add_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_586 },
#else
    { 0, 0, output_586 },
#endif
    (insn_gen_fn) gen_sync_old_add_12,
    &operand_data[902],
    6,
    2,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:162 */
  {
    "sync_old_sub_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_587 },
#else
    { 0, 0, output_587 },
#endif
    (insn_gen_fn) gen_sync_old_sub_12,
    &operand_data[902],
    6,
    2,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:162 */
  {
    "sync_old_ior_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_588 },
#else
    { 0, 0, output_588 },
#endif
    (insn_gen_fn) gen_sync_old_ior_12,
    &operand_data[902],
    6,
    2,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:162 */
  {
    "sync_old_xor_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_589 },
#else
    { 0, 0, output_589 },
#endif
    (insn_gen_fn) gen_sync_old_xor_12,
    &operand_data[902],
    6,
    2,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:162 */
  {
    "sync_old_and_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_590 },
#else
    { 0, 0, output_590 },
#endif
    (insn_gen_fn) gen_sync_old_and_12,
    &operand_data[902],
    6,
    2,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:200 */
  {
    "sync_new_add_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_591 },
#else
    { 0, 0, output_591 },
#endif
    (insn_gen_fn) gen_sync_new_add_12,
    &operand_data[902],
    5,
    6,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:200 */
  {
    "sync_new_sub_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_592 },
#else
    { 0, 0, output_592 },
#endif
    (insn_gen_fn) gen_sync_new_sub_12,
    &operand_data[902],
    5,
    6,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:200 */
  {
    "sync_new_ior_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_593 },
#else
    { 0, 0, output_593 },
#endif
    (insn_gen_fn) gen_sync_new_ior_12,
    &operand_data[902],
    5,
    6,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:200 */
  {
    "sync_new_xor_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_594 },
#else
    { 0, 0, output_594 },
#endif
    (insn_gen_fn) gen_sync_new_xor_12,
    &operand_data[902],
    5,
    6,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:200 */
  {
    "sync_new_and_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_595 },
#else
    { 0, 0, output_595 },
#endif
    (insn_gen_fn) gen_sync_new_and_12,
    &operand_data[902],
    5,
    6,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:238 */
  {
    "sync_nand_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_596 },
#else
    { 0, 0, output_596 },
#endif
    (insn_gen_fn) gen_sync_nand_12,
    &operand_data[897],
    5,
    1,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:272 */
  {
    "sync_old_nand_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_597 },
#else
    { 0, 0, output_597 },
#endif
    (insn_gen_fn) gen_sync_old_nand_12,
    &operand_data[902],
    6,
    1,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:308 */
  {
    "sync_new_nand_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_598 },
#else
    { 0, 0, output_598 },
#endif
    (insn_gen_fn) gen_sync_new_nand_12,
    &operand_data[902],
    5,
    5,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:329 */
  {
    "sync_subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_599 },
#else
    { 0, 0, output_599 },
#endif
    (insn_gen_fn) gen_sync_subsi,
    &operand_data[897],
    2,
    1,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:329 */
  {
    "sync_subdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_600 },
#else
    { 0, 0, output_600 },
#endif
    (insn_gen_fn) gen_sync_subdi,
    &operand_data[908],
    2,
    1,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:341 */
  {
    "sync_old_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_601 },
#else
    { 0, 0, output_601 },
#endif
    (insn_gen_fn) gen_sync_old_addsi,
    &operand_data[910],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:341 */
  {
    "sync_old_adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_602 },
#else
    { 0, 0, output_602 },
#endif
    (insn_gen_fn) gen_sync_old_adddi,
    &operand_data[913],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:358 */
  {
    "sync_old_subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_603 },
#else
    { 0, 0, output_603 },
#endif
    (insn_gen_fn) gen_sync_old_subsi,
    &operand_data[902],
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:358 */
  {
    "sync_old_subdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_604 },
#else
    { 0, 0, output_604 },
#endif
    (insn_gen_fn) gen_sync_old_subdi,
    &operand_data[916],
    3,
    2,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:372 */
  {
    "sync_new_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_605 },
#else
    { 0, 0, output_605 },
#endif
    (insn_gen_fn) gen_sync_new_addsi,
    &operand_data[910],
    3,
    3,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:372 */
  {
    "sync_new_adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_606 },
#else
    { 0, 0, output_606 },
#endif
    (insn_gen_fn) gen_sync_new_adddi,
    &operand_data[913],
    3,
    3,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:389 */
  {
    "sync_new_subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_607 },
#else
    { 0, 0, output_607 },
#endif
    (insn_gen_fn) gen_sync_new_subsi,
    &operand_data[902],
    3,
    3,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:389 */
  {
    "sync_new_subdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_608 },
#else
    { 0, 0, output_608 },
#endif
    (insn_gen_fn) gen_sync_new_subdi,
    &operand_data[916],
    3,
    3,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:403 */
  {
    "sync_iorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_609 },
#else
    { 0, 0, output_609 },
#endif
    (insn_gen_fn) gen_sync_iorsi,
    &operand_data[919],
    2,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:403 */
  {
    "sync_xorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_610 },
#else
    { 0, 0, output_610 },
#endif
    (insn_gen_fn) gen_sync_xorsi,
    &operand_data[919],
    2,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:403 */
  {
    "sync_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_611 },
#else
    { 0, 0, output_611 },
#endif
    (insn_gen_fn) gen_sync_andsi,
    &operand_data[919],
    2,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:403 */
  {
    "sync_iordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_612 },
#else
    { 0, 0, output_612 },
#endif
    (insn_gen_fn) gen_sync_iordi,
    &operand_data[921],
    2,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:403 */
  {
    "sync_xordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_613 },
#else
    { 0, 0, output_613 },
#endif
    (insn_gen_fn) gen_sync_xordi,
    &operand_data[921],
    2,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:403 */
  {
    "sync_anddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_614 },
#else
    { 0, 0, output_614 },
#endif
    (insn_gen_fn) gen_sync_anddi,
    &operand_data[921],
    2,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:418 */
  {
    "sync_old_iorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_615 },
#else
    { 0, 0, output_615 },
#endif
    (insn_gen_fn) gen_sync_old_iorsi,
    &operand_data[923],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:418 */
  {
    "sync_old_xorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_616 },
#else
    { 0, 0, output_616 },
#endif
    (insn_gen_fn) gen_sync_old_xorsi,
    &operand_data[923],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:418 */
  {
    "sync_old_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_617 },
#else
    { 0, 0, output_617 },
#endif
    (insn_gen_fn) gen_sync_old_andsi,
    &operand_data[923],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:418 */
  {
    "sync_old_iordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_618 },
#else
    { 0, 0, output_618 },
#endif
    (insn_gen_fn) gen_sync_old_iordi,
    &operand_data[926],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:418 */
  {
    "sync_old_xordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_619 },
#else
    { 0, 0, output_619 },
#endif
    (insn_gen_fn) gen_sync_old_xordi,
    &operand_data[926],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:418 */
  {
    "sync_old_anddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_620 },
#else
    { 0, 0, output_620 },
#endif
    (insn_gen_fn) gen_sync_old_anddi,
    &operand_data[926],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:436 */
  {
    "sync_new_iorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_621 },
#else
    { 0, 0, output_621 },
#endif
    (insn_gen_fn) gen_sync_new_iorsi,
    &operand_data[923],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:436 */
  {
    "sync_new_xorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_622 },
#else
    { 0, 0, output_622 },
#endif
    (insn_gen_fn) gen_sync_new_xorsi,
    &operand_data[923],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:436 */
  {
    "sync_new_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_623 },
#else
    { 0, 0, output_623 },
#endif
    (insn_gen_fn) gen_sync_new_andsi,
    &operand_data[923],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:436 */
  {
    "sync_new_iordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_624 },
#else
    { 0, 0, output_624 },
#endif
    (insn_gen_fn) gen_sync_new_iordi,
    &operand_data[926],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:436 */
  {
    "sync_new_xordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_625 },
#else
    { 0, 0, output_625 },
#endif
    (insn_gen_fn) gen_sync_new_xordi,
    &operand_data[926],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:436 */
  {
    "sync_new_anddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_626 },
#else
    { 0, 0, output_626 },
#endif
    (insn_gen_fn) gen_sync_new_anddi,
    &operand_data[926],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:454 */
  {
    "sync_nandsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_627 },
#else
    { 0, 0, output_627 },
#endif
    (insn_gen_fn) gen_sync_nandsi,
    &operand_data[919],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:454 */
  {
    "sync_nanddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_628 },
#else
    { 0, 0, output_628 },
#endif
    (insn_gen_fn) gen_sync_nanddi,
    &operand_data[921],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:467 */
  {
    "sync_old_nandsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_629 },
#else
    { 0, 0, output_629 },
#endif
    (insn_gen_fn) gen_sync_old_nandsi,
    &operand_data[923],
    3,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:467 */
  {
    "sync_old_nanddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_630 },
#else
    { 0, 0, output_630 },
#endif
    (insn_gen_fn) gen_sync_old_nanddi,
    &operand_data[926],
    3,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:482 */
  {
    "sync_new_nandsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_631 },
#else
    { 0, 0, output_631 },
#endif
    (insn_gen_fn) gen_sync_new_nandsi,
    &operand_data[923],
    3,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:482 */
  {
    "sync_new_nanddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_632 },
#else
    { 0, 0, output_632 },
#endif
    (insn_gen_fn) gen_sync_new_nanddi,
    &operand_data[926],
    3,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:497 */
  {
    "sync_lock_test_and_setsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_633 },
#else
    { 0, 0, output_633 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setsi,
    &operand_data[910],
    3,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:497 */
  {
    "sync_lock_test_and_setdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_634 },
#else
    { 0, 0, output_634 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setdi,
    &operand_data[913],
    3,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:525 */
  {
    "test_and_set_12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_635 },
#else
    { 0, 0, output_635 },
#endif
    (insn_gen_fn) gen_test_and_set_12,
    &operand_data[929],
    5,
    1,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:20 */
  {
    "*movcc_v2sf_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_636 },
#else
    { 0, output_636, 0 },
#endif
    0,
    &operand_data[934],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:20 */
  {
    "*movcc_v2sf_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_637 },
#else
    { 0, output_637, 0 },
#endif
    0,
    &operand_data[939],
    5,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:35 */
  {
    "mips_cond_move_tf_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_638 },
#else
    { 0, output_638, 0 },
#endif
    (insn_gen_fn) gen_mips_cond_move_tf_ps,
    &operand_data[944],
    4,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:69 */
  {
    "mips_pul_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pul.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_pul_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:81 */
  {
    "mips_puu_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "puu.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_puu_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:95 */
  {
    "mips_pll_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pll.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_pll_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:109 */
  {
    "mips_plu_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "plu.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_plu_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:136 */
  {
    "vec_initv2sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_643 },
#else
    { 0, 0, output_643 },
#endif
    (insn_gen_fn) gen_vec_initv2sf_internal,
    &operand_data[948],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:155 */
  {
    "vec_extractv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_644 },
#else
    { 0, 0, output_644 },
#endif
    (insn_gen_fn) gen_vec_extractv2sf,
    &operand_data[951],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:225 */
  {
    "mips_alnv_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "alnv.ps\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_alnv_ps,
    &operand_data[954],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:237 */
  {
    "mips_addr_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addr.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addr_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:248 */
  {
    "mips_cvt_pw_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.pw.ps\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cvt_pw_ps,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:258 */
  {
    "mips_cvt_ps_pw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.ps.pw\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cvt_ps_pw,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:268 */
  {
    "mips_mulr_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulr.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_mulr_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:294 */
  {
    "*mips_abs_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.ps\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:307 */
  {
    "mips_cabs_cond_s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cabs.%Y3.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cabs_cond_s,
    &operand_data[958],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:307 */
  {
    "mips_cabs_cond_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cabs.%Y3.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cabs_cond_d,
    &operand_data[962],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:323 */
  {
    "mips_c_cond_4s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_c_cond_4s,
    &operand_data[966],
    6,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:352 */
  {
    "mips_cabs_cond_4s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cabs_cond_4s,
    &operand_data[966],
    6,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:386 */
  {
    "mips_c_cond_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.%Y3.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_c_cond_ps,
    &operand_data[972],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:397 */
  {
    "mips_cabs_cond_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cabs.%Y3.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cabs_cond_ps,
    &operand_data[972],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:413 */
  {
    "sunordered_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.un.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunordered_ps,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:413 */
  {
    "suneq_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ueq.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_suneq_ps,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:413 */
  {
    "sunlt_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunlt_ps,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:413 */
  {
    "sunle_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunle_ps,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:413 */
  {
    "seq_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.eq.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_seq_ps,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:413 */
  {
    "slt_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_slt_ps,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:413 */
  {
    "sle_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sle_ps,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:424 */
  {
    "sge_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.ps\t%0,%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sge_ps,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:424 */
  {
    "sgt_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.ps\t%0,%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sgt_ps,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:424 */
  {
    "sunge_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.ps\t%0,%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunge_ps,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:424 */
  {
    "sungt_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.ps\t%0,%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sungt_ps,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:440 */
  {
    "bc1any4t",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bc1any4t\t%0,%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bc1any4t,
    &operand_data[976],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:452 */
  {
    "bc1any4f",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bc1any4f\t%0,%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bc1any4f,
    &operand_data[976],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:464 */
  {
    "bc1any2t",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bc1any2t\t%0,%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bc1any2t,
    &operand_data[978],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:476 */
  {
    "bc1any2f",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bc1any2f\t%0,%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bc1any2f,
    &operand_data[978],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:497 */
  {
    "*branch_upper_lower",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_672 },
#else
    { 0, 0, output_672 },
#endif
    0,
    &operand_data[980],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:519 */
  {
    "*branch_upper_lower_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_673 },
#else
    { 0, 0, output_673 },
#endif
    0,
    &operand_data[980],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:544 */
  {
    "mips_rsqrt1_s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt1.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rsqrt1_s,
    &operand_data[7],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:544 */
  {
    "mips_rsqrt1_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt1.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rsqrt1_d,
    &operand_data[10],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:544 */
  {
    "mips_rsqrt1_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt1.ps\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rsqrt1_ps,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:553 */
  {
    "mips_rsqrt2_s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt2.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rsqrt2_s,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:553 */
  {
    "mips_rsqrt2_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt2.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rsqrt2_d,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:553 */
  {
    "mips_rsqrt2_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt2.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rsqrt2_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:563 */
  {
    "mips_recip1_s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip1.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_recip1_s,
    &operand_data[7],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:563 */
  {
    "mips_recip1_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip1.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_recip1_d,
    &operand_data[10],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:563 */
  {
    "mips_recip1_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip1.ps\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_recip1_ps,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:572 */
  {
    "mips_recip2_s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip2.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_recip2_s,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:572 */
  {
    "mips_recip2_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip2.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_recip2_d,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:572 */
  {
    "mips_recip2_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip2.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_recip2_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:1 */
  {
    "addv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv2hi3,
    &operand_data[984],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:1 */
  {
    "addv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv4qi3,
    &operand_data[987],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:50 */
  {
    "mips_addq_s_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.w\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addq_s_w,
    &operand_data[34],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:50 */
  {
    "mips_addq_s_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addq_s_ph,
    &operand_data[984],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:50 */
  {
    "mips_addu_s_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addu_s_qb,
    &operand_data[987],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:64 */
  {
    "subv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv2hi3,
    &operand_data[984],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:64 */
  {
    "subv4qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv4qi3,
    &operand_data[987],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:76 */
  {
    "mips_subq_s_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.w\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_subq_s_w,
    &operand_data[34],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:76 */
  {
    "mips_subq_s_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_subq_s_ph,
    &operand_data[984],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:76 */
  {
    "mips_subu_s_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_subu_s_qb,
    &operand_data[987],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:90 */
  {
    "mips_addsc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addsc\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addsc,
    &operand_data[34],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:104 */
  {
    "mips_addwc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addwc\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addwc,
    &operand_data[34],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:119 */
  {
    "mips_modsub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "modsub\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_modsub,
    &operand_data[34],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:130 */
  {
    "mips_raddu_w_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "raddu.w.qb\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_raddu_w_qb,
    &operand_data[990],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:140 */
  {
    "mips_absq_s_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "absq_s.w\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_absq_s_w,
    &operand_data[34],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:140 */
  {
    "mips_absq_s_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "absq_s.ph\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_absq_s_ph,
    &operand_data[984],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:153 */
  {
    "mips_precrq_qb_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "precrq.qb.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_precrq_qb_ph,
    &operand_data[992],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:163 */
  {
    "mips_precrq_ph_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "precrq.ph.w\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_precrq_ph_w,
    &operand_data[449],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:173 */
  {
    "mips_precrq_rs_ph_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "precrq_rs.ph.w\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_precrq_rs_ph_w,
    &operand_data[449],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:188 */
  {
    "mips_precrqu_s_qb_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "precrqu_s.qb.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_precrqu_s_qb_ph,
    &operand_data[992],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:203 */
  {
    "mips_preceq_w_phl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "preceq.w.phl\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_preceq_w_phl,
    &operand_data[995],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:212 */
  {
    "mips_preceq_w_phr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "preceq.w.phr\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_preceq_w_phr,
    &operand_data[995],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:222 */
  {
    "mips_precequ_ph_qbl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "precequ.ph.qbl\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_precequ_ph_qbl,
    &operand_data[997],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:231 */
  {
    "mips_precequ_ph_qbr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "precequ.ph.qbr\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_precequ_ph_qbr,
    &operand_data[997],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:240 */
  {
    "mips_precequ_ph_qbla",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "precequ.ph.qbla\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_precequ_ph_qbla,
    &operand_data[997],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:249 */
  {
    "mips_precequ_ph_qbra",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "precequ.ph.qbra\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_precequ_ph_qbra,
    &operand_data[997],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:259 */
  {
    "mips_preceu_ph_qbl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "preceu.ph.qbl\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_preceu_ph_qbl,
    &operand_data[997],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:268 */
  {
    "mips_preceu_ph_qbr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "preceu.ph.qbr\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_preceu_ph_qbr,
    &operand_data[997],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:277 */
  {
    "mips_preceu_ph_qbla",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "preceu.ph.qbla\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_preceu_ph_qbla,
    &operand_data[997],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:286 */
  {
    "mips_preceu_ph_qbra",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "preceu.ph.qbra\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_preceu_ph_qbra,
    &operand_data[997],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:297 */
  {
    "mips_shll_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_716 },
#else
    { 0, 0, output_716 },
#endif
    (insn_gen_fn) gen_mips_shll_ph,
    &operand_data[999],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:297 */
  {
    "mips_shll_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_717 },
#else
    { 0, 0, output_717 },
#endif
    (insn_gen_fn) gen_mips_shll_qb,
    &operand_data[1002],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:319 */
  {
    "mips_shll_s_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_718 },
#else
    { 0, 0, output_718 },
#endif
    (insn_gen_fn) gen_mips_shll_s_w,
    &operand_data[1005],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:319 */
  {
    "mips_shll_s_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_719 },
#else
    { 0, 0, output_719 },
#endif
    (insn_gen_fn) gen_mips_shll_s_ph,
    &operand_data[999],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:342 */
  {
    "mips_shrl_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_720 },
#else
    { 0, 0, output_720 },
#endif
    (insn_gen_fn) gen_mips_shrl_qb,
    &operand_data[1002],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:361 */
  {
    "mips_shra_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_721 },
#else
    { 0, 0, output_721 },
#endif
    (insn_gen_fn) gen_mips_shra_ph,
    &operand_data[999],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:379 */
  {
    "mips_shra_r_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_722 },
#else
    { 0, 0, output_722 },
#endif
    (insn_gen_fn) gen_mips_shra_r_w,
    &operand_data[1005],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:379 */
  {
    "mips_shra_r_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_723 },
#else
    { 0, 0, output_723 },
#endif
    (insn_gen_fn) gen_mips_shra_r_ph,
    &operand_data[999],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:400 */
  {
    "mips_muleu_s_ph_qbl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muleu_s.ph.qbl\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_muleu_s_ph_qbl,
    &operand_data[1008],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:414 */
  {
    "mips_muleu_s_ph_qbr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muleu_s.ph.qbr\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_muleu_s_ph_qbr,
    &operand_data[1008],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:429 */
  {
    "mips_mulq_rs_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_rs.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_mulq_rs_ph,
    &operand_data[1012],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:444 */
  {
    "mips_muleq_s_w_phl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muleq_s.w.phl\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_muleq_s_w_phl,
    &operand_data[1016],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:458 */
  {
    "mips_muleq_s_w_phr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muleq_s.w.phr\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_muleq_s_w_phr,
    &operand_data[1016],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:473 */
  {
    "mips_dpau_h_qbl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpau.h.qbl\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpau_h_qbl,
    &operand_data[1020],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:484 */
  {
    "mips_dpau_h_qbr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpau.h.qbr\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpau_h_qbr,
    &operand_data[1020],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:496 */
  {
    "mips_dpsu_h_qbl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsu.h.qbl\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpsu_h_qbl,
    &operand_data[1020],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:507 */
  {
    "mips_dpsu_h_qbr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsu.h.qbr\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpsu_h_qbr,
    &operand_data[1020],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:519 */
  {
    "mips_dpaq_s_w_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpaq_s.w.ph\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpaq_s_w_ph,
    &operand_data[1024],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:535 */
  {
    "mips_dpsq_s_w_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsq_s.w.ph\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpsq_s_w_ph,
    &operand_data[1024],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:551 */
  {
    "mips_mulsaq_s_w_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsaq_s.w.ph\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_mulsaq_s_w_ph,
    &operand_data[1024],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:567 */
  {
    "mips_dpaq_sa_l_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpaq_sa.l.w\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpaq_sa_l_w,
    &operand_data[1028],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:583 */
  {
    "mips_dpsq_sa_l_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsq_sa.l.w\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpsq_sa_l_w,
    &operand_data[1028],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:599 */
  {
    "mips_maq_s_w_phl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maq_s.w.phl\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_maq_s_w_phl,
    &operand_data[1024],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:614 */
  {
    "mips_maq_s_w_phr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maq_s.w.phr\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_maq_s_w_phr,
    &operand_data[1024],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:630 */
  {
    "mips_maq_sa_w_phl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maq_sa.w.phl\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_maq_sa_w_phl,
    &operand_data[1024],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:645 */
  {
    "mips_maq_sa_w_phr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maq_sa.w.phr\t%q0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_maq_sa_w_phr,
    &operand_data[1024],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:662 */
  {
    "mips_bitrev",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bitrev\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_bitrev,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:672 */
  {
    "mips_insv",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "insv\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_insv,
    &operand_data[1032],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:685 */
  {
    "mips_repl_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_744 },
#else
    { 0, 0, output_744 },
#endif
    (insn_gen_fn) gen_mips_repl_qb,
    &operand_data[1035],
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:702 */
  {
    "mips_repl_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_745 },
#else
    { 0, output_745, 0 },
#endif
    (insn_gen_fn) gen_mips_repl_ph,
    &operand_data[1037],
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:715 */
  {
    "mips_cmp_eq_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp.eq.ph\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cmp_eq_ph,
    &operand_data[985],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:715 */
  {
    "mips_cmpu_eq_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpu.eq.qb\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cmpu_eq_qb,
    &operand_data[988],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:726 */
  {
    "mips_cmp_lt_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp.lt.ph\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cmp_lt_ph,
    &operand_data[985],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:726 */
  {
    "mips_cmpu_lt_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpu.lt.qb\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cmpu_lt_qb,
    &operand_data[988],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:737 */
  {
    "mips_cmp_le_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp.le.ph\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cmp_le_ph,
    &operand_data[985],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:737 */
  {
    "mips_cmpu_le_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpu.le.qb\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cmpu_le_qb,
    &operand_data[988],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:748 */
  {
    "mips_cmpgu_eq_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpgu.eq.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cmpgu_eq_qb,
    &operand_data[1039],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:758 */
  {
    "mips_cmpgu_lt_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpgu.lt.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cmpgu_lt_qb,
    &operand_data[1039],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:768 */
  {
    "mips_cmpgu_le_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpgu.le.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cmpgu_le_qb,
    &operand_data[1039],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:779 */
  {
    "mips_pick_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pick.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_pick_ph,
    &operand_data[984],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:779 */
  {
    "mips_pick_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pick.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_pick_qb,
    &operand_data[987],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:791 */
  {
    "mips_packrl_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packrl.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_packrl_ph,
    &operand_data[984],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:803 */
  {
    "mips_extr_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_758 },
#else
    { 0, 0, output_758 },
#endif
    (insn_gen_fn) gen_mips_extr_w,
    &operand_data[1042],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:824 */
  {
    "mips_extr_r_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_759 },
#else
    { 0, 0, output_759 },
#endif
    (insn_gen_fn) gen_mips_extr_r_w,
    &operand_data[1042],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:845 */
  {
    "mips_extr_rs_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_760 },
#else
    { 0, 0, output_760 },
#endif
    (insn_gen_fn) gen_mips_extr_rs_w,
    &operand_data[1042],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:867 */
  {
    "mips_extr_s_h",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_761 },
#else
    { 0, 0, output_761 },
#endif
    (insn_gen_fn) gen_mips_extr_s_h,
    &operand_data[1042],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:889 */
  {
    "mips_extp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_762 },
#else
    { 0, 0, output_762 },
#endif
    (insn_gen_fn) gen_mips_extp,
    &operand_data[1042],
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:911 */
  {
    "mips_extpdp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_763 },
#else
    { 0, 0, output_763 },
#endif
    (insn_gen_fn) gen_mips_extpdp,
    &operand_data[1042],
    3,
    4,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:937 */
  {
    "mips_shilo",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_764 },
#else
    { 0, 0, output_764 },
#endif
    (insn_gen_fn) gen_mips_shilo,
    &operand_data[1045],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:956 */
  {
    "mips_mthlip",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mthlip\t%2,%q0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_mthlip,
    &operand_data[1028],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:972 */
  {
    "mips_wrdsp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrdsp\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_wrdsp,
    &operand_data[1048],
    2,
    10,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:994 */
  {
    "mips_rddsp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rddsp\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rddsp,
    &operand_data[1050],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:1025 */
  {
    "mips_lbux_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbux\t%0,%2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_lbux_si,
    &operand_data[34],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:1025 */
  {
    "mips_lbux_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbux\t%0,%2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_lbux_di,
    &operand_data[37],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:1049 */
  {
    "mips_lhx_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhx\t%0,%2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_lhx_si,
    &operand_data[34],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:1049 */
  {
    "mips_lhx_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhx\t%0,%2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_lhx_di,
    &operand_data[37],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:1073 */
  {
    "mips_lwx_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwx\t%0,%2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_lwx_si,
    &operand_data[34],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:1073 */
  {
    "mips_lwx_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwx\t%0,%2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_lwx_di,
    &operand_data[37],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:1084 */
  {
    "mips_bposge",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bposge%0\t%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_bposge,
    &operand_data[1052],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:3 */
  {
    "mips_absq_s_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "absq_s.qb\t%0,%z1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_absq_s_qb,
    &operand_data[1054],
    2,
    1,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:15 */
  {
    "mips_addu_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addu_ph,
    &operand_data[1056],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:27 */
  {
    "mips_addu_s_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addu_s_ph,
    &operand_data[1056],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:40 */
  {
    "mips_adduh_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adduh.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_adduh_qb,
    &operand_data[1059],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:50 */
  {
    "mips_adduh_r_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adduh_r.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_adduh_r_qb,
    &operand_data[1059],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:60 */
  {
    "mips_append",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_780 },
#else
    { 0, 0, output_780 },
#endif
    (insn_gen_fn) gen_mips_append,
    &operand_data[1062],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:75 */
  {
    "mips_balign",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_781 },
#else
    { 0, 0, output_781 },
#endif
    (insn_gen_fn) gen_mips_balign,
    &operand_data[1062],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:90 */
  {
    "mips_cmpgdu_eq_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpgdu.eq.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cmpgdu_eq_qb,
    &operand_data[1066],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:105 */
  {
    "mips_cmpgdu_lt_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpgdu.lt.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cmpgdu_lt_qb,
    &operand_data[1066],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:120 */
  {
    "mips_cmpgdu_le_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpgdu.le.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cmpgdu_le_qb,
    &operand_data[1066],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:135 */
  {
    "mips_dpa_w_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpa.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpa_w_ph,
    &operand_data[1069],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:146 */
  {
    "mips_dps_w_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dps.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dps_w_ph,
    &operand_data[1069],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:173 */
  {
    "mulv2hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv2hi3,
    &operand_data[1012],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:186 */
  {
    "mips_mul_s_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul_s.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_mul_s_ph,
    &operand_data[1073],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:200 */
  {
    "mips_mulq_rs_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_rs.w\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_mulq_rs_w,
    &operand_data[1077],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:214 */
  {
    "mips_mulq_s_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_s.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_mulq_s_ph,
    &operand_data[1073],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:228 */
  {
    "mips_mulq_s_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_s.w\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_mulq_s_w,
    &operand_data[1077],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:242 */
  {
    "mips_mulsa_w_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsa.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_mulsa_w_ph,
    &operand_data[1069],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:253 */
  {
    "mips_mult",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%q0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_mult,
    &operand_data[1081],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:263 */
  {
    "mips_multu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu\t%q0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_multu,
    &operand_data[1081],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:273 */
  {
    "mips_precr_qb_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "precr.qb.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_precr_qb_ph,
    &operand_data[1084],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:283 */
  {
    "mips_precr_sra_ph_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_796 },
#else
    { 0, 0, output_796 },
#endif
    (insn_gen_fn) gen_mips_precr_sra_ph_w,
    &operand_data[1087],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:298 */
  {
    "mips_precr_sra_r_ph_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_797 },
#else
    { 0, 0, output_797 },
#endif
    (insn_gen_fn) gen_mips_precr_sra_r_ph_w,
    &operand_data[1087],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:313 */
  {
    "mips_prepend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_798 },
#else
    { 0, 0, output_798 },
#endif
    (insn_gen_fn) gen_mips_prepend,
    &operand_data[1062],
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:328 */
  {
    "mips_shra_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_799 },
#else
    { 0, 0, output_799 },
#endif
    (insn_gen_fn) gen_mips_shra_qb,
    &operand_data[1091],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:347 */
  {
    "mips_shra_r_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_800 },
#else
    { 0, 0, output_800 },
#endif
    (insn_gen_fn) gen_mips_shra_r_qb,
    &operand_data[1091],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:365 */
  {
    "mips_shrl_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_801 },
#else
    { 0, 0, output_801 },
#endif
    (insn_gen_fn) gen_mips_shrl_ph,
    &operand_data[1094],
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:383 */
  {
    "mips_subu_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_subu_ph,
    &operand_data[1056],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:396 */
  {
    "mips_subu_s_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_subu_s_ph,
    &operand_data[1056],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:409 */
  {
    "mips_subuh_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subuh.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_subuh_qb,
    &operand_data[1059],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:419 */
  {
    "mips_subuh_r_qb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subuh_r.qb\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_subuh_r_qb,
    &operand_data[1059],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:429 */
  {
    "mips_addqh_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addqh.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addqh_ph,
    &operand_data[1056],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:439 */
  {
    "mips_addqh_r_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addqh_r.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addqh_r_ph,
    &operand_data[1056],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:449 */
  {
    "mips_addqh_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addqh.w\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addqh_w,
    &operand_data[1077],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:459 */
  {
    "mips_addqh_r_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addqh_r.w\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addqh_r_w,
    &operand_data[1077],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:469 */
  {
    "mips_subqh_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subqh.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_subqh_ph,
    &operand_data[1056],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:479 */
  {
    "mips_subqh_r_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subqh_r.ph\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_subqh_r_ph,
    &operand_data[1056],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:489 */
  {
    "mips_subqh_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subqh.w\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_subqh_w,
    &operand_data[1077],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:499 */
  {
    "mips_subqh_r_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subqh_r.w\t%0,%z1,%z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_subqh_r_w,
    &operand_data[1077],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:509 */
  {
    "mips_dpax_w_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpax.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpax_w_ph,
    &operand_data[1069],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:520 */
  {
    "mips_dpsx_w_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsx.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpsx_w_ph,
    &operand_data[1069],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:531 */
  {
    "mips_dpaqx_s_w_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpaqx_s.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpaqx_s_w_ph,
    &operand_data[1069],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:546 */
  {
    "mips_dpaqx_sa_w_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpaqx_sa.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpaqx_sa_w_ph,
    &operand_data[1069],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:561 */
  {
    "mips_dpsqx_s_w_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsqx_s.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpsqx_s_w_ph,
    &operand_data[1069],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:576 */
  {
    "mips_dpsqx_sa_w_ph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsqx_sa.w.ph\t%q0,%z2,%z3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_dpsqx_sa_w_ph,
    &operand_data[1069],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "addqq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addqq3,
    &operand_data[1097],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "addhq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addhq3,
    &operand_data[1100],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "addsq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addsq3,
    &operand_data[1103],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "adddq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adddq3,
    &operand_data[1106],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "adduqq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adduqq3,
    &operand_data[1109],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "adduhq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adduhq3,
    &operand_data[1112],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "addusq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addusq3,
    &operand_data[1115],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "addudq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addudq3,
    &operand_data[1118],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "addha3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addha3,
    &operand_data[1121],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "addsa3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addsa3,
    &operand_data[1124],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "addda3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addda3,
    &operand_data[1127],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "adduha3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adduha3,
    &operand_data[1130],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "addusa3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addusa3,
    &operand_data[1133],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:4 */
  {
    "adduda3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adduda3,
    &operand_data[1136],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:36 */
  {
    "usadduqq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usadduqq3,
    &operand_data[1109],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:36 */
  {
    "usadduhq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usadduhq3,
    &operand_data[1112],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:36 */
  {
    "usadduha3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usadduha3,
    &operand_data[1130],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:36 */
  {
    "usaddv4uqq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv4uqq3,
    &operand_data[1139],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:36 */
  {
    "usaddv2uhq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv2uhq3,
    &operand_data[1142],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:36 */
  {
    "usaddv2uha3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv2uha3,
    &operand_data[1145],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:48 */
  {
    "ssaddhq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddhq3,
    &operand_data[1100],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:48 */
  {
    "ssaddsq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.w\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddsq3,
    &operand_data[1103],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:48 */
  {
    "ssaddha3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddha3,
    &operand_data[1121],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:48 */
  {
    "ssaddsa3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.w\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddsa3,
    &operand_data[1124],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:48 */
  {
    "ssaddv2hq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv2hq3,
    &operand_data[1148],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:48 */
  {
    "ssaddv2ha3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv2ha3,
    &operand_data[1151],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subqq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subqq3,
    &operand_data[1097],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subhq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subhq3,
    &operand_data[1100],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subsq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsq3,
    &operand_data[1103],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subdq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdq3,
    &operand_data[1106],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subuqq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subuqq3,
    &operand_data[1109],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subuhq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subuhq3,
    &operand_data[1112],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subusq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subusq3,
    &operand_data[1115],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subudq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subudq3,
    &operand_data[1118],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subha3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subha3,
    &operand_data[1121],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subsa3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsa3,
    &operand_data[1124],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subda3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subda3,
    &operand_data[1127],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subuha3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subuha3,
    &operand_data[1130],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subusa3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subusa3,
    &operand_data[1133],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:60 */
  {
    "subuda3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subuda3,
    &operand_data[1136],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:69 */
  {
    "ussubuqq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubuqq3,
    &operand_data[1109],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:69 */
  {
    "ussubuhq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubuhq3,
    &operand_data[1112],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:69 */
  {
    "ussubuha3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubuha3,
    &operand_data[1130],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:69 */
  {
    "ussubv4uqq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.qb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv4uqq3,
    &operand_data[1139],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:69 */
  {
    "ussubv2uhq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv2uhq3,
    &operand_data[1142],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:69 */
  {
    "ussubv2uha3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv2uha3,
    &operand_data[1145],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:81 */
  {
    "sssubhq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubhq3,
    &operand_data[1100],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:81 */
  {
    "sssubsq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.w\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubsq3,
    &operand_data[1103],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:81 */
  {
    "sssubha3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubha3,
    &operand_data[1121],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:81 */
  {
    "sssubsa3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.w\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubsa3,
    &operand_data[1124],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:81 */
  {
    "sssubv2hq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv2hq3,
    &operand_data[1148],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:81 */
  {
    "sssubv2ha3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subq_s.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv2ha3,
    &operand_data[1151],
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:93 */
  {
    "ssmulv2hq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_rs.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssmulv2hq3,
    &operand_data[1154],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:93 */
  {
    "ssmulhq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_rs.ph\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssmulhq3,
    &operand_data[1158],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:93 */
  {
    "ssmulsq3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulq_rs.w\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssmulsq3,
    &operand_data[1162],
    4,
    2,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:106 */
  {
    "ssmaddsqdq4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpaq_sa.l.w\t%q0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssmaddsqdq4,
    &operand_data[1166],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-fixed.md:123 */
  {
    "ssmsubsqdq4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpsq_sa.l.w\t%q0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssmsubsqdq4,
    &operand_data[1166],
    4,
    3,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:81 */
  {
    "movv2si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_877 },
#else
    { 0, 0, output_877 },
#endif
    (insn_gen_fn) gen_movv2si_internal,
    &operand_data[1170],
    2,
    0,
    7,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:81 */
  {
    "movv4hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_878 },
#else
    { 0, 0, output_878 },
#endif
    (insn_gen_fn) gen_movv4hi_internal,
    &operand_data[1172],
    2,
    0,
    7,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:81 */
  {
    "movv8qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_879 },
#else
    { 0, 0, output_879 },
#endif
    (insn_gen_fn) gen_movv8qi_internal,
    &operand_data[1174],
    2,
    0,
    7,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:103 */
  {
    "vec_pack_ssat_v2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsswh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_pack_ssat_v2si,
    &operand_data[1176],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:103 */
  {
    "vec_pack_ssat_v4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packsshb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_pack_ssat_v4hi,
    &operand_data[1179],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:115 */
  {
    "vec_pack_usat_v4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "packushb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_pack_usat_v4hi,
    &operand_data[1179],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:127 */
  {
    "addv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddw\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv2si3,
    &operand_data[1182],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:127 */
  {
    "addv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv4hi3,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:127 */
  {
    "addv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv8qi3,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:141 */
  {
    "loongson_paddd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddd\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_paddd,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:151 */
  {
    "ssaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv4hi3,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:151 */
  {
    "ssaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddsb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv8qi3,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:160 */
  {
    "usaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddush\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv4hi3,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:160 */
  {
    "usaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "paddusb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv8qi3,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:169 */
  {
    "loongson_pandn_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pandn_w,
    &operand_data[1182],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:169 */
  {
    "loongson_pandn_h",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pandn_h,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:169 */
  {
    "loongson_pandn_b",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pandn_b,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:169 */
  {
    "loongson_pandn_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pandn\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pandn_d,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:179 */
  {
    "loongson_pavgh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pavgh,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:179 */
  {
    "loongson_pavgb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pavgb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pavgb,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:189 */
  {
    "loongson_pcmpeqw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqw\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pcmpeqw,
    &operand_data[1182],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:189 */
  {
    "loongson_pcmpeqh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pcmpeqh,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:189 */
  {
    "loongson_pcmpeqb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpeqb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pcmpeqb,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:199 */
  {
    "loongson_pcmpgtw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtw\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pcmpgtw,
    &operand_data[1182],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:199 */
  {
    "loongson_pcmpgth",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgth\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pcmpgth,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:199 */
  {
    "loongson_pcmpgtb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pcmpgtb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pcmpgtb,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:209 */
  {
    "loongson_pextrh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pextrh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pextrh,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:219 */
  {
    "loongson_pinsrh_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pinsrh_0\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pinsrh_0,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:228 */
  {
    "loongson_pinsrh_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pinsrh_1\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pinsrh_1,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:237 */
  {
    "loongson_pinsrh_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pinsrh_2\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pinsrh_2,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:246 */
  {
    "loongson_pinsrh_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pinsrh_3\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pinsrh_3,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:256 */
  {
    "loongson_pmaddhw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaddhw\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pmaddhw,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:266 */
  {
    "smaxv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxsh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxv4hi3,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:275 */
  {
    "umaxv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmaxub\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umaxv8qi3,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:284 */
  {
    "sminv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminsh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sminv4hi3,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:293 */
  {
    "uminv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pminub\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_uminv8qi3,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:302 */
  {
    "loongson_pmovmskb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmovmskb\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pmovmskb,
    &operand_data[1188],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:311 */
  {
    "umulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhuh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulv4hi3_highpart,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:321 */
  {
    "smulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmulhh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smulv4hi3_highpart,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:331 */
  {
    "loongson_pmullh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmullh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pmullh,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:341 */
  {
    "loongson_pmuluw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pmuluw\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pmuluw,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:351 */
  {
    "loongson_pasubub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pasubub\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pasubub,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:361 */
  {
    "loongson_biadd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "biadd\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_biadd,
    &operand_data[1203],
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:370 */
  {
    "loongson_psadbh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pasubub\t%0,%1,%2;biadd\t%0,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_psadbh,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:380 */
  {
    "loongson_pshufh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pshufh\t%0,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_pshufh,
    &operand_data[1206],
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:391 */
  {
    "loongson_psllw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllw\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_psllw,
    &operand_data[1210],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:391 */
  {
    "loongson_psllh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psllh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_psllh,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:400 */
  {
    "loongson_psraw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psraw\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_psraw,
    &operand_data[1210],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:400 */
  {
    "loongson_psrah",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrah\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_psrah,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:409 */
  {
    "loongson_psrlw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlw\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_psrlw,
    &operand_data[1210],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:409 */
  {
    "loongson_psrlh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psrlh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_psrlh,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:418 */
  {
    "subv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubw\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv2si3,
    &operand_data[1182],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:418 */
  {
    "subv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv4hi3,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:418 */
  {
    "subv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv8qi3,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:430 */
  {
    "loongson_psubd",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubd\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loongson_psubd,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:440 */
  {
    "sssubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv4hi3,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:440 */
  {
    "sssubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubsb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv8qi3,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:449 */
  {
    "ussubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubush\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv4hi3,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:449 */
  {
    "ussubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psubusb\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv8qi3,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:458 */
  {
    "vec_interleave_highv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhwd\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_highv2si,
    &operand_data[1182],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:458 */
  {
    "vec_interleave_highv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhhw\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_highv4hi,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:458 */
  {
    "vec_interleave_highv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpckhbh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_highv8qi,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:468 */
  {
    "vec_interleave_lowv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklwd\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_lowv2si,
    &operand_data[1182],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:468 */
  {
    "vec_interleave_lowv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklhw\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_lowv4hi,
    &operand_data[1185],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:468 */
  {
    "vec_interleave_lowv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "punpcklbh\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_interleave_lowv8qi,
    &operand_data[1188],
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:479 */
  {
    "divsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_942 },
#else
    { 0, 0, output_942 },
#endif
    (insn_gen_fn) gen_divsi3,
    &operand_data[1213],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:479 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_943 },
#else
    { 0, 0, output_943 },
#endif
    (insn_gen_fn) gen_udivsi3,
    &operand_data[1213],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:479 */
  {
    "divdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_944 },
#else
    { 0, 0, output_944 },
#endif
    (insn_gen_fn) gen_divdi3,
    &operand_data[1216],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:479 */
  {
    "udivdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_945 },
#else
    { 0, 0, output_945 },
#endif
    (insn_gen_fn) gen_udivdi3,
    &operand_data[1216],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:488 */
  {
    "modsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_946 },
#else
    { 0, 0, output_946 },
#endif
    (insn_gen_fn) gen_modsi3,
    &operand_data[1213],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:488 */
  {
    "umodsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_947 },
#else
    { 0, 0, output_947 },
#endif
    (insn_gen_fn) gen_umodsi3,
    &operand_data[1213],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:488 */
  {
    "moddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_948 },
#else
    { 0, 0, output_948 },
#endif
    (insn_gen_fn) gen_moddi3,
    &operand_data[1216],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:488 */
  {
    "umoddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_949 },
#else
    { 0, 0, output_949 },
#endif
    (insn_gen_fn) gen_umoddi3,
    &operand_data[1216],
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:988 */
  {
    "conditional_trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_conditional_trap,
    &operand_data[1219],
    2,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1029 */
  {
    "addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsi3,
    &operand_data[1221],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1029 */
  {
    "adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddi3,
    &operand_data[1224],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1080 */
  {
    "adddi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1227],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1106 */
  {
    "adddi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1229],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1133 */
  {
    "adddi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1232],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1159 */
  {
    "mulsf3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1234],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1200 */
  {
    "mulsf3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1237],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1290 */
  {
    "mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsf3,
    &operand_data[1240],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1290 */
  {
    "muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldf3,
    &operand_data[1243],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1375 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3,
    &operand_data[1246],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1375 */
  {
    "muldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldi3,
    &operand_data[1249],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1427 */
  {
    "muldi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1252],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1470 */
  {
    "muldi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1252],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1541 */
  {
    "muldi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1253],
    6,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1595 */
  {
    "muldi3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1259],
    6,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1653 */
  {
    "mulsidi3-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1265],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1680 */
  {
    "mulsidi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1268],
    5,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1710 */
  {
    "mulsidi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1273],
    5,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1752 */
  {
    "mulsidi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1253],
    6,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1778 */
  {
    "mulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3,
    &operand_data[1278],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1778 */
  {
    "umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3,
    &operand_data[1278],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1814 */
  {
    "umulsidi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1278],
    5,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1814 */
  {
    "smulsi3_highpart-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1278],
    5,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1899 */
  {
    "smulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart,
    &operand_data[1246],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1899 */
  {
    "umulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart,
    &operand_data[1246],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1918 */
  {
    "umulsi3_highpart+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1260],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1918 */
  {
    "umulsi3_highpart+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1260],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1983 */
  {
    "mulditi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1283],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:1983 */
  {
    "mulditi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1283],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2007 */
  {
    "mulditi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulditi3,
    &operand_data[1287],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2007 */
  {
    "umulditi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulditi3,
    &operand_data[1287],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2242 */
  {
    "divsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divsf3,
    &operand_data[1290],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2242 */
  {
    "divdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divdf3,
    &operand_data[1293],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2242 */
  {
    "divv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divv2sf3,
    &operand_data[1296],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2303 */
  {
    "divv2sf3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1259],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2303 */
  {
    "divv2sf3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1299],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2335 */
  {
    "andsi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1259],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2335 */
  {
    "andsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1299],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2559 */
  {
    "andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andsi3,
    &operand_data[1303],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2559 */
  {
    "anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_anddi3,
    &operand_data[1306],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2589 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorsi3,
    &operand_data[1303],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2589 */
  {
    "iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iordi3,
    &operand_data[1306],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2619 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorsi3,
    &operand_data[1303],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2619 */
  {
    "xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xordi3,
    &operand_data[1306],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2762 */
  {
    "xordi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1224],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2762 */
  {
    "xordi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1224],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2780 */
  {
    "xordi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1248],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2780 */
  {
    "zero_extendqisi2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1248],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2836 */
  {
    "zero_extendqisi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1309],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2855 */
  {
    "zero_extendqisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1311],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2876 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[1313],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2876 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[1315],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2876 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqidi2,
    &operand_data[1317],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2876 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhidi2,
    &operand_data[1319],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2920 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[1321],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2969 */
  {
    "zero_extendqihi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1309],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2985 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[1313],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2985 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[1315],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2985 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqidi2,
    &operand_data[1317],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:2985 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhidi2,
    &operand_data[1319],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3000 */
  {
    "extendhidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1313],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3000 */
  {
    "extendhidi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1315],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3000 */
  {
    "extendqihi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1317],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3000 */
  {
    "extendqihi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1319],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3030 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[1321],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3045 */
  {
    "extendqihi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1321],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3092 */
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2,
    &operand_data[1323],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3129 */
  {
    "fix_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2,
    &operand_data[1325],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3227 */
  {
    "fixuns_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfsi2,
    &operand_data[1323],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3272 */
  {
    "fixuns_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfdi2,
    &operand_data[1327],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3314 */
  {
    "fixuns_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfsi2,
    &operand_data[1325],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3356 */
  {
    "fixuns_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfdi2,
    &operand_data[1289],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3406 */
  {
    "extv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extv,
    &operand_data[1329],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3443 */
  {
    "extzv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extzv,
    &operand_data[1329],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3492 */
  {
    "insv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_insv,
    &operand_data[1333],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3620 */
  {
    "insv+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1337],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3645 */
  {
    "insv+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1339],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3673 */
  {
    "insv+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1342],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3698 */
  {
    "insv+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1345],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3710 */
  {
    "insv+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1347],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3710 */
  {
    "insv+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1349],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3725 */
  {
    "unspec_gotsi-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1351],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3725 */
  {
    "unspec_gotsi-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1354],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3740 */
  {
    "unspec_gotsi-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1347],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3740 */
  {
    "unspec_gotsi-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1349],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3753 */
  {
    "unspec_gotsi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1357],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3753 */
  {
    "unspec_gotsi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1359],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3765 */
  {
    "unspec_gotsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_unspec_gotsi,
    &operand_data[1361],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3765 */
  {
    "unspec_gotdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_unspec_gotdi,
    &operand_data[1363],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3808 */
  {
    "unspec_gotdi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1227],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3808 */
  {
    "unspec_gotdi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1232],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3817 */
  {
    "unspec_gotdi+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1365],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3817 */
  {
    "movdi-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1368],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3829 */
  {
    "movdi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1371],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3829 */
  {
    "movdi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1374],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3846 */
  {
    "movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdi,
    &operand_data[1363],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3911 */
  {
    "movdi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1232],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3953 */
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[1361],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3953 */
  {
    "movv2hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2hi,
    &operand_data[1377],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3953 */
  {
    "movv4qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4qi,
    &operand_data[1379],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3953 */
  {
    "movv2hq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2hq,
    &operand_data[1381],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3953 */
  {
    "movv2uhq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2uhq,
    &operand_data[1383],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3953 */
  {
    "movv2ha",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2ha,
    &operand_data[1385],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3953 */
  {
    "movv2uha",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2uha,
    &operand_data[1387],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3953 */
  {
    "movv4qq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4qq,
    &operand_data[1389],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3953 */
  {
    "movv4uqq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4uqq,
    &operand_data[1391],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:3989 */
  {
    "movv4uqq+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1227],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4028 */
  {
    "reload_incc-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1227],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4070 */
  {
    "reload_incc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_incc,
    &operand_data[1393],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4080 */
  {
    "reload_outcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_outcc,
    &operand_data[1396],
    3,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4143 */
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[1399],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4176 */
  {
    "movhi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1401],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4218 */
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[1403],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4251 */
  {
    "movqi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1405],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4276 */
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[1407],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4317 */
  {
    "movdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdf,
    &operand_data[1409],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4358 */
  {
    "movti",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movti,
    &operand_data[1411],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4391 */
  {
    "movtf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movtf,
    &operand_data[1413],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4423 */
  {
    "movtf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1415],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4423 */
  {
    "movtf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1417],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4423 */
  {
    "movtf+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1419],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4423 */
  {
    "movtf+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1421],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4423 */
  {
    "movtf+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1423],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4423 */
  {
    "movv2sf-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1425],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4434 */
  {
    "movv2sf-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1427],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4434 */
  {
    "movv2sf-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1429],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4446 */
  {
    "movv2sf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1431],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4461 */
  {
    "movv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2sf,
    &operand_data[1433],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4516 */
  {
    "move_doubleword_fprdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_move_doubleword_fprdf,
    &operand_data[1409],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4516 */
  {
    "move_doubleword_fprdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_move_doubleword_fprdi,
    &operand_data[1363],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4516 */
  {
    "move_doubleword_fprv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_move_doubleword_fprv2sf,
    &operand_data[1433],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4516 */
  {
    "move_doubleword_fprv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_move_doubleword_fprv2si,
    &operand_data[1435],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4516 */
  {
    "move_doubleword_fprv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_move_doubleword_fprv4hi,
    &operand_data[1437],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4516 */
  {
    "move_doubleword_fprv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_move_doubleword_fprv8qi,
    &operand_data[1439],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4516 */
  {
    "move_doubleword_fprtf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_move_doubleword_fprtf,
    &operand_data[1413],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4610 */
  {
    "load_const_gp_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_load_const_gp_si,
    &operand_data[34],
    1,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4610 */
  {
    "load_const_gp_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_load_const_gp_di,
    &operand_data[40],
    1,
    0,
    1,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4617 */
  {
    "load_const_gp_di+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1371],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4617 */
  {
    "load_const_gp_di+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1374],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4636 */
  {
    "load_const_gp_di+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1371],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4636 */
  {
    "load_const_gp_di+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1374],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4661 */
  {
    "clear_cache-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1441],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4661 */
  {
    "clear_cache-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1444],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4683 */
  {
    "clear_cache-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1221],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4711 */
  {
    "clear_cache",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_clear_cache,
    &operand_data[1447],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4791 */
  {
    "movmemsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmemsi,
    &operand_data[1449],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4811 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[1221],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4811 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[1221],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4811 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[1221],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4811 */
  {
    "ashldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3,
    &operand_data[1453],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4811 */
  {
    "ashrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3,
    &operand_data[1453],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4811 */
  {
    "lshrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3,
    &operand_data[1453],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4953 */
  {
    "lshrdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1229],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4953 */
  {
    "lshrdi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1229],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4953 */
  {
    "lshrdi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1229],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4953 */
  {
    "lshrdi3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1234],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4953 */
  {
    "cmpsi-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1234],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4953 */
  {
    "cmpsi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1234],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:4973 */
  {
    "cmpsi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1456],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5024 */
  {
    "cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi,
    &operand_data[1459],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5024 */
  {
    "cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi,
    &operand_data[1461],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5035 */
  {
    "cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsf,
    &operand_data[1240],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5035 */
  {
    "cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdf,
    &operand_data[1243],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bunordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunordered,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bordered,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bunlt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunlt,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bunge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunge,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "buneq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_buneq,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bltgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltgt,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bunle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunle,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bungt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bungt,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "beq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_beq,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bne,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgt,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bge,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "blt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_blt,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "ble",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ble,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgtu,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgeu,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltu,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5183 */
  {
    "bleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bleu,
    &operand_data[653],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5196 */
  {
    "condjump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_condjump,
    &operand_data[1463],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5255 */
  {
    "seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seq,
    &operand_data[876],
    1,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5296 */
  {
    "sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sne,
    &operand_data[876],
    1,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5325 */
  {
    "sgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgt,
    &operand_data[876],
    1,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5325 */
  {
    "sgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgtu,
    &operand_data[876],
    1,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5350 */
  {
    "sge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sge,
    &operand_data[876],
    1,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5350 */
  {
    "sgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgeu,
    &operand_data[876],
    1,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5366 */
  {
    "slt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_slt,
    &operand_data[876],
    1,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5366 */
  {
    "sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sltu,
    &operand_data[876],
    1,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5396 */
  {
    "sle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sle,
    &operand_data[876],
    1,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5396 */
  {
    "sleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sleu,
    &operand_data[876],
    1,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5506 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[782],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5525 */
  {
    "tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump,
    &operand_data[1465],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5570 */
  {
    "builtin_setjmp_setup",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_builtin_setjmp_setup,
    &operand_data[782],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5585 */
  {
    "builtin_longjmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_builtin_longjmp,
    &operand_data[782],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5622 */
  {
    "prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5641 */
  {
    "epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5649 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5660 */
  {
    "return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5683 */
  {
    "eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_eh_return,
    &operand_data[1467],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5711 */
  {
    "eh_return+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1468],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5721 */
  {
    "exception_receiver",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_exception_receiver,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5734 */
  {
    "nonlocal_goto_receiver",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_nonlocal_goto_receiver,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5745 */
  {
    "nonlocal_goto_receiver+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1263],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5812 */
  {
    "unspec_callsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_unspec_callsi,
    &operand_data[1361],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5812 */
  {
    "unspec_calldi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_unspec_calldi,
    &operand_data[1363],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5854 */
  {
    "sibcall",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall,
    &operand_data[1470],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5873 */
  {
    "sibcall_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value,
    &operand_data[1470],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5904 */
  {
    "call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call,
    &operand_data[1470],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5953 */
  {
    "call+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1474],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:5980 */
  {
    "call_value-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[790],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6006 */
  {
    "call_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value,
    &operand_data[1470],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6019 */
  {
    "call_value+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1476],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6047 */
  {
    "call_value+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[795],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6077 */
  {
    "untyped_call-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1476],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6112 */
  {
    "untyped_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_call,
    &operand_data[1470],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6221 */
  {
    "movsicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsicc,
    &operand_data[1480],
    4,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6221 */
  {
    "movdicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdicc,
    &operand_data[1484],
    4,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6233 */
  {
    "movsfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsfcc,
    &operand_data[1488],
    4,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6233 */
  {
    "movdfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdfcc,
    &operand_data[1492],
    4,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6287 */
  {
    "movdfcc+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1496],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6327 */
  {
    "movdfcc+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[876],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips.md:6327 */
  {
    "memory_barrier-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1224],
    1,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:23 */
  {
    "memory_barrier",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_memory_barrier,
    &operand_data[0],
    0,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:61 */
  {
    "sync_compare_and_swapqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapqi,
    &operand_data[1497],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:61 */
  {
    "sync_compare_and_swaphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swaphi,
    &operand_data[1501],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:111 */
  {
    "sync_addqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_addqi,
    &operand_data[1498],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:111 */
  {
    "sync_subqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_subqi,
    &operand_data[1498],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:111 */
  {
    "sync_iorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorqi,
    &operand_data[1498],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:111 */
  {
    "sync_xorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorqi,
    &operand_data[1498],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:111 */
  {
    "sync_andqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_andqi,
    &operand_data[1498],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:111 */
  {
    "sync_addhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_addhi,
    &operand_data[1502],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:111 */
  {
    "sync_subhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_subhi,
    &operand_data[1502],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:111 */
  {
    "sync_iorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorhi,
    &operand_data[1502],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:111 */
  {
    "sync_xorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorhi,
    &operand_data[1502],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:111 */
  {
    "sync_andhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_andhi,
    &operand_data[1502],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:143 */
  {
    "sync_old_addqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addqi,
    &operand_data[1497],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:143 */
  {
    "sync_old_subqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_subqi,
    &operand_data[1497],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:143 */
  {
    "sync_old_iorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_iorqi,
    &operand_data[1497],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:143 */
  {
    "sync_old_xorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_xorqi,
    &operand_data[1497],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:143 */
  {
    "sync_old_andqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_andqi,
    &operand_data[1497],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:143 */
  {
    "sync_old_addhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addhi,
    &operand_data[1501],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:143 */
  {
    "sync_old_subhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_subhi,
    &operand_data[1501],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:143 */
  {
    "sync_old_iorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_iorhi,
    &operand_data[1501],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:143 */
  {
    "sync_old_xorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_xorhi,
    &operand_data[1501],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:143 */
  {
    "sync_old_andhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_andhi,
    &operand_data[1501],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:180 */
  {
    "sync_new_addqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_addqi,
    &operand_data[1497],
    3,
    3,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:180 */
  {
    "sync_new_subqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_subqi,
    &operand_data[1497],
    3,
    3,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:180 */
  {
    "sync_new_iorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_iorqi,
    &operand_data[1497],
    3,
    3,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:180 */
  {
    "sync_new_xorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_xorqi,
    &operand_data[1497],
    3,
    3,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:180 */
  {
    "sync_new_andqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_andqi,
    &operand_data[1497],
    3,
    3,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:180 */
  {
    "sync_new_addhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_addhi,
    &operand_data[1501],
    3,
    3,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:180 */
  {
    "sync_new_subhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_subhi,
    &operand_data[1501],
    3,
    3,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:180 */
  {
    "sync_new_iorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_iorhi,
    &operand_data[1501],
    3,
    3,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:180 */
  {
    "sync_new_xorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_xorhi,
    &operand_data[1501],
    3,
    3,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:180 */
  {
    "sync_new_andhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_andhi,
    &operand_data[1501],
    3,
    3,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:222 */
  {
    "sync_nandqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_nandqi,
    &operand_data[1498],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:222 */
  {
    "sync_nandhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_nandhi,
    &operand_data[1502],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:254 */
  {
    "sync_old_nandqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_nandqi,
    &operand_data[1497],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:254 */
  {
    "sync_old_nandhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_nandhi,
    &operand_data[1501],
    3,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:289 */
  {
    "sync_new_nandqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_nandqi,
    &operand_data[1497],
    3,
    3,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:289 */
  {
    "sync_new_nandhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_nandhi,
    &operand_data[1501],
    3,
    3,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:512 */
  {
    "sync_lock_test_and_setqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setqi,
    &operand_data[1497],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/sync.md:512 */
  {
    "sync_lock_test_and_sethi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_sethi,
    &operand_data[1501],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:48 */
  {
    "movv2sfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2sfcc,
    &operand_data[1505],
    4,
    2,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:125 */
  {
    "vec_initv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv2sf,
    &operand_data[1508],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:173 */
  {
    "vec_setv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv2sf,
    &operand_data[1510],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:193 */
  {
    "mips_cvt_ps_s",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_cvt_ps_s,
    &operand_data[1513],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:209 */
  {
    "mips_cvt_s_pl",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_cvt_s_pl,
    &operand_data[1515],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:217 */
  {
    "mips_cvt_s_pu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_cvt_s_pu,
    &operand_data[1515],
    2,
    1,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:279 */
  {
    "mips_abs_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_abs_ps,
    &operand_data[1507],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:323 */
  {
    "mips_abs_ps+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1517],
    6,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:352 */
  {
    "scc_ps-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1517],
    6,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:409 */
  {
    "scc_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_scc_ps,
    &operand_data[1523],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:489 */
  {
    "single_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_single_cc,
    &operand_data[1463],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:582 */
  {
    "vcondv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vcondv2sf,
    &operand_data[1525],
    6,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:597 */
  {
    "sminv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sminv2sf3,
    &operand_data[1518],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md:608 */
  {
    "smaxv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smaxv2sf3,
    &operand_data[1518],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:1011 */
  {
    "mips_lbux",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_lbux,
    &operand_data[1531],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:1035 */
  {
    "mips_lhx",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_lhx,
    &operand_data[1531],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dsp.md:1059 */
  {
    "mips_lwx",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_lwx,
    &operand_data[1531],
    3,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:157 */
  {
    "mips_madd",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_madd,
    &operand_data[1301],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:157 */
  {
    "mips_maddu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_maddu,
    &operand_data[1301],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:165 */
  {
    "mips_msub",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_msub,
    &operand_data[1301],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md:165 */
  {
    "mips_msubu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_msubu,
    &operand_data[1301],
    4,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:24 */
  {
    "movv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2si,
    &operand_data[1435],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:24 */
  {
    "movv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4hi,
    &operand_data[1437],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:24 */
  {
    "movv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv8qi,
    &operand_data[1439],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:91 */
  {
    "vec_initv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv2si,
    &operand_data[1534],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:91 */
  {
    "vec_initv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv4hi,
    &operand_data[1536],
    2,
    0,
    0,
    0
  },
  /* ../../gcc-4.4.7/gcc/config/mips/loongson.md:91 */
  {
    "vec_initv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv8qi,
    &operand_data[1538],
    2,
    0,
    0,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
