/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

  { "((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3729 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3731 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3729 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3731 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3743 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3745 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3743 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3745 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(!TARGET_FIX_VR4120) && ( reload_completed)",
    __builtin_constant_p (
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 2312 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 2312 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(!ISA_MIPS1) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2391 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2391 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(ISA_HAS_DMUL3) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_DMUL3) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_DMUL3) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4639 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4639 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p ((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) ((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 5900 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_SIBCALLS && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 5900 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn))
    ? (int) 
#line 5900 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn))
    : -1 },
#line 1861 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1861 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
    ? (int) 
#line 1861 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)",
    __builtin_constant_p (
#line 6197 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 647 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF))
    ? (int) (
#line 6197 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 647 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF))
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V2UHAmode)\n\
       || reg_or_0_operand (operands[1], V2UHAmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || reg_or_0_operand (operands[1], V2UHAmode))) && 
#line 657 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || reg_or_0_operand (operands[1], V2UHAmode))) && 
#line 657 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 693 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 693 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 6146 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS",
    __builtin_constant_p 
#line 6146 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS)
    ? (int) 
#line 6146 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS)
    : -1 },
#line 1408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_MUL3",
    __builtin_constant_p 
#line 1408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3)
    ? (int) 
#line 1408 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3)
    : -1 },
  { "(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5275 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5275 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 4861 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16",
    __builtin_constant_p 
#line 4861 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16)
    ? (int) 
#line 4861 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16)
    : -1 },
  { "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1314 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1314 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 693 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 693 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V2UHAmode)\n\
       || register_operand (operands[1], V2UHAmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || register_operand (operands[1], V2UHAmode))) && 
#line 657 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || register_operand (operands[1], V2UHAmode))) && 
#line 657 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 4339 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "(TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 4339 "../../gcc-4.4.7/gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 4339 "../../gcc-4.4.7/gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
  { "((ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && 
#line 646 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && 
#line 646 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 6161 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 6161 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 3220 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 3220 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 3220 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
    : -1 },
  { "(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2427 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2427 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V4QImode)\n\
       || register_operand (operands[1], V4QImode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || register_operand (operands[1], V4QImode))) && 
#line 653 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || register_operand (operands[1], V4QImode))) && 
#line 653 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V2HQmode)\n\
       || reg_or_0_operand (operands[1], V2HQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || reg_or_0_operand (operands[1], V2HQmode))) && 
#line 654 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || reg_or_0_operand (operands[1], V2HQmode))) && 
#line 654 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 3486 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63)",
    __builtin_constant_p 
#line 3486 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63))
    ? (int) 
#line 3486 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3743 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3743 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(ISA_HAS_ROR) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_ROR) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_ROR) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_64BIT && !TARGET_MIPS16) && ( reload_completed)",
    __builtin_constant_p (
#line 2784 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2786 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 2784 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2786 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 5275 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && !ISA_HAS_SEQ_SNE",
    __builtin_constant_p 
#line 5275 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE)
    ? (int) 
#line 5275 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE)
    : -1 },
  { "(ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 6239 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 6239 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V2UHQmode)\n\
       || reg_or_0_operand (operands[1], V2UHQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || reg_or_0_operand (operands[1], V2UHQmode))) && 
#line 655 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || reg_or_0_operand (operands[1], V2UHQmode))) && 
#line 655 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(reload_completed && !TARGET_64BIT\n\
   && mips_split_64bit_move_p (operands[0], operands[1])) && (TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)",
    __builtin_constant_p (
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && 
#line 667 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    ? (int) (
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && 
#line 667 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS))
    : -1 },
#line 1742 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "GENERATE_MADD_MSUB",
    __builtin_constant_p 
#line 1742 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB)
    ? (int) 
#line 1742 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB)
    : -1 },
  { "(!TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5407 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5407 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 992 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_COND_TRAP",
    __builtin_constant_p 
#line 992 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP)
    ? (int) 
#line 992 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP)
    : -1 },
#line 1163 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0xf)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))",
    __builtin_constant_p 
#line 1163 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10)))
    ? (int) 
#line 1163 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10)))
    : -1 },
  { "(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(!ISA_HAS_MULHI) && ( reload_completed && !TARGET_FIX_R4000)",
    __builtin_constant_p (
#line 1926 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI) && 
#line 1928 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000))
    ? (int) (
#line 1926 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI) && 
#line 1928 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000))
    : -1 },
#line 5749 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_CALL_CLOBBERED_GP",
    __builtin_constant_p 
#line 5749 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP)
    ? (int) 
#line 5749 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP)
    : -1 },
  { "((!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && (TARGET_64BIT)) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p ((
#line 3004 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 3008 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) ((
#line 3004 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 3008 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
#line 1456 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1456 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
    ? (int) 
#line 1456 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
    : -1 },
  { "(TARGET_LOONGSON_2EF) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 492 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 492 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 6239 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 6239 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 577 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 577 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "((ISA_HAS_SEQ_SNE) && (TARGET_64BIT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 5317 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 5317 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6227 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 6227 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!ISA_MIPS1) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2391 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2391 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(ISA_HAS_COND_TRAP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1008 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1008 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(ISA_HAS_CLZ_CLO) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3038 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "GENERATE_MIPS16E",
    __builtin_constant_p 
#line 3038 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E)
    ? (int) 
#line 3038 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E)
    : -1 },
#line 1782 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_64BIT || !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1782 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT || !TARGET_FIX_R4000)
    ? (int) 
#line 1782 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT || !TARGET_FIX_R4000)
    : -1 },
#line 4255 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32\n\
	   && INTVAL (operands[1]) <= 31 + 0x7f))",
    __builtin_constant_p 
#line 4255 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f)))
    ? (int) 
#line 4255 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f)))
    : -1 },
  { "(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (V2SFmode)\n\
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2198 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2198 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 3880 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3880 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 3880 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 5317 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_SEQ_SNE",
    __builtin_constant_p 
#line 5317 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE)
    ? (int) 
#line 5317 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE)
    : -1 },
  { "(HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 6348 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 6348 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 2474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_CLZ_CLO",
    __builtin_constant_p 
#line 2474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO)
    ? (int) 
#line 2474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO)
    : -1 },
#line 4936 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16",
    __builtin_constant_p 
#line 4936 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16)
    ? (int) 
#line 4936 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16)
    : -1 },
#line 4381 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && TARGET_MIPS16\n\
   && (register_operand (operands[0], TImode)\n\
       || register_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 4381 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    ? (int) 
#line 4381 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    : -1 },
#line 4308 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 4308 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 4308 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    : -1 },
  { "(TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && ( reload_completed && !TARGET_FIX_R4000)",
    __builtin_constant_p (
#line 1991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && 
#line 1993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000))
    ? (int) (
#line 1991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && 
#line 1993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000))
    : -1 },
#line 1435 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 1435 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 1435 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 4796 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && !TARGET_MEMCPY",
    __builtin_constant_p 
#line 4796 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_MEMCPY)
    ? (int) 
#line 4796 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_MEMCPY)
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_RTP) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4666 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4666 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 5235 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)",
    __builtin_constant_p 
#line 5235 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode))
    ? (int) 
#line 5235 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode))
    : -1 },
  { "(TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3800 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3800 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_64BIT && !TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2813 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2813 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1975 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_MULHI",
    __builtin_constant_p 
#line 1975 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
    ? (int) 
#line 1975 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
    : -1 },
  { "((!TARGET_MIPS16) && (TARGET_64BIT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 5407 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 5407 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 5987 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)",
    __builtin_constant_p 
#line 5987 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn))
    ? (int) 
#line 5987 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn))
    : -1 },
#line 2490 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_POP",
    __builtin_constant_p 
#line 2490 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_POP)
    ? (int) 
#line 2490 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_POP)
    : -1 },
#line 1084 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && ((INTVAL (operands[1]) > 0x7f\n\
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)\n\
       || (INTVAL (operands[1]) < - 0x80\n\
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))",
    __builtin_constant_p 
#line 1084 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80)))
    ? (int) 
#line 1084 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80)))
    : -1 },
#line 1476 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && !ISA_HAS_MUL3",
    __builtin_constant_p 
#line 1476 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MUL3)
    ? (int) 
#line 1476 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MUL3)
    : -1 },
  { "(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (V2SFmode)\n\
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2226 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2226 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 1873 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && ISA_HAS_MULS",
    __builtin_constant_p 
#line 1873 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS)
    ? (int) 
#line 1873 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS)
    : -1 },
  { "(ISA_HAS_NMADD3_NMSUB3 (DFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (DFmode)\n\
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2198 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2198 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_64BIT && TARGET_MIPS16) && ( reload_completed)",
    __builtin_constant_p (
#line 1205 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 1207 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 1205 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 1207 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 3541 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_CINS\n\
   && mask_low_and_shift_p (SImode, operands[3], operands[2], 32)",
    __builtin_constant_p 
#line 3541 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CINS
   && mask_low_and_shift_p (SImode, operands[3], operands[2], 32))
    ? (int) 
#line 3541 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CINS
   && mask_low_and_shift_p (SImode, operands[3], operands[2], 32))
    : -1 },
#line 5307 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE",
    __builtin_constant_p 
#line 5307 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE)
    ? (int) 
#line 5307 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && ( epilogue_completed)",
    __builtin_constant_p (
#line 3623 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 3625 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( epilogue_completed))
    ? (int) (
#line 3623 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 3625 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( epilogue_completed))
    : -1 },
#line 5736 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_USE_GOT",
    __builtin_constant_p 
#line 5736 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_USE_GOT)
    ? (int) 
#line 5736 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_USE_GOT)
    : -1 },
#line 3154 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 3154 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
    ? (int) 
#line 3154 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
    : -1 },
#line 3600 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])",
    __builtin_constant_p 
#line 3600 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
    ? (int) 
#line 3600 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
    : -1 },
#line 5702 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "! TARGET_64BIT",
    __builtin_constant_p 
#line 5702 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(! TARGET_64BIT)
    ? (int) 
#line 5702 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(! TARGET_64BIT)
    : -1 },
#line 1561 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_MACC",
    __builtin_constant_p 
#line 1561 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC)
    ? (int) 
#line 1561 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC)
    : -1 },
#line 4449 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0",
    __builtin_constant_p 
#line 4449 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0)
    ? (int) 
#line 4449 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0)
    : -1 },
  { "(!TARGET_FIX_VR4120) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3729 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3731 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3729 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3731 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && ( reload_completed && !TARGET_FIX_R4000)",
    __builtin_constant_p (
#line 1991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && 
#line 1993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000))
    ? (int) (
#line 1991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && 
#line 1993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && !TARGET_FIX_R4000))
    : -1 },
#line 1513 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "GENERATE_MADD_MSUB && !TARGET_MIPS16",
    __builtin_constant_p 
#line 1513 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB && !TARGET_MIPS16)
    ? (int) 
#line 1513 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MADD_MSUB && !TARGET_MIPS16)
    : -1 },
#line 3677 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected",
    __builtin_constant_p 
#line 3677 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
    ? (int) 
#line 3677 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3729 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3729 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3004 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3004 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3915 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16 && reload_completed\n\
   && !TARGET_DEBUG_D_MODE\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x10)\n\
       || (INTVAL (operands[1]) >= 32 * 8\n\
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 8\n\
	   && (INTVAL (operands[1]) & 7) != 0))",
    __builtin_constant_p 
#line 3915 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0)))
    ? (int) 
#line 3915 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0)))
    : -1 },
  { "(ISA_HAS_SYNCI) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4755 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4755 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "((ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)",
    __builtin_constant_p ((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 647 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF))
    ? (int) ((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 647 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF))
    : -1 },
  { "(GENERATE_LL_SC) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 503 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 503 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 1926 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!ISA_HAS_MULHI",
    __builtin_constant_p 
#line 1926 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI)
    ? (int) 
#line 1926 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI)
    : -1 },
  { "(ISA_HAS_SEB_SEH) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3023 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3023 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1808 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1808 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
    ? (int) 
#line 1808 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
    : -1 },
  { "(TARGET_SB1) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2391 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2391 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_64BIT",
    __builtin_constant_p 
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT)
    ? (int) 
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT)
    : -1 },
  { "((HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6331 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 6333 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 6331 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 6333 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 1110 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))",
    __builtin_constant_p 
#line 1110 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80)))
    ? (int) 
#line 1110 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80)))
    : -1 },
#line 171 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
  { "ISA_HAS_DSPR2 && !TARGET_64BIT",
    __builtin_constant_p 
#line 171 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT)
    ? (int) 
#line 171 "../../gcc-4.4.7/gcc/config/mips/mips-dspr2.md"
(ISA_HAS_DSPR2 && !TARGET_64BIT)
    : -1 },
#line 3107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 3107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W)
    ? (int) 
#line 3107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W)
    : -1 },
#line 1530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS3900 && !TARGET_MIPS16",
    __builtin_constant_p 
#line 1530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS3900 && !TARGET_MIPS16)
    ? (int) 
#line 1530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS3900 && !TARGET_MIPS16)
    : -1 },
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_FIX_VR4120",
    __builtin_constant_p 
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120)
    ? (int) 
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120)
    : -1 },
  { "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (!TARGET_64BIT && TARGET_LOONGSON_VECTORS)",
    __builtin_constant_p (
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 696 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS))
    ? (int) (
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 696 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS))
    : -1 },
#line 2025 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && !TARGET_FIX_R4000\n\
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2025 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2025 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 28 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 28 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 4437 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 4437 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && reload_completed)
    ? (int) 
#line 4437 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && reload_completed)
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 6197 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 646 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 6197 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 646 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
  { "(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5235 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5235 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p (
#line 3049 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 3053 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) (
#line 3049 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 3053 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_RTP) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4666 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4666 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_RTP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 3870 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3870 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 3870 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
  { "(!TARGET_FIX_R4000) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1446 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1446 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)",
    __builtin_constant_p ((
#line 6197 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 647 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF))
    ? (int) ((
#line 6197 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 647 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF))
    : -1 },
  { "(TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5419 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5419 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3758 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3758 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p ((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) ((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (!TARGET_64BIT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 692 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 692 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5307 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5307 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 133 "../../gcc-4.4.7/gcc/config/mips/loongson2ef.md"
  { "TUNE_LOONGSON_2EF",
    __builtin_constant_p 
#line 133 "../../gcc-4.4.7/gcc/config/mips/loongson2ef.md"
(TUNE_LOONGSON_2EF)
    ? (int) 
#line 133 "../../gcc-4.4.7/gcc/config/mips/loongson2ef.md"
(TUNE_LOONGSON_2EF)
    : -1 },
  { "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1301 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1301 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 5300 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16",
    __builtin_constant_p 
#line 5300 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16)
    ? (int) 
#line 5300 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16)
    : -1 },
  { "(ISA_HAS_NMADD4_NMSUB4 (SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (SFmode)\n\
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 5662 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "mips_can_use_return_insn ()",
    __builtin_constant_p 
#line 5662 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_can_use_return_insn ())
    ? (int) 
#line 5662 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_can_use_return_insn ())
    : -1 },
  { "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3600 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3600 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 135 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
  { "ISA_HAS_DSP && !TARGET_64BIT",
    __builtin_constant_p 
#line 135 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP && !TARGET_64BIT)
    ? (int) 
#line 135 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSP && !TARGET_64BIT)
    : -1 },
  { "(TARGET_CALL_CLOBBERED_GP) && ( reload_completed)",
    __builtin_constant_p (
#line 5749 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 5751 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 5749 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_CALL_CLOBBERED_GP) && 
#line 5751 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 4742 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_SYNCI",
    __builtin_constant_p 
#line 4742 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI)
    ? (int) 
#line 4742 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI)
    : -1 },
  { "(!TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3791 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3791 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2246 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2246 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (TARGET_64BIT && TARGET_FLOAT64)",
    __builtin_constant_p (
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 697 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64))
    ? (int) (
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 697 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64))
    : -1 },
#line 2754 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32",
    __builtin_constant_p 
#line 2754 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32)
    ? (int) 
#line 2754 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32)
    : -1 },
  { "(ISA_HAS_SEQ_SNE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5317 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5317 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 6289 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "reload_completed",
    __builtin_constant_p 
#line 6289 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed)
    ? (int) 
#line 6289 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed)
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V4UQQmode)\n\
       || reg_or_0_operand (operands[1], V4UQQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || reg_or_0_operand (operands[1], V4UQQmode))) && 
#line 659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || reg_or_0_operand (operands[1], V4UQQmode))) && 
#line 659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (V2SFmode)\n\
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2184 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2184 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 3359 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 3359 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 3359 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    : -1 },
  { "(ISA_HAS_BADDU && TARGET_64BIT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1242 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && TARGET_64BIT) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1242 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && TARGET_64BIT) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 2011 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2011 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2011 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
  { "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (!TARGET_64BIT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 692 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 4604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && 
#line 692 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 4370 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && !TARGET_MIPS16\n\
   && (register_operand (operands[0], TImode)\n\
       || reg_or_0_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 4370 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || reg_or_0_operand (operands[1], TImode)))
    ? (int) 
#line 4370 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || reg_or_0_operand (operands[1], TImode)))
    : -1 },
#line 3811 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && TARGET_USE_GOT && reload_completed",
    __builtin_constant_p 
#line 3811 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed)
    ? (int) 
#line 3811 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed)
    : -1 },
#line 3579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])",
    __builtin_constant_p 
#line 3579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1]))
    ? (int) 
#line 3579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1]))
    : -1 },
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_LWXS",
    __builtin_constant_p 
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS)
    ? (int) 
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS)
    : -1 },
  { "(ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3486 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63)) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3486 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63)) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 5878 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_SIBCALLS",
    __builtin_constant_p 
#line 5878 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SIBCALLS)
    ? (int) 
#line 5878 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SIBCALLS)
    : -1 },
  { "(ISA_HAS_POP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2490 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_POP) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2490 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_POP) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),\n\
		       INTVAL (operands[3]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1722 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_MUL3 && peep2_reg_dead_p (3, operands[1])",
    __builtin_constant_p 
#line 1722 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (3, operands[1]))
    ? (int) 
#line 1722 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (3, operands[1]))
    : -1 },
#line 4180 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 2\n\
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 2\n\
	   && (INTVAL (operands[1]) & 1) != 0))",
    __builtin_constant_p 
#line 4180 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0)))
    ? (int) 
#line 4180 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0)))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (TARGET_64BIT && TARGET_FLOAT64)",
    __builtin_constant_p (
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 697 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64))
    ? (int) (
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 697 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64))
    : -1 },
  { "(!TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3791 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3791 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 2025 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && !TARGET_FIX_R4000\n\
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2025 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2025 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 1689 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[1])",
    __builtin_constant_p 
#line 1689 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[1]))
    ? (int) 
#line 1689 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[1]))
    : -1 },
#line 6227 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_CONDMOVE",
    __builtin_constant_p 
#line 6227 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE)
    ? (int) 
#line 6227 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE)
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V4QQmode)\n\
       || reg_or_0_operand (operands[1], V4QQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || reg_or_0_operand (operands[1], V4QQmode))) && 
#line 658 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || reg_or_0_operand (operands[1], V4QQmode))) && 
#line 658 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_64BIT\n\
   && mips_split_64bit_move_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1]))
    ? (int) 
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1]))
    : -1 },
#line 1232 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_BADDU && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1232 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1232 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && !BYTES_BIG_ENDIAN)
    : -1 },
#line 2732 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63)",
    __builtin_constant_p 
#line 2732 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63))
    ? (int) 
#line 2732 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63))
    : -1 },
  { "(ISA_HAS_NMADD3_NMSUB3 (SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (SFmode)\n\
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2198 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2198 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 1063 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
  { "ISA_HAS_DSP",
    __builtin_constant_p 
#line 1063 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
    ? (int) 
#line 1063 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP)
    : -1 },
  { "(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),\n\
		       INTVAL (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3523 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3523 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || reg_or_0_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode)))
    ? (int) 
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode)))
    : -1 },
  { "((TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && (TARGET_64BIT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 5275 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 5275 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 33 "../../gcc-4.4.7/gcc/config/mips/sync.md"
  { "GENERATE_SYNC",
    __builtin_constant_p 
#line 33 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_SYNC)
    ? (int) 
#line 33 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_SYNC)
    : -1 },
  { "(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_MIPS16) && ( reload_completed)",
    __builtin_constant_p (
#line 4687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 4689 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 4687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 4689 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 4155 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || reg_or_0_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 4155 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode)))
    ? (int) 
#line 4155 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode)))
    : -1 },
  { "((TARGET_MIPS16) && (TARGET_64BIT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 5419 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 5419 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2530 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 6087 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)",
    __builtin_constant_p 
#line 6087 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn))
    ? (int) 
#line 6087 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn))
    : -1 },
  { "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1301 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1301 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(ISA_HAS_DSP) && (Pmode == SImode)",
    __builtin_constant_p (
#line 1077 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 1077 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2344 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2344 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 612 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
  { "TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT",
    __builtin_constant_p 
#line 612 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)
    ? (int) 
#line 612 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)
    : -1 },
  { "((!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && (TARGET_64BIT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 5307 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 5307 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 634 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_LWXS) && (TARGET_DSP)",
    __builtin_constant_p (
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 4131 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_LWXS) && 
#line 659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 6106 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_SPLIT_CALLS",
    __builtin_constant_p 
#line 6106 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
    ? (int) 
#line 6106 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V2HQmode)\n\
       || register_operand (operands[1], V2HQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || register_operand (operands[1], V2HQmode))) && 
#line 654 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || register_operand (operands[1], V2HQmode))) && 
#line 654 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(ISA_HAS_SYNCI) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4755 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4755 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SYNCI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3729 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3729 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 492 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
  { "TARGET_LOONGSON_2EF",
    __builtin_constant_p 
#line 492 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF)
    ? (int) 
#line 492 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_LOONGSON_2EF)
    : -1 },
  { "(TARGET_64BIT && !TARGET_FIX_R4000) && ( reload_completed)",
    __builtin_constant_p (
#line 1820 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1822 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 1820 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1822 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(ISA_HAS_CINS\n\
   && mask_low_and_shift_p (DImode, operands[3], operands[2], 32)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3541 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CINS
   && mask_low_and_shift_p (DImode, operands[3], operands[2], 32)) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3541 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CINS
   && mask_low_and_shift_p (DImode, operands[3], operands[2], 32)) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V4QImode)\n\
       || reg_or_0_operand (operands[1], V4QImode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || reg_or_0_operand (operands[1], V4QImode))) && 
#line 653 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || reg_or_0_operand (operands[1], V4QImode))) && 
#line 653 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 577 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 577 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 3900 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3900 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 3900 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V4QQmode)\n\
       || register_operand (operands[1], V4QQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || register_operand (operands[1], V4QQmode))) && 
#line 658 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || register_operand (operands[1], V4QQmode))) && 
#line 658 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 4298 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_SOFT_FLOAT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 4298 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    ? (int) 
#line 4298 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    : -1 },
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)
    ? (int) 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)
    : -1 },
  { "(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2427 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2427 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 2037 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && TARGET_FIX_R4000\n\
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2037 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2037 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 1628 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && reload_completed",
    __builtin_constant_p 
#line 1628 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed)
    ? (int) 
#line 1628 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed)
    : -1 },
#line 6055 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)",
    __builtin_constant_p 
#line 6055 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn))
    ? (int) 
#line 6055 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn))
    : -1 },
#line 3069 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_SEB_SEH",
    __builtin_constant_p 
#line 3069 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH)
    ? (int) 
#line 3069 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH)
    : -1 },
#line 4957 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16",
    __builtin_constant_p 
#line 4957 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
    ? (int) 
#line 4957 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
    : -1 },
#line 1242 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_BADDU && TARGET_64BIT",
    __builtin_constant_p 
#line 1242 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && TARGET_64BIT)
    ? (int) 
#line 1242 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && TARGET_64BIT)
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p (
#line 2859 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2867 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) (
#line 2859 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2867 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
  { "(GENERATE_MIPS16E) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V2HAmode)\n\
       || reg_or_0_operand (operands[1], V2HAmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || reg_or_0_operand (operands[1], V2HAmode))) && 
#line 656 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || reg_or_0_operand (operands[1], V2HAmode))) && 
#line 656 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 6161 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 6161 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 3474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),\n\
		       INTVAL (operands[3]))",
    __builtin_constant_p 
#line 3474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3])))
    ? (int) 
#line 3474 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3])))
    : -1 },
#line 2011 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2011 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2011 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_DSP",
    __builtin_constant_p 
#line 659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)
    ? (int) 
#line 659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP)
    : -1 },
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 4084 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_8CC && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 4084 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_8CC && TARGET_HARD_FLOAT)
    ? (int) 
#line 4084 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_8CC && TARGET_HARD_FLOAT)
    : -1 },
#line 697 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_FLOAT64",
    __builtin_constant_p 
#line 697 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)
    ? (int) 
#line 697 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_FLOAT64)
    : -1 },
#line 516 "../../gcc-4.4.7/gcc/config/mips/sync.md"
  { "GENERATE_LL_SC",
    __builtin_constant_p 
#line 516 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
    ? (int) 
#line 516 "../../gcc-4.4.7/gcc/config/mips/sync.md"
(GENERATE_LL_SC)
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V2UHQmode)\n\
       || register_operand (operands[1], V2UHQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || register_operand (operands[1], V2UHQmode))) && 
#line 655 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || register_operand (operands[1], V2UHQmode))) && 
#line 655 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3833 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3833 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 1885 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2)",
    __builtin_constant_p 
#line 1885 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2))
    ? (int) 
#line 1885 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2))
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V2HAmode)\n\
       || register_operand (operands[1], V2HAmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || register_operand (operands[1], V2HAmode))) && 
#line 656 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || register_operand (operands[1], V2HAmode))) && 
#line 656 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
#line 2064 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "(TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2)\n\
   && !TARGET_64BIT",
    __builtin_constant_p 
#line 2064 "../../gcc-4.4.7/gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2)
   && !TARGET_64BIT)
    ? (int) 
#line 2064 "../../gcc-4.4.7/gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2)
   && !TARGET_64BIT)
    : -1 },
  { "(reload_completed && !TARGET_64BIT\n\
   && mips_split_64bit_move_p (operands[0], operands[1])) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && 
#line 664 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 4426 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && 
#line 664 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(ISA_HAS_NMADD4_NMSUB4 (SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (SFmode)\n\
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2184 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2184 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 1446 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1446 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000)
    ? (int) 
#line 1446 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000)
    : -1 },
  { "(TARGET_USE_GOT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5822 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5822 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && ( reload_completed)",
    __builtin_constant_p (
#line 3677 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 3679 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 3677 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 3679 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(ISA_HAS_DSP) && (Pmode == DImode)",
    __builtin_constant_p (
#line 1077 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 1077 "../../gcc-4.4.7/gcc/config/mips/mips-dsp.md"
(ISA_HAS_DSP) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 4116 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3800 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3800 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 3117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 3117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
    ? (int) 
#line 3117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
    : -1 },
  { "(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (V2SFmode)\n\
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 3890 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3890 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 3890 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3743 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3745 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3743 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3745 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 3437 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32",
    __builtin_constant_p 
#line 3437 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32)
    ? (int) 
#line 3437 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32)
    : -1 },
#line 696 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_LOONGSON_VECTORS",
    __builtin_constant_p 
#line 696 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)
    ? (int) 
#line 696 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS)
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4639 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4639 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2107 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2246 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2246 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 1798 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DSPR2",
    __builtin_constant_p 
#line 1798 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DSPR2)
    ? (int) 
#line 1798 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DSPR2)
    : -1 },
  { "(!TARGET_MIPS16\n\
   && (register_operand (operands[0], V2HImode)\n\
       || reg_or_0_operand (operands[1], V2HImode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || reg_or_0_operand (operands[1], V2HImode))) && 
#line 652 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3968 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || reg_or_0_operand (operands[1], V2HImode))) && 
#line 652 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3437 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3437 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3649 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS",
    __builtin_constant_p 
#line 3649 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS)
    ? (int) 
#line 3649 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS)
    : -1 },
#line 4288 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 4288 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    ? (int) 
#line 4288 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    : -1 },
#line 2053 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MAD",
    __builtin_constant_p 
#line 2053 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MAD)
    ? (int) 
#line 2053 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MAD)
    : -1 },
#line 692 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 692 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 692 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 4349 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 4349 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 4349 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V2HImode)\n\
       || register_operand (operands[1], V2HImode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || register_operand (operands[1], V2HImode))) && 
#line 652 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || register_operand (operands[1], V2HImode))) && 
#line 652 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "((!TARGET_FIX_VR4120) && (TARGET_64BIT)) && ( reload_completed)",
    __builtin_constant_p ((
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2312 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 2310 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2312 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 94 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
  { "TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS",
    __builtin_constant_p 
#line 94 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)
    ? (int) 
#line 94 "../../gcc-4.4.7/gcc/config/mips/loongson.md"
(TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)
    : -1 },
#line 4165 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 4165 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 4165 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
  { "(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3811 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3811 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && ( reload_completed)",
    __builtin_constant_p (
#line 360 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 362 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    ? (int) (
#line 360 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && 
#line 362 "../../gcc-4.4.7/gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    : -1 },
  { "(TARGET_FIX_R4000) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1456 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1456 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 4230 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || reg_or_0_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 4230 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode)))
    ? (int) 
#line 4230 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode)))
    : -1 },
#line 1602 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && !ISA_HAS_MSAC",
    __builtin_constant_p 
#line 1602 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
    ? (int) 
#line 1602 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
    : -1 },
  { "(TARGET_MIPS16\n\
   && (register_operand (operands[0], V4UQQmode)\n\
       || register_operand (operands[1], V4UQQmode))) && (TARGET_DSP)",
    __builtin_constant_p (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || register_operand (operands[1], V4UQQmode))) && 
#line 659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    ? (int) (
#line 3978 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || register_operand (operands[1], V4UQQmode))) && 
#line 659 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_DSP))
    : -1 },
  { "(TARGET_HARD_FLOAT) && (!TARGET_64BIT && TARGET_LOONGSON_VECTORS)",
    __builtin_constant_p (
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 696 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS))
    ? (int) (
#line 4579 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT) && 
#line 696 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_LOONGSON_VECTORS))
    : -1 },
#line 6306 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "operands[1] == stack_pointer_rtx\n\
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL)",
    __builtin_constant_p 
#line 6306 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(operands[1] == stack_pointer_rtx
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL))
    ? (int) 
#line 6306 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(operands[1] == stack_pointer_rtx
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL))
    : -1 },
  { "(TARGET_USE_GOT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5822 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5822 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_USE_GOT) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2117 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 2037 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && TARGET_FIX_R4000\n\
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 2037 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 2037 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "Pmode == SImode",
    __builtin_constant_p 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)
    ? (int) 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3758 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3758 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "((ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 646 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 646 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_NMADD3_NMSUB3 (DFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (DFmode)\n\
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2226 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2226 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 4404 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && !TARGET_MIPS16\n\
   && (register_operand (operands[0], TFmode)\n\
       || reg_or_0_operand (operands[1], TFmode))",
    __builtin_constant_p 
#line 4404 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || reg_or_0_operand (operands[1], TFmode)))
    ? (int) 
#line 4404 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || reg_or_0_operand (operands[1], TFmode)))
    : -1 },
#line 3701 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed",
    __builtin_constant_p 
#line 3701 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed)
    ? (int) 
#line 3701 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed)
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_NEWABI) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4622 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 4622 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "((ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)",
    __builtin_constant_p ((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && 
#line 647 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF))
    ? (int) ((
#line 6212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_FP_CONDMOVE) && 
#line 687 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && 
#line 647 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF))
    : -1 },
#line 3523 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),\n\
		       INTVAL (operands[2]))",
    __builtin_constant_p 
#line 3523 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2])))
    ? (int) 
#line 3523 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2])))
    : -1 },
  { "((HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6331 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 6333 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 6331 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 6333 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "Pmode == DImode",
    __builtin_constant_p 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)
    ? (int) 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode)
    : -1 },
#line 24 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
  { "ISA_HAS_DSPR2",
    __builtin_constant_p 
#line 24 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2)
    ? (int) 
#line 24 "../../gcc-4.4.7/gcc/config/mips/mips-fixed.md"
(ISA_HAS_DSPR2)
    : -1 },
#line 3993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 4\n\
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 4\n\
	   && (INTVAL (operands[1]) & 3) != 0))",
    __builtin_constant_p 
#line 3993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0)))
    ? (int) 
#line 3993 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0)))
    : -1 },
#line 693 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT",
    __builtin_constant_p 
#line 693 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)
    ? (int) 
#line 693 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)
    : -1 },
#line 3049 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E",
    __builtin_constant_p 
#line 3049 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E)
    ? (int) 
#line 3049 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E)
    : -1 },
#line 4240 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 4240 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 4240 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
  { "(TARGET_SB1 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2427 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2427 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 683 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 4991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_ROR",
    __builtin_constant_p 
#line 4991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_ROR)
    ? (int) 
#line 4991 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_ROR)
    : -1 },
  { "(ISA_HAS_MACC && !ISA_HAS_MSAC) && ( reload_completed)",
    __builtin_constant_p (
#line 1602 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 1602 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1604 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 4415 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT\n\
   && TARGET_MIPS16\n\
   && (register_operand (operands[0], TFmode)\n\
       || register_operand (operands[1], TFmode))",
    __builtin_constant_p 
#line 4415 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || register_operand (operands[1], TFmode)))
    ? (int) 
#line 4415 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || register_operand (operands[1], TFmode)))
    : -1 },
#line 3144 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 3144 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W)
    ? (int) 
#line 3144 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W)
    : -1 },
  { "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1314 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1314 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 686 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(mips_current_loadgp_style () == LOADGP_NEWABI) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4622 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 4622 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 1582 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_MSAC",
    __builtin_constant_p 
#line 1582 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
    ? (int) 
#line 1582 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3743 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3743 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3756 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 4473 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT\n\
   && TARGET_PAIRED_SINGLE_FLOAT\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || reg_or_0_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 4473 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode)))
    ? (int) 
#line 4473 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode)))
    : -1 },
  { "(ISA_HAS_NMADD3_NMSUB3 (SFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (SFmode)\n\
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2226 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2226 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 681 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 1642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_MSAC && reload_completed",
    __builtin_constant_p 
#line 1642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed)
    ? (int) 
#line 1642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed)
    : -1 },
  { "(TARGET_64BIT) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT))
    ? (int) (
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 638 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(!TARGET_64BIT))
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed && register_operand (operands[1], VOIDmode))",
    __builtin_constant_p (
#line 2972 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2976 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode)))
    ? (int) (
#line 2972 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2976 "../../gcc-4.4.7/gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode)))
    : -1 },
  { "(ISA_HAS_NMADD4_NMSUB4 (DFmode)\n\
   && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (DFmode)\n\
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2184 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2184 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4957 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4957 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 6348 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 6348 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 4781 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_CACHE",
    __builtin_constant_p 
#line 4781 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CACHE)
    ? (int) 
#line 4781 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_CACHE)
    : -1 },
#line 1771 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_MULS",
    __builtin_constant_p 
#line 1771 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULS)
    ? (int) 
#line 1771 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_MULS)
    : -1 },
#line 6268 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16",
    __builtin_constant_p 
#line 6268 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16)
    ? (int) 
#line 6268 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16)
    : -1 },
  { "(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3833 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3833 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && 
#line 642 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 4031 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && INTVAL (operands[1]) >= 0x100\n\
   && INTVAL (operands[1]) <= 0xff + 0x7f",
    __builtin_constant_p 
#line 4031 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f)
    ? (int) 
#line 4031 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f)
    : -1 },
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)
    ? (int) 
#line 630 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_64BIT)
    : -1 },
#line 1137 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && ((INTVAL (operands[1]) > 0xf\n\
	&& INTVAL (operands[1]) <= 0xf + 0xf)\n\
       || (INTVAL (operands[1]) < - 0x10\n\
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))",
    __builtin_constant_p 
#line 1137 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10)))
    ? (int) 
#line 1137 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10)))
    : -1 },
  { "(ISA_HAS_NMADD4_NMSUB4 (DFmode)\n\
   && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (DFmode)\n\
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2212 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 682 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 4329 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 4329 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 4329 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
#line 1222 "../../gcc-4.4.7/gcc/config/mips/mips.md"
  { "ISA_HAS_BADDU && BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1222 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && BYTES_BIG_ENDIAN)
    ? (int) 
#line 1222 "../../gcc-4.4.7/gcc/config/mips/mips.md"
(ISA_HAS_BADDU && BYTES_BIG_ENDIAN)
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
