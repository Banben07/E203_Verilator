// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator__Syms.h"
#include "Vtb_verilator_floatMult.h"

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__0__KET____DOT__u_float_multi_1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__0__KET____DOT__u_float_multi_1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U] 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U] 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U] 
                                                   << 0x16U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U] 
                                                     >> 0xaU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U] 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U])))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U])) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_1))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__0__KET____DOT__u_float_multi_2__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__0__KET____DOT__u_float_multi_2__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U] 
                                                 >> 0x1aU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U] 
                                              >> 6U)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U] 
                                                   << 6U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U] 
                                                     >> 0x1aU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U] 
                                                                    >> 0x1aU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c000000U 
                                                == 
                                                (0x7c000000U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U] 
                                                                 >> 0x10U))))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[0U] 
                                                >> 0x10U))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_1))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__1__KET____DOT__u_float_multi_1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__1__KET____DOT__u_float_multi_1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U] 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U] 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U] 
                                                   << 0x16U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U] 
                                                     >> 0xaU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U] 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U])))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U])) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_2))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__1__KET____DOT__u_float_multi_2__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__1__KET____DOT__u_float_multi_2__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U] 
                                                 >> 0x1aU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U] 
                                              >> 6U)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U] 
                                                   << 6U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U] 
                                                     >> 0x1aU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U] 
                                                                    >> 0x1aU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c000000U 
                                                == 
                                                (0x7c000000U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U] 
                                                                 >> 0x10U))))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[1U] 
                                                >> 0x10U))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_2))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__2__KET____DOT__u_float_multi_1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__2__KET____DOT__u_float_multi_1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U] 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U] 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U] 
                                                   << 0x16U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U] 
                                                     >> 0xaU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U] 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U])))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U])) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap1_3))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__2__KET____DOT__u_float_multi_2__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__2__KET____DOT__u_float_multi_2__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U] 
                                                 >> 0x1aU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U] 
                                              >> 6U)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U] 
                                                   << 6U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U] 
                                                     >> 0x1aU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U] 
                                                                    >> 0x1aU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c000000U 
                                                == 
                                                (0x7c000000U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U] 
                                                                 >> 0x10U))))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[2U] 
                                                >> 0x10U))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap1_3))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__3__KET____DOT__u_float_multi_1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__3__KET____DOT__u_float_multi_1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U] 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U] 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U] 
                                                   << 0x16U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U] 
                                                     >> 0xaU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U] 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U])))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U])) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_1))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__3__KET____DOT__u_float_multi_2__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__3__KET____DOT__u_float_multi_2__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U] 
                                                 >> 0x1aU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U] 
                                              >> 6U)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U] 
                                                   << 6U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U] 
                                                     >> 0x1aU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U] 
                                                                    >> 0x1aU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c000000U 
                                                == 
                                                (0x7c000000U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U] 
                                                                 >> 0x10U))))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[3U] 
                                                >> 0x10U))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_1))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__4__KET____DOT__u_float_multi_1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__4__KET____DOT__u_float_multi_1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U] 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U] 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U] 
                                                   << 0x16U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U] 
                                                     >> 0xaU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U] 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U])))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U])) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_2))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__4__KET____DOT__u_float_multi_2__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__4__KET____DOT__u_float_multi_2__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U] 
                                                 >> 0x1aU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U] 
                                              >> 6U)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U] 
                                                   << 6U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U] 
                                                     >> 0x1aU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U] 
                                                                    >> 0x1aU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c000000U 
                                                == 
                                                (0x7c000000U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U] 
                                                                 >> 0x10U))))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[4U] 
                                                >> 0x10U))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_2))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__5__KET____DOT__u_float_multi_1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__5__KET____DOT__u_float_multi_1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U] 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U] 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U] 
                                                   << 0x16U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U] 
                                                     >> 0xaU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U] 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U])))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U])) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap2_3))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__5__KET____DOT__u_float_multi_2__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__5__KET____DOT__u_float_multi_2__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U] 
                                                 >> 0x1aU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U] 
                                              >> 6U)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U] 
                                                   << 6U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U] 
                                                     >> 0x1aU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U] 
                                                                    >> 0x1aU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c000000U 
                                                == 
                                                (0x7c000000U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U] 
                                                                 >> 0x10U))))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[5U] 
                                                >> 0x10U))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap2_3))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__6__KET____DOT__u_float_multi_1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__6__KET____DOT__u_float_multi_1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U] 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U] 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U] 
                                                   << 0x16U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U] 
                                                     >> 0xaU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U] 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U])))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U])) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_1))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__6__KET____DOT__u_float_multi_2__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__6__KET____DOT__u_float_multi_2__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U] 
                                                 >> 0x1aU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U] 
                                              >> 6U)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U] 
                                                   << 6U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U] 
                                                     >> 0x1aU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U] 
                                                                    >> 0x1aU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c000000U 
                                                == 
                                                (0x7c000000U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U] 
                                                                 >> 0x10U))))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[6U] 
                                                >> 0x10U))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_1))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__7__KET____DOT__u_float_multi_1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__7__KET____DOT__u_float_multi_1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U] 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U] 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U] 
                                                   << 0x16U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U] 
                                                     >> 0xaU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U] 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U])))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U])) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_2))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__7__KET____DOT__u_float_multi_2__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__7__KET____DOT__u_float_multi_2__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U] 
                                                 >> 0x1aU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U] 
                                              >> 6U)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U] 
                                                   << 6U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U] 
                                                     >> 0x1aU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U] 
                                                                    >> 0x1aU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c000000U 
                                                == 
                                                (0x7c000000U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U] 
                                                                 >> 0x10U))))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[7U] 
                                                >> 0x10U))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_2))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__8__KET____DOT__u_float_multi_1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__8__KET____DOT__u_float_multi_1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U] 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U] 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U] 
                                                   << 0x16U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U] 
                                                     >> 0xaU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U] 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U])))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U])) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_1__DOT__ifmap3_3))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}

VL_ATTR_COLD void Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__8__KET____DOT__u_float_multi_2__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_conv_kernal__DOT__genblk1__BRA__8__KET____DOT__u_float_multi_2__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U] 
                                                 >> 0x1aU)))) 
                              << 0x14U) | (0xffc00U 
                                           & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U] 
                                              >> 6U)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U] 
                                                   << 6U) 
                                                  | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U] 
                                                     >> 0x1aU)) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U] 
                                                                    >> 0x1aU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & (((IData)(((0x7c000000U 
                                                == 
                                                (0x7c000000U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U])) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x3ffU 
                                                              & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U] 
                                                                 >> 0x10U))))))) 
                                      | (IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3)))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
    vlSelf->__PVT__res_full_preshift = (0x3fffffU & 
                                        (vlSelf->__PVT__mid
                                         [0U] + (vlSelf->__PVT__mid
                                                 [1U] 
                                                 + 
                                                 (vlSelf->__PVT__mid
                                                  [2U] 
                                                  + 
                                                  (vlSelf->__PVT__mid
                                                   [3U] 
                                                   + 
                                                   (vlSelf->__PVT__mid
                                                    [4U] 
                                                    + 
                                                    (vlSelf->__PVT__mid
                                                     [5U] 
                                                     + 
                                                     (vlSelf->__PVT__mid
                                                      [6U] 
                                                      + 
                                                      (vlSelf->__PVT__mid
                                                       [7U] 
                                                       + 
                                                       (vlSelf->__PVT__mid
                                                        [8U] 
                                                        + 
                                                        (vlSelf->__PVT__mid
                                                         [9U] 
                                                         + 
                                                         vlSelf->__PVT__mid
                                                         [0xaU])))))))))));
    if ((0x40U & ((IData)(vlSelf->__PVT__exSum_prebais) 
                  - (IData)(0xfU)))) {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(1U) 
                                             + (~ ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                   - (IData)(0xfU)))));
        vlSelf->__PVT__res_full = (0x3fffffU & ((0x20U 
                                                 & (IData)(vlSelf->__PVT__exSum_abs))
                                                 ? 
                                                VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->__PVT__exSum_abs))
                                                  ? 
                                                 VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0x10U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->__PVT__exSum_abs))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xfU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xdU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xbU)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 9U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__exSum_abs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 7U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 5U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__exSum_abs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 3U)
                                                      : 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__exSum_abs))
                                                      ? 
                                                     VL_SHIFTR_III(22,22,32, vlSelf->__PVT__res_full_preshift, 1U)
                                                      : vlSelf->__PVT__res_full_preshift)))))));
    } else {
        vlSelf->__PVT__exSum_abs = (0x3fU & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                             - (IData)(0xfU)));
        vlSelf->__PVT__res_full = (0x3fffffU & vlSelf->__PVT__res_full_preshift);
    }
    vlSelf->__PVT__float_res = (0xfffU & ((vlSelf->__PVT__res_full_preshift 
                                           >> 0xaU) 
                                          + (1U & (vlSelf->__PVT__res_full_preshift 
                                                   >> 9U))));
    if (((((((((0x80000U == (0x380000U & vlSelf->__PVT__res_full)) 
               | (0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) 
              | (0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) 
             | (0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) 
            | (0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) 
           | (0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) 
          | (0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) 
         | (0x1000U == (0x3ff000U & vlSelf->__PVT__res_full)))) {
        if ((0x80000U == (0x380000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 9U));
            vlSelf->__PVT__exSubCor = 1U;
        } else if ((0x40000U == (0x3c0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 8U));
            vlSelf->__PVT__exSubCor = 2U;
        } else if ((0x20000U == (0x3e0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 7U));
            vlSelf->__PVT__exSubCor = 3U;
        } else if ((0x10000U == (0x3f0000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 6U));
            vlSelf->__PVT__exSubCor = 4U;
        } else if ((0x8000U == (0x3f8000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 5U));
            vlSelf->__PVT__exSubCor = 5U;
        } else if ((0x4000U == (0x3fc000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 4U));
            vlSelf->__PVT__exSubCor = 6U;
        } else if ((0x2000U == (0x3fe000U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 3U));
            vlSelf->__PVT__exSubCor = 7U;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 2U));
            vlSelf->__PVT__exSubCor = 8U;
        }
    } else if (((((((((0x800U == (0x3ff800U & vlSelf->__PVT__res_full)) 
                      | (0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) 
                     | (0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) 
                    | (0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) 
                   | (0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) 
                  | (0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) 
                 | (0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) 
                | (0x10U == (0x3ffff0U & vlSelf->__PVT__res_full)))) {
        if ((0x800U == (0x3ff800U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (vlSelf->__PVT__res_full 
                                               >> 1U));
            vlSelf->__PVT__exSubCor = 9U;
        } else if ((0x400U == (0x3ffc00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & vlSelf->__PVT__res_full);
            vlSelf->__PVT__exSubCor = 0xaU;
        } else if ((0x200U == (0x3ffe00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3feU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 1U)));
            vlSelf->__PVT__exSubCor = 0xbU;
        } else if ((0x100U == (0x3fff00U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3fcU 
                                               & (vlSelf->__PVT__res_full 
                                                  << 2U)));
            vlSelf->__PVT__exSubCor = 0xcU;
        } else if ((0x80U == (0x3fff80U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f8U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 3U)));
            vlSelf->__PVT__exSubCor = 0xdU;
        } else if ((0x40U == (0x3fffc0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3f0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 4U)));
            vlSelf->__PVT__exSubCor = 0xeU;
        } else if ((0x20U == (0x3fffe0U & vlSelf->__PVT__res_full))) {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3e0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 5U)));
            vlSelf->__PVT__exSubCor = 0xfU;
        } else {
            vlSelf->__PVT__fraSub = (0x3ffU & (0x3c0U 
                                               & (vlSelf->__PVT__res_full 
                                                  << 6U)));
            vlSelf->__PVT__exSubCor = 0x10U;
        }
    } else if ((8U == (0x3ffff8U & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x380U & 
                                           (vlSelf->__PVT__res_full 
                                            << 7U)));
        vlSelf->__PVT__exSubCor = 0x11U;
    } else if ((4U == (0x3ffffcU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x300U & 
                                           (vlSelf->__PVT__res_full 
                                            << 8U)));
        vlSelf->__PVT__exSubCor = 0x12U;
    } else if ((2U == (0x3ffffeU & vlSelf->__PVT__res_full))) {
        vlSelf->__PVT__fraSub = (0x3ffU & (0x200U & 
                                           (vlSelf->__PVT__res_full 
                                            << 9U)));
        vlSelf->__PVT__exSubCor = 0x13U;
    } else {
        vlSelf->__PVT__fraSub = (0x3ffU & 0U);
        vlSelf->__PVT__exSubCor = 0U;
    }
    vlSelf->__PVT__zero = (1U & ((~ ((0U != (0x7fffU 
                                             & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__weight_data[8U] 
                                                >> 0x10U))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_conv_control__DOT__u_linebuffer_2__DOT__ifmap3_3))))) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->__PVT__float_res) 
                                                     >> 0xaU))))) 
                                     & (0U == (IData)(vlSelf->__PVT__fraSub))) 
                                    | (1U & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3ffU 
                                                          & (vlSelf->__PVT__res_full 
                                                             >> 0xbU))))) 
                                             & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                 - (IData)(0xfU)) 
                                                >> 6U))))));
    vlSelf->__PVT__ex_cannot_correct = ((IData)(vlSelf->__PVT__exSubCor) 
                                        > (IData)(vlSelf->__PVT__exSum_abs));
    vlSelf->__PVT__exSum_fault = (0x1fU & ((IData)(vlSelf->__PVT__exSubCor) 
                                           - (IData)(vlSelf->__PVT__exSum_abs)));
}
