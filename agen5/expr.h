/*  -*- buffer-read-only: t -*- vi: set ro:
 *
 *  DO NOT EDIT THIS FILE   (expr.h)
 *
 *  It has been AutoGen-ed
 *  From the definitions    expr.def
 *  and the template file   snarf.tpl
 *
 *  Copyright (C) 1992-2015 Bruce Korb - all rights reserved
 *
 *  AutoGen is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  AutoGen is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/** \file expr.h
 *  Guile Implementation Routines - for the autogen group
 *
 * @addtogroup autogen
 * @{
 */
#ifndef GUILE_PROCS_EXPR_H_GUARD
#define GUILE_PROCS_EXPR_H_GUARD 1

#if GUILE_VERSION >= 108000
# include <libguile.h>
#else
# include <guile/gh.h>
#endif

typedef enum {
    GH_TYPE_UNDEFINED = 0,
    GH_TYPE_BOOLEAN,
    GH_TYPE_SYMBOL,
    GH_TYPE_CHAR,
    GH_TYPE_VECTOR,
    GH_TYPE_PAIR,
    GH_TYPE_NUMBER,
    GH_TYPE_STRING,
    GH_TYPE_PROCEDURE,
    GH_TYPE_LIST,
    GH_TYPE_INEXACT,
    GH_TYPE_EXACT
} teGuileType;

extern SCM ag_scm_ag_fprintf(SCM, SCM, SCM);
extern SCM ag_scm_ag_function_p(SCM);
extern SCM ag_scm_agpl(SCM, SCM);
extern SCM ag_scm_base_name(void);
extern SCM ag_scm_bsd(SCM, SCM, SCM);
extern SCM ag_scm_c_string(SCM);
extern SCM ag_scm_chdir(SCM);
extern SCM ag_scm_count(SCM);
extern SCM ag_scm_def_file(void);
extern SCM ag_scm_def_file_line(SCM, SCM);
extern SCM ag_scm_dne(SCM, SCM, SCM);
extern SCM ag_scm_emit(SCM);
extern SCM ag_scm_error(SCM);
extern SCM ag_scm_error_source_line(void);
extern SCM ag_scm_exist_p(SCM);
extern SCM ag_scm_extract(SCM, SCM, SCM, SCM);
extern SCM ag_scm_find_file(SCM, SCM);
extern SCM ag_scm_first_for_p(SCM);
extern SCM ag_scm_for_by(SCM);
extern SCM ag_scm_for_from(SCM);
extern SCM ag_scm_for_index(SCM);
extern SCM ag_scm_for_sep(SCM);
extern SCM ag_scm_for_to(SCM);
extern SCM ag_scm_format_arg_count(SCM);
extern SCM ag_scm_found_for_p(SCM);
extern SCM ag_scm_fprintf(SCM, SCM, SCM);
extern SCM ag_scm_get(SCM, SCM);
extern SCM ag_scm_get_c_name(SCM);
extern SCM ag_scm_get_down_name(SCM);
extern SCM ag_scm_get_up_name(SCM);
extern SCM ag_scm_gperf(SCM, SCM);
extern SCM ag_scm_gpl(SCM, SCM);
extern SCM ag_scm_hide_email(SCM, SCM);
extern SCM ag_scm_high_lim(SCM);
extern SCM ag_scm_in_p(SCM, SCM);
extern SCM ag_scm_insert_file(SCM);
extern SCM ag_scm_join(SCM, SCM);
extern SCM ag_scm_kr_string(SCM);
extern SCM ag_scm_last_for_p(SCM);
extern SCM ag_scm_len(SCM);
extern SCM ag_scm_lgpl(SCM, SCM, SCM);
extern SCM ag_scm_license(SCM, SCM, SCM, SCM);
extern SCM ag_scm_license_description(SCM, SCM, SCM, SCM);
extern SCM ag_scm_license_full(SCM, SCM, SCM, SCM, SCM);
extern SCM ag_scm_license_info(SCM, SCM, SCM, SCM, SCM);
extern SCM ag_scm_license_name(SCM);
extern SCM ag_scm_low_lim(SCM);
extern SCM ag_scm_make_gperf(SCM, SCM);
extern SCM ag_scm_make_header_guard(SCM);
extern SCM ag_scm_make_tmp_dir(void);
extern SCM ag_scm_makefile_script(SCM);
extern SCM ag_scm_match_value_p(SCM, SCM, SCM);
extern SCM ag_scm_max(SCM);
extern SCM ag_scm_max_file_time(void);
extern SCM ag_scm_min(SCM);
extern SCM ag_scm_mk_gettextable(SCM);
extern SCM ag_scm_out_delete(void);
extern SCM ag_scm_out_depth(void);
extern SCM ag_scm_out_emit_suspended(SCM);
extern SCM ag_scm_out_line(void);
extern SCM ag_scm_out_move(SCM);
extern SCM ag_scm_out_name(void);
extern SCM ag_scm_out_pop(SCM);
extern SCM ag_scm_out_push_add(SCM);
extern SCM ag_scm_out_push_new(SCM);
extern SCM ag_scm_out_resume(SCM);
extern SCM ag_scm_out_suspend(SCM);
extern SCM ag_scm_out_switch(SCM);
extern SCM ag_scm_output_file_next_line(SCM, SCM);
extern SCM ag_scm_prefix(SCM, SCM);
extern SCM ag_scm_printf(SCM, SCM);
extern SCM ag_scm_raw_shell_str(SCM);
extern SCM ag_scm_set_option(SCM);
extern SCM ag_scm_set_writable(SCM);
extern SCM ag_scm_shell(SCM);
extern SCM ag_scm_shell_str(SCM);
extern SCM ag_scm_shellf(SCM, SCM);
extern SCM ag_scm_sprintf(SCM, SCM);
extern SCM ag_scm_stack(SCM);
extern SCM ag_scm_string_capitalize(SCM);
extern SCM ag_scm_string_capitalize_x(SCM);
extern SCM ag_scm_string_contains_eqv_p(SCM, SCM);
extern SCM ag_scm_string_contains_p(SCM, SCM);
extern SCM ag_scm_string_downcase(SCM);
extern SCM ag_scm_string_downcase_x(SCM);
extern SCM ag_scm_string_end_eqv_match_p(SCM, SCM);
extern SCM ag_scm_string_end_match_p(SCM, SCM);
extern SCM ag_scm_string_ends_eqv_p(SCM, SCM);
extern SCM ag_scm_string_ends_with_p(SCM, SCM);
extern SCM ag_scm_string_equals_p(SCM, SCM);
extern SCM ag_scm_string_eqv_match_p(SCM, SCM);
extern SCM ag_scm_string_eqv_p(SCM, SCM);
extern SCM ag_scm_string_has_eqv_match_p(SCM, SCM);
extern SCM ag_scm_string_has_match_p(SCM, SCM);
extern SCM ag_scm_string_match_p(SCM, SCM);
extern SCM ag_scm_string_start_eqv_match_p(SCM, SCM);
extern SCM ag_scm_string_start_match_p(SCM, SCM);
extern SCM ag_scm_string_starts_eqv_p(SCM, SCM);
extern SCM ag_scm_string_starts_with_p(SCM, SCM);
extern SCM ag_scm_string_substitute(SCM, SCM, SCM);
extern SCM ag_scm_string_to_c_name_x(SCM);
extern SCM ag_scm_string_to_camelcase(SCM);
extern SCM ag_scm_string_tr(SCM, SCM, SCM);
extern SCM ag_scm_string_tr_x(SCM, SCM, SCM);
extern SCM ag_scm_string_upcase(SCM);
extern SCM ag_scm_string_upcase_x(SCM);
extern SCM ag_scm_sub_shell_str(SCM);
extern SCM ag_scm_suffix(void);
extern SCM ag_scm_sum(SCM);
extern SCM ag_scm_time_string_to_number(SCM);
extern SCM ag_scm_tpl_file(SCM);
extern SCM ag_scm_tpl_file_line(SCM);
extern SCM ag_scm_tpl_file_next_line(SCM);
extern SCM ag_scm_version_compare(SCM, SCM, SCM);
extern SCM ag_scm_warn(SCM);
/** @} */
#endif /* GUILE_PROCS_EXPR_H_GUARD */
