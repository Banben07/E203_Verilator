// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator_floatMult.h"

VL_ATTR_COLD void Vtb_verilator_floatMult___ctor_var_reset(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___ctor_var_reset\n"); );
    // Body
    vlSelf->num1 = VL_RAND_RESET_I(16);
    vlSelf->num2 = VL_RAND_RESET_I(16);
    vlSelf->result = VL_RAND_RESET_I(16);
    vlSelf->__PVT__overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exSubCor = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exSum_fault = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ex_cannot_correct = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fraSub = VL_RAND_RESET_I(10);
    vlSelf->__PVT__float1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__exSum_prebais = VL_RAND_RESET_I(6);
    vlSelf->__PVT__exSum_abs = VL_RAND_RESET_I(6);
    vlSelf->__PVT__float_res = VL_RAND_RESET_I(12);
    vlSelf->__PVT__res_full = VL_RAND_RESET_I(22);
    vlSelf->__PVT__res_full_preshift = VL_RAND_RESET_I(22);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__PVT__mid[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->__PVT__inf_num = VL_RAND_RESET_I(1);
}
