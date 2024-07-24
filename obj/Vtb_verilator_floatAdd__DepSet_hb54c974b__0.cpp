// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator__Syms.h"
#include "Vtb_verilator_floatAdd.h"

extern const VlUnpacked<CData/*3:0*/, 2048> Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0;

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_float_adder_stage2_2__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_float_adder_stage2_2__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__zero = (((0x7fffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2.result)) 
                            == (0x7fffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2.result))) 
                           & ((1U & (~ ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2.result) 
                                        >> 0xfU))) 
                              == (1U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2.result) 
                                        >> 0xfU))));
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2.result))))))));
    if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2.result) 
                   >> 0xaU)) > (0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2.result) 
                                         >> 0xaU)))) {
        vlSelf->__PVT__bigNum = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2.result;
        vlSelf->__PVT__smallNum = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2.result;
    } else if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2.result) 
                          >> 0xaU)) == (0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2.result) 
                                                 >> 0xaU)))) {
        if (((0x3ffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2.result)) 
             > (0x3ffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2.result)))) {
            vlSelf->__PVT__bigNum = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2.result;
            vlSelf->__PVT__smallNum = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2.result;
        } else {
            vlSelf->__PVT__bigNum = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2.result;
            vlSelf->__PVT__smallNum = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2.result;
        }
    } else {
        vlSelf->__PVT__bigNum = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2.result;
        vlSelf->__PVT__smallNum = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2.result;
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | (IData)(vlSelf->__PVT__inf_num));
    __Vtableidx1 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx1];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1__0\n"); );
    // Body
    vlSelf->__PVT__mid_result = ((0x8000U & (IData)(vlSelf->__PVT__bigNum)) 
                                 | ((0x7c00U & ((((IData)(vlSelf->__PVT__sameSign)
                                                   ? (IData)(vlSelf->__PVT__res_exp_same_s)
                                                   : 
                                                  (((IData)(vlSelf->__PVT__neg_exp) 
                                                    | (0xaU 
                                                       == (IData)(vlSelf->__PVT__shift_am)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->__PVT__shift_am)) 
                                                     + (IData)(vlSelf->__PVT__big_ex))))) 
                                                 | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                                << 0xaU)) 
                                    | (0x3ffU & (((IData)(vlSelf->__PVT__zeroSmall)
                                                   ? (IData)(vlSelf->__PVT__bigNum)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__sameSign)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__sum_carry)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__sum) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->__PVT__sum))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__neg_exp)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__shift_am))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? (IData)(vlSelf->__PVT__small_extension)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? (IData)(vlSelf->__PVT__small_extension)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x200U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 9U)) 
                                                         | (0x1ffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 1U)))
                                                         : 
                                                        ((0x300U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 2U))))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x380U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 7U)) 
                                                         | (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 3U)))
                                                         : 
                                                        ((0x3c0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 6U)) 
                                                         | (0x3fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 4U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3e0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 5U)) 
                                                         | (0x1fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 5U)))
                                                         : 
                                                        ((0x3f0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 6U)))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3f8U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 3U)) 
                                                         | (7U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 7U)))
                                                         : 
                                                        ((0x3fcU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 8U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3feU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 9U)))
                                                         : (IData)(vlSelf->__PVT__sum)))))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->__PVT__overflow)))))))));
    vlSelf->__PVT__res_exp_same_s = (0x1fU & (((IData)(vlSelf->__PVT__big_ex) 
                                               + ((
                                                   (~ (IData)(vlSelf->__PVT__zeroSmall)) 
                                                   & (IData)(vlSelf->__PVT__sum_carry)) 
                                                  & (IData)(vlSelf->__PVT__sameSign))) 
                                              - ((0x3ffU 
                                                  & (IData)(vlSelf->__PVT__mid_result)) 
                                                 == (IData)(vlSelf->__PVT__sum))));
    vlSelf->result = ((IData)(vlSelf->__PVT__mid_result) 
                      & (- (IData)((1U & (~ (((0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg)) 
                                              == (0x7fffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                             >> 0x10U)))) 
                                             & ((1U 
                                                 & (~ (IData)(
                                                              (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                               >> 0xfU)))) 
                                                == 
                                                (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                            >> 0x1fU))))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (((0x1fU & (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                           >> 0x1aU))) > (0x1fU & (IData)(
                                                          (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                           >> 0xaU))))) {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                    >> 0x10U)));
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg));
    } else if (((0x1fU & (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                  >> 0x1aU))) == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                             >> 0xaU))))) {
        if (((0x3ffU & (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                >> 0x10U))) > (0x3ffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg)))) {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(
                                                       (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                        >> 0x10U)));
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg));
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg));
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(
                                                         (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                          >> 0x10U)));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg));
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(
                                                     (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                      >> 0x10U)));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | ((IData)(((0x7c00ULL 
                                            == (0x7c00ULL 
                                                & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg)) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg))))))) 
                                  | (IData)(((0x7c000000ULL 
                                              == (0x7c000000ULL 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg)) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                                       >> 0x10U))))))))));
    __Vtableidx2 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx2];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->__PVT__zero = (((0x7fffU & (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                >> 0x20U))) 
                            == (0x7fffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1.result))) 
                           & ((1U & (~ (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                >> 0x2fU)))) 
                              == (1U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1.result) 
                                        >> 0xfU))));
    vlSelf->__PVT__inf_num = ((IData)(((0x7c0000000000ULL 
                                        == (0x7c0000000000ULL 
                                            & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                                 >> 0x20U)))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1.result))))))));
    if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1.result) 
                   >> 0xaU)) > (0x1fU & (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                 >> 0x2aU))))) {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1.result));
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(
                                                     (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                      >> 0x20U)));
    } else if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1.result) 
                          >> 0xaU)) == (0x1fU & (IData)(
                                                        (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                         >> 0x2aU))))) {
        if (((0x3ffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1.result)) 
             > (0x3ffU & (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                  >> 0x20U))))) {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1.result));
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(
                                                         (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                          >> 0x20U)));
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(
                                                       (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                        >> 0x20U)));
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1.result));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__c_reg 
                                                    >> 0x20U)));
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_1.result));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | (IData)(vlSelf->__PVT__inf_num));
    __Vtableidx3 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx3];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1__0\n"); );
    // Body
    vlSelf->__PVT__mid_result = ((0x8000U & (IData)(vlSelf->__PVT__bigNum)) 
                                 | ((0x7c00U & ((((IData)(vlSelf->__PVT__sameSign)
                                                   ? (IData)(vlSelf->__PVT__res_exp_same_s)
                                                   : 
                                                  (((IData)(vlSelf->__PVT__neg_exp) 
                                                    | (0xaU 
                                                       == (IData)(vlSelf->__PVT__shift_am)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->__PVT__shift_am)) 
                                                     + (IData)(vlSelf->__PVT__big_ex))))) 
                                                 | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                                << 0xaU)) 
                                    | (0x3ffU & (((IData)(vlSelf->__PVT__zeroSmall)
                                                   ? (IData)(vlSelf->__PVT__bigNum)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__sameSign)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__sum_carry)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__sum) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->__PVT__sum))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__neg_exp)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__shift_am))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? (IData)(vlSelf->__PVT__small_extension)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? (IData)(vlSelf->__PVT__small_extension)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x200U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 9U)) 
                                                         | (0x1ffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 1U)))
                                                         : 
                                                        ((0x300U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 2U))))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x380U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 7U)) 
                                                         | (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 3U)))
                                                         : 
                                                        ((0x3c0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 6U)) 
                                                         | (0x3fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 4U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3e0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 5U)) 
                                                         | (0x1fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 5U)))
                                                         : 
                                                        ((0x3f0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 6U)))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3f8U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 3U)) 
                                                         | (7U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 7U)))
                                                         : 
                                                        ((0x3fcU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 8U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3feU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 9U)))
                                                         : (IData)(vlSelf->__PVT__sum)))))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->__PVT__overflow)))))))));
    vlSelf->__PVT__res_exp_same_s = (0x1fU & (((IData)(vlSelf->__PVT__big_ex) 
                                               + ((
                                                   (~ (IData)(vlSelf->__PVT__zeroSmall)) 
                                                   & (IData)(vlSelf->__PVT__sum_carry)) 
                                                  & (IData)(vlSelf->__PVT__sameSign))) 
                                              - ((0x3ffU 
                                                  & (IData)(vlSelf->__PVT__mid_result)) 
                                                 == (IData)(vlSelf->__PVT__sum))));
    vlSelf->result = ((IData)(vlSelf->__PVT__mid_result) 
                      & (- (IData)((1U & (~ (((0x7fffU 
                                               & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U]) 
                                              == (0x7fffU 
                                                  & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                                     >> 0x10U))) 
                                             & ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                                     >> 0xfU))) 
                                                == 
                                                (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                                 >> 0x1fU))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    if (((0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                   >> 0x1aU)) > (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                          >> 0xaU)))) {
        vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                             << 0x10U) 
                                            | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                               >> 0x10U)));
        vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U]);
    } else if (((0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                          >> 0x1aU)) == (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                                  >> 0xaU)))) {
        if (((0x3ffU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                        >> 0x10U)) > (0x3ffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U]))) {
            vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                                   >> 0x10U)));
            vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U]);
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U]);
            vlSelf->__PVT__smallNum = (0xffffU & ((
                                                   vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                                     >> 0x10U)));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U]);
        vlSelf->__PVT__smallNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                                 >> 0x10U)));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | ((IData)(((0x7c00U 
                                            == (0x7c00U 
                                                & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U])) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U])))))) 
                                  | (IData)(((0x7c000000U 
                                              == (0x7c000000U 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U])) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[0U] 
                                                               >> 0x10U)))))))));
    __Vtableidx4 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx4];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_2__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_2__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelf->__PVT__zero = (((0x7fffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U]) 
                            == (0x7fffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result))) 
                           & ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                        >> 0xfU))) 
                              == (1U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result) 
                                        >> 0xfU))));
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & 
                                         vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U])) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U])))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result))))))));
    if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result) 
                   >> 0xaU)) > (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                         >> 0xaU)))) {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result));
        vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U]);
    } else if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result) 
                          >> 0xaU)) == (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                                 >> 0xaU)))) {
        if (((0x3ffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result)) 
             > (0x3ffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U]))) {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result));
            vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U]);
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U]);
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U]);
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | (IData)(vlSelf->__PVT__inf_num));
    __Vtableidx5 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx5];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1__0\n"); );
    // Body
    vlSelf->__PVT__mid_result = ((0x8000U & (IData)(vlSelf->__PVT__bigNum)) 
                                 | ((0x7c00U & ((((IData)(vlSelf->__PVT__sameSign)
                                                   ? (IData)(vlSelf->__PVT__res_exp_same_s)
                                                   : 
                                                  (((IData)(vlSelf->__PVT__neg_exp) 
                                                    | (0xaU 
                                                       == (IData)(vlSelf->__PVT__shift_am)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->__PVT__shift_am)) 
                                                     + (IData)(vlSelf->__PVT__big_ex))))) 
                                                 | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                                << 0xaU)) 
                                    | (0x3ffU & (((IData)(vlSelf->__PVT__zeroSmall)
                                                   ? (IData)(vlSelf->__PVT__bigNum)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__sameSign)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__sum_carry)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__sum) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->__PVT__sum))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__neg_exp)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__shift_am))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? (IData)(vlSelf->__PVT__small_extension)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? (IData)(vlSelf->__PVT__small_extension)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x200U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 9U)) 
                                                         | (0x1ffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 1U)))
                                                         : 
                                                        ((0x300U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 2U))))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x380U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 7U)) 
                                                         | (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 3U)))
                                                         : 
                                                        ((0x3c0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 6U)) 
                                                         | (0x3fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 4U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3e0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 5U)) 
                                                         | (0x1fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 5U)))
                                                         : 
                                                        ((0x3f0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 6U)))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3f8U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 3U)) 
                                                         | (7U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 7U)))
                                                         : 
                                                        ((0x3fcU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 8U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3feU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 9U)))
                                                         : (IData)(vlSelf->__PVT__sum)))))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->__PVT__overflow)))))))));
    vlSelf->__PVT__res_exp_same_s = (0x1fU & (((IData)(vlSelf->__PVT__big_ex) 
                                               + ((
                                                   (~ (IData)(vlSelf->__PVT__zeroSmall)) 
                                                   & (IData)(vlSelf->__PVT__sum_carry)) 
                                                  & (IData)(vlSelf->__PVT__sameSign))) 
                                              - ((0x3ffU 
                                                  & (IData)(vlSelf->__PVT__mid_result)) 
                                                 == (IData)(vlSelf->__PVT__sum))));
    vlSelf->result = ((IData)(vlSelf->__PVT__mid_result) 
                      & (- (IData)((1U & (~ (((0x7fffU 
                                               & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                                  >> 0x10U)) 
                                              == (0x7fffU 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U])) 
                                             & ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                                     >> 0x1fU))) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                                    >> 0xfU)))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    if (((0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                   >> 0xaU)) > (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                         >> 0x1aU)))) {
        vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U]);
        vlSelf->__PVT__smallNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                                 >> 0x10U)));
    } else if (((0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                          >> 0xaU)) == (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                                 >> 0x1aU)))) {
        if (((0x3ffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U]) 
             > (0x3ffU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                          >> 0x10U)))) {
            vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U]);
            vlSelf->__PVT__smallNum = (0xffffU & ((
                                                   vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                                     >> 0x10U)));
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                                   >> 0x10U)));
            vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U]);
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                             << 0x10U) 
                                            | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                               >> 0x10U)));
        vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U]);
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | ((IData)(((0x7c000000U 
                                            == (0x7c000000U 
                                                & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U])) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[1U] 
                                                             >> 0x10U))))))) 
                                  | (IData)(((0x7c00U 
                                              == (0x7c00U 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U])) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U]))))))));
    __Vtableidx6 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx6];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_2__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_2__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelf->__PVT__zero = (((0x7fffU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                        >> 0x10U)) 
                            == (0x7fffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result))) 
                           & ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                        >> 0x1fU))) 
                              == (1U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result) 
                                        >> 0xfU))));
    vlSelf->__PVT__inf_num = ((IData)(((0x7c000000U 
                                        == (0x7c000000U 
                                            & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U])) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                                         >> 0x10U))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result))))))));
    if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result) 
                   >> 0xaU)) > (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                         >> 0x1aU)))) {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result));
        vlSelf->__PVT__smallNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                                 >> 0x10U)));
    } else if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result) 
                          >> 0xaU)) == (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                                 >> 0x1aU)))) {
        if (((0x3ffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result)) 
             > (0x3ffU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                          >> 0x10U)))) {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result));
            vlSelf->__PVT__smallNum = (0xffffU & ((
                                                   vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                                     >> 0x10U)));
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                                   >> 0x10U)));
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                             << 0x10U) 
                                            | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[2U] 
                                               >> 0x10U)));
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | (IData)(vlSelf->__PVT__inf_num));
    __Vtableidx7 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx7];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1__0\n"); );
    // Body
    vlSelf->__PVT__mid_result = ((0x8000U & (IData)(vlSelf->__PVT__bigNum)) 
                                 | ((0x7c00U & ((((IData)(vlSelf->__PVT__sameSign)
                                                   ? (IData)(vlSelf->__PVT__res_exp_same_s)
                                                   : 
                                                  (((IData)(vlSelf->__PVT__neg_exp) 
                                                    | (0xaU 
                                                       == (IData)(vlSelf->__PVT__shift_am)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->__PVT__shift_am)) 
                                                     + (IData)(vlSelf->__PVT__big_ex))))) 
                                                 | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                                << 0xaU)) 
                                    | (0x3ffU & (((IData)(vlSelf->__PVT__zeroSmall)
                                                   ? (IData)(vlSelf->__PVT__bigNum)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__sameSign)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__sum_carry)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__sum) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->__PVT__sum))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__neg_exp)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__shift_am))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? (IData)(vlSelf->__PVT__small_extension)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? (IData)(vlSelf->__PVT__small_extension)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x200U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 9U)) 
                                                         | (0x1ffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 1U)))
                                                         : 
                                                        ((0x300U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 2U))))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x380U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 7U)) 
                                                         | (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 3U)))
                                                         : 
                                                        ((0x3c0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 6U)) 
                                                         | (0x3fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 4U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3e0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 5U)) 
                                                         | (0x1fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 5U)))
                                                         : 
                                                        ((0x3f0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 6U)))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3f8U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 3U)) 
                                                         | (7U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 7U)))
                                                         : 
                                                        ((0x3fcU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 8U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3feU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 9U)))
                                                         : (IData)(vlSelf->__PVT__sum)))))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->__PVT__overflow)))))))));
    vlSelf->__PVT__res_exp_same_s = (0x1fU & (((IData)(vlSelf->__PVT__big_ex) 
                                               + ((
                                                   (~ (IData)(vlSelf->__PVT__zeroSmall)) 
                                                   & (IData)(vlSelf->__PVT__sum_carry)) 
                                                  & (IData)(vlSelf->__PVT__sameSign))) 
                                              - ((0x3ffU 
                                                  & (IData)(vlSelf->__PVT__mid_result)) 
                                                 == (IData)(vlSelf->__PVT__sum))));
    vlSelf->result = ((IData)(vlSelf->__PVT__mid_result) 
                      & (- (IData)((1U & (~ (((0x7fffU 
                                               & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U]) 
                                              == (0x7fffU 
                                                  & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                                     >> 0x10U))) 
                                             & ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                                     >> 0xfU))) 
                                                == 
                                                (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                                 >> 0x1fU))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    if (((0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                   >> 0x1aU)) > (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                          >> 0xaU)))) {
        vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                             << 0x10U) 
                                            | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                               >> 0x10U)));
        vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U]);
    } else if (((0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                          >> 0x1aU)) == (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                                  >> 0xaU)))) {
        if (((0x3ffU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                        >> 0x10U)) > (0x3ffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U]))) {
            vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                                   >> 0x10U)));
            vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U]);
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U]);
            vlSelf->__PVT__smallNum = (0xffffU & ((
                                                   vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                                     >> 0x10U)));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U]);
        vlSelf->__PVT__smallNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                                 >> 0x10U)));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | ((IData)(((0x7c00U 
                                            == (0x7c00U 
                                                & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U])) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U])))))) 
                                  | (IData)(((0x7c000000U 
                                              == (0x7c000000U 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U])) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[3U] 
                                                               >> 0x10U)))))))));
    __Vtableidx8 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx8];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_2__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_2__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelf->__PVT__zero = (((0x7fffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[4U]) 
                            == (0x7fffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result))) 
                           & ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[4U] 
                                        >> 0xfU))) 
                              == (1U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result) 
                                        >> 0xfU))));
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & 
                                         vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[4U])) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[4U])))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result))))))));
    if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result) 
                   >> 0xaU)) > (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[4U] 
                                         >> 0xaU)))) {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result));
        vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[4U]);
    } else if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result) 
                          >> 0xaU)) == (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[4U] 
                                                 >> 0xaU)))) {
        if (((0x3ffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result)) 
             > (0x3ffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[4U]))) {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result));
            vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[4U]);
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[4U]);
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch1_out_reg[4U]);
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | (IData)(vlSelf->__PVT__inf_num));
    __Vtableidx9 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx9];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1__0\n"); );
    // Body
    vlSelf->__PVT__mid_result = ((0x8000U & (IData)(vlSelf->__PVT__bigNum)) 
                                 | ((0x7c00U & ((((IData)(vlSelf->__PVT__sameSign)
                                                   ? (IData)(vlSelf->__PVT__res_exp_same_s)
                                                   : 
                                                  (((IData)(vlSelf->__PVT__neg_exp) 
                                                    | (0xaU 
                                                       == (IData)(vlSelf->__PVT__shift_am)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->__PVT__shift_am)) 
                                                     + (IData)(vlSelf->__PVT__big_ex))))) 
                                                 | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                                << 0xaU)) 
                                    | (0x3ffU & (((IData)(vlSelf->__PVT__zeroSmall)
                                                   ? (IData)(vlSelf->__PVT__bigNum)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__sameSign)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__sum_carry)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__sum) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->__PVT__sum))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__neg_exp)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__shift_am))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? (IData)(vlSelf->__PVT__small_extension)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? (IData)(vlSelf->__PVT__small_extension)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x200U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 9U)) 
                                                         | (0x1ffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 1U)))
                                                         : 
                                                        ((0x300U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 2U))))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x380U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 7U)) 
                                                         | (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 3U)))
                                                         : 
                                                        ((0x3c0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 6U)) 
                                                         | (0x3fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 4U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3e0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 5U)) 
                                                         | (0x1fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 5U)))
                                                         : 
                                                        ((0x3f0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 6U)))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3f8U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 3U)) 
                                                         | (7U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 7U)))
                                                         : 
                                                        ((0x3fcU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 8U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3feU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 9U)))
                                                         : (IData)(vlSelf->__PVT__sum)))))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->__PVT__overflow)))))))));
    vlSelf->__PVT__res_exp_same_s = (0x1fU & (((IData)(vlSelf->__PVT__big_ex) 
                                               + ((
                                                   (~ (IData)(vlSelf->__PVT__zeroSmall)) 
                                                   & (IData)(vlSelf->__PVT__sum_carry)) 
                                                  & (IData)(vlSelf->__PVT__sameSign))) 
                                              - ((0x3ffU 
                                                  & (IData)(vlSelf->__PVT__mid_result)) 
                                                 == (IData)(vlSelf->__PVT__sum))));
    vlSelf->result = ((IData)(vlSelf->__PVT__mid_result) 
                      & (- (IData)((1U & (~ (((0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg)) 
                                              == (0x7fffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                             >> 0x10U)))) 
                                             & ((1U 
                                                 & (~ (IData)(
                                                              (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                               >> 0xfU)))) 
                                                == 
                                                (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                            >> 0x1fU))))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    if (((0x1fU & (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                           >> 0x1aU))) > (0x1fU & (IData)(
                                                          (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                           >> 0xaU))))) {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                    >> 0x10U)));
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg));
    } else if (((0x1fU & (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                  >> 0x1aU))) == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                             >> 0xaU))))) {
        if (((0x3ffU & (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                >> 0x10U))) > (0x3ffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg)))) {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(
                                                       (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                        >> 0x10U)));
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg));
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg));
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(
                                                         (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                          >> 0x10U)));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg));
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(
                                                     (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                      >> 0x10U)));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | ((IData)(((0x7c00ULL 
                                            == (0x7c00ULL 
                                                & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg)) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg))))))) 
                                  | (IData)(((0x7c000000ULL 
                                              == (0x7c000000ULL 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg)) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                                       >> 0x10U))))))))));
    __Vtableidx10 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx10];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_2__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    vlSelf->__PVT__zero = (((0x7fffU & (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                >> 0x20U))) 
                            == (0x7fffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1.result))) 
                           & ((1U & (~ (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                >> 0x2fU)))) 
                              == (1U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1.result) 
                                        >> 0xfU))));
    vlSelf->__PVT__inf_num = ((IData)(((0x7c0000000000ULL 
                                        == (0x7c0000000000ULL 
                                            & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                                 >> 0x20U)))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1.result))))))));
    if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1.result) 
                   >> 0xaU)) > (0x1fU & (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                 >> 0x2aU))))) {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1.result));
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(
                                                     (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                      >> 0x20U)));
    } else if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1.result) 
                          >> 0xaU)) == (0x1fU & (IData)(
                                                        (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                         >> 0x2aU))))) {
        if (((0x3ffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1.result)) 
             > (0x3ffU & (IData)((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                  >> 0x20U))))) {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1.result));
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(
                                                         (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                          >> 0x20U)));
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(
                                                       (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                        >> 0x20U)));
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1.result));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__c_reg 
                                                    >> 0x20U)));
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__u_float_adder_stage2_1.result));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | (IData)(vlSelf->__PVT__inf_num));
    __Vtableidx11 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx11];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1__0\n"); );
    // Body
    vlSelf->__PVT__mid_result = ((0x8000U & (IData)(vlSelf->__PVT__bigNum)) 
                                 | ((0x7c00U & ((((IData)(vlSelf->__PVT__sameSign)
                                                   ? (IData)(vlSelf->__PVT__res_exp_same_s)
                                                   : 
                                                  (((IData)(vlSelf->__PVT__neg_exp) 
                                                    | (0xaU 
                                                       == (IData)(vlSelf->__PVT__shift_am)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->__PVT__shift_am)) 
                                                     + (IData)(vlSelf->__PVT__big_ex))))) 
                                                 | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                                << 0xaU)) 
                                    | (0x3ffU & (((IData)(vlSelf->__PVT__zeroSmall)
                                                   ? (IData)(vlSelf->__PVT__bigNum)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__sameSign)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__sum_carry)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__sum) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->__PVT__sum))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__neg_exp)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__shift_am))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? (IData)(vlSelf->__PVT__small_extension)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? (IData)(vlSelf->__PVT__small_extension)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x200U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 9U)) 
                                                         | (0x1ffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 1U)))
                                                         : 
                                                        ((0x300U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 2U))))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x380U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 7U)) 
                                                         | (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 3U)))
                                                         : 
                                                        ((0x3c0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 6U)) 
                                                         | (0x3fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 4U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3e0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 5U)) 
                                                         | (0x1fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 5U)))
                                                         : 
                                                        ((0x3f0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 6U)))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3f8U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 3U)) 
                                                         | (7U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 7U)))
                                                         : 
                                                        ((0x3fcU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 8U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3feU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 9U)))
                                                         : (IData)(vlSelf->__PVT__sum)))))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->__PVT__overflow)))))))));
    vlSelf->__PVT__res_exp_same_s = (0x1fU & (((IData)(vlSelf->__PVT__big_ex) 
                                               + ((
                                                   (~ (IData)(vlSelf->__PVT__zeroSmall)) 
                                                   & (IData)(vlSelf->__PVT__sum_carry)) 
                                                  & (IData)(vlSelf->__PVT__sameSign))) 
                                              - ((0x3ffU 
                                                  & (IData)(vlSelf->__PVT__mid_result)) 
                                                 == (IData)(vlSelf->__PVT__sum))));
    vlSelf->result = ((IData)(vlSelf->__PVT__mid_result) 
                      & (- (IData)((1U & (~ (((0x7fffU 
                                               & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U]) 
                                              == (0x7fffU 
                                                  & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                                     >> 0x10U))) 
                                             & ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                                     >> 0xfU))) 
                                                == 
                                                (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                                 >> 0x1fU))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    if (((0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                   >> 0x1aU)) > (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                          >> 0xaU)))) {
        vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                             << 0x10U) 
                                            | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                               >> 0x10U)));
        vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U]);
    } else if (((0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                          >> 0x1aU)) == (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                                  >> 0xaU)))) {
        if (((0x3ffU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                        >> 0x10U)) > (0x3ffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U]))) {
            vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                                   >> 0x10U)));
            vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U]);
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U]);
            vlSelf->__PVT__smallNum = (0xffffU & ((
                                                   vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                                     >> 0x10U)));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U]);
        vlSelf->__PVT__smallNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                                 >> 0x10U)));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | ((IData)(((0x7c00U 
                                            == (0x7c00U 
                                                & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U])) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U])))))) 
                                  | (IData)(((0x7c000000U 
                                              == (0x7c000000U 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U])) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[0U] 
                                                               >> 0x10U)))))))));
    __Vtableidx12 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx12];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_2__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_2__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    vlSelf->__PVT__zero = (((0x7fffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U]) 
                            == (0x7fffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result))) 
                           & ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                        >> 0xfU))) 
                              == (1U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result) 
                                        >> 0xfU))));
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & 
                                         vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U])) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U])))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result))))))));
    if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result) 
                   >> 0xaU)) > (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                         >> 0xaU)))) {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result));
        vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U]);
    } else if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result) 
                          >> 0xaU)) == (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                                 >> 0xaU)))) {
        if (((0x3ffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result)) 
             > (0x3ffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U]))) {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result));
            vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U]);
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U]);
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U]);
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__0__KET____DOT__u_float_adder_stage1_1.result));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | (IData)(vlSelf->__PVT__inf_num));
    __Vtableidx13 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx13];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1__0\n"); );
    // Body
    vlSelf->__PVT__mid_result = ((0x8000U & (IData)(vlSelf->__PVT__bigNum)) 
                                 | ((0x7c00U & ((((IData)(vlSelf->__PVT__sameSign)
                                                   ? (IData)(vlSelf->__PVT__res_exp_same_s)
                                                   : 
                                                  (((IData)(vlSelf->__PVT__neg_exp) 
                                                    | (0xaU 
                                                       == (IData)(vlSelf->__PVT__shift_am)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->__PVT__shift_am)) 
                                                     + (IData)(vlSelf->__PVT__big_ex))))) 
                                                 | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                                << 0xaU)) 
                                    | (0x3ffU & (((IData)(vlSelf->__PVT__zeroSmall)
                                                   ? (IData)(vlSelf->__PVT__bigNum)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__sameSign)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__sum_carry)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__sum) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->__PVT__sum))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__neg_exp)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__shift_am))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? (IData)(vlSelf->__PVT__small_extension)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? (IData)(vlSelf->__PVT__small_extension)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x200U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 9U)) 
                                                         | (0x1ffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 1U)))
                                                         : 
                                                        ((0x300U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 2U))))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x380U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 7U)) 
                                                         | (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 3U)))
                                                         : 
                                                        ((0x3c0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 6U)) 
                                                         | (0x3fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 4U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3e0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 5U)) 
                                                         | (0x1fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 5U)))
                                                         : 
                                                        ((0x3f0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 6U)))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3f8U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 3U)) 
                                                         | (7U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 7U)))
                                                         : 
                                                        ((0x3fcU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 8U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3feU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 9U)))
                                                         : (IData)(vlSelf->__PVT__sum)))))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->__PVT__overflow)))))))));
    vlSelf->__PVT__res_exp_same_s = (0x1fU & (((IData)(vlSelf->__PVT__big_ex) 
                                               + ((
                                                   (~ (IData)(vlSelf->__PVT__zeroSmall)) 
                                                   & (IData)(vlSelf->__PVT__sum_carry)) 
                                                  & (IData)(vlSelf->__PVT__sameSign))) 
                                              - ((0x3ffU 
                                                  & (IData)(vlSelf->__PVT__mid_result)) 
                                                 == (IData)(vlSelf->__PVT__sum))));
    vlSelf->result = ((IData)(vlSelf->__PVT__mid_result) 
                      & (- (IData)((1U & (~ (((0x7fffU 
                                               & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                                  >> 0x10U)) 
                                              == (0x7fffU 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U])) 
                                             & ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                                     >> 0x1fU))) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                                    >> 0xfU)))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    if (((0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                   >> 0xaU)) > (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                         >> 0x1aU)))) {
        vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U]);
        vlSelf->__PVT__smallNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                                 >> 0x10U)));
    } else if (((0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                          >> 0xaU)) == (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                                 >> 0x1aU)))) {
        if (((0x3ffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U]) 
             > (0x3ffU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                          >> 0x10U)))) {
            vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U]);
            vlSelf->__PVT__smallNum = (0xffffU & ((
                                                   vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                                     >> 0x10U)));
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                                   >> 0x10U)));
            vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U]);
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                             << 0x10U) 
                                            | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                               >> 0x10U)));
        vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U]);
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | ((IData)(((0x7c000000U 
                                            == (0x7c000000U 
                                                & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U])) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[1U] 
                                                             >> 0x10U))))))) 
                                  | (IData)(((0x7c00U 
                                              == (0x7c00U 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U])) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U]))))))));
    __Vtableidx14 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx14];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_2__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_2__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    vlSelf->__PVT__zero = (((0x7fffU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                        >> 0x10U)) 
                            == (0x7fffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result))) 
                           & ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                        >> 0x1fU))) 
                              == (1U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result) 
                                        >> 0xfU))));
    vlSelf->__PVT__inf_num = ((IData)(((0x7c000000U 
                                        == (0x7c000000U 
                                            & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U])) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                                         >> 0x10U))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result))))))));
    if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result) 
                   >> 0xaU)) > (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                         >> 0x1aU)))) {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result));
        vlSelf->__PVT__smallNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                                 >> 0x10U)));
    } else if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result) 
                          >> 0xaU)) == (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                                 >> 0x1aU)))) {
        if (((0x3ffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result)) 
             > (0x3ffU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                          >> 0x10U)))) {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result));
            vlSelf->__PVT__smallNum = (0xffffU & ((
                                                   vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                                     >> 0x10U)));
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                                   >> 0x10U)));
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                             << 0x10U) 
                                            | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[2U] 
                                               >> 0x10U)));
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__1__KET____DOT__u_float_adder_stage1_1.result));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | (IData)(vlSelf->__PVT__inf_num));
    __Vtableidx15 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx15];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1__0\n"); );
    // Body
    vlSelf->__PVT__mid_result = ((0x8000U & (IData)(vlSelf->__PVT__bigNum)) 
                                 | ((0x7c00U & ((((IData)(vlSelf->__PVT__sameSign)
                                                   ? (IData)(vlSelf->__PVT__res_exp_same_s)
                                                   : 
                                                  (((IData)(vlSelf->__PVT__neg_exp) 
                                                    | (0xaU 
                                                       == (IData)(vlSelf->__PVT__shift_am)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->__PVT__shift_am)) 
                                                     + (IData)(vlSelf->__PVT__big_ex))))) 
                                                 | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                                << 0xaU)) 
                                    | (0x3ffU & (((IData)(vlSelf->__PVT__zeroSmall)
                                                   ? (IData)(vlSelf->__PVT__bigNum)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__sameSign)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__sum_carry)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__sum) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->__PVT__sum))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__neg_exp)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__shift_am))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? (IData)(vlSelf->__PVT__small_extension)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? (IData)(vlSelf->__PVT__small_extension)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x200U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 9U)) 
                                                         | (0x1ffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 1U)))
                                                         : 
                                                        ((0x300U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 2U))))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x380U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 7U)) 
                                                         | (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 3U)))
                                                         : 
                                                        ((0x3c0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 6U)) 
                                                         | (0x3fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 4U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3e0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 5U)) 
                                                         | (0x1fU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 5U)))
                                                         : 
                                                        ((0x3f0U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 6U)))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3f8U 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 3U)) 
                                                         | (7U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 7U)))
                                                         : 
                                                        ((0x3fcU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 8U))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__shift_am))
                                                         ? 
                                                        ((0x3feU 
                                                          & ((IData)(vlSelf->__PVT__sum) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->__PVT__small_extension) 
                                                               >> 9U)))
                                                         : (IData)(vlSelf->__PVT__sum)))))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->__PVT__overflow)))))))));
    vlSelf->__PVT__res_exp_same_s = (0x1fU & (((IData)(vlSelf->__PVT__big_ex) 
                                               + ((
                                                   (~ (IData)(vlSelf->__PVT__zeroSmall)) 
                                                   & (IData)(vlSelf->__PVT__sum_carry)) 
                                                  & (IData)(vlSelf->__PVT__sameSign))) 
                                              - ((0x3ffU 
                                                  & (IData)(vlSelf->__PVT__mid_result)) 
                                                 == (IData)(vlSelf->__PVT__sum))));
    vlSelf->result = ((IData)(vlSelf->__PVT__mid_result) 
                      & (- (IData)((1U & (~ (((0x7fffU 
                                               & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U]) 
                                              == (0x7fffU 
                                                  & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                                     >> 0x10U))) 
                                             & ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                                     >> 0xfU))) 
                                                == 
                                                (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                                 >> 0x1fU))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    if (((0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                   >> 0x1aU)) > (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                          >> 0xaU)))) {
        vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                             << 0x10U) 
                                            | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                               >> 0x10U)));
        vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U]);
    } else if (((0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                          >> 0x1aU)) == (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                                  >> 0xaU)))) {
        if (((0x3ffU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                        >> 0x10U)) > (0x3ffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U]))) {
            vlSelf->__PVT__bigNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                                   >> 0x10U)));
            vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U]);
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U]);
            vlSelf->__PVT__smallNum = (0xffffU & ((
                                                   vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                                     >> 0x10U)));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U]);
        vlSelf->__PVT__smallNum = (0xffffU & ((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                                 >> 0x10U)));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | ((IData)(((0x7c00U 
                                            == (0x7c00U 
                                                & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U])) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U])))))) 
                                  | (IData)(((0x7c000000U 
                                              == (0x7c000000U 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U])) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[3U] 
                                                               >> 0x10U)))))))));
    __Vtableidx16 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx16];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_2__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_2__0\n"); );
    // Init
    SData/*9:0*/ __VdfgExtracted_h7c6dcd58__0;
    __VdfgExtracted_h7c6dcd58__0 = 0;
    CData/*1:0*/ __VdfgRegularize_h7ca0336e_0_2;
    __VdfgRegularize_h7ca0336e_0_2 = 0;
    CData/*2:0*/ __VdfgRegularize_h7ca0336e_0_3;
    __VdfgRegularize_h7ca0336e_0_3 = 0;
    CData/*3:0*/ __VdfgRegularize_h7ca0336e_0_4;
    __VdfgRegularize_h7ca0336e_0_4 = 0;
    CData/*4:0*/ __VdfgRegularize_h7ca0336e_0_5;
    __VdfgRegularize_h7ca0336e_0_5 = 0;
    CData/*5:0*/ __VdfgRegularize_h7ca0336e_0_6;
    __VdfgRegularize_h7ca0336e_0_6 = 0;
    CData/*6:0*/ __VdfgRegularize_h7ca0336e_0_7;
    __VdfgRegularize_h7ca0336e_0_7 = 0;
    CData/*7:0*/ __VdfgRegularize_h7ca0336e_0_8;
    __VdfgRegularize_h7ca0336e_0_8 = 0;
    SData/*8:0*/ __VdfgRegularize_h7ca0336e_0_9;
    __VdfgRegularize_h7ca0336e_0_9 = 0;
    SData/*10:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    vlSelf->__PVT__zero = (((0x7fffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[4U]) 
                            == (0x7fffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result))) 
                           & ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[4U] 
                                        >> 0xfU))) 
                              == (1U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result) 
                                        >> 0xfU))));
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & 
                                         vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[4U])) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[4U])))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result))))))));
    if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result) 
                   >> 0xaU)) > (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[4U] 
                                         >> 0xaU)))) {
        vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result));
        vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[4U]);
    } else if (((0x1fU & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result) 
                          >> 0xaU)) == (0x1fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[4U] 
                                                 >> 0xaU)))) {
        if (((0x3ffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result)) 
             > (0x3ffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[4U]))) {
            vlSelf->__PVT__bigNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result));
            vlSelf->__PVT__smallNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[4U]);
        } else {
            vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[4U]);
            vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result));
        }
    } else {
        vlSelf->__PVT__bigNum = (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__ch2_out_reg[4U]);
        vlSelf->__PVT__smallNum = (0xffffU & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_2__DOT__genblk1__BRA__2__KET____DOT__u_float_adder_stage1_1.result));
    }
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__bigNum) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSelf->__PVT__bigNum)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSelf->__PVT__bigNum) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->__PVT__bigNum) 
                                                                     >> 0xaU))))))));
    __VdfgExtracted_h7c6dcd58__0 = (((IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 0xaU)))) 
                                     << 9U) | (0x1ffU 
                                               & ((IData)(vlSelf->__PVT__smallNum) 
                                                  >> 1U)));
    __VdfgRegularize_h7ca0336e_0_9 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 2U)));
    __VdfgRegularize_h7ca0336e_0_8 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 7U) | (0x7fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 3U)));
    __VdfgRegularize_h7ca0336e_0_7 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 4U)));
    __VdfgRegularize_h7ca0336e_0_6 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 5U)));
    __VdfgRegularize_h7ca0336e_0_5 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 6U)));
    __VdfgRegularize_h7ca0336e_0_4 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 3U) | (7U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 7U)));
    __VdfgRegularize_h7ca0336e_0_3 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 8U)));
    __VdfgRegularize_h7ca0336e_0_2 = (((IData)((0U 
                                                != 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)))) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 9U)));
    vlSelf->__PVT__sameSign = ((1U & ((IData)(vlSelf->__PVT__bigNum) 
                                      >> 0xfU)) == 
                               (1U & ((IData)(vlSelf->__PVT__smallNum) 
                                      >> 0xfU)));
    vlSelf->__PVT__small_ex = (0x1fU & (((IData)(vlSelf->__PVT__smallNum) 
                                         >> 0xaU) + 
                                        (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__smallNum) 
                                                              >> 0xaU))))))));
    vlSelf->__PVT__zeroSmall = (1U & (~ ((0U != (IData)(vlSelf->__PVT__small_ex)) 
                                         | (0U != (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__smallNum))))));
    vlSelf->__PVT__ex_diff = (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(vlSelf->__PVT__small_ex)));
    if (((((((((0U == (IData)(vlSelf->__PVT__ex_diff)) 
               | (1U == (IData)(vlSelf->__PVT__ex_diff))) 
              | (2U == (IData)(vlSelf->__PVT__ex_diff))) 
             | (3U == (IData)(vlSelf->__PVT__ex_diff))) 
            | (4U == (IData)(vlSelf->__PVT__ex_diff))) 
           | (5U == (IData)(vlSelf->__PVT__ex_diff))) 
          | (6U == (IData)(vlSelf->__PVT__ex_diff))) 
         | (7U == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((0U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = 0U;
            vlSelf->__PVT__shifted_small_float = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->__PVT__smallNum) 
                                                                >> 0xaU)))) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (IData)(vlSelf->__PVT__smallNum)));
        } else if ((1U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 9U));
            vlSelf->__PVT__shifted_small_float = __VdfgExtracted_h7c6dcd58__0;
        } else if ((2U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 8U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_9;
        } else if ((3U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 7U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_8;
        } else if ((4U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 6U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_7;
        } else if ((5U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 5U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_6;
        } else if ((6U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 4U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_5;
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 3U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_4;
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__ex_diff)) 
                      | (9U == (IData)(vlSelf->__PVT__ex_diff))) 
                     | (0xaU == (IData)(vlSelf->__PVT__ex_diff))) 
                    | (0xbU == (IData)(vlSelf->__PVT__ex_diff))) 
                   | (0xcU == (IData)(vlSelf->__PVT__ex_diff))) 
                  | (0xdU == (IData)(vlSelf->__PVT__ex_diff))) 
                 | (0xeU == (IData)(vlSelf->__PVT__ex_diff))) 
                | (0xfU == (IData)(vlSelf->__PVT__ex_diff)))) {
        if ((8U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 2U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_3;
        } else if ((9U == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->__PVT__smallNum), 1U));
            vlSelf->__PVT__shifted_small_float = __VdfgRegularize_h7ca0336e_0_2;
        } else if ((0xaU == (IData)(vlSelf->__PVT__ex_diff))) {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & (IData)(vlSelf->__PVT__smallNum));
            vlSelf->__PVT__shifted_small_float = (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__smallNum) 
                                                      >> 0xaU)));
        } else {
            vlSelf->__PVT__small_extension = (0x3ffU 
                                              & ((0xbU 
                                                  == (IData)(vlSelf->__PVT__ex_diff))
                                                  ? (IData)(__VdfgExtracted_h7c6dcd58__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->__PVT__ex_diff))
                                                   ? (IData)(__VdfgRegularize_h7ca0336e_0_9)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__ex_diff))
                                                    ? (IData)(__VdfgRegularize_h7ca0336e_0_8)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->__PVT__ex_diff))
                                                     ? (IData)(__VdfgRegularize_h7ca0336e_0_7)
                                                     : (IData)(__VdfgRegularize_h7ca0336e_0_6))))));
            vlSelf->__PVT__shifted_small_float = 0U;
        }
    } else if ((0x10U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_6;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_5;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_4;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_3;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = __VdfgRegularize_h7ca0336e_0_2;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = (0U != (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__smallNum) 
                                                    >> 0xaU)));
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (IData)(vlSelf->__PVT__ex_diff))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((IData)(vlSelf->__PVT__sameSign)
                                                  ? (IData)(vlSelf->__PVT__shifted_small_float)
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (IData)(vlSelf->__PVT__sameSign))) 
                               | (IData)(vlSelf->__PVT__inf_num));
    __Vtableidx17 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx17];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__a1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__a1__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result) 
                                                                     >> 0xaU))))))));
    if (((((((((0U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                - (IData)(1U)))) | 
               (1U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                - (IData)(1U))))) | 
              (2U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                               - (IData)(1U))))) | 
             (3U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                              - (IData)(1U))))) | (4U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__big_ex) 
                                                       - (IData)(1U))))) 
           | (5U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                              - (IData)(1U))))) | (6U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__big_ex) 
                                                       - (IData)(1U))))) 
         | (7U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                            - (IData)(1U)))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if (((((((((8U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(1U)))) 
                      | (9U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                         - (IData)(1U))))) 
                     | (0xaU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                          - (IData)(1U))))) 
                    | (0xbU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                         - (IData)(1U))))) 
                   | (0xcU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                        - (IData)(1U))))) 
                  | (0xdU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(1U))))) 
                 | (0xeU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                      - (IData)(1U))))) 
                | (0xfU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                     - (IData)(1U)))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x10U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((0x8000U 
                                                  & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))
                                                  : (IData)(vlSelf->__PVT__shifted_small_float)));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (~ ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result) 
                                              >> 0xfU)))) 
                               | (IData)(((0x7c00U 
                                           == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result))))))));
    __Vtableidx18 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx18];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__a1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__a1__0\n"); );
    // Body
    vlSelf->__PVT__mid_result = ((0x8000U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result)) 
                                 | ((0x7c00U & ((((0x8000U 
                                                   & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result))
                                                   ? 
                                                  (((IData)(vlSelf->__PVT__neg_exp) 
                                                    | (0xaU 
                                                       == (IData)(vlSelf->__PVT__shift_am)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->__PVT__shift_am)) 
                                                     + (IData)(vlSelf->__PVT__big_ex))))
                                                   : (IData)(vlSelf->__PVT__res_exp_same_s)) 
                                                 | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                                << 0xaU)) 
                                    | (0x3ffU & (((0x8000U 
                                                   & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__neg_exp)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->__PVT__shift_am))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->__PVT__shift_am))
                                                      ? (IData)(vlSelf->__PVT__small_extension)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? (IData)(vlSelf->__PVT__small_extension)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((0x200U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 9U)) 
                                                        | (0x1ffU 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 1U)))
                                                        : 
                                                       ((0x300U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 2U))))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->__PVT__shift_am))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((0x380U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 7U)) 
                                                        | (0x7fU 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 3U)))
                                                        : 
                                                       ((0x3c0U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 6U)) 
                                                        | (0x3fU 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 4U))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((0x3e0U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 5U)) 
                                                        | (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 5U)))
                                                        : 
                                                       ((0x3f0U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 4U)) 
                                                        | (0xfU 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 6U)))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((0x3f8U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 3U)) 
                                                        | (7U 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 7U)))
                                                        : 
                                                       ((0x3fcU 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 8U))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((0x3feU 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 9U)))
                                                        : (IData)(vlSelf->__PVT__sum))))))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__sum_carry)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__sum) 
                                                    >> 1U)
                                                    : (IData)(vlSelf->__PVT__sum))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->__PVT__overflow)))))))));
    vlSelf->__PVT__res_exp_same_s = (0x1fU & (((IData)(vlSelf->__PVT__big_ex) 
                                               + ((IData)(vlSelf->__PVT__sum_carry) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result) 
                                                      >> 0xfU)))) 
                                              - ((0x3ffU 
                                                  & (IData)(vlSelf->__PVT__mid_result)) 
                                                 == (IData)(vlSelf->__PVT__sum))));
    vlSelf->result = ((IData)(vlSelf->__PVT__mid_result) 
                      & (- (IData)((1U & (~ (IData)(
                                                    (0x8000U 
                                                     == (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__0__KET____DOT__m1.result))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__a1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__a1__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                                     >> 0xaU))))))));
    if (((((((((0U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                - (IData)(1U)))) | 
               (1U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                - (IData)(1U))))) | 
              (2U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                               - (IData)(1U))))) | 
             (3U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                              - (IData)(1U))))) | (4U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__big_ex) 
                                                       - (IData)(1U))))) 
           | (5U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                              - (IData)(1U))))) | (6U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__big_ex) 
                                                       - (IData)(1U))))) 
         | (7U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                            - (IData)(1U)))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if (((((((((8U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(1U)))) 
                      | (9U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                         - (IData)(1U))))) 
                     | (0xaU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                          - (IData)(1U))))) 
                    | (0xbU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                         - (IData)(1U))))) 
                   | (0xcU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                        - (IData)(1U))))) 
                  | (0xdU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(1U))))) 
                 | (0xeU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                      - (IData)(1U))))) 
                | (0xfU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                     - (IData)(1U)))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x10U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((0x8000U 
                                                  & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))
                                                  : (IData)(vlSelf->__PVT__shifted_small_float)));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (~ ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                              >> 0xfU)))) 
                               | (IData)(((0x7c00U 
                                           == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result))))))));
    __Vtableidx19 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx19];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__a1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__a1__0\n"); );
    // Body
    vlSelf->__PVT__mid_result = ((0x8000U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result)) 
                                 | ((0x7c00U & ((((0x8000U 
                                                   & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result))
                                                   ? 
                                                  (((IData)(vlSelf->__PVT__neg_exp) 
                                                    | (0xaU 
                                                       == (IData)(vlSelf->__PVT__shift_am)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->__PVT__shift_am)) 
                                                     + (IData)(vlSelf->__PVT__big_ex))))
                                                   : (IData)(vlSelf->__PVT__res_exp_same_s)) 
                                                 | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                                << 0xaU)) 
                                    | (0x3ffU & (((0x8000U 
                                                   & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__neg_exp)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->__PVT__shift_am))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->__PVT__shift_am))
                                                      ? (IData)(vlSelf->__PVT__small_extension)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? (IData)(vlSelf->__PVT__small_extension)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((0x200U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 9U)) 
                                                        | (0x1ffU 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 1U)))
                                                        : 
                                                       ((0x300U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 2U))))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->__PVT__shift_am))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((0x380U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 7U)) 
                                                        | (0x7fU 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 3U)))
                                                        : 
                                                       ((0x3c0U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 6U)) 
                                                        | (0x3fU 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 4U))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((0x3e0U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 5U)) 
                                                        | (0x1fU 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 5U)))
                                                        : 
                                                       ((0x3f0U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 4U)) 
                                                        | (0xfU 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 6U)))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__shift_am))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((0x3f8U 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 3U)) 
                                                        | (7U 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 7U)))
                                                        : 
                                                       ((0x3fcU 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 8U))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->__PVT__shift_am))
                                                        ? 
                                                       ((0x3feU 
                                                         & ((IData)(vlSelf->__PVT__sum) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelf->__PVT__small_extension) 
                                                              >> 9U)))
                                                        : (IData)(vlSelf->__PVT__sum))))))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__sum_carry)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__sum) 
                                                    >> 1U)
                                                    : (IData)(vlSelf->__PVT__sum))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->__PVT__overflow)))))))));
    vlSelf->__PVT__res_exp_same_s = (0x1fU & (((IData)(vlSelf->__PVT__big_ex) 
                                               + ((IData)(vlSelf->__PVT__sum_carry) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                      >> 0xfU)))) 
                                              - ((0x3ffU 
                                                  & (IData)(vlSelf->__PVT__mid_result)) 
                                                 == (IData)(vlSelf->__PVT__sum))));
    vlSelf->result = ((IData)(vlSelf->__PVT__mid_result) 
                      & (- (IData)((1U & (~ (IData)(
                                                    (0x8000U 
                                                     == (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1.result))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__2__KET____DOT__a1__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__2__KET____DOT__a1__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    vlSelf->__PVT__big_float = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                    >> 0xaU)))) 
                                 << 0xaU) | (0x3ffU 
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__2__KET____DOT__m1.result)));
    vlSelf->__PVT__big_ex = (0x1fU & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                       >> 0xaU) + (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                                     >> 0xaU))))))));
    if (((((((((0U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                - (IData)(1U)))) | 
               (1U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                - (IData)(1U))))) | 
              (2U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                               - (IData)(1U))))) | 
             (3U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                              - (IData)(1U))))) | (4U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__big_ex) 
                                                       - (IData)(1U))))) 
           | (5U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                              - (IData)(1U))))) | (6U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__big_ex) 
                                                       - (IData)(1U))))) 
         | (7U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                            - (IData)(1U)))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if (((((((((8U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(1U)))) 
                      | (9U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                         - (IData)(1U))))) 
                     | (0xaU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                          - (IData)(1U))))) 
                    | (0xbU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                         - (IData)(1U))))) 
                   | (0xcU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                        - (IData)(1U))))) 
                  | (0xdU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                       - (IData)(1U))))) 
                 | (0xeU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                      - (IData)(1U))))) 
                | (0xfU == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                     - (IData)(1U)))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x10U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x11U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x12U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x13U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x14U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x15U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    } else if ((0x16U == (0x1fU & ((IData)(vlSelf->__PVT__big_ex) 
                                   - (IData)(1U))))) {
        vlSelf->__PVT__small_extension = 0U;
        vlSelf->__PVT__shifted_small_float = 0U;
    }
    vlSelf->__PVT__sign_small_float = (0x7ffU & ((0x8000U 
                                                  & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__2__KET____DOT__m1.result))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT__shifted_small_float)))
                                                  : (IData)(vlSelf->__PVT__shifted_small_float)));
    vlSelf->__PVT__sum_carry = (1U & (((IData)(vlSelf->__PVT__sign_small_float) 
                                       + (IData)(vlSelf->__PVT__big_float)) 
                                      >> 0xbU));
    vlSelf->__PVT__sum = (0x7ffU & ((IData)(vlSelf->__PVT__sign_small_float) 
                                    + (IData)(vlSelf->__PVT__big_float)));
    vlSelf->__PVT__overflow = ((IData)((((0x1eU == (IData)(vlSelf->__PVT__big_ex)) 
                                         & (IData)(vlSelf->__PVT__sum_carry)) 
                                        & (~ ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                              >> 0xfU)))) 
                               | (IData)(((0x7c00U 
                                           == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__2__KET____DOT__m1.result))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__2__KET____DOT__m1.result))))))));
    __Vtableidx20 = vlSelf->__PVT__sum;
    vlSelf->__PVT__shift_am = Vtb_verilator__ConstPool__TABLE_h8f3ebc9e_0
        [__Vtableidx20];
    vlSelf->__PVT__neg_exp = ((IData)(vlSelf->__PVT__big_ex) 
                              < (IData)(vlSelf->__PVT__shift_am));
}
