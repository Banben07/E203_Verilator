// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator_floatAdd.h"

VL_ATTR_COLD void Vtb_verilator_floatAdd___ctor_var_reset(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___ctor_var_reset\n"); );
    // Body
    vlSelf->num1 = VL_RAND_RESET_I(16);
    vlSelf->num2 = VL_RAND_RESET_I(16);
    vlSelf->result = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mid_result = VL_RAND_RESET_I(16);
    vlSelf->__PVT__overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bigNum = VL_RAND_RESET_I(16);
    vlSelf->__PVT__smallNum = VL_RAND_RESET_I(16);
    vlSelf->__PVT__big_ex = VL_RAND_RESET_I(5);
    vlSelf->__PVT__small_ex = VL_RAND_RESET_I(5);
    vlSelf->__PVT__big_float = VL_RAND_RESET_I(11);
    vlSelf->__PVT__sign_small_float = VL_RAND_RESET_I(11);
    vlSelf->__PVT__shifted_small_float = VL_RAND_RESET_I(11);
    vlSelf->__PVT__ex_diff = VL_RAND_RESET_I(5);
    vlSelf->__PVT__shift_am = VL_RAND_RESET_I(4);
    vlSelf->__PVT__neg_exp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__small_extension = VL_RAND_RESET_I(10);
    vlSelf->__PVT__sum = VL_RAND_RESET_I(11);
    vlSelf->__PVT__sum_carry = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sameSign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__zeroSmall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf_num = VL_RAND_RESET_I(1);
    vlSelf->__PVT__res_exp_same_s = VL_RAND_RESET_I(5);
}
