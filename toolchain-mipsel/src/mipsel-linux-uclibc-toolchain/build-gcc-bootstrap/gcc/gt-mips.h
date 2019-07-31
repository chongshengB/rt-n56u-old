/* Type information for config/mips/mips.c.
   Copyright (C) 2004, 2007 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_mips16_local_alias (void *x_p)
{
  struct mips16_local_alias * const x = (struct mips16_local_alias *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).func);
      gt_ggc_m_7rtx_def ((*x).local);
    }
}

void
gt_ggc_mx_mflip_mips16_entry (void *x_p)
{
  struct mflip_mips16_entry * const x = (struct mflip_mips16_entry *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_S ((*x).name);
    }
}

void
gt_ggc_mx_machine_function (void *x_p)
{
  struct machine_function * const x = (struct machine_function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).mips16_gp_pseudo_rtx);
    }
}

void
gt_ggc_m_P18mips16_local_alias4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_18mips16_local_alias ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_ggc_m_P18mflip_mips16_entry4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_18mflip_mips16_entry ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_pch_nx_mips16_local_alias (void *x_p)
{
  struct mips16_local_alias * const x = (struct mips16_local_alias *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_18mips16_local_alias, gt_ggc_e_18mips16_local_alias))
    {
      gt_pch_n_7rtx_def ((*x).func);
      gt_pch_n_7rtx_def ((*x).local);
    }
}

void
gt_pch_nx_mflip_mips16_entry (void *x_p)
{
  struct mflip_mips16_entry * const x = (struct mflip_mips16_entry *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_18mflip_mips16_entry, gt_ggc_e_18mflip_mips16_entry))
    {
      gt_pch_n_S ((*x).name);
    }
}

void
gt_pch_nx_machine_function (void *x_p)
{
  struct machine_function * const x = (struct machine_function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16machine_function, gt_ggc_e_16machine_function))
    {
      gt_pch_n_7rtx_def ((*x).mips16_gp_pseudo_rtx);
    }
}

void
gt_pch_n_P18mips16_local_alias4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P18mips16_local_alias4htab, gt_e_P18mips16_local_alias4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_18mips16_local_alias ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P18mips16_local_alias4htab, gt_types_enum_last);
      }
    }
}

void
gt_pch_n_P18mflip_mips16_entry4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P18mflip_mips16_entry4htab, gt_e_P18mflip_mips16_entry4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_18mflip_mips16_entry ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P18mflip_mips16_entry4htab, gt_types_enum_last);
      }
    }
}

void
gt_pch_p_18mips16_local_alias (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct mips16_local_alias * const x ATTRIBUTE_UNUSED = (struct mips16_local_alias *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).func), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).local), cookie);
}

void
gt_pch_p_18mflip_mips16_entry (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct mflip_mips16_entry * const x ATTRIBUTE_UNUSED = (struct mflip_mips16_entry *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).name), cookie);
}

void
gt_pch_p_16machine_function (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct machine_function * const x ATTRIBUTE_UNUSED = (struct machine_function *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).mips16_gp_pseudo_rtx), cookie);
}

void
gt_pch_p_P18mips16_local_alias4htab (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct htab * const x ATTRIBUTE_UNUSED = (struct htab *)x_p;
  if ((*x).entries != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
      if ((void *)((*x).entries) == this_obj)
        op (&((*x).entries[i0]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).entries), cookie);
  }
}

void
gt_pch_p_P18mflip_mips16_entry4htab (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct htab * const x ATTRIBUTE_UNUSED = (struct htab *)x_p;
  if ((*x).entries != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
      if ((void *)((*x).entries) == this_obj)
        op (&((*x).entries[i0]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).entries), cookie);
  }
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_mips_h[] = {
  {
    &mips_gnu_local_gp,
    1,
    sizeof (mips_gnu_local_gp),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &mips16_local_aliases,
    1,
    sizeof (mips16_local_aliases),
    &gt_ggc_m_P18mips16_local_alias4htab,
    &gt_pch_n_P18mips16_local_alias4htab
  },
  {
    &mips_tls_symbol,
    1,
    sizeof (mips_tls_symbol),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &mflip_mips16_htab,
    1,
    sizeof (mflip_mips16_htab),
    &gt_ggc_m_P18mflip_mips16_entry4htab,
    &gt_pch_n_P18mflip_mips16_entry4htab
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_mips_h[] = {
  { &was_mips16_pch_p, 1, sizeof (was_mips16_pch_p), NULL, NULL },
  { &mips16_flipper, 1, sizeof (mips16_flipper), NULL, NULL },
  { &mips_output_filename_first_time, 1, sizeof (mips_output_filename_first_time), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

