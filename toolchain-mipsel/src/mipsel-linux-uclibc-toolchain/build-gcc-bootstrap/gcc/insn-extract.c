/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 876:  /* ssmsubsqdq4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 875:  /* ssmaddsqdq4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 874:  /* ssmulsq3 */
    case 873:  /* ssmulhq3 */
    case 872:  /* ssmulv2hq3 */
    case 787:  /* mulv2hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 774:  /* mips_bposge */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 766:  /* mips_wrdsp */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0, 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0, 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0, 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0, 0);
      recog_data.dup_num[3] = 0;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0, 1);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0, 0);
      recog_data.dup_num[5] = 0;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[7] = 0;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 0;
      break;

    case 763:  /* mips_extpdp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 1;
      break;

    case 819:  /* mips_dpsqx_sa_w_ph */
    case 818:  /* mips_dpsqx_s_w_ph */
    case 817:  /* mips_dpaqx_sa_w_ph */
    case 816:  /* mips_dpaqx_s_w_ph */
    case 741:  /* mips_maq_sa_w_phr */
    case 740:  /* mips_maq_sa_w_phl */
    case 739:  /* mips_maq_s_w_phr */
    case 738:  /* mips_maq_s_w_phl */
    case 737:  /* mips_dpsq_sa_l_w */
    case 736:  /* mips_dpaq_sa_l_w */
    case 735:  /* mips_mulsaq_s_w_ph */
    case 734:  /* mips_dpsq_s_w_ph */
    case 733:  /* mips_dpaq_s_w_ph */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 791:  /* mips_mulq_s_w */
    case 790:  /* mips_mulq_s_ph */
    case 789:  /* mips_mulq_rs_w */
    case 788:  /* mips_mul_s_ph */
    case 728:  /* mips_muleq_s_w_phr */
    case 727:  /* mips_muleq_s_w_phl */
    case 726:  /* mips_mulq_rs_ph */
    case 725:  /* mips_muleu_s_ph_qbr */
    case 724:  /* mips_muleu_s_ph_qbl */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 775:  /* mips_absq_s_qb */
    case 701:  /* mips_absq_s_ph */
    case 700:  /* mips_absq_s_w */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 803:  /* mips_subu_s_ph */
    case 802:  /* mips_subu_ph */
    case 784:  /* mips_cmpgdu_le_qb */
    case 783:  /* mips_cmpgdu_lt_qb */
    case 782:  /* mips_cmpgdu_eq_qb */
    case 777:  /* mips_addu_s_ph */
    case 765:  /* mips_mthlip */
    case 762:  /* mips_extp */
    case 761:  /* mips_extr_s_h */
    case 760:  /* mips_extr_rs_w */
    case 759:  /* mips_extr_r_w */
    case 758:  /* mips_extr_w */
    case 719:  /* mips_shll_s_ph */
    case 718:  /* mips_shll_s_w */
    case 717:  /* mips_shll_qb */
    case 716:  /* mips_shll_ph */
    case 705:  /* mips_precrqu_s_qb_ph */
    case 704:  /* mips_precrq_rs_ph_w */
    case 697:  /* mips_addwc */
    case 696:  /* mips_addsc */
    case 695:  /* mips_subu_s_qb */
    case 694:  /* mips_subq_s_ph */
    case 693:  /* mips_subq_s_w */
    case 690:  /* mips_addu_s_qb */
    case 689:  /* mips_addq_s_ph */
    case 688:  /* mips_addq_s_w */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 871:  /* sssubv2ha3 */
    case 870:  /* sssubv2hq3 */
    case 869:  /* sssubsa3 */
    case 868:  /* sssubha3 */
    case 867:  /* sssubsq3 */
    case 866:  /* sssubhq3 */
    case 865:  /* ussubv2uha3 */
    case 864:  /* ussubv2uhq3 */
    case 863:  /* ussubv4uqq3 */
    case 862:  /* ussubuha3 */
    case 861:  /* ussubuhq3 */
    case 860:  /* ussubuqq3 */
    case 845:  /* ssaddv2ha3 */
    case 844:  /* ssaddv2hq3 */
    case 843:  /* ssaddsa3 */
    case 842:  /* ssaddha3 */
    case 841:  /* ssaddsq3 */
    case 840:  /* ssaddhq3 */
    case 839:  /* usaddv2uha3 */
    case 838:  /* usaddv2uhq3 */
    case 837:  /* usaddv4uqq3 */
    case 836:  /* usadduha3 */
    case 835:  /* usadduhq3 */
    case 834:  /* usadduqq3 */
    case 776:  /* mips_addu_ph */
    case 692:  /* subv4qi3 */
    case 691:  /* subv2hi3 */
    case 687:  /* addv4qi3 */
    case 686:  /* addv2hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 673:  /* *branch_upper_lower_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 672:  /* *branch_upper_lower */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 671:  /* bc1any2f */
    case 670:  /* bc1any2t */
    case 669:  /* bc1any4f */
    case 668:  /* bc1any4t */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 654:  /* mips_cabs_cond_4s */
    case 653:  /* mips_c_cond_4s */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 4));
      break;

    case 644:  /* vec_extractv2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 635:  /* test_and_set_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 634:  /* sync_lock_test_and_setdi */
    case 633:  /* sync_lock_test_and_setsi */
    case 632:  /* sync_new_nanddi */
    case 631:  /* sync_new_nandsi */
    case 630:  /* sync_old_nanddi */
    case 629:  /* sync_old_nandsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 626:  /* sync_new_anddi */
    case 625:  /* sync_new_xordi */
    case 624:  /* sync_new_iordi */
    case 623:  /* sync_new_andsi */
    case 622:  /* sync_new_xorsi */
    case 621:  /* sync_new_iorsi */
    case 620:  /* sync_old_anddi */
    case 619:  /* sync_old_xordi */
    case 618:  /* sync_old_iordi */
    case 617:  /* sync_old_andsi */
    case 616:  /* sync_old_xorsi */
    case 615:  /* sync_old_iorsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 614:  /* sync_anddi */
    case 613:  /* sync_xordi */
    case 612:  /* sync_iordi */
    case 611:  /* sync_andsi */
    case 610:  /* sync_xorsi */
    case 609:  /* sync_iorsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 608:  /* sync_new_subdi */
    case 607:  /* sync_new_subsi */
    case 606:  /* sync_new_adddi */
    case 605:  /* sync_new_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 604:  /* sync_old_subdi */
    case 603:  /* sync_old_subsi */
    case 602:  /* sync_old_adddi */
    case 601:  /* sync_old_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 598:  /* sync_new_nand_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 597:  /* sync_old_nand_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 596:  /* sync_nand_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 595:  /* sync_new_and_12 */
    case 594:  /* sync_new_xor_12 */
    case 593:  /* sync_new_ior_12 */
    case 592:  /* sync_new_sub_12 */
    case 591:  /* sync_new_add_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3), 0);
      recog_data.dup_num[5] = 0;
      break;

    case 590:  /* sync_old_and_12 */
    case 589:  /* sync_old_xor_12 */
    case 588:  /* sync_old_ior_12 */
    case 587:  /* sync_old_sub_12 */
    case 586:  /* sync_old_add_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 585:  /* sync_and_12 */
    case 584:  /* sync_xor_12 */
    case 583:  /* sync_ior_12 */
    case 582:  /* sync_sub_12 */
    case 581:  /* sync_add_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 600:  /* sync_subdi */
    case 599:  /* sync_subsi */
    case 580:  /* sync_adddi */
    case 579:  /* sync_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 578:  /* compare_and_swap_12 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 577:  /* sync_compare_and_swapdi */
    case 576:  /* sync_compare_and_swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 575:  /* *memory_barrier */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 572:  /* tls_get_tp_di */
    case 571:  /* tls_get_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 570:  /* *mips16e_save_restore */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 567:  /* consttable_int */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 637:  /* *movcc_v2sf_di */
    case 636:  /* *movcc_v2sf_si */
    case 566:  /* *movdf_on_cc */
    case 565:  /* *movdf_on_di */
    case 564:  /* *movdf_on_si */
    case 563:  /* *movsf_on_cc */
    case 562:  /* *movsf_on_di */
    case 561:  /* *movsf_on_si */
    case 560:  /* *movdi_on_cc */
    case 559:  /* *movdi_on_di */
    case 558:  /* *movdi_on_si */
    case 557:  /* *movsi_on_cc */
    case 556:  /* *movsi_on_di */
    case 555:  /* *movsi_on_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 552:  /* *prefetch_indexed_di */
    case 551:  /* *prefetch_indexed_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 2));
      break;

    case 550:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 547:  /* call_value_direct_split */
    case 546:  /* call_value_internal_direct */
    case 545:  /* call_value_split */
    case 544:  /* call_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 543:  /* call_direct_split */
    case 542:  /* call_internal_direct */
    case 541:  /* call_split */
    case 540:  /* call_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 549:  /* call_value_multiple_split */
    case 548:  /* call_value_multiple_internal */
    case 539:  /* sibcall_value_multiple_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 894:  /* loongson_pandn_d */
    case 893:  /* loongson_pandn_b */
    case 892:  /* loongson_pandn_h */
    case 891:  /* loongson_pandn_w */
    case 641:  /* mips_pll_ps */
    case 538:  /* sibcall_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 537:  /* sibcall_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 531:  /* eh_set_lr_di */
    case 530:  /* eh_set_lr_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 532:  /* restore_gp */
    case 529:  /* return_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 526:  /* tablejumpdi */
    case 525:  /* tablejumpsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 524:  /* indirect_jumpdi */
    case 523:  /* indirect_jumpsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 522:  /* *mips.md:5498 */
    case 521:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 422:  /* *branch_bit1di_inverted */
    case 421:  /* *branch_bit0di_inverted */
    case 420:  /* *branch_bit1si_inverted */
    case 419:  /* *branch_bit0si_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      break;

    case 418:  /* *branch_bit1di */
    case 417:  /* *branch_bit0di */
    case 416:  /* *branch_bit1si */
    case 415:  /* *branch_bit0si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      break;

    case 414:  /* *branch_equalitydi_mips16 */
    case 413:  /* *branch_equalitysi_mips16 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 412:  /* *branch_equalitydi_inverted */
    case 411:  /* *branch_equalitysi_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 410:  /* *branch_equalitydi */
    case 409:  /* *branch_equalitysi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 408:  /* *branch_orderdi_inverted */
    case 407:  /* *branch_ordersi_inverted */
    case 404:  /* *branch_fp_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 406:  /* *branch_orderdi */
    case 405:  /* *branch_ordersi */
    case 403:  /* *branch_fp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 751:  /* mips_cmpu_le_qb */
    case 750:  /* mips_cmp_le_ph */
    case 749:  /* mips_cmpu_lt_qb */
    case 748:  /* mips_cmp_lt_ph */
    case 747:  /* mips_cmpu_eq_qb */
    case 746:  /* mips_cmp_eq_ph */
    case 383:  /* mips_cache */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 569:  /* align */
    case 568:  /* consttable_float */
    case 378:  /* synci */
    case 376:  /* cprestore */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 919:  /* loongson_biadd */
    case 913:  /* loongson_pmovmskb */
    case 767:  /* mips_rddsp */
    case 745:  /* mips_repl_ph */
    case 744:  /* mips_repl_qb */
    case 742:  /* mips_bitrev */
    case 715:  /* mips_preceu_ph_qbra */
    case 714:  /* mips_preceu_ph_qbla */
    case 713:  /* mips_preceu_ph_qbr */
    case 712:  /* mips_preceu_ph_qbl */
    case 711:  /* mips_precequ_ph_qbra */
    case 710:  /* mips_precequ_ph_qbla */
    case 709:  /* mips_precequ_ph_qbr */
    case 708:  /* mips_precequ_ph_qbl */
    case 707:  /* mips_preceq_w_phr */
    case 706:  /* mips_preceq_w_phl */
    case 699:  /* mips_raddu_w_qb */
    case 682:  /* mips_recip1_ps */
    case 681:  /* mips_recip1_d */
    case 680:  /* mips_recip1_s */
    case 676:  /* mips_rsqrt1_ps */
    case 675:  /* mips_rsqrt1_d */
    case 674:  /* mips_rsqrt1_s */
    case 650:  /* *mips_abs_ps */
    case 648:  /* mips_cvt_ps_pw */
    case 647:  /* mips_cvt_pw_ps */
    case 628:  /* sync_nanddi */
    case 627:  /* sync_nandsi */
    case 375:  /* copygp_mips16 */
    case 371:  /* loadgp_absolute_di */
    case 370:  /* loadgp_absolute_si */
    case 367:  /* mfhc1tf */
    case 366:  /* mfhc1v8qi */
    case 365:  /* mfhc1v4hi */
    case 364:  /* mfhc1v2si */
    case 363:  /* mfhc1v2sf */
    case 362:  /* mfhc1di */
    case 361:  /* mfhc1df */
    case 339:  /* load_lowtf */
    case 338:  /* load_lowv8qi */
    case 337:  /* load_lowv4hi */
    case 336:  /* load_lowv2si */
    case 335:  /* load_lowv2sf */
    case 334:  /* load_lowdi */
    case 333:  /* load_lowdf */
    case 329:  /* mfhidi_ti */
    case 328:  /* mfhisi_ti */
    case 327:  /* mfhisi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 311:  /* *lwxs */
    case 310:  /* *lwxs */
    case 309:  /* *lwxs */
    case 308:  /* *lwxs */
    case 307:  /* *lwxs */
    case 306:  /* *lwxs */
    case 305:  /* *lwxs */
    case 304:  /* *lwxs */
    case 303:  /* *lwxs */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 302:  /* *sdxc1_di */
    case 301:  /* *sdxc1_di */
    case 300:  /* *swxc1_di */
    case 299:  /* *sdxc1_si */
    case 298:  /* *sdxc1_si */
    case 297:  /* *swxc1_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 380:  /* rdhwr_synci_step_di */
    case 379:  /* rdhwr_synci_step_si */
    case 267:  /* *movdi_ra */
    case 266:  /* *movsi_ra */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 879:  /* movv8qi_internal */
    case 878:  /* movv4hi_internal */
    case 877:  /* movv2si_internal */
    case 326:  /* *movv2sf */
    case 325:  /* *movtf_mips16 */
    case 324:  /* *movtf */
    case 323:  /* *movti_mips16 */
    case 322:  /* *movti */
    case 321:  /* *movdf_mips16 */
    case 320:  /* *movdf_softfloat */
    case 319:  /* *movdf_hardfloat */
    case 318:  /* *movsf_mips16 */
    case 317:  /* *movsf_softfloat */
    case 316:  /* *movsf_hardfloat */
    case 315:  /* *movqi_mips16 */
    case 314:  /* *movqi_internal */
    case 313:  /* *movhi_mips16 */
    case 312:  /* *movhi_internal */
    case 290:  /* movcc */
    case 289:  /* *movv4uqq_mips16 */
    case 288:  /* *movv4qq_mips16 */
    case 287:  /* *movv2uha_mips16 */
    case 286:  /* *movv2ha_mips16 */
    case 285:  /* *movv2uhq_mips16 */
    case 284:  /* *movv2hq_mips16 */
    case 283:  /* *movv4qi_mips16 */
    case 282:  /* *movv2hi_mips16 */
    case 281:  /* *movsi_mips16 */
    case 280:  /* *movv4uqq_internal */
    case 279:  /* *movv4qq_internal */
    case 278:  /* *movv2uha_internal */
    case 277:  /* *movv2ha_internal */
    case 276:  /* *movv2uhq_internal */
    case 275:  /* *movv2hq_internal */
    case 274:  /* *movv4qi_internal */
    case 273:  /* *movv2hi_internal */
    case 272:  /* *movsi_internal */
    case 271:  /* *movdi_64bit_mips16 */
    case 270:  /* *movdi_64bit */
    case 269:  /* *movdi_32bit_mips16 */
    case 268:  /* *movdi_32bit */
    case 257:  /* *got_dispdi */
    case 256:  /* *got_dispsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 251:  /* *lea64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 249:  /* mov_sdr */
    case 248:  /* mov_swr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 921:  /* loongson_pshufh */
    case 815:  /* mips_dpsx_w_ph */
    case 814:  /* mips_dpax_w_ph */
    case 798:  /* mips_prepend */
    case 797:  /* mips_precr_sra_r_ph_w */
    case 796:  /* mips_precr_sra_ph_w */
    case 792:  /* mips_mulsa_w_ph */
    case 786:  /* mips_dps_w_ph */
    case 785:  /* mips_dpa_w_ph */
    case 781:  /* mips_balign */
    case 780:  /* mips_append */
    case 732:  /* mips_dpsu_h_qbr */
    case 731:  /* mips_dpsu_h_qbl */
    case 730:  /* mips_dpau_h_qbr */
    case 729:  /* mips_dpau_h_qbl */
    case 656:  /* mips_cabs_cond_ps */
    case 655:  /* mips_c_cond_ps */
    case 652:  /* mips_cabs_cond_d */
    case 651:  /* mips_cabs_cond_s */
    case 645:  /* mips_alnv_ps */
    case 638:  /* mips_cond_move_tf_ps */
    case 245:  /* mov_ldr */
    case 244:  /* mov_lwr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 941:  /* vec_interleave_lowv8qi */
    case 940:  /* vec_interleave_lowv4hi */
    case 939:  /* vec_interleave_lowv2si */
    case 938:  /* vec_interleave_highv8qi */
    case 937:  /* vec_interleave_highv4hi */
    case 936:  /* vec_interleave_highv2si */
    case 931:  /* loongson_psubd */
    case 920:  /* loongson_psadbh */
    case 918:  /* loongson_pasubub */
    case 917:  /* loongson_pmuluw */
    case 916:  /* loongson_pmullh */
    case 915:  /* smulv4hi3_highpart */
    case 914:  /* umulv4hi3_highpart */
    case 908:  /* loongson_pmaddhw */
    case 907:  /* loongson_pinsrh_3 */
    case 906:  /* loongson_pinsrh_2 */
    case 905:  /* loongson_pinsrh_1 */
    case 904:  /* loongson_pinsrh_0 */
    case 903:  /* loongson_pextrh */
    case 902:  /* loongson_pcmpgtb */
    case 901:  /* loongson_pcmpgth */
    case 900:  /* loongson_pcmpgtw */
    case 899:  /* loongson_pcmpeqb */
    case 898:  /* loongson_pcmpeqh */
    case 897:  /* loongson_pcmpeqw */
    case 896:  /* loongson_pavgb */
    case 895:  /* loongson_pavgh */
    case 886:  /* loongson_paddd */
    case 813:  /* mips_subqh_r_w */
    case 812:  /* mips_subqh_w */
    case 811:  /* mips_subqh_r_ph */
    case 810:  /* mips_subqh_ph */
    case 809:  /* mips_addqh_r_w */
    case 808:  /* mips_addqh_w */
    case 807:  /* mips_addqh_r_ph */
    case 806:  /* mips_addqh_ph */
    case 805:  /* mips_subuh_r_qb */
    case 804:  /* mips_subuh_qb */
    case 801:  /* mips_shrl_ph */
    case 800:  /* mips_shra_r_qb */
    case 799:  /* mips_shra_qb */
    case 795:  /* mips_precr_qb_ph */
    case 779:  /* mips_adduh_r_qb */
    case 778:  /* mips_adduh_qb */
    case 764:  /* mips_shilo */
    case 757:  /* mips_packrl_ph */
    case 756:  /* mips_pick_qb */
    case 755:  /* mips_pick_ph */
    case 754:  /* mips_cmpgu_le_qb */
    case 753:  /* mips_cmpgu_lt_qb */
    case 752:  /* mips_cmpgu_eq_qb */
    case 743:  /* mips_insv */
    case 723:  /* mips_shra_r_ph */
    case 722:  /* mips_shra_r_w */
    case 721:  /* mips_shra_ph */
    case 720:  /* mips_shrl_qb */
    case 703:  /* mips_precrq_ph_w */
    case 702:  /* mips_precrq_qb_ph */
    case 698:  /* mips_modsub */
    case 685:  /* mips_recip2_ps */
    case 684:  /* mips_recip2_d */
    case 683:  /* mips_recip2_s */
    case 679:  /* mips_rsqrt2_ps */
    case 678:  /* mips_rsqrt2_d */
    case 677:  /* mips_rsqrt2_s */
    case 649:  /* mips_mulr_ps */
    case 646:  /* mips_addr_ps */
    case 534:  /* load_calldi */
    case 533:  /* load_callsi */
    case 374:  /* loadgp_rtp_di */
    case 373:  /* loadgp_rtp_si */
    case 369:  /* loadgp_newabi_di */
    case 368:  /* loadgp_newabi_si */
    case 360:  /* mthc1tf */
    case 359:  /* mthc1v8qi */
    case 358:  /* mthc1v4hi */
    case 357:  /* mthc1v2si */
    case 356:  /* mthc1v2sf */
    case 355:  /* mthc1di */
    case 354:  /* mthc1df */
    case 353:  /* store_wordtf */
    case 352:  /* store_wordv8qi */
    case 351:  /* store_wordv4hi */
    case 350:  /* store_wordv2si */
    case 349:  /* store_wordv2sf */
    case 348:  /* store_worddi */
    case 347:  /* store_worddf */
    case 346:  /* load_hightf */
    case 345:  /* load_highv8qi */
    case 344:  /* load_highv4hi */
    case 343:  /* load_highv2si */
    case 342:  /* load_highv2sf */
    case 341:  /* load_highdi */
    case 340:  /* load_highdf */
    case 332:  /* mthidi_ti */
    case 331:  /* mthisi_ti */
    case 330:  /* mthisi_di */
    case 261:  /* load_gotdi */
    case 260:  /* load_gotsi */
    case 247:  /* mov_sdl */
    case 246:  /* mov_swl */
    case 243:  /* mov_ldl */
    case 242:  /* mov_lwl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 239:  /* insvdi */
    case 238:  /* insvsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 237:  /* *extzv_truncdi_exts */
    case 236:  /* *extzv_truncsi_exts */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 235:  /* extzvdi */
    case 234:  /* extzvsi */
    case 233:  /* extvdi */
    case 232:  /* extvsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 225:  /* fix_truncsfsi2_macro */
    case 223:  /* fix_truncdfsi2_macro */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 188:  /* *mips.md:2818 */
    case 187:  /* *zero_extenddi_truncqi */
    case 186:  /* *zero_extendsi_truncqi */
    case 185:  /* *zero_extenddi_trunchi */
    case 184:  /* *zero_extendsi_trunchi */
    case 183:  /* *extendsi_truncatehi */
    case 182:  /* *extendsi_truncateqi */
    case 181:  /* *extenddi_truncatehi */
    case 180:  /* *extenddi_truncateqi */
    case 173:  /* *lshr32_truncsi */
    case 172:  /* *lshr32_trunchi */
    case 171:  /* *lshr32_truncqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 640:  /* mips_puu_ps */
    case 132:  /* *rsqrtv2sfa */
    case 131:  /* *rsqrtdfa */
    case 130:  /* *rsqrtsfa */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 466:  /* *sgeu_didi */
    case 465:  /* *sge_didi */
    case 464:  /* *sgeu_disi */
    case 463:  /* *sge_disi */
    case 462:  /* *sgeu_sidi */
    case 461:  /* *sge_sidi */
    case 460:  /* *sgeu_sisi */
    case 459:  /* *sge_sisi */
    case 438:  /* *sne_zero_didi */
    case 437:  /* *sne_zero_disi */
    case 436:  /* *sne_zero_sidi */
    case 435:  /* *sne_zero_sisi */
    case 430:  /* *seq_zero_didi_mips16 */
    case 429:  /* *seq_zero_disi_mips16 */
    case 428:  /* *seq_zero_sidi_mips16 */
    case 427:  /* *seq_zero_sisi_mips16 */
    case 426:  /* *seq_zero_didi */
    case 425:  /* *seq_zero_disi */
    case 424:  /* *seq_zero_sidi */
    case 423:  /* *seq_zero_sisi */
    case 259:  /* *got_pagedi */
    case 258:  /* *got_pagesi */
    case 253:  /* *xgot_hidi */
    case 252:  /* *xgot_hisi */
    case 250:  /* *lea_high64 */
    case 231:  /* floatdisf2 */
    case 230:  /* floatsisf2 */
    case 229:  /* floatdidf2 */
    case 228:  /* floatsidf2 */
    case 227:  /* fix_truncsfdi2 */
    case 226:  /* fix_truncdfdi2 */
    case 224:  /* fix_truncsfsi2_insn */
    case 222:  /* fix_truncdfsi2_insn */
    case 221:  /* extendsfdf2 */
    case 220:  /* *extendqihi2_seb */
    case 219:  /* *extendqihi2 */
    case 218:  /* *extendqihi2_mips16e */
    case 217:  /* *extendhidi2_seh */
    case 216:  /* *extendqidi2_seb */
    case 215:  /* *extendhisi2_seh */
    case 214:  /* *extendqisi2_seb */
    case 213:  /* *extendhidi2 */
    case 212:  /* *extendqidi2 */
    case 211:  /* *extendhisi2 */
    case 210:  /* *extendqisi2 */
    case 209:  /* *extendhidi2_mips16e */
    case 208:  /* *extendqidi2_mips16e */
    case 207:  /* *extendhisi2_mips16e */
    case 206:  /* *extendqisi2_mips16e */
    case 205:  /* extendsidi2 */
    case 204:  /* *zero_extendqihi2_mips16 */
    case 203:  /* *zero_extendqihi2 */
    case 202:  /* *zero_extendhidi2_mips16 */
    case 201:  /* *zero_extendqidi2_mips16 */
    case 200:  /* *zero_extendhisi2_mips16 */
    case 199:  /* *zero_extendqisi2_mips16 */
    case 198:  /* *zero_extendhidi2_mips16e */
    case 197:  /* *zero_extendqidi2_mips16e */
    case 196:  /* *zero_extendhisi2_mips16e */
    case 195:  /* *zero_extendqisi2_mips16e */
    case 194:  /* *zero_extendhidi2 */
    case 193:  /* *zero_extendqidi2 */
    case 192:  /* *zero_extendhisi2 */
    case 191:  /* *zero_extendqisi2 */
    case 190:  /* *clear_upper32 */
    case 189:  /* zero_extendsidi2 */
    case 167:  /* truncdiqi2 */
    case 166:  /* truncdihi2 */
    case 165:  /* truncdisi2 */
    case 164:  /* truncdfsf2 */
    case 149:  /* one_cmpldi2 */
    case 148:  /* one_cmplsi2 */
    case 147:  /* negv2sf2 */
    case 146:  /* negdf2 */
    case 145:  /* negsf2 */
    case 144:  /* negdi2 */
    case 143:  /* negsi2 */
    case 142:  /* popcountdi2 */
    case 141:  /* popcountsi2 */
    case 140:  /* clzdi2 */
    case 139:  /* clzsi2 */
    case 138:  /* absv2sf2 */
    case 137:  /* absdf2 */
    case 136:  /* abssf2 */
    case 129:  /* sqrtv2sf2 */
    case 128:  /* sqrtdf2 */
    case 127:  /* sqrtsf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 667:  /* sungt_ps */
    case 666:  /* sunge_ps */
    case 665:  /* sgt_ps */
    case 664:  /* sge_ps */
    case 663:  /* sle_ps */
    case 662:  /* slt_ps */
    case 661:  /* seq_ps */
    case 660:  /* sunle_ps */
    case 659:  /* sunlt_ps */
    case 658:  /* suneq_ps */
    case 657:  /* sunordered_ps */
    case 126:  /* udivmoddi4_hilo_ti */
    case 125:  /* divmoddi4_hilo_ti */
    case 124:  /* udivmodsi4_hilo_ti */
    case 123:  /* divmodsi4_hilo_ti */
    case 122:  /* udivmodsi4_hilo_di */
    case 121:  /* divmodsi4_hilo_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 120:  /* udivmoddi4 */
    case 119:  /* udivmodsi4 */
    case 118:  /* divmoddi4 */
    case 117:  /* divmodsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 110:  /* *nmsub3v2sf_fastmath */
    case 109:  /* *nmsub3df_fastmath */
    case 108:  /* *nmsub3sf_fastmath */
    case 107:  /* *nmsub4v2sf_fastmath */
    case 106:  /* *nmsub4df_fastmath */
    case 105:  /* *nmsub4sf_fastmath */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 104:  /* *nmsub3v2sf */
    case 103:  /* *nmsub3df */
    case 102:  /* *nmsub3sf */
    case 101:  /* *nmsub4v2sf */
    case 100:  /* *nmsub4df */
    case 99:  /* *nmsub4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 98:  /* *nmadd3v2sf_fastmath */
    case 97:  /* *nmadd3df_fastmath */
    case 96:  /* *nmadd3sf_fastmath */
    case 95:  /* *nmadd4v2sf_fastmath */
    case 94:  /* *nmadd4df_fastmath */
    case 93:  /* *nmadd4sf_fastmath */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 92:  /* *nmadd3v2sf */
    case 91:  /* *nmadd3df */
    case 90:  /* *nmadd3sf */
    case 89:  /* *nmadd4v2sf */
    case 88:  /* *nmadd4df */
    case 87:  /* *nmadd4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 241:  /* *cinsdi */
    case 240:  /* *cinssi */
    case 86:  /* *msub3v2sf */
    case 85:  /* *msub3df */
    case 84:  /* *msub3sf */
    case 83:  /* *msub4v2sf */
    case 82:  /* *msub4df */
    case 81:  /* *msub4sf */
    case 80:  /* *madd3v2sf */
    case 79:  /* *madd3df */
    case 78:  /* *madd3sf */
    case 77:  /* *madd4v2sf */
    case 76:  /* *madd4df */
    case 75:  /* *madd4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 74:  /* umaddsidi4 */
    case 73:  /* maddsidi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 72:  /* madsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 65:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 64:  /* *smulsi3_highpart_neg_mulhi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 67:  /* umuldi3_highpart */
    case 66:  /* smuldi3_highpart */
    case 63:  /* umulsi3_highpart_mulhi_internal */
    case 62:  /* smulsi3_highpart_mulhi_internal */
    case 61:  /* umulsi3_highpart_internal */
    case 60:  /* smulsi3_highpart_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 59:  /* umsubsidi4 */
    case 58:  /* msubsidi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 57:  /* *mulsu_di */
    case 56:  /* *muls_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 55:  /* umulsidi3_64bit_hilo */
    case 54:  /* mulsidi3_64bit_hilo */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 53:  /* umulsidi3_64bit */
    case 52:  /* mulsidi3_64bit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 71:  /* umulditi3_r4000 */
    case 70:  /* mulditi3_r4000 */
    case 51:  /* umulsidi3_32bit_r4000 */
    case 50:  /* mulsidi3_32bit_r4000 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 882:  /* vec_pack_usat_v4hi */
    case 881:  /* vec_pack_ssat_v4hi */
    case 880:  /* vec_pack_ssat_v2si */
    case 794:  /* mips_multu */
    case 793:  /* mips_mult */
    case 642:  /* mips_plu_ps */
    case 163:  /* *nordi3 */
    case 162:  /* *norsi3 */
    case 69:  /* umulditi3_internal */
    case 68:  /* mulditi3_internal */
    case 49:  /* umulsidi3_32bit */
    case 48:  /* mulsidi3_32bit */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 47:  /* *muls */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 45:  /* *msac2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 0;
      break;

    case 44:  /* *macc2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 0;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[3] = 0;
      break;

    case 46:  /* *mul_sub_si */
    case 43:  /* *msac_using_macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 42:  /* *msac */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 41:  /* *macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 40:  /* *mul_acc_si_r3900 */
    case 39:  /* *mul_acc_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 38:  /* muldi3_r4000 */
    case 37:  /* mulsi3_r4000 */
    case 34:  /* muldi3_mul3 */
    case 33:  /* mulsi3_mul3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 771:  /* mips_lhx_di */
    case 770:  /* mips_lhx_si */
    case 769:  /* mips_lbux_di */
    case 768:  /* mips_lbux_si */
    case 19:  /* *baddu_didi */
    case 18:  /* *baddu_disi */
    case 17:  /* *baddu_si_el */
    case 16:  /* *baddu_si_eb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 773:  /* mips_lwx_di */
    case 772:  /* mips_lwx_si */
    case 393:  /* *lshrsi3_extend */
    case 392:  /* *ashrsi3_extend */
    case 391:  /* *ashlsi3_extend */
    case 296:  /* *ldxc1_di */
    case 295:  /* *ldxc1_di */
    case 294:  /* *lwxc1_di */
    case 293:  /* *ldxc1_si */
    case 292:  /* *ldxc1_si */
    case 291:  /* *lwxc1_si */
    case 179:  /* *lshr_truncsi_exts */
    case 178:  /* *ashr_truncsi_exts */
    case 177:  /* *lshr_trunchi_exts */
    case 176:  /* *ashr_trunchi_exts */
    case 175:  /* *lshr_truncqi_exts */
    case 174:  /* *ashr_truncqi_exts */
    case 170:  /* *ashr_truncsi */
    case 169:  /* *ashr_trunchi */
    case 168:  /* *ashr_truncqi */
    case 135:  /* *rsqrtv2sfb */
    case 134:  /* *rsqrtdfb */
    case 133:  /* *rsqrtsfb */
    case 25:  /* *subsi3_extended */
    case 15:  /* *addsi3_extended_mips16 */
    case 14:  /* *addsi3_extended */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 949:  /* umoddi3 */
    case 948:  /* moddi3 */
    case 947:  /* umodsi3 */
    case 946:  /* modsi3 */
    case 945:  /* udivdi3 */
    case 944:  /* divdi3 */
    case 943:  /* udivsi3 */
    case 942:  /* divsi3 */
    case 935:  /* ussubv8qi3 */
    case 934:  /* ussubv4hi3 */
    case 933:  /* sssubv8qi3 */
    case 932:  /* sssubv4hi3 */
    case 930:  /* subv8qi3 */
    case 929:  /* subv4hi3 */
    case 928:  /* subv2si3 */
    case 927:  /* loongson_psrlh */
    case 926:  /* loongson_psrlw */
    case 925:  /* loongson_psrah */
    case 924:  /* loongson_psraw */
    case 923:  /* loongson_psllh */
    case 922:  /* loongson_psllw */
    case 912:  /* uminv8qi3 */
    case 911:  /* sminv4hi3 */
    case 910:  /* umaxv8qi3 */
    case 909:  /* smaxv4hi3 */
    case 890:  /* usaddv8qi3 */
    case 889:  /* usaddv4hi3 */
    case 888:  /* ssaddv8qi3 */
    case 887:  /* ssaddv4hi3 */
    case 885:  /* addv8qi3 */
    case 884:  /* addv4hi3 */
    case 883:  /* addv2si3 */
    case 859:  /* subuda3 */
    case 858:  /* subusa3 */
    case 857:  /* subuha3 */
    case 856:  /* subda3 */
    case 855:  /* subsa3 */
    case 854:  /* subha3 */
    case 853:  /* subudq3 */
    case 852:  /* subusq3 */
    case 851:  /* subuhq3 */
    case 850:  /* subuqq3 */
    case 849:  /* subdq3 */
    case 848:  /* subsq3 */
    case 847:  /* subhq3 */
    case 846:  /* subqq3 */
    case 833:  /* adduda3 */
    case 832:  /* addusa3 */
    case 831:  /* adduha3 */
    case 830:  /* addda3 */
    case 829:  /* addsa3 */
    case 828:  /* addha3 */
    case 827:  /* addudq3 */
    case 826:  /* addusq3 */
    case 825:  /* adduhq3 */
    case 824:  /* adduqq3 */
    case 823:  /* adddq3 */
    case 822:  /* addsq3 */
    case 821:  /* addhq3 */
    case 820:  /* addqq3 */
    case 643:  /* vec_initv2sf_internal */
    case 639:  /* mips_pul_ps */
    case 520:  /* sungt_df */
    case 519:  /* sunge_df */
    case 518:  /* sgt_df */
    case 517:  /* sge_df */
    case 516:  /* sungt_sf */
    case 515:  /* sunge_sf */
    case 514:  /* sgt_sf */
    case 513:  /* sge_sf */
    case 512:  /* sle_df */
    case 511:  /* slt_df */
    case 510:  /* seq_df */
    case 509:  /* sunle_df */
    case 508:  /* sunlt_df */
    case 507:  /* suneq_df */
    case 506:  /* sunordered_df */
    case 505:  /* sle_sf */
    case 504:  /* slt_sf */
    case 503:  /* seq_sf */
    case 502:  /* sunle_sf */
    case 501:  /* sunlt_sf */
    case 500:  /* suneq_sf */
    case 499:  /* sunordered_sf */
    case 498:  /* *sleu_didi_mips16 */
    case 497:  /* *sle_didi_mips16 */
    case 496:  /* *sleu_disi_mips16 */
    case 495:  /* *sle_disi_mips16 */
    case 494:  /* *sleu_sidi_mips16 */
    case 493:  /* *sle_sidi_mips16 */
    case 492:  /* *sleu_sisi_mips16 */
    case 491:  /* *sle_sisi_mips16 */
    case 490:  /* *sleu_didi */
    case 489:  /* *sle_didi */
    case 488:  /* *sleu_disi */
    case 487:  /* *sle_disi */
    case 486:  /* *sleu_sidi */
    case 485:  /* *sle_sidi */
    case 484:  /* *sleu_sisi */
    case 483:  /* *sle_sisi */
    case 482:  /* *sltu_didi_mips16 */
    case 481:  /* *slt_didi_mips16 */
    case 480:  /* *sltu_disi_mips16 */
    case 479:  /* *slt_disi_mips16 */
    case 478:  /* *sltu_sidi_mips16 */
    case 477:  /* *slt_sidi_mips16 */
    case 476:  /* *sltu_sisi_mips16 */
    case 475:  /* *slt_sisi_mips16 */
    case 474:  /* *sltu_didi */
    case 473:  /* *slt_didi */
    case 472:  /* *sltu_disi */
    case 471:  /* *slt_disi */
    case 470:  /* *sltu_sidi */
    case 469:  /* *slt_sidi */
    case 468:  /* *sltu_sisi */
    case 467:  /* *slt_sisi */
    case 458:  /* *sgtu_didi_mips16 */
    case 457:  /* *sgt_didi_mips16 */
    case 456:  /* *sgtu_disi_mips16 */
    case 455:  /* *sgt_disi_mips16 */
    case 454:  /* *sgtu_sidi_mips16 */
    case 453:  /* *sgt_sidi_mips16 */
    case 452:  /* *sgtu_sisi_mips16 */
    case 451:  /* *sgt_sisi_mips16 */
    case 450:  /* *sgtu_didi */
    case 449:  /* *sgt_didi */
    case 448:  /* *sgtu_disi */
    case 447:  /* *sgt_disi */
    case 446:  /* *sgtu_sidi */
    case 445:  /* *sgt_sidi */
    case 444:  /* *sgtu_sisi */
    case 443:  /* *sgt_sisi */
    case 442:  /* *sne_didi_sne */
    case 441:  /* *sne_disi_sne */
    case 440:  /* *sne_sidi_sne */
    case 439:  /* *sne_sisi_sne */
    case 434:  /* *seq_didi_seq */
    case 433:  /* *seq_disi_seq */
    case 432:  /* *seq_sidi_seq */
    case 431:  /* *seq_sisi_seq */
    case 402:  /* rotrdi3 */
    case 401:  /* rotrsi3 */
    case 400:  /* *mips.md:4973 */
    case 399:  /* *lshrdi3_mips16 */
    case 398:  /* *ashrdi3_mips16 */
    case 397:  /* *ashldi3_mips16 */
    case 396:  /* *lshrsi3_mips16 */
    case 395:  /* *ashrsi3_mips16 */
    case 394:  /* *ashlsi3_mips16 */
    case 390:  /* *lshrdi3 */
    case 389:  /* *ashrdi3 */
    case 388:  /* *ashldi3 */
    case 387:  /* *lshrsi3 */
    case 386:  /* *ashrsi3 */
    case 385:  /* *ashlsi3 */
    case 265:  /* *lowdi_mips16 */
    case 264:  /* *lowsi_mips16 */
    case 263:  /* *lowdi */
    case 262:  /* *lowsi */
    case 255:  /* *xgot_lodi */
    case 254:  /* *xgot_losi */
    case 161:  /* *mips.md:2637 */
    case 160:  /* *mips.md:2637 */
    case 159:  /* *mips.md:2626 */
    case 158:  /* *mips.md:2626 */
    case 157:  /* *iordi3_mips16 */
    case 156:  /* *iorsi3_mips16 */
    case 155:  /* *iordi3 */
    case 154:  /* *iorsi3 */
    case 153:  /* *anddi3_mips16 */
    case 152:  /* *andsi3_mips16 */
    case 151:  /* *anddi3 */
    case 150:  /* *andsi3 */
    case 116:  /* *recipv2sf3 */
    case 115:  /* *recipdf3 */
    case 114:  /* *recipsf3 */
    case 113:  /* *divv2sf3 */
    case 112:  /* *divdf3 */
    case 111:  /* *divsf3 */
    case 36:  /* muldi3_internal */
    case 35:  /* mulsi3_internal */
    case 32:  /* muldi3_mul3_ls2ef */
    case 31:  /* mulsi3_mul3_ls2ef */
    case 30:  /* mulv2sf3 */
    case 29:  /* *muldf3_r4300 */
    case 28:  /* *mulsf3_r4300 */
    case 27:  /* *muldf3 */
    case 26:  /* *mulsf3 */
    case 24:  /* subdi3 */
    case 23:  /* subsi3 */
    case 22:  /* subv2sf3 */
    case 21:  /* subdf3 */
    case 20:  /* subsf3 */
    case 13:  /* *adddi3_mips16 */
    case 12:  /* *addsi3_mips16 */
    case 11:  /* *adddi3 */
    case 10:  /* *addsi3 */
    case 9:  /* addv2sf3 */
    case 8:  /* adddf3 */
    case 7:  /* addsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 6:  /* *conditional_trapdi */
    case 5:  /* *conditional_trapsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 574:  /* *tls_get_tp_di_split */
    case 573:  /* *tls_get_tp_si_split */
    case 554:  /* hazard_nop */
    case 553:  /* nop */
    case 536:  /* update_got_version */
    case 535:  /* set_got_version */
    case 528:  /* *return */
    case 527:  /* blockage */
    case 384:  /* r10k_cache_barrier */
    case 382:  /* clear_hazard_di */
    case 381:  /* clear_hazard_si */
    case 377:  /* sync */
    case 372:  /* loadgp_blockage */
    case 4:  /* trap */
    case 3:  /* ls2_falu2_turn_enabled_insn */
    case 2:  /* ls2_falu1_turn_enabled_insn */
    case 1:  /* ls2_alu2_turn_enabled_insn */
    case 0:  /* ls2_alu1_turn_enabled_insn */
      break;

    }
}
