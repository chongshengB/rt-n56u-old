(define_conditions [
  (-1 "((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)) && ( reload_completed)")
  (-1 "((TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && (Pmode == DImode)) && ( reload_completed)")
  (-1 "(!TARGET_FIX_VR4120) && ( reload_completed)")
  (-1 "(!ISA_MIPS1) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "(ISA_HAS_DMUL3) && (TARGET_64BIT)")
  (-1 "(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && (Pmode == DImode)")
  (-1 "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "TARGET_SIBCALLS && SIBLING_CALL_P (insn)")
  (-1 "TARGET_64BIT && !TARGET_FIX_R4000")
  (-1 "(ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)")
  (-1 "(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || reg_or_0_operand (operands[1], V2UHAmode))) && (TARGET_DSP)")
  (-1 "(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && (Pmode == SImode)")
  (-1 "(TARGET_HARD_FLOAT) && (!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS")
  (-1 "ISA_HAS_MUL3")
  (-1 "(TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && (TARGET_64BIT)")
  (-1 "TARGET_64BIT && !TARGET_MIPS16")
  (-1 "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "(TARGET_MIPS16
   && (register_operand (operands[0], V2UHAmode)
       || register_operand (operands[1], V2UHAmode))) && (TARGET_DSP)")
  (-1 "(TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))")
  (-1 "((ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && (TARGET_64BIT)")
  (-1 "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == SImode)")
  (-1 "TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT")
  (-1 "(ISA_HAS_FP4 && TARGET_FLOAT64 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "(TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || register_operand (operands[1], V4QImode))) && (TARGET_DSP)")
  (-1 "(!TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || reg_or_0_operand (operands[1], V2HQmode))) && (TARGET_DSP)")
  (-1 "ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63)")
  (-1 "(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && (Pmode == DImode)")
  (-1 "(ISA_HAS_ROR) && (TARGET_64BIT)")
  (-1 "(TARGET_64BIT && !TARGET_MIPS16) && ( reload_completed)")
  (-1 "TARGET_MIPS16 && !ISA_HAS_SEQ_SNE")
  (-1 "(ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT)")
  (-1 "(!TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || reg_or_0_operand (operands[1], V2UHQmode))) && (TARGET_DSP)")
  (-1 "(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && (TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS)")
  (-1 "GENERATE_MADD_MSUB")
  (-1 "(!TARGET_MIPS16) && (TARGET_64BIT)")
  (-1 "ISA_HAS_COND_TRAP")
  (-1 "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))")
  (-1 "(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)")
  (-1 "(!ISA_HAS_MULHI) && ( reload_completed && !TARGET_FIX_R4000)")
  (-1 "TARGET_CALL_CLOBBERED_GP")
  (-1 "((!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && (TARGET_64BIT)) && ( reload_completed && REG_P (operands[1]))")
  (-1 "TARGET_FIX_R4000")
  (-1 "(TARGET_LOONGSON_2EF) && (TARGET_64BIT)")
  (-1 "(ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_HARD_FLOAT)")
  (-1 "((ISA_HAS_SEQ_SNE) && (TARGET_64BIT)) && (TARGET_64BIT)")
  (-1 "(ISA_HAS_CONDMOVE) && (TARGET_64BIT)")
  (-1 "(!ISA_MIPS1) && (TARGET_HARD_FLOAT)")
  (-1 "(ISA_HAS_COND_TRAP) && (TARGET_64BIT)")
  (-1 "(!HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "(ISA_HAS_CLZ_CLO) && (TARGET_64BIT)")
  (-1 "GENERATE_MIPS16E")
  (-1 "!TARGET_64BIT || !TARGET_FIX_R4000")
  (-1 "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f))")
  (-1 "(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))")
  (-1 "ISA_HAS_SEQ_SNE")
  (-1 "(HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == SImode)")
  (-1 "ISA_HAS_CLZ_CLO")
  (-1 "TARGET_64BIT && TARGET_MIPS16")
  (-1 "TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode))")
  (-1 "TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))")
  (-1 "(TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && ( reload_completed && !TARGET_FIX_R4000)")
  (-1 "ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[0])")
  (-1 "!TARGET_MIPS16 && !TARGET_MEMCPY")
  (-1 "(mips_current_loadgp_style () == LOADGP_RTP) && (Pmode == SImode)")
  (-1 "ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)")
  (-1 "(TARGET_MIPS16) && (Pmode == DImode)")
  (-1 "(TARGET_64BIT && !TARGET_MIPS16) && (TARGET_64BIT)")
  (-1 "ISA_HAS_MULHI")
  (-1 "((!TARGET_MIPS16) && (TARGET_64BIT)) && (TARGET_64BIT)")
  (-1 "reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)")
  (-1 "ISA_HAS_POP")
  (-1 "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))")
  (-1 "ISA_HAS_MACC && !ISA_HAS_MUL3")
  (-1 "(ISA_HAS_NMADD3_NMSUB3 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "!TARGET_64BIT && ISA_HAS_MULS")
  (-1 "(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "(TARGET_64BIT && TARGET_MIPS16) && ( reload_completed)")
  (-1 "ISA_HAS_CINS
   && mask_low_and_shift_p (SImode, operands[3], operands[2], 32)")
  (-1 "!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE")
  (-1 "(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && ( epilogue_completed)")
  (-1 "TARGET_USE_GOT")
  (-1 "TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W")
  (-1 "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])")
  (-1 "! TARGET_64BIT")
  (-1 "ISA_HAS_MACC")
  (-1 "TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0")
  (-1 "(!TARGET_FIX_VR4120) && (TARGET_64BIT)")
  (-1 "((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)) && ( reload_completed)")
  (-1 "(TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) && ( reload_completed && !TARGET_FIX_R4000)")
  (-1 "GENERATE_MADD_MSUB && !TARGET_MIPS16")
  (-1 "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected")
  (-1 "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)")
  (-1 "(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && (TARGET_64BIT)")
  (-1 "TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0))")
  (-1 "(ISA_HAS_SYNCI) && (Pmode == SImode)")
  (-1 "((ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)")
  (-1 "(GENERATE_LL_SC) && (TARGET_64BIT)")
  (-1 "(!HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)")
  (-1 "!ISA_HAS_MULHI")
  (-1 "(ISA_HAS_SEB_SEH) && (TARGET_64BIT)")
  (-1 "!TARGET_64BIT && TARGET_FIX_R4000")
  (-1 "(TARGET_SB1) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "!TARGET_64BIT")
  (-1 "((HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == DImode)) && ( reload_completed)")
  (-1 "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REGNO (operands[0]) != REGNO (operands[1])
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))")
  (-1 "ISA_HAS_DSPR2 && !TARGET_64BIT")
  (-1 "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W")
  (-1 "TARGET_MIPS3900 && !TARGET_MIPS16")
  (-1 "!TARGET_FIX_VR4120")
  (-1 "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (!TARGET_64BIT && TARGET_LOONGSON_VECTORS)")
  (-1 "TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)")
  (-1 "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_64BIT)")
  (-1 "TARGET_64BIT && reload_completed")
  (-1 "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_64BIT)")
  (-1 "TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))")
  (-1 "(ISA_HAS_BBIT && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && (TARGET_64BIT)")
  (-1 "(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && ( reload_completed && REG_P (operands[1]))")
  (-1 "(mips_current_loadgp_style () == LOADGP_RTP) && (Pmode == DImode)")
  (-1 "!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))")
  (-1 "(!TARGET_FIX_R4000) && (TARGET_64BIT)")
  (-1 "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)")
  (-1 "(TARGET_MIPS16) && (TARGET_64BIT)")
  (-1 "((TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && (Pmode == SImode)) && ( reload_completed)")
  (-1 "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "(TARGET_HARD_FLOAT) && (!TARGET_64BIT && TARGET_DOUBLE_FLOAT)")
  (-1 "(!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && (TARGET_64BIT)")
  (-1 "TUNE_LOONGSON_2EF")
  (-1 "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)")
  (-1 "!TARGET_MIPS16")
  (-1 "(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)")
  (-1 "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT)")
  (-1 "mips_can_use_return_insn ()")
  (-1 "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT)")
  (-1 "ISA_HAS_DSP && !TARGET_64BIT")
  (-1 "(TARGET_CALL_CLOBBERED_GP) && ( reload_completed)")
  (-1 "ISA_HAS_SYNCI")
  (-1 "(!TARGET_MIPS16) && (Pmode == DImode)")
  (-1 "(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (TARGET_64BIT && TARGET_FLOAT64)")
  (-1 "ISA_HAS_EXTS && TARGET_64BIT && UINTVAL (operands[2]) < 32")
  (-1 "(ISA_HAS_SEQ_SNE) && (TARGET_64BIT)")
  (-1 "reload_completed")
  (-1 "(!TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || reg_or_0_operand (operands[1], V4UQQmode))) && (TARGET_DSP)")
  (-1 "(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT")
  (-1 "(ISA_HAS_BADDU && TARGET_64BIT) && (TARGET_64BIT)")
  (-1 "(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "TARGET_64BIT && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)")
  (-1 "(TARGET_HARD_FLOAT && ISA_HAS_MXHC1) && (!TARGET_64BIT && TARGET_DOUBLE_FLOAT)")
  (-1 "TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TImode)
       || reg_or_0_operand (operands[1], TImode))")
  (-1 "TARGET_MIPS16 && TARGET_USE_GOT && reload_completed")
  (-1 "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])")
  (-1 "ISA_HAS_LWXS")
  (-1 "(ISA_HAS_EXTS && TARGET_64BIT && IN_RANGE (INTVAL (operands[2]), 32, 63)) && (TARGET_64BIT)")
  (-1 "TARGET_SIBCALLS")
  (-1 "(ISA_HAS_POP) && (TARGET_64BIT)")
  (-1 "(mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))) && (TARGET_64BIT)")
  (-1 "ISA_HAS_MUL3 && peep2_reg_dead_p (3, operands[1])")
  (-1 "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0))")
  (-1 "(TARGET_HARD_FLOAT) && (TARGET_64BIT && TARGET_FLOAT64)")
  (-1 "(!TARGET_MIPS16) && (Pmode == SImode)")
  (-1 "TARGET_64BIT
   && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)")
  (-1 "ISA_HAS_MUL3 && peep2_reg_dead_p (2, operands[1])")
  (-1 "ISA_HAS_CONDMOVE")
  (-1 "(!TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || reg_or_0_operand (operands[1], V4QQmode))) && (TARGET_DSP)")
  (-1 "reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])")
  (-1 "ISA_HAS_BADDU && !BYTES_BIG_ENDIAN")
  (-1 "TARGET_64BIT && !TARGET_MIPS16 && IN_RANGE (INTVAL (operands[2]), 32, 63)")
  (-1 "(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)")
  (-1 "ISA_HAS_DSP")
  (-1 "(mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))) && (TARGET_64BIT)")
  (-1 "!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode))")
  (-1 "((TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && (TARGET_64BIT)) && (TARGET_64BIT)")
  (-1 "GENERATE_SYNC")
  (-1 "(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "(TARGET_MIPS16) && ( reload_completed)")
  (-1 "!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode))")
  (-1 "((TARGET_MIPS16) && (TARGET_64BIT)) && (TARGET_64BIT)")
  (-1 "(!HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)")
  (-1 "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "(ISA_HAS_DSP) && (Pmode == SImode)")
  (-1 "(reload_completed) && (TARGET_64BIT)")
  (-1 "TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT")
  (-1 "((!TARGET_MIPS16 && !ISA_HAS_SEQ_SNE) && (TARGET_64BIT)) && (TARGET_64BIT)")
  (-1 "(ISA_HAS_LWXS) && (TARGET_DSP)")
  (-1 "TARGET_SPLIT_CALLS")
  (-1 "(TARGET_MIPS16
   && (register_operand (operands[0], V2HQmode)
       || register_operand (operands[1], V2HQmode))) && (TARGET_DSP)")
  (-1 "(ISA_HAS_SYNCI) && (Pmode == DImode)")
  (-1 "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)")
  (-1 "TARGET_LOONGSON_2EF")
  (-1 "(TARGET_64BIT && !TARGET_FIX_R4000) && ( reload_completed)")
  (-1 "(ISA_HAS_CINS
   && mask_low_and_shift_p (DImode, operands[3], operands[2], 32)) && (TARGET_64BIT)")
  (-1 "(!TARGET_MIPS16
   && (register_operand (operands[0], V4QImode)
       || reg_or_0_operand (operands[1], V4QImode))) && (TARGET_DSP)")
  (-1 "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))")
  (-1 "(TARGET_MIPS16
   && (register_operand (operands[0], V4QQmode)
       || register_operand (operands[1], V4QQmode))) && (TARGET_DSP)")
  (-1 "TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))")
  (-1 "TARGET_HARD_FLOAT")
  (-1 "(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)")
  (-1 "TARGET_64BIT
   && TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)")
  (-1 "ISA_HAS_MACC && reload_completed")
  (-1 "reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)")
  (-1 "ISA_HAS_SEB_SEH")
  (-1 "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16")
  (-1 "ISA_HAS_BADDU && TARGET_64BIT")
  (-1 "(TARGET_64BIT) && ( reload_completed && REG_P (operands[1]))")
  (-1 "(GENERATE_MIPS16E) && (TARGET_64BIT)")
  (-1 "(!TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || reg_or_0_operand (operands[1], V2HAmode))) && (TARGET_DSP)")
  (-1 "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == DImode)")
  (-1 "mips_use_ins_ext_p (operands[1], INTVAL (operands[2]),
		       INTVAL (operands[3]))")
  (-1 "TARGET_64BIT && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)")
  (-1 "TARGET_DSP")
  (-1 "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT")
  (-1 "ISA_HAS_8CC && TARGET_HARD_FLOAT")
  (-1 "TARGET_64BIT && TARGET_FLOAT64")
  (-1 "GENERATE_LL_SC")
  (-1 "(TARGET_MIPS16
   && (register_operand (operands[0], V2UHQmode)
       || register_operand (operands[1], V2UHQmode))) && (TARGET_DSP)")
  (-1 "(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && (Pmode == SImode)")
  (-1 "!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2)")
  (-1 "(TARGET_MIPS16
   && (register_operand (operands[0], V2HAmode)
       || register_operand (operands[1], V2HAmode))) && (TARGET_DSP)")
  (-1 "(TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSPR2)
   && !TARGET_64BIT")
  (-1 "(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "(ISA_HAS_NMADD4_NMSUB4 (SFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)")
  (-1 "!TARGET_FIX_R4000")
  (-1 "(TARGET_USE_GOT) && (Pmode == DImode)")
  (-1 "(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && ( reload_completed)")
  (-1 "(ISA_HAS_DSP) && (Pmode == DImode)")
  (-1 "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT)")
  (-1 "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "(TARGET_MIPS16) && (Pmode == SImode)")
  (-1 "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W")
  (-1 "(ISA_HAS_NMADD4_NMSUB4 (V2SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))")
  (-1 "((TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && (Pmode == SImode)) && ( reload_completed)")
  (-1 "ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32")
  (-1 "!TARGET_64BIT && TARGET_LOONGSON_VECTORS")
  (-1 "(mips_current_loadgp_style () == LOADGP_ABSOLUTE) && (Pmode == SImode)")
  (-1 "(ISA_HAS_FP_MADD4_MSUB4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)")
  (-1 "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT)")
  (-1 "(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)")
  (-1 "!TARGET_64BIT && !TARGET_FIX_R4000 && !ISA_HAS_DSPR2")
  (-1 "(!TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || reg_or_0_operand (operands[1], V2HImode))) && (TARGET_DSP)")
  (-1 "(ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32) && (TARGET_64BIT)")
  (-1 "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS")
  (-1 "TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))")
  (-1 "TARGET_MAD")
  (-1 "!TARGET_64BIT && TARGET_DOUBLE_FLOAT")
  (-1 "TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))")
  (-1 "(TARGET_MIPS16
   && (register_operand (operands[0], V2HImode)
       || register_operand (operands[1], V2HImode))) && (TARGET_DSP)")
  (-1 "((!TARGET_FIX_VR4120) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "TARGET_HARD_FLOAT && TARGET_LOONGSON_VECTORS")
  (-1 "TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))")
  (-1 "(TARGET_MIPS16 && TARGET_USE_GOT && reload_completed) && (TARGET_64BIT)")
  (-1 "(TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT) && ( reload_completed)")
  (-1 "(TARGET_FIX_R4000) && (TARGET_64BIT)")
  (-1 "!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode))")
  (-1 "ISA_HAS_MACC && !ISA_HAS_MSAC")
  (-1 "(TARGET_MIPS16
   && (register_operand (operands[0], V4UQQmode)
       || register_operand (operands[1], V4UQQmode))) && (TARGET_DSP)")
  (-1 "(TARGET_HARD_FLOAT) && (!TARGET_64BIT && TARGET_LOONGSON_VECTORS)")
  (-1 "operands[1] == stack_pointer_rtx
   && mips16e_save_restore_pattern_p (operands[0], INTVAL (operands[2]), NULL)")
  (-1 "(TARGET_USE_GOT) && (Pmode == SImode)")
  (-1 "(ISA_HAS_FP_MADD3_MSUB3 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "TARGET_64BIT
   && TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)")
  (-1 "Pmode == SImode")
  (-1 "((TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && (Pmode == DImode)) && ( reload_completed)")
  (-1 "((ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT)")
  (-1 "(ISA_HAS_NMADD3_NMSUB3 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "TARGET_64BIT
   && !TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || reg_or_0_operand (operands[1], TFmode))")
  (-1 "TARGET_MIPS16 && reload_completed")
  (-1 "(mips_current_loadgp_style () == LOADGP_NEWABI) && (Pmode == SImode)")
  (-1 "((ISA_HAS_FP_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) && (TARGET_HARD_FLOAT && !TARGET_LOONGSON_2EF)")
  (-1 "mips_use_ins_ext_p (operands[0], INTVAL (operands[1]),
		       INTVAL (operands[2]))")
  (-1 "((HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == SImode)) && ( reload_completed)")
  (-1 "Pmode == DImode")
  (-1 "ISA_HAS_DSPR2")
  (-1 "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0))")
  (-1 "!TARGET_64BIT && TARGET_PAIRED_SINGLE_FLOAT")
  (-1 "!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E")
  (-1 "TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))")
  (-1 "(TARGET_SB1 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_PAIRED_SINGLE_FLOAT)")
  (-1 "ISA_HAS_ROR")
  (-1 "(ISA_HAS_MACC && !ISA_HAS_MSAC) && ( reload_completed)")
  (-1 "TARGET_64BIT
   && TARGET_MIPS16
   && (register_operand (operands[0], TFmode)
       || register_operand (operands[1], TFmode))")
  (-1 "TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W")
  (-1 "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)")
  (-1 "(mips_current_loadgp_style () == LOADGP_NEWABI) && (Pmode == DImode)")
  (-1 "ISA_HAS_MSAC")
  (-1 "(TARGET_EXPLICIT_RELOCS && !mips_split_p[SYMBOL_GOT_DISP]) && (Pmode == SImode)")
  (-1 "(TARGET_EXPLICIT_RELOCS && !mips_split_hi_p[SYMBOL_GOT_PAGE_OFST]) && (Pmode == DImode)")
  (-1 "TARGET_HARD_FLOAT
   && TARGET_PAIRED_SINGLE_FLOAT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode))")
  (-1 "(ISA_HAS_NMADD3_NMSUB3 (SFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)")
  (-1 "ISA_HAS_MSAC && reload_completed")
  (0 "(TARGET_64BIT) && (!TARGET_64BIT)")
  (-1 "(TARGET_64BIT) && ( reload_completed && register_operand (operands[1], VOIDmode))")
  (-1 "(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && (TARGET_64BIT)")
  (-1 "(HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == DImode)")
  (-1 "ISA_HAS_CACHE")
  (-1 "ISA_HAS_MULS")
  (-1 "TARGET_MIPS16")
  (-1 "(mips_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && (Pmode == DImode)")
  (-1 "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f")
  (-1 "TARGET_64BIT")
  (-1 "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))")
  (-1 "(ISA_HAS_NMADD4_NMSUB4 (DFmode)
   && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)")
  (-1 "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))")
  (-1 "ISA_HAS_BADDU && BYTES_BIG_ENDIAN")
])
