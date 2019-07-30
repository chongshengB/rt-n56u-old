/* Generated automatically by the program `genopinit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "recog.h"
#include "expr.h"
#include "optabs.h"
#include "reload.h"

void
init_all_optabs (void)
{
#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  int i, j;
#endif

  if (HAVE_addsf3)
    optab_handler (addv_optab, SFmode)->insn_code =
    optab_handler (add_optab, SFmode)->insn_code = CODE_FOR_addsf3;
  if (HAVE_adddf3)
    optab_handler (addv_optab, DFmode)->insn_code =
    optab_handler (add_optab, DFmode)->insn_code = CODE_FOR_adddf3;
  if (HAVE_addv2sf3)
    optab_handler (addv_optab, V2SFmode)->insn_code =
    optab_handler (add_optab, V2SFmode)->insn_code = CODE_FOR_addv2sf3;
  if (HAVE_subsf3)
    optab_handler (subv_optab, SFmode)->insn_code =
    optab_handler (sub_optab, SFmode)->insn_code = CODE_FOR_subsf3;
  if (HAVE_subdf3)
    optab_handler (subv_optab, DFmode)->insn_code =
    optab_handler (sub_optab, DFmode)->insn_code = CODE_FOR_subdf3;
  if (HAVE_subv2sf3)
    optab_handler (subv_optab, V2SFmode)->insn_code =
    optab_handler (sub_optab, V2SFmode)->insn_code = CODE_FOR_subv2sf3;
  optab_handler (sub_optab, SImode)->insn_code = CODE_FOR_subsi3;
  if (HAVE_subdi3)
    optab_handler (sub_optab, DImode)->insn_code = CODE_FOR_subdi3;
  if (HAVE_mulv2sf3)
    optab_handler (smulv_optab, V2SFmode)->insn_code =
    optab_handler (smul_optab, V2SFmode)->insn_code = CODE_FOR_mulv2sf3;
  if (HAVE_msubsidi4)
    optab_handler (smsub_widen_optab, DImode)->insn_code = CODE_FOR_msubsidi4;
  if (HAVE_umsubsidi4)
    optab_handler (umsub_widen_optab, DImode)->insn_code = CODE_FOR_umsubsidi4;
  if (HAVE_smuldi3_highpart)
    optab_handler (smul_highpart_optab, DImode)->insn_code = CODE_FOR_smuldi3_highpart;
  if (HAVE_umuldi3_highpart)
    optab_handler (umul_highpart_optab, DImode)->insn_code = CODE_FOR_umuldi3_highpart;
  if (HAVE_maddsidi4)
    optab_handler (smadd_widen_optab, DImode)->insn_code = CODE_FOR_maddsidi4;
  if (HAVE_umaddsidi4)
    optab_handler (umadd_widen_optab, DImode)->insn_code = CODE_FOR_umaddsidi4;
  if (HAVE_divmodsi4)
    optab_handler (sdivmod_optab, SImode)->insn_code = CODE_FOR_divmodsi4;
  if (HAVE_divmoddi4)
    optab_handler (sdivmod_optab, DImode)->insn_code = CODE_FOR_divmoddi4;
  optab_handler (udivmod_optab, SImode)->insn_code = CODE_FOR_udivmodsi4;
  if (HAVE_udivmoddi4)
    optab_handler (udivmod_optab, DImode)->insn_code = CODE_FOR_udivmoddi4;
  if (HAVE_sqrtsf2)
    optab_handler (sqrt_optab, SFmode)->insn_code = CODE_FOR_sqrtsf2;
  if (HAVE_sqrtdf2)
    optab_handler (sqrt_optab, DFmode)->insn_code = CODE_FOR_sqrtdf2;
  if (HAVE_sqrtv2sf2)
    optab_handler (sqrt_optab, V2SFmode)->insn_code = CODE_FOR_sqrtv2sf2;
  if (HAVE_abssf2)
    optab_handler (absv_optab, SFmode)->insn_code =
    optab_handler (abs_optab, SFmode)->insn_code = CODE_FOR_abssf2;
  if (HAVE_absdf2)
    optab_handler (absv_optab, DFmode)->insn_code =
    optab_handler (abs_optab, DFmode)->insn_code = CODE_FOR_absdf2;
  if (HAVE_absv2sf2)
    optab_handler (absv_optab, V2SFmode)->insn_code =
    optab_handler (abs_optab, V2SFmode)->insn_code = CODE_FOR_absv2sf2;
  if (HAVE_clzsi2)
    optab_handler (clz_optab, SImode)->insn_code = CODE_FOR_clzsi2;
  if (HAVE_clzdi2)
    optab_handler (clz_optab, DImode)->insn_code = CODE_FOR_clzdi2;
  if (HAVE_popcountsi2)
    optab_handler (popcount_optab, SImode)->insn_code = CODE_FOR_popcountsi2;
  if (HAVE_popcountdi2)
    optab_handler (popcount_optab, DImode)->insn_code = CODE_FOR_popcountdi2;
  optab_handler (neg_optab, SImode)->insn_code = CODE_FOR_negsi2;
  if (HAVE_negdi2)
    optab_handler (neg_optab, DImode)->insn_code = CODE_FOR_negdi2;
  if (HAVE_negsf2)
    optab_handler (negv_optab, SFmode)->insn_code =
    optab_handler (neg_optab, SFmode)->insn_code = CODE_FOR_negsf2;
  if (HAVE_negdf2)
    optab_handler (negv_optab, DFmode)->insn_code =
    optab_handler (neg_optab, DFmode)->insn_code = CODE_FOR_negdf2;
  if (HAVE_negv2sf2)
    optab_handler (negv_optab, V2SFmode)->insn_code =
    optab_handler (neg_optab, V2SFmode)->insn_code = CODE_FOR_negv2sf2;
  optab_handler (one_cmpl_optab, SImode)->insn_code = CODE_FOR_one_cmplsi2;
  if (HAVE_one_cmpldi2)
    optab_handler (one_cmpl_optab, DImode)->insn_code = CODE_FOR_one_cmpldi2;
  if (HAVE_truncdfsf2)
    convert_optab_handler (trunc_optab, SFmode, DFmode)->insn_code = CODE_FOR_truncdfsf2;
  if (HAVE_truncdisi2)
    convert_optab_handler (trunc_optab, SImode, DImode)->insn_code = CODE_FOR_truncdisi2;
  if (HAVE_truncdihi2)
    convert_optab_handler (trunc_optab, HImode, DImode)->insn_code = CODE_FOR_truncdihi2;
  if (HAVE_truncdiqi2)
    convert_optab_handler (trunc_optab, QImode, DImode)->insn_code = CODE_FOR_truncdiqi2;
  if (HAVE_zero_extendsidi2)
    convert_optab_handler (zext_optab, DImode, SImode)->insn_code = CODE_FOR_zero_extendsidi2;
  if (HAVE_extendsidi2)
    convert_optab_handler (sext_optab, DImode, SImode)->insn_code = CODE_FOR_extendsidi2;
  if (HAVE_extendsfdf2)
    convert_optab_handler (sext_optab, DFmode, SFmode)->insn_code = CODE_FOR_extendsfdf2;
  if (HAVE_fix_truncdfdi2)
    convert_optab_handler (sfixtrunc_optab, DImode, DFmode)->insn_code = CODE_FOR_fix_truncdfdi2;
  if (HAVE_fix_truncsfdi2)
    convert_optab_handler (sfixtrunc_optab, DImode, SFmode)->insn_code = CODE_FOR_fix_truncsfdi2;
  if (HAVE_floatsidf2)
    convert_optab_handler (sfloat_optab, DFmode, SImode)->insn_code = CODE_FOR_floatsidf2;
  if (HAVE_floatdidf2)
    convert_optab_handler (sfloat_optab, DFmode, DImode)->insn_code = CODE_FOR_floatdidf2;
  if (HAVE_floatsisf2)
    convert_optab_handler (sfloat_optab, SFmode, SImode)->insn_code = CODE_FOR_floatsisf2;
  if (HAVE_floatdisf2)
    convert_optab_handler (sfloat_optab, SFmode, DImode)->insn_code = CODE_FOR_floatdisf2;
  if (HAVE_movcc)
    optab_handler (mov_optab, CCmode)->insn_code = CODE_FOR_movcc;
  if (HAVE_rotrsi3)
    optab_handler (rotr_optab, SImode)->insn_code = CODE_FOR_rotrsi3;
  if (HAVE_rotrdi3)
    optab_handler (rotr_optab, DImode)->insn_code = CODE_FOR_rotrdi3;
  if (HAVE_sync_compare_and_swapsi)
    sync_compare_and_swap[SImode] = CODE_FOR_sync_compare_and_swapsi;
  if (HAVE_sync_compare_and_swapdi)
    sync_compare_and_swap[DImode] = CODE_FOR_sync_compare_and_swapdi;
  if (HAVE_sync_addsi)
    sync_add_optab[SImode] = CODE_FOR_sync_addsi;
  if (HAVE_sync_adddi)
    sync_add_optab[DImode] = CODE_FOR_sync_adddi;
  if (HAVE_sync_subsi)
    sync_sub_optab[SImode] = CODE_FOR_sync_subsi;
  if (HAVE_sync_subdi)
    sync_sub_optab[DImode] = CODE_FOR_sync_subdi;
  if (HAVE_sync_old_addsi)
    sync_old_add_optab[SImode] = CODE_FOR_sync_old_addsi;
  if (HAVE_sync_old_adddi)
    sync_old_add_optab[DImode] = CODE_FOR_sync_old_adddi;
  if (HAVE_sync_old_subsi)
    sync_old_sub_optab[SImode] = CODE_FOR_sync_old_subsi;
  if (HAVE_sync_old_subdi)
    sync_old_sub_optab[DImode] = CODE_FOR_sync_old_subdi;
  if (HAVE_sync_new_addsi)
    sync_new_add_optab[SImode] = CODE_FOR_sync_new_addsi;
  if (HAVE_sync_new_adddi)
    sync_new_add_optab[DImode] = CODE_FOR_sync_new_adddi;
  if (HAVE_sync_new_subsi)
    sync_new_sub_optab[SImode] = CODE_FOR_sync_new_subsi;
  if (HAVE_sync_new_subdi)
    sync_new_sub_optab[DImode] = CODE_FOR_sync_new_subdi;
  if (HAVE_sync_iorsi)
    sync_ior_optab[SImode] = CODE_FOR_sync_iorsi;
  if (HAVE_sync_xorsi)
    sync_xor_optab[SImode] = CODE_FOR_sync_xorsi;
  if (HAVE_sync_andsi)
    sync_and_optab[SImode] = CODE_FOR_sync_andsi;
  if (HAVE_sync_iordi)
    sync_ior_optab[DImode] = CODE_FOR_sync_iordi;
  if (HAVE_sync_xordi)
    sync_xor_optab[DImode] = CODE_FOR_sync_xordi;
  if (HAVE_sync_anddi)
    sync_and_optab[DImode] = CODE_FOR_sync_anddi;
  if (HAVE_sync_old_iorsi)
    sync_old_ior_optab[SImode] = CODE_FOR_sync_old_iorsi;
  if (HAVE_sync_old_xorsi)
    sync_old_xor_optab[SImode] = CODE_FOR_sync_old_xorsi;
  if (HAVE_sync_old_andsi)
    sync_old_and_optab[SImode] = CODE_FOR_sync_old_andsi;
  if (HAVE_sync_old_iordi)
    sync_old_ior_optab[DImode] = CODE_FOR_sync_old_iordi;
  if (HAVE_sync_old_xordi)
    sync_old_xor_optab[DImode] = CODE_FOR_sync_old_xordi;
  if (HAVE_sync_old_anddi)
    sync_old_and_optab[DImode] = CODE_FOR_sync_old_anddi;
  if (HAVE_sync_new_iorsi)
    sync_new_ior_optab[SImode] = CODE_FOR_sync_new_iorsi;
  if (HAVE_sync_new_xorsi)
    sync_new_xor_optab[SImode] = CODE_FOR_sync_new_xorsi;
  if (HAVE_sync_new_andsi)
    sync_new_and_optab[SImode] = CODE_FOR_sync_new_andsi;
  if (HAVE_sync_new_iordi)
    sync_new_ior_optab[DImode] = CODE_FOR_sync_new_iordi;
  if (HAVE_sync_new_xordi)
    sync_new_xor_optab[DImode] = CODE_FOR_sync_new_xordi;
  if (HAVE_sync_new_anddi)
    sync_new_and_optab[DImode] = CODE_FOR_sync_new_anddi;
  if (HAVE_sync_nandsi)
    sync_nand_optab[SImode] = CODE_FOR_sync_nandsi;
  if (HAVE_sync_nanddi)
    sync_nand_optab[DImode] = CODE_FOR_sync_nanddi;
  if (HAVE_sync_old_nandsi)
    sync_old_nand_optab[SImode] = CODE_FOR_sync_old_nandsi;
  if (HAVE_sync_old_nanddi)
    sync_old_nand_optab[DImode] = CODE_FOR_sync_old_nanddi;
  if (HAVE_sync_new_nandsi)
    sync_new_nand_optab[SImode] = CODE_FOR_sync_new_nandsi;
  if (HAVE_sync_new_nanddi)
    sync_new_nand_optab[DImode] = CODE_FOR_sync_new_nanddi;
  if (HAVE_sync_lock_test_and_setsi)
    sync_lock_test_and_set[SImode] = CODE_FOR_sync_lock_test_and_setsi;
  if (HAVE_sync_lock_test_and_setdi)
    sync_lock_test_and_set[DImode] = CODE_FOR_sync_lock_test_and_setdi;
  if (HAVE_vec_extractv2sf)
    optab_handler (vec_extract_optab, V2SFmode)->insn_code = CODE_FOR_vec_extractv2sf;
  if (HAVE_addv2hi3)
    optab_handler (add_optab, V2HImode)->insn_code = CODE_FOR_addv2hi3;
  if (HAVE_addv4qi3)
    optab_handler (add_optab, V4QImode)->insn_code = CODE_FOR_addv4qi3;
  if (HAVE_subv2hi3)
    optab_handler (sub_optab, V2HImode)->insn_code = CODE_FOR_subv2hi3;
  if (HAVE_subv4qi3)
    optab_handler (sub_optab, V4QImode)->insn_code = CODE_FOR_subv4qi3;
  if (HAVE_mulv2hi3)
    optab_handler (smul_optab, V2HImode)->insn_code = CODE_FOR_mulv2hi3;
  optab_handler (add_optab, QQmode)->insn_code = CODE_FOR_addqq3;
  optab_handler (add_optab, HQmode)->insn_code = CODE_FOR_addhq3;
  optab_handler (add_optab, SQmode)->insn_code = CODE_FOR_addsq3;
  if (HAVE_adddq3)
    optab_handler (add_optab, DQmode)->insn_code = CODE_FOR_adddq3;
  optab_handler (add_optab, UQQmode)->insn_code = CODE_FOR_adduqq3;
  optab_handler (add_optab, UHQmode)->insn_code = CODE_FOR_adduhq3;
  optab_handler (add_optab, USQmode)->insn_code = CODE_FOR_addusq3;
  if (HAVE_addudq3)
    optab_handler (add_optab, UDQmode)->insn_code = CODE_FOR_addudq3;
  optab_handler (add_optab, HAmode)->insn_code = CODE_FOR_addha3;
  optab_handler (add_optab, SAmode)->insn_code = CODE_FOR_addsa3;
  if (HAVE_addda3)
    optab_handler (add_optab, DAmode)->insn_code = CODE_FOR_addda3;
  optab_handler (add_optab, UHAmode)->insn_code = CODE_FOR_adduha3;
  optab_handler (add_optab, USAmode)->insn_code = CODE_FOR_addusa3;
  if (HAVE_adduda3)
    optab_handler (add_optab, UDAmode)->insn_code = CODE_FOR_adduda3;
  if (HAVE_usadduqq3)
    optab_handler (usadd_optab, UQQmode)->insn_code = CODE_FOR_usadduqq3;
  if (HAVE_usadduhq3)
    optab_handler (usadd_optab, UHQmode)->insn_code = CODE_FOR_usadduhq3;
  if (HAVE_usadduha3)
    optab_handler (usadd_optab, UHAmode)->insn_code = CODE_FOR_usadduha3;
  if (HAVE_usaddv4uqq3)
    optab_handler (usadd_optab, V4UQQmode)->insn_code = CODE_FOR_usaddv4uqq3;
  if (HAVE_usaddv2uhq3)
    optab_handler (usadd_optab, V2UHQmode)->insn_code = CODE_FOR_usaddv2uhq3;
  if (HAVE_usaddv2uha3)
    optab_handler (usadd_optab, V2UHAmode)->insn_code = CODE_FOR_usaddv2uha3;
  if (HAVE_ssaddhq3)
    optab_handler (ssadd_optab, HQmode)->insn_code = CODE_FOR_ssaddhq3;
  if (HAVE_ssaddsq3)
    optab_handler (ssadd_optab, SQmode)->insn_code = CODE_FOR_ssaddsq3;
  if (HAVE_ssaddha3)
    optab_handler (ssadd_optab, HAmode)->insn_code = CODE_FOR_ssaddha3;
  if (HAVE_ssaddsa3)
    optab_handler (ssadd_optab, SAmode)->insn_code = CODE_FOR_ssaddsa3;
  if (HAVE_ssaddv2hq3)
    optab_handler (ssadd_optab, V2HQmode)->insn_code = CODE_FOR_ssaddv2hq3;
  if (HAVE_ssaddv2ha3)
    optab_handler (ssadd_optab, V2HAmode)->insn_code = CODE_FOR_ssaddv2ha3;
  optab_handler (sub_optab, QQmode)->insn_code = CODE_FOR_subqq3;
  optab_handler (sub_optab, HQmode)->insn_code = CODE_FOR_subhq3;
  optab_handler (sub_optab, SQmode)->insn_code = CODE_FOR_subsq3;
  if (HAVE_subdq3)
    optab_handler (sub_optab, DQmode)->insn_code = CODE_FOR_subdq3;
  optab_handler (sub_optab, UQQmode)->insn_code = CODE_FOR_subuqq3;
  optab_handler (sub_optab, UHQmode)->insn_code = CODE_FOR_subuhq3;
  optab_handler (sub_optab, USQmode)->insn_code = CODE_FOR_subusq3;
  if (HAVE_subudq3)
    optab_handler (sub_optab, UDQmode)->insn_code = CODE_FOR_subudq3;
  optab_handler (sub_optab, HAmode)->insn_code = CODE_FOR_subha3;
  optab_handler (sub_optab, SAmode)->insn_code = CODE_FOR_subsa3;
  if (HAVE_subda3)
    optab_handler (sub_optab, DAmode)->insn_code = CODE_FOR_subda3;
  optab_handler (sub_optab, UHAmode)->insn_code = CODE_FOR_subuha3;
  optab_handler (sub_optab, USAmode)->insn_code = CODE_FOR_subusa3;
  if (HAVE_subuda3)
    optab_handler (sub_optab, UDAmode)->insn_code = CODE_FOR_subuda3;
  if (HAVE_ussubuqq3)
    optab_handler (ussub_optab, UQQmode)->insn_code = CODE_FOR_ussubuqq3;
  if (HAVE_ussubuhq3)
    optab_handler (ussub_optab, UHQmode)->insn_code = CODE_FOR_ussubuhq3;
  if (HAVE_ussubuha3)
    optab_handler (ussub_optab, UHAmode)->insn_code = CODE_FOR_ussubuha3;
  if (HAVE_ussubv4uqq3)
    optab_handler (ussub_optab, V4UQQmode)->insn_code = CODE_FOR_ussubv4uqq3;
  if (HAVE_ussubv2uhq3)
    optab_handler (ussub_optab, V2UHQmode)->insn_code = CODE_FOR_ussubv2uhq3;
  if (HAVE_ussubv2uha3)
    optab_handler (ussub_optab, V2UHAmode)->insn_code = CODE_FOR_ussubv2uha3;
  if (HAVE_sssubhq3)
    optab_handler (sssub_optab, HQmode)->insn_code = CODE_FOR_sssubhq3;
  if (HAVE_sssubsq3)
    optab_handler (sssub_optab, SQmode)->insn_code = CODE_FOR_sssubsq3;
  if (HAVE_sssubha3)
    optab_handler (sssub_optab, HAmode)->insn_code = CODE_FOR_sssubha3;
  if (HAVE_sssubsa3)
    optab_handler (sssub_optab, SAmode)->insn_code = CODE_FOR_sssubsa3;
  if (HAVE_sssubv2hq3)
    optab_handler (sssub_optab, V2HQmode)->insn_code = CODE_FOR_sssubv2hq3;
  if (HAVE_sssubv2ha3)
    optab_handler (sssub_optab, V2HAmode)->insn_code = CODE_FOR_sssubv2ha3;
  if (HAVE_ssmulv2hq3)
    optab_handler (ssmul_optab, V2HQmode)->insn_code = CODE_FOR_ssmulv2hq3;
  if (HAVE_ssmulhq3)
    optab_handler (ssmul_optab, HQmode)->insn_code = CODE_FOR_ssmulhq3;
  if (HAVE_ssmulsq3)
    optab_handler (ssmul_optab, SQmode)->insn_code = CODE_FOR_ssmulsq3;
  if (HAVE_ssmaddsqdq4)
    optab_handler (ssmadd_widen_optab, DQmode)->insn_code = CODE_FOR_ssmaddsqdq4;
  if (HAVE_ssmsubsqdq4)
    optab_handler (ssmsub_widen_optab, DQmode)->insn_code = CODE_FOR_ssmsubsqdq4;
  if (HAVE_vec_pack_ssat_v2si)
    optab_handler (vec_pack_ssat_optab, V2SImode)->insn_code = CODE_FOR_vec_pack_ssat_v2si;
  if (HAVE_vec_pack_ssat_v4hi)
    optab_handler (vec_pack_ssat_optab, V4HImode)->insn_code = CODE_FOR_vec_pack_ssat_v4hi;
  if (HAVE_vec_pack_usat_v4hi)
    optab_handler (vec_pack_usat_optab, V4HImode)->insn_code = CODE_FOR_vec_pack_usat_v4hi;
  if (HAVE_addv2si3)
    optab_handler (add_optab, V2SImode)->insn_code = CODE_FOR_addv2si3;
  if (HAVE_addv4hi3)
    optab_handler (add_optab, V4HImode)->insn_code = CODE_FOR_addv4hi3;
  if (HAVE_addv8qi3)
    optab_handler (add_optab, V8QImode)->insn_code = CODE_FOR_addv8qi3;
  if (HAVE_smaxv4hi3)
    optab_handler (smax_optab, V4HImode)->insn_code = CODE_FOR_smaxv4hi3;
  if (HAVE_umaxv8qi3)
    optab_handler (umax_optab, V8QImode)->insn_code = CODE_FOR_umaxv8qi3;
  if (HAVE_sminv4hi3)
    optab_handler (smin_optab, V4HImode)->insn_code = CODE_FOR_sminv4hi3;
  if (HAVE_uminv8qi3)
    optab_handler (umin_optab, V8QImode)->insn_code = CODE_FOR_uminv8qi3;
  if (HAVE_umulv4hi3_highpart)
    optab_handler (umul_highpart_optab, V4HImode)->insn_code = CODE_FOR_umulv4hi3_highpart;
  if (HAVE_smulv4hi3_highpart)
    optab_handler (smul_highpart_optab, V4HImode)->insn_code = CODE_FOR_smulv4hi3_highpart;
  if (HAVE_subv2si3)
    optab_handler (sub_optab, V2SImode)->insn_code = CODE_FOR_subv2si3;
  if (HAVE_subv4hi3)
    optab_handler (sub_optab, V4HImode)->insn_code = CODE_FOR_subv4hi3;
  if (HAVE_subv8qi3)
    optab_handler (sub_optab, V8QImode)->insn_code = CODE_FOR_subv8qi3;
  if (HAVE_vec_interleave_highv2si)
    optab_handler (vec_interleave_high_optab, V2SImode)->insn_code = CODE_FOR_vec_interleave_highv2si;
  if (HAVE_vec_interleave_highv4hi)
    optab_handler (vec_interleave_high_optab, V4HImode)->insn_code = CODE_FOR_vec_interleave_highv4hi;
  if (HAVE_vec_interleave_highv8qi)
    optab_handler (vec_interleave_high_optab, V8QImode)->insn_code = CODE_FOR_vec_interleave_highv8qi;
  if (HAVE_vec_interleave_lowv2si)
    optab_handler (vec_interleave_low_optab, V2SImode)->insn_code = CODE_FOR_vec_interleave_lowv2si;
  if (HAVE_vec_interleave_lowv4hi)
    optab_handler (vec_interleave_low_optab, V4HImode)->insn_code = CODE_FOR_vec_interleave_lowv4hi;
  if (HAVE_vec_interleave_lowv8qi)
    optab_handler (vec_interleave_low_optab, V8QImode)->insn_code = CODE_FOR_vec_interleave_lowv8qi;
  if (HAVE_divsi3)
    optab_handler (sdiv_optab, SImode)->insn_code = CODE_FOR_divsi3;
  if (HAVE_udivsi3)
    optab_handler (udiv_optab, SImode)->insn_code = CODE_FOR_udivsi3;
  if (HAVE_divdi3)
    optab_handler (sdiv_optab, DImode)->insn_code = CODE_FOR_divdi3;
  if (HAVE_udivdi3)
    optab_handler (udiv_optab, DImode)->insn_code = CODE_FOR_udivdi3;
  if (HAVE_modsi3)
    optab_handler (smod_optab, SImode)->insn_code = CODE_FOR_modsi3;
  if (HAVE_umodsi3)
    optab_handler (umod_optab, SImode)->insn_code = CODE_FOR_umodsi3;
  if (HAVE_moddi3)
    optab_handler (smod_optab, DImode)->insn_code = CODE_FOR_moddi3;
  if (HAVE_umoddi3)
    optab_handler (umod_optab, DImode)->insn_code = CODE_FOR_umoddi3;
  optab_handler (add_optab, SImode)->insn_code = CODE_FOR_addsi3;
  if (HAVE_adddi3)
    optab_handler (add_optab, DImode)->insn_code = CODE_FOR_adddi3;
  if (HAVE_mulsf3)
    optab_handler (smulv_optab, SFmode)->insn_code =
    optab_handler (smul_optab, SFmode)->insn_code = CODE_FOR_mulsf3;
  if (HAVE_muldf3)
    optab_handler (smulv_optab, DFmode)->insn_code =
    optab_handler (smul_optab, DFmode)->insn_code = CODE_FOR_muldf3;
  optab_handler (smul_optab, SImode)->insn_code = CODE_FOR_mulsi3;
  if (HAVE_muldi3)
    optab_handler (smul_optab, DImode)->insn_code = CODE_FOR_muldi3;
  if (HAVE_mulsidi3)
    optab_handler (smul_widen_optab, DImode)->insn_code = CODE_FOR_mulsidi3;
  if (HAVE_umulsidi3)
    optab_handler (umul_widen_optab, DImode)->insn_code = CODE_FOR_umulsidi3;
  optab_handler (smul_highpart_optab, SImode)->insn_code = CODE_FOR_smulsi3_highpart;
  optab_handler (umul_highpart_optab, SImode)->insn_code = CODE_FOR_umulsi3_highpart;
  if (HAVE_mulditi3)
    optab_handler (smul_widen_optab, TImode)->insn_code = CODE_FOR_mulditi3;
  if (HAVE_umulditi3)
    optab_handler (umul_widen_optab, TImode)->insn_code = CODE_FOR_umulditi3;
  if (HAVE_divsf3)
    optab_handler (sdiv_optab, SFmode)->insn_code = CODE_FOR_divsf3;
  if (HAVE_divdf3)
    optab_handler (sdiv_optab, DFmode)->insn_code = CODE_FOR_divdf3;
  if (HAVE_divv2sf3)
    optab_handler (sdiv_optab, V2SFmode)->insn_code = CODE_FOR_divv2sf3;
  optab_handler (and_optab, SImode)->insn_code = CODE_FOR_andsi3;
  if (HAVE_anddi3)
    optab_handler (and_optab, DImode)->insn_code = CODE_FOR_anddi3;
  optab_handler (ior_optab, SImode)->insn_code = CODE_FOR_iorsi3;
  if (HAVE_iordi3)
    optab_handler (ior_optab, DImode)->insn_code = CODE_FOR_iordi3;
  optab_handler (xor_optab, SImode)->insn_code = CODE_FOR_xorsi3;
  if (HAVE_xordi3)
    optab_handler (xor_optab, DImode)->insn_code = CODE_FOR_xordi3;
  convert_optab_handler (zext_optab, SImode, QImode)->insn_code = CODE_FOR_zero_extendqisi2;
  convert_optab_handler (zext_optab, SImode, HImode)->insn_code = CODE_FOR_zero_extendhisi2;
  if (HAVE_zero_extendqidi2)
    convert_optab_handler (zext_optab, DImode, QImode)->insn_code = CODE_FOR_zero_extendqidi2;
  if (HAVE_zero_extendhidi2)
    convert_optab_handler (zext_optab, DImode, HImode)->insn_code = CODE_FOR_zero_extendhidi2;
  convert_optab_handler (zext_optab, HImode, QImode)->insn_code = CODE_FOR_zero_extendqihi2;
  convert_optab_handler (sext_optab, SImode, QImode)->insn_code = CODE_FOR_extendqisi2;
  convert_optab_handler (sext_optab, SImode, HImode)->insn_code = CODE_FOR_extendhisi2;
  if (HAVE_extendqidi2)
    convert_optab_handler (sext_optab, DImode, QImode)->insn_code = CODE_FOR_extendqidi2;
  if (HAVE_extendhidi2)
    convert_optab_handler (sext_optab, DImode, HImode)->insn_code = CODE_FOR_extendhidi2;
  convert_optab_handler (sext_optab, HImode, QImode)->insn_code = CODE_FOR_extendqihi2;
  if (HAVE_fix_truncdfsi2)
    convert_optab_handler (sfixtrunc_optab, SImode, DFmode)->insn_code = CODE_FOR_fix_truncdfsi2;
  if (HAVE_fix_truncsfsi2)
    convert_optab_handler (sfixtrunc_optab, SImode, SFmode)->insn_code = CODE_FOR_fix_truncsfsi2;
  if (HAVE_fixuns_truncdfsi2)
    convert_optab_handler (ufixtrunc_optab, SImode, DFmode)->insn_code = CODE_FOR_fixuns_truncdfsi2;
  if (HAVE_fixuns_truncdfdi2)
    convert_optab_handler (ufixtrunc_optab, DImode, DFmode)->insn_code = CODE_FOR_fixuns_truncdfdi2;
  if (HAVE_fixuns_truncsfsi2)
    convert_optab_handler (ufixtrunc_optab, SImode, SFmode)->insn_code = CODE_FOR_fixuns_truncsfsi2;
  if (HAVE_fixuns_truncsfdi2)
    convert_optab_handler (ufixtrunc_optab, DImode, SFmode)->insn_code = CODE_FOR_fixuns_truncsfdi2;
  optab_handler (mov_optab, DImode)->insn_code = CODE_FOR_movdi;
  optab_handler (mov_optab, SImode)->insn_code = CODE_FOR_movsi;
  if (HAVE_movv2hi)
    optab_handler (mov_optab, V2HImode)->insn_code = CODE_FOR_movv2hi;
  if (HAVE_movv4qi)
    optab_handler (mov_optab, V4QImode)->insn_code = CODE_FOR_movv4qi;
  if (HAVE_movv2hq)
    optab_handler (mov_optab, V2HQmode)->insn_code = CODE_FOR_movv2hq;
  if (HAVE_movv2uhq)
    optab_handler (mov_optab, V2UHQmode)->insn_code = CODE_FOR_movv2uhq;
  if (HAVE_movv2ha)
    optab_handler (mov_optab, V2HAmode)->insn_code = CODE_FOR_movv2ha;
  if (HAVE_movv2uha)
    optab_handler (mov_optab, V2UHAmode)->insn_code = CODE_FOR_movv2uha;
  if (HAVE_movv4qq)
    optab_handler (mov_optab, V4QQmode)->insn_code = CODE_FOR_movv4qq;
  if (HAVE_movv4uqq)
    optab_handler (mov_optab, V4UQQmode)->insn_code = CODE_FOR_movv4uqq;
  if (HAVE_reload_incc)
    reload_in_optab[CCmode] = CODE_FOR_reload_incc;
  if (HAVE_reload_outcc)
    reload_out_optab[CCmode] = CODE_FOR_reload_outcc;
  optab_handler (mov_optab, HImode)->insn_code = CODE_FOR_movhi;
  optab_handler (mov_optab, QImode)->insn_code = CODE_FOR_movqi;
  optab_handler (mov_optab, SFmode)->insn_code = CODE_FOR_movsf;
  optab_handler (mov_optab, DFmode)->insn_code = CODE_FOR_movdf;
  if (HAVE_movti)
    optab_handler (mov_optab, TImode)->insn_code = CODE_FOR_movti;
  if (HAVE_movtf)
    optab_handler (mov_optab, TFmode)->insn_code = CODE_FOR_movtf;
  if (HAVE_movv2sf)
    optab_handler (mov_optab, V2SFmode)->insn_code = CODE_FOR_movv2sf;
  if (HAVE_movmemsi)
    movmem_optab[SImode] = CODE_FOR_movmemsi;
  optab_handler (ashl_optab, SImode)->insn_code = CODE_FOR_ashlsi3;
  optab_handler (ashr_optab, SImode)->insn_code = CODE_FOR_ashrsi3;
  optab_handler (lshr_optab, SImode)->insn_code = CODE_FOR_lshrsi3;
  if (HAVE_ashldi3)
    optab_handler (ashl_optab, DImode)->insn_code = CODE_FOR_ashldi3;
  if (HAVE_ashrdi3)
    optab_handler (ashr_optab, DImode)->insn_code = CODE_FOR_ashrdi3;
  if (HAVE_lshrdi3)
    optab_handler (lshr_optab, DImode)->insn_code = CODE_FOR_lshrdi3;
  optab_handler (cmp_optab, SImode)->insn_code = CODE_FOR_cmpsi;
  if (HAVE_cmpdi)
    optab_handler (cmp_optab, DImode)->insn_code = CODE_FOR_cmpdi;
  if (HAVE_cmpsf)
    optab_handler (cmp_optab, SFmode)->insn_code = CODE_FOR_cmpsf;
  if (HAVE_cmpdf)
    optab_handler (cmp_optab, DFmode)->insn_code = CODE_FOR_cmpdf;
  bcc_gen_fctn[UNORDERED] = gen_bunordered;
  bcc_gen_fctn[ORDERED] = gen_bordered;
  bcc_gen_fctn[UNLT] = gen_bunlt;
  bcc_gen_fctn[UNGE] = gen_bunge;
  bcc_gen_fctn[UNEQ] = gen_buneq;
  bcc_gen_fctn[LTGT] = gen_bltgt;
  bcc_gen_fctn[UNLE] = gen_bunle;
  bcc_gen_fctn[UNGT] = gen_bungt;
  bcc_gen_fctn[EQ] = gen_beq;
  bcc_gen_fctn[NE] = gen_bne;
  bcc_gen_fctn[GT] = gen_bgt;
  bcc_gen_fctn[GE] = gen_bge;
  bcc_gen_fctn[LT] = gen_blt;
  bcc_gen_fctn[LE] = gen_ble;
  bcc_gen_fctn[GTU] = gen_bgtu;
  bcc_gen_fctn[GEU] = gen_bgeu;
  bcc_gen_fctn[LTU] = gen_bltu;
  bcc_gen_fctn[LEU] = gen_bleu;
  setcc_gen_code[EQ] = CODE_FOR_seq;
  if (HAVE_sne)
    setcc_gen_code[NE] = CODE_FOR_sne;
  setcc_gen_code[GT] = CODE_FOR_sgt;
  setcc_gen_code[GTU] = CODE_FOR_sgtu;
  setcc_gen_code[GE] = CODE_FOR_sge;
  setcc_gen_code[GEU] = CODE_FOR_sgeu;
  setcc_gen_code[LT] = CODE_FOR_slt;
  setcc_gen_code[LTU] = CODE_FOR_sltu;
  setcc_gen_code[LE] = CODE_FOR_sle;
  setcc_gen_code[LEU] = CODE_FOR_sleu;
  if (HAVE_movsicc)
    movcc_gen_code[SImode] = CODE_FOR_movsicc;
  if (HAVE_movdicc)
    movcc_gen_code[DImode] = CODE_FOR_movdicc;
  if (HAVE_movsfcc)
    movcc_gen_code[SFmode] = CODE_FOR_movsfcc;
  if (HAVE_movdfcc)
    movcc_gen_code[DFmode] = CODE_FOR_movdfcc;
  if (HAVE_sync_compare_and_swapqi)
    sync_compare_and_swap[QImode] = CODE_FOR_sync_compare_and_swapqi;
  if (HAVE_sync_compare_and_swaphi)
    sync_compare_and_swap[HImode] = CODE_FOR_sync_compare_and_swaphi;
  if (HAVE_sync_addqi)
    sync_add_optab[QImode] = CODE_FOR_sync_addqi;
  if (HAVE_sync_subqi)
    sync_sub_optab[QImode] = CODE_FOR_sync_subqi;
  if (HAVE_sync_iorqi)
    sync_ior_optab[QImode] = CODE_FOR_sync_iorqi;
  if (HAVE_sync_xorqi)
    sync_xor_optab[QImode] = CODE_FOR_sync_xorqi;
  if (HAVE_sync_andqi)
    sync_and_optab[QImode] = CODE_FOR_sync_andqi;
  if (HAVE_sync_addhi)
    sync_add_optab[HImode] = CODE_FOR_sync_addhi;
  if (HAVE_sync_subhi)
    sync_sub_optab[HImode] = CODE_FOR_sync_subhi;
  if (HAVE_sync_iorhi)
    sync_ior_optab[HImode] = CODE_FOR_sync_iorhi;
  if (HAVE_sync_xorhi)
    sync_xor_optab[HImode] = CODE_FOR_sync_xorhi;
  if (HAVE_sync_andhi)
    sync_and_optab[HImode] = CODE_FOR_sync_andhi;
  if (HAVE_sync_old_addqi)
    sync_old_add_optab[QImode] = CODE_FOR_sync_old_addqi;
  if (HAVE_sync_old_subqi)
    sync_old_sub_optab[QImode] = CODE_FOR_sync_old_subqi;
  if (HAVE_sync_old_iorqi)
    sync_old_ior_optab[QImode] = CODE_FOR_sync_old_iorqi;
  if (HAVE_sync_old_xorqi)
    sync_old_xor_optab[QImode] = CODE_FOR_sync_old_xorqi;
  if (HAVE_sync_old_andqi)
    sync_old_and_optab[QImode] = CODE_FOR_sync_old_andqi;
  if (HAVE_sync_old_addhi)
    sync_old_add_optab[HImode] = CODE_FOR_sync_old_addhi;
  if (HAVE_sync_old_subhi)
    sync_old_sub_optab[HImode] = CODE_FOR_sync_old_subhi;
  if (HAVE_sync_old_iorhi)
    sync_old_ior_optab[HImode] = CODE_FOR_sync_old_iorhi;
  if (HAVE_sync_old_xorhi)
    sync_old_xor_optab[HImode] = CODE_FOR_sync_old_xorhi;
  if (HAVE_sync_old_andhi)
    sync_old_and_optab[HImode] = CODE_FOR_sync_old_andhi;
  if (HAVE_sync_new_addqi)
    sync_new_add_optab[QImode] = CODE_FOR_sync_new_addqi;
  if (HAVE_sync_new_subqi)
    sync_new_sub_optab[QImode] = CODE_FOR_sync_new_subqi;
  if (HAVE_sync_new_iorqi)
    sync_new_ior_optab[QImode] = CODE_FOR_sync_new_iorqi;
  if (HAVE_sync_new_xorqi)
    sync_new_xor_optab[QImode] = CODE_FOR_sync_new_xorqi;
  if (HAVE_sync_new_andqi)
    sync_new_and_optab[QImode] = CODE_FOR_sync_new_andqi;
  if (HAVE_sync_new_addhi)
    sync_new_add_optab[HImode] = CODE_FOR_sync_new_addhi;
  if (HAVE_sync_new_subhi)
    sync_new_sub_optab[HImode] = CODE_FOR_sync_new_subhi;
  if (HAVE_sync_new_iorhi)
    sync_new_ior_optab[HImode] = CODE_FOR_sync_new_iorhi;
  if (HAVE_sync_new_xorhi)
    sync_new_xor_optab[HImode] = CODE_FOR_sync_new_xorhi;
  if (HAVE_sync_new_andhi)
    sync_new_and_optab[HImode] = CODE_FOR_sync_new_andhi;
  if (HAVE_sync_nandqi)
    sync_nand_optab[QImode] = CODE_FOR_sync_nandqi;
  if (HAVE_sync_nandhi)
    sync_nand_optab[HImode] = CODE_FOR_sync_nandhi;
  if (HAVE_sync_old_nandqi)
    sync_old_nand_optab[QImode] = CODE_FOR_sync_old_nandqi;
  if (HAVE_sync_old_nandhi)
    sync_old_nand_optab[HImode] = CODE_FOR_sync_old_nandhi;
  if (HAVE_sync_new_nandqi)
    sync_new_nand_optab[QImode] = CODE_FOR_sync_new_nandqi;
  if (HAVE_sync_new_nandhi)
    sync_new_nand_optab[HImode] = CODE_FOR_sync_new_nandhi;
  if (HAVE_sync_lock_test_and_setqi)
    sync_lock_test_and_set[QImode] = CODE_FOR_sync_lock_test_and_setqi;
  if (HAVE_sync_lock_test_and_sethi)
    sync_lock_test_and_set[HImode] = CODE_FOR_sync_lock_test_and_sethi;
  if (HAVE_movv2sfcc)
    movcc_gen_code[V2SFmode] = CODE_FOR_movv2sfcc;
  if (HAVE_vec_initv2sf)
    optab_handler (vec_init_optab, V2SFmode)->insn_code = CODE_FOR_vec_initv2sf;
  if (HAVE_vec_setv2sf)
    optab_handler (vec_set_optab, V2SFmode)->insn_code = CODE_FOR_vec_setv2sf;
  if (HAVE_vcondv2sf)
    vcond_gen_code[V2SFmode] = CODE_FOR_vcondv2sf;
  if (HAVE_sminv2sf3)
    optab_handler (smin_optab, V2SFmode)->insn_code = CODE_FOR_sminv2sf3;
  if (HAVE_smaxv2sf3)
    optab_handler (smax_optab, V2SFmode)->insn_code = CODE_FOR_smaxv2sf3;
  if (HAVE_movv2si)
    optab_handler (mov_optab, V2SImode)->insn_code = CODE_FOR_movv2si;
  if (HAVE_movv4hi)
    optab_handler (mov_optab, V4HImode)->insn_code = CODE_FOR_movv4hi;
  if (HAVE_movv8qi)
    optab_handler (mov_optab, V8QImode)->insn_code = CODE_FOR_movv8qi;
  if (HAVE_vec_initv2si)
    optab_handler (vec_init_optab, V2SImode)->insn_code = CODE_FOR_vec_initv2si;
  if (HAVE_vec_initv4hi)
    optab_handler (vec_init_optab, V4HImode)->insn_code = CODE_FOR_vec_initv4hi;
  if (HAVE_vec_initv8qi)
    optab_handler (vec_init_optab, V8QImode)->insn_code = CODE_FOR_vec_initv8qi;

#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  /* This flag says the same insns that convert to a signed fixnum
     also convert validly to an unsigned one.  */
  for (i = 0; i < NUM_MACHINE_MODES; i++)
    for (j = 0; j < NUM_MACHINE_MODES; j++)
      convert_optab_handler (ufixtrunc_optab, i, j)->insn_code
      = convert_optab_handler (sfixtrunc_optab, i, j)->insn_code;
#endif
}
