//===-- ubsan_interface.inc -----------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
// Ubsan interface list.
//===----------------------------------------------------------------------===//
INTERFACE_FUNCTION(__ubsan_handle_add_overflow)
INTERFACE_FUNCTION(__ubsan_handle_add_overflow_abort)
INTERFACE_FUNCTION(__ubsan_handle_builtin_unreachable)
INTERFACE_FUNCTION(__ubsan_handle_cfi_check_fail)
INTERFACE_FUNCTION(__ubsan_handle_cfi_check_fail_abort)
INTERFACE_FUNCTION(__ubsan_handle_divrem_overflow)
INTERFACE_FUNCTION(__ubsan_handle_divrem_overflow_abort)
INTERFACE_FUNCTION(__ubsan_handle_float_cast_overflow)
INTERFACE_FUNCTION(__ubsan_handle_float_cast_overflow_abort)
INTERFACE_FUNCTION(__ubsan_handle_function_type_mismatch)
INTERFACE_FUNCTION(__ubsan_handle_function_type_mismatch_abort)
INTERFACE_FUNCTION(__ubsan_handle_load_invalid_value)
INTERFACE_FUNCTION(__ubsan_handle_load_invalid_value_abort)
INTERFACE_FUNCTION(__ubsan_handle_missing_return)
INTERFACE_FUNCTION(__ubsan_handle_mul_overflow)
INTERFACE_FUNCTION(__ubsan_handle_mul_overflow_abort)
INTERFACE_FUNCTION(__ubsan_handle_negate_overflow)
INTERFACE_FUNCTION(__ubsan_handle_negate_overflow_abort)
INTERFACE_FUNCTION(__ubsan_handle_nonnull_arg)
INTERFACE_FUNCTION(__ubsan_handle_nonnull_arg_abort)
INTERFACE_FUNCTION(__ubsan_handle_nonnull_return)
INTERFACE_FUNCTION(__ubsan_handle_nonnull_return_abort)
INTERFACE_FUNCTION(__ubsan_handle_nullability_arg)
INTERFACE_FUNCTION(__ubsan_handle_nullability_arg_abort)
INTERFACE_FUNCTION(__ubsan_handle_nullability_return)
INTERFACE_FUNCTION(__ubsan_handle_nullability_return_abort)
INTERFACE_FUNCTION(__ubsan_handle_out_of_bounds)
INTERFACE_FUNCTION(__ubsan_handle_out_of_bounds_abort)
INTERFACE_FUNCTION(__ubsan_handle_shift_out_of_bounds)
INTERFACE_FUNCTION(__ubsan_handle_shift_out_of_bounds_abort)
INTERFACE_FUNCTION(__ubsan_handle_sub_overflow)
INTERFACE_FUNCTION(__ubsan_handle_sub_overflow_abort)
INTERFACE_FUNCTION(__ubsan_handle_type_mismatch_v1)
INTERFACE_FUNCTION(__ubsan_handle_type_mismatch_v1_abort)
INTERFACE_FUNCTION(__ubsan_handle_vla_bound_not_positive)
INTERFACE_FUNCTION(__ubsan_handle_vla_bound_not_positive_abort)
INTERFACE_WEAK_FUNCTION(__ubsan_default_options)
