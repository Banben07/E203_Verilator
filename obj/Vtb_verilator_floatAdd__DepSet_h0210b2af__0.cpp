// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator_floatAdd.h"

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_float_adder_stage2_2__1(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_float_adder_stage2_2__1\n"); );
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
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__u_addertree9_fp16_1__DOT__u_float_adder_stage2_2__0\n"); );
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
                      & (- (IData)((1U & (~ (IData)(vlSelf->__PVT__zero))))));
}

VL_INLINE_OPT void Vtb_verilator_floatAdd___act_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__a5__0(Vtb_verilator_floatAdd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatAdd___act_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__a5__0\n"); );
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
    vlSelf->result = ((IData)(vlSelf->__PVT__mid_result) 
                      & (- (IData)((1U & (~ (IData)(vlSelf->__PVT__zero))))));
    vlSelf->__PVT__res_exp_same_s = (0x1fU & (((IData)(vlSelf->__PVT__big_ex) 
                                               + ((
                                                   (~ (IData)(vlSelf->__PVT__zeroSmall)) 
                                                   & (IData)(vlSelf->__PVT__sum_carry)) 
                                                  & (IData)(vlSelf->__PVT__sameSign))) 
                                              - ((0x3ffU 
                                                  & (IData)(vlSelf->__PVT__mid_result)) 
                                                 == (IData)(vlSelf->__PVT__sum))));
}
