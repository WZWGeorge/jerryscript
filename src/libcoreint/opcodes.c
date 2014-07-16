/* Copyright 2014 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "ecma-operations.h"
#include "interpreter.h"
#include "jerry-libc.h"
#include "opcodes.h"

void
save_op_data (int pos, OPCODE opdata)
{
  __program[pos] = opdata;
}

void opfunc_loop_init_num (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_loop_precond_begin_num (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_loop_precond_end_num (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_loop_postcond (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_call_2 (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_call_n (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_func_decl_1 (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_func_decl_2 (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_func_decl_n (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_varg_1 (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_varg_1_end (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_varg_2 (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_varg_2_end (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_varg_3 (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_varg_3_end (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_retval (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_ret (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_nop (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_equal_value (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_not_equal_value (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_equal_value_type (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_not_equal_value_type (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_less_than (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_greater_than (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_less_or_equal_than (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_greater_or_equal_than (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }

void
opfunc_assignment(OPCODE opdata __unused,
                  struct __int_data *int_data __unused)
{
  JERRY_UNREACHABLE ();
}

void opfunc_logical_and (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_logical_or (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_b_and (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_b_or (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_b_xor (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_b_shift_left (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_b_shift_right (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_b_shift_uright (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_addition (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_substraction (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_division (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_multiplication (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_remainder (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_jmp_up (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_jmp_down (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_is_true_jmp (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_is_false_jmp (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_is_less_than (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_is_less_or_equal (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_is_greater_than (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_is_greater_or_equal (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_is_equal_value (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_is_not_equal_value (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_is_equal_value_type (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }
void opfunc_is_not_equal_value_type (OPCODE opdata __unused, struct __int_data *int_data __unused) { JERRY_UNREACHABLE (); }

void
opfunc_loop_inf (OPCODE opdata, struct __int_data *int_data)
{
#ifdef __HOST
  __printf ("%d::loop_inf:idx:%d\n",
          int_data->pos,
          opdata.data.loop_inf.loop_root);
#endif

  int_data->pos = opdata.data.loop_inf.loop_root;
}

void
opfunc_call_1 (OPCODE opdata __unused, struct __int_data *int_data)
{
#ifdef __HOST
  __printf ("%d::op_call_1:idx:%d:%d\n",
          int_data->pos,
          opdata.data.call_1.name_lit_idx,
          opdata.data.call_1.arg1_lit_idx);
#endif

  int_data->pos++;
}

void
opfunc_jmp (OPCODE opdata, struct __int_data *int_data)
{
#ifdef __HOST
  __printf ("%d::op_jmp:idx:%d\n",
          int_data->pos,
          opdata.data.jmp.opcode_idx);
#endif

  int_data->pos = opdata.data.jmp.opcode_idx;
}

/** Opcode generators.  */
GETOP_IMPL_2 (is_less_than, value_left, value_right)
GETOP_IMPL_2 (is_less_or_equal, value_left, value_right)
GETOP_IMPL_2 (is_greater_than, value_left, value_right)
GETOP_IMPL_2 (is_greater_or_equal, value_left, value_right)
GETOP_IMPL_2 (is_equal_value, value_left, value_right)
GETOP_IMPL_2 (is_not_equal_value, value_left, value_right)
GETOP_IMPL_2 (is_equal_value_type, value_left, value_right)
GETOP_IMPL_2 (is_not_equal_value_type, value_left, value_right)
GETOP_IMPL_2 (is_true_jmp, value, opcode)
GETOP_IMPL_2 (is_false_jmp, value, opcode)
GETOP_IMPL_1 (jmp, opcode_idx)
GETOP_IMPL_1 (jmp_up, opcode_count)
GETOP_IMPL_1 (jmp_down, opcode_count)
GETOP_IMPL_3 (addition, dst, var_left, var_right)
GETOP_IMPL_3 (substraction, dst, var_left, var_right)
GETOP_IMPL_3 (division, dst, var_left, var_right)
GETOP_IMPL_3 (multiplication, dst, var_left, var_right)
GETOP_IMPL_3 (remainder, dst, var_left, var_right)
GETOP_IMPL_3 (b_shift_left, dst, var_left, var_right)
GETOP_IMPL_3 (b_shift_right, dst, var_left, var_right)
GETOP_IMPL_3 (b_shift_uright, dst, var_left, var_right)
GETOP_IMPL_3 (b_and, dst, var_left, var_right)
GETOP_IMPL_3 (b_or, dst, var_left, var_right)
GETOP_IMPL_3 (b_xor, dst, var_left, var_right)
GETOP_IMPL_3 (logical_and, dst, var_left, var_right)
GETOP_IMPL_3 (logical_or, dst, var_left, var_right)
GETOP_IMPL_3 (equal_value, dst, var_left, var_right)
GETOP_IMPL_3 (not_equal_value, dst, var_left, var_right)
GETOP_IMPL_3 (equal_value_type, dst, var_left, var_right)
GETOP_IMPL_3 (not_equal_value_type, dst, var_left, var_right)
GETOP_IMPL_3 (less_than, dst, var_left, var_right)
GETOP_IMPL_3 (greater_than, dst, var_left, var_right)
GETOP_IMPL_3 (less_or_equal_than, dst, var_left, var_right)
GETOP_IMPL_3 (greater_or_equal_than, dst, var_left, var_right)
GETOP_IMPL_2 (assignment, value_left, value_right)
GETOP_IMPL_2 (call_1, name_lit_idx, arg1_lit_idx)
GETOP_IMPL_3 (call_2, name_lit_idx, arg1_lit_idx, arg2_lit_idx)
GETOP_IMPL_3 (call_n, name_lit_idx, arg1_lit_idx, arg2_lit_idx)
GETOP_IMPL_2 (func_decl_1, name_lit_idx, arg1_lit_idx)
GETOP_IMPL_3 (func_decl_2, name_lit_idx, arg1_lit_idx, arg2_lit_idx)
GETOP_IMPL_3 (func_decl_n, name_lit_idx, arg1_lit_idx, arg2_lit_idx)
GETOP_IMPL_1 (varg_1, arg1_lit_idx)
GETOP_IMPL_1 (varg_1_end, arg1_lit_idx)
GETOP_IMPL_2 (varg_2, arg1_lit_idx, arg2_lit_idx)
GETOP_IMPL_2 (varg_2_end, arg1_lit_idx, arg2_lit_idx)
GETOP_IMPL_3 (varg_3, arg1_lit_idx, arg2_lit_idx, arg3_lit_idx)
GETOP_IMPL_3 (varg_3_end, arg1_lit_idx, arg2_lit_idx, arg3_lit_idx)
GETOP_IMPL_1 (retval, ret_value)
GETOP_IMPL_0 (ret)
GETOP_IMPL_0 (nop)
GETOP_IMPL_1 (loop_inf, loop_root)
GETOP_IMPL_3 (loop_init_num, start, stop, step)
GETOP_IMPL_2 (loop_precond_begin_num, condition, after_loop_op)
GETOP_IMPL_3 (loop_precond_end_num, iterator, step, precond_begin)
GETOP_IMPL_2 (loop_postcond, condition, body_root)

