/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc-4.4.7/gcc/config/mips/mips.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_kf (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return force_to_mem_operand (op, mode);
}
static inline bool
satisfies_constraint_ks (rtx op)
{
  return (GET_CODE (op) == REG) && (
#line 101 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(REGNO (op) == STACK_POINTER_REGNUM));
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 108 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(SMALL_OPERAND (ival)));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 113 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(ival == 0));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 118 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(SMALL_OPERAND_UNSIGNED (ival)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 124 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(LUI_OPERAND (ival)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 130 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(!SMALL_OPERAND (ival))) && ((
#line 131 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(!SMALL_OPERAND_UNSIGNED (ival))) && (
#line 132 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(!LUI_OPERAND (ival)))));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 137 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(ival >= -0xffff && ival < 0));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 142 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(ival >= -0x4000 && ival < 0x4000));
}
static inline bool
satisfies_constraint_P (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 147 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(ival > 0 && ival < 0x10000));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 154 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return const_arith_operand (op, mode);
}
static inline bool
satisfies_constraint_R (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && (
#line 165 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(mips_address_insns (XEXP (op, 0), mode, false) == 1));
}
static inline bool
satisfies_constraint_S (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (call_insn_operand (op, mode)) && (
#line 171 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(CONSTANT_P (op)));
}
static inline bool
satisfies_constraint_T (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (move_operand (op, mode)) && ((
#line 178 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(CONSTANT_P (op))) && (
#line 179 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(mips_dangerous_for_la25_p (op))));
}
static inline bool
satisfies_constraint_U (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (move_operand (op, mode)) && ((
#line 186 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(CONSTANT_P (op))) && (
#line 187 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(!mips_dangerous_for_la25_p (op))));
}
static inline bool
satisfies_constraint_W (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && ((memory_operand (op, mode)) && ((
#line 197 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(!TARGET_MIPS16)) || ((!(stack_operand (op, mode))) && (!(
#line 199 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(CONSTANT_P (XEXP (op, 0))))))));
}
static inline bool
satisfies_constraint_YG (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 205 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_YA (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 211 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(UIMM6_OPERAND (ival)));
}
static inline bool
satisfies_constraint_YB (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 217 "../../gcc-4.4.7/gcc/config/mips/constraints.md"
(IMM10_OPERAND (ival)));
}
#endif /* tm-constrs.h */
