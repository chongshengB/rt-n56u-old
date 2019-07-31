/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc-4.4.7/gcc/config/mips/mips.md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tree.h"
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

int
const_uns_arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 22 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(SMALL_OPERAND_UNSIGNED (INTVAL (op))));
}

int
uns_arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_uns_arith_operand (op, mode)) || (register_operand (op, mode));
}

int
const_arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 30 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(SMALL_OPERAND (INTVAL (op))));
}

int
arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_arith_operand (op, mode)) || (register_operand (op, mode));
}

int
const_uimm6_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 38 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(UIMM6_OPERAND (INTVAL (op))));
}

int
const_imm10_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 42 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(IMM10_OPERAND (INTVAL (op))));
}

int
reg_imm10_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_imm10_operand (op, mode)) || (register_operand (op, mode));
}

int
sle_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 50 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(SMALL_OPERAND (INTVAL (op) + 1)));
}

int
sleu_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (sle_operand (op, mode)) && (
#line 54 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(INTVAL (op) + 1 != 0));
}

int
const_0_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 58 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(op == CONST0_RTX (GET_MODE (op)));
}

int
reg_or_0_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((const_0_operand (op, mode)) && (
#line 62 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(!TARGET_MIPS16))) || (register_operand (op, mode));
}

int
const_1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 67 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(op == CONST1_RTX (GET_MODE (op)));
}

int
reg_or_1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_1_operand (op, mode)) || (register_operand (op, mode));
}

int
const_0_or_1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 76 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(op == CONST0_RTX (GET_MODE (op)))) || (
#line 77 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(op == CONST1_RTX (GET_MODE (op)))));
}

int
d_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 81 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(TARGET_MIPS16
		    ? M16_REG_P (REGNO (op))
		    : GP_REG_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
lo_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 87 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(REGNO (op) == LO_REGNUM))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
fcc_reload_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
#line 91 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(ST_REG_P (true_regnum (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
pc_or_label_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PC:
    case LABEL_REF:
      return true;
    default:
      break;
    }
  return false;
}

static inline int
const_call_insn_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 98 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type symbol_type;

  if (!mips_symbolic_constant_p (op, SYMBOL_CONTEXT_CALL, &symbol_type))
    return false;

  switch (symbol_type)
    {
    case SYMBOL_ABSOLUTE:
      /* We can only use direct calls if we're sure that the target
	 function does not need $25 to be valid on entry.  */
      if (mips_use_pic_fn_addr_reg_p (op))
	return false;

      /* If -mlong-calls or if this function has an explicit long_call
	 attribute, we must use register addressing.  The
	 SYMBOL_FLAG_LONG_CALL bit is set by mips_encode_section_info.  */
      return !(GET_CODE (op) == SYMBOL_REF && SYMBOL_REF_LONG_CALL_P (op));

    case SYMBOL_GOT_DISP:
      /* Without explicit relocs, there is no special syntax for
	 loading the address of a call destination into a register.
	 Using "la $25,foo; jal $25" would prevent the lazy binding
	 of "foo", so keep the address of global symbols with the
	 jal macro.  */
      return !TARGET_EXPLICIT_RELOCS;

    default:
      return false;
    }
}

int
const_call_insn_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(const_call_insn_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
call_insn_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_call_insn_operand (op, mode)) || (register_operand (op, mode));
}

static inline int
splittable_const_int_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 138 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
{
  /* When generating mips16 code, LEGITIMATE_CONSTANT_P rejects
     CONST_INTs that can't be loaded using simple insns.  */
  if (TARGET_MIPS16)
    return false;

  /* Don't handle multi-word moves this way; we don't want to introduce
     the individual word-mode moves until after reload.  */
  if (GET_MODE_SIZE (mode) > UNITS_PER_WORD)
    return false;

  /* Otherwise check whether the constant can be loaded in a single
     instruction.  */
  return !LUI_INT (op) && !SMALL_INT (op) && !SMALL_INT_UNSIGNED (op);
}

int
splittable_const_int_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(splittable_const_int_operand_1 (op, mode)));
}

static inline int
move_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 156 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type symbol_type;

  /* The thinking here is as follows:

     (1) The move expanders should split complex load sequences into
	 individual instructions.  Those individual instructions can
	 then be optimized by all rtl passes.

     (2) The target of pre-reload load sequences should not be used
	 to store temporary results.  If the target register is only
	 assigned one value, reload can rematerialize that value
	 on demand, rather than spill it to the stack.

     (3) If we allowed pre-reload passes like combine and cse to recreate
	 complex load sequences, we would want to be able to split the
	 sequences before reload as well, so that the pre-reload scheduler
	 can see the individual instructions.  This falls foul of (2);
	 the splitter would be forced to reuse the target register for
	 intermediate results.

     (4) We want to define complex load splitters for combine.  These
	 splitters can request a temporary scratch register, which avoids
	 the problem in (2).  They allow things like:

	      (set (reg T1) (high SYM))
	      (set (reg T2) (low (reg T1) SYM))
	      (set (reg X) (plus (reg T2) (const_int OFFSET)))

	 to be combined into:

	      (set (reg T3) (high SYM+OFFSET))
	      (set (reg X) (lo_sum (reg T3) SYM+OFFSET))

	 if T2 is only used this once.  */
  switch (GET_CODE (op))
    {
    case CONST_INT:
      return !splittable_const_int_operand (op, mode);

    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      if (CONST_GP_P (op))
	return true;
      return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &symbol_type)
	      && !mips_split_p[symbol_type]);

    case HIGH:
      op = XEXP (op, 0);
      return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &symbol_type)
	      && !mips_split_hi_p[symbol_type]);

    default:
      return true;
    }
}

int
move_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (general_operand (op, mode)) && (
(move_operand_1 (op, mode)));
}

int
consttable_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 215 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(CONSTANT_P (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
symbolic_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 219 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &type);
}

int
symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
absolute_symbolic_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 226 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &type)
	  && type == SYMBOL_ABSOLUTE);
}

int
absolute_symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(absolute_symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
force_to_mem_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 234 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type symbol_type;
  return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &symbol_type)
	  && symbol_type == SYMBOL_FORCE_TO_MEM);
}

int
force_to_mem_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(force_to_mem_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
got_disp_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 242 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &type)
	  && type == SYMBOL_GOT_DISP);
}

int
got_disp_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(got_disp_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
got_page_ofst_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 250 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
{
  enum mips_symbol_type type;
  return (mips_symbolic_constant_p (op, SYMBOL_CONTEXT_LEA, &type)
	  && type == SYMBOL_GOT_PAGE_OFST);
}

int
got_page_ofst_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(got_page_ofst_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
symbol_ref_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == SYMBOL_REF) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
stack_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 261 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(mips_stack_address_p (XEXP (op, 0), GET_MODE (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
macc_msac_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 266 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
{
  rtx mult = XEXP (op, GET_CODE (op) == PLUS ? 0 : 1);
  rtx accum = XEXP (op, GET_CODE (op) == PLUS ? 1 : 0);
  return (GET_CODE (mult) == MULT
	  && REG_P (XEXP (mult, 0))
	  && REG_P (XEXP (mult, 1))
	  && REG_P (accum));
}

int
macc_msac_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((((GET_CODE (op) == PLUS) && (
#line 264 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(ISA_HAS_MACC))) || ((GET_CODE (op) == MINUS) && (
#line 265 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(ISA_HAS_MSAC)))) && (
(macc_msac_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
equality_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
extend_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case ZERO_EXTEND:
    case SIGN_EXTEND:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
trap_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LT:
    case LTU:
    case GE:
    case GEU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
order_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LT:
    case LTU:
    case LE:
    case LEU:
    case GE:
    case GEU:
    case GT:
    case GTU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
small_data_pattern (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SET:
    case PARALLEL:
    case UNSPEC:
    case UNSPEC_VOLATILE:
    case PREFETCH:
      break;
    default:
      return false;
    }
  return (
#line 291 "../../gcc-4.4.7/gcc/config/mips/predicates.md"
(mips_small_data_pattern_p (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

enum constraint_num
lookup_constraint (const char *str)
{
  switch (str[0])
    {
    case 'A':
      return CONSTRAINT_A;
    case 'B':
      return CONSTRAINT_B;
    case 'C':
      return CONSTRAINT_C;
    case 'D':
      return CONSTRAINT_D;
    case 'G':
      return CONSTRAINT_G;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'P':
      return CONSTRAINT_P;
    case 'Q':
      return CONSTRAINT_Q;
    case 'R':
      return CONSTRAINT_R;
    case 'S':
      return CONSTRAINT_S;
    case 'T':
      return CONSTRAINT_T;
    case 'U':
      return CONSTRAINT_U;
    case 'W':
      return CONSTRAINT_W;
    case 'Y':
      if (!strncmp (str, "YA", 2))
        return CONSTRAINT_YA;
      if (!strncmp (str, "YB", 2))
        return CONSTRAINT_YB;
      if (!strncmp (str, "YG", 2))
        return CONSTRAINT_YG;
      break;
    case 'a':
      return CONSTRAINT_a;
    case 'b':
      return CONSTRAINT_b;
    case 'c':
      return CONSTRAINT_c;
    case 'd':
      return CONSTRAINT_d;
    case 'e':
      return CONSTRAINT_e;
    case 'f':
      return CONSTRAINT_f;
    case 'h':
      return CONSTRAINT_h;
    case 'j':
      return CONSTRAINT_j;
    case 'k':
      if (!strncmp (str, "kf", 2))
        return CONSTRAINT_kf;
      if (!strncmp (str, "ks", 2))
        return CONSTRAINT_ks;
      if (!strncmp (str, "ka", 2))
        return CONSTRAINT_ka;
      break;
    case 'l':
      return CONSTRAINT_l;
    case 't':
      return CONSTRAINT_t;
    case 'v':
      return CONSTRAINT_v;
    case 'x':
      return CONSTRAINT_x;
    case 'y':
      return CONSTRAINT_y;
    case 'z':
      return CONSTRAINT_z;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

enum reg_class
regclass_for_constraint (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_d: return BASE_REG_CLASS;
    case CONSTRAINT_t: return T_REG;
    case CONSTRAINT_f: return TARGET_HARD_FLOAT ? FP_REGS : NO_REGS;
    case CONSTRAINT_h: return NO_REGS;
    case CONSTRAINT_l: return TARGET_BIG_ENDIAN ? MD1_REG : MD0_REG;
    case CONSTRAINT_x: return MD_REGS;
    case CONSTRAINT_b: return ALL_REGS;
    case CONSTRAINT_c: return TARGET_MIPS16 ? M16_REGS
				 : TARGET_USE_PIC_FN_ADDR_REG ? PIC_FN_ADDR_REG
				 : GR_REGS;
    case CONSTRAINT_e: return LEA_REGS;
    case CONSTRAINT_j: return PIC_FN_ADDR_REG;
    case CONSTRAINT_v: return V1_REG;
    case CONSTRAINT_y: return GR_REGS;
    case CONSTRAINT_z: return ST_REGS;
    case CONSTRAINT_A: return DSP_ACC_REGS;
    case CONSTRAINT_a: return ACC_REGS;
    case CONSTRAINT_B: return COP0_REGS;
    case CONSTRAINT_C: return COP2_REGS;
    case CONSTRAINT_D: return COP3_REGS;
    case CONSTRAINT_ka: return ISA_HAS_DSPR2 ? ACC_REGS : MD_REGS;
    default: break;
    }
  return NO_REGS;
}

bool
constraint_satisfied_p (rtx op, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_kf: return satisfies_constraint_kf (op);
    case CONSTRAINT_ks: return satisfies_constraint_ks (op);
    case CONSTRAINT_I: return satisfies_constraint_I (op);
    case CONSTRAINT_J: return satisfies_constraint_J (op);
    case CONSTRAINT_K: return satisfies_constraint_K (op);
    case CONSTRAINT_L: return satisfies_constraint_L (op);
    case CONSTRAINT_M: return satisfies_constraint_M (op);
    case CONSTRAINT_N: return satisfies_constraint_N (op);
    case CONSTRAINT_O: return satisfies_constraint_O (op);
    case CONSTRAINT_P: return satisfies_constraint_P (op);
    case CONSTRAINT_G: return satisfies_constraint_G (op);
    case CONSTRAINT_Q: return satisfies_constraint_Q (op);
    case CONSTRAINT_R: return satisfies_constraint_R (op);
    case CONSTRAINT_S: return satisfies_constraint_S (op);
    case CONSTRAINT_T: return satisfies_constraint_T (op);
    case CONSTRAINT_U: return satisfies_constraint_U (op);
    case CONSTRAINT_W: return satisfies_constraint_W (op);
    case CONSTRAINT_YG: return satisfies_constraint_YG (op);
    case CONSTRAINT_YA: return satisfies_constraint_YA (op);
    case CONSTRAINT_YB: return satisfies_constraint_YB (op);
    default: break;
    }
  return false;
}

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I:
      return 
#line 108 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(SMALL_OPERAND (ival));

    case CONSTRAINT_J:
      return 
#line 113 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(ival == 0);

    case CONSTRAINT_K:
      return 
#line 118 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(SMALL_OPERAND_UNSIGNED (ival));

    case CONSTRAINT_L:
      return 
#line 124 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(LUI_OPERAND (ival));

    case CONSTRAINT_M:
      return (
#line 130 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(!SMALL_OPERAND (ival))) && ((
#line 131 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(!SMALL_OPERAND_UNSIGNED (ival))) && (
#line 132 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(!LUI_OPERAND (ival))));

    case CONSTRAINT_N:
      return 
#line 137 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(ival >= -0xffff && ival < 0);

    case CONSTRAINT_O:
      return 
#line 142 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(ival >= -0x4000 && ival < 0x4000);

    case CONSTRAINT_P:
      return 
#line 147 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(ival > 0 && ival < 0x10000);

    default: break;
    }
  return false;
}

bool
insn_extra_memory_constraint (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_R:
      return true;

    case CONSTRAINT_W:
      return true;

    default: break;
    }
  return false;
}

