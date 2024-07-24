// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator__Syms.h"
#include "Vtb_verilator_floatMult.h"

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__1__KET____DOT__m1__0\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->__PVT__mid[0U] = (0x400U & (- (IData)((1U 
                                                   & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result)))));
    vlSelf->__PVT__mid[1U] = (0x800U & (- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                      >> 1U)))));
    vlSelf->__PVT__mid[2U] = (0x1000U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                       >> 2U)))));
    vlSelf->__PVT__mid[3U] = (0x2000U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                       >> 3U)))));
    vlSelf->__PVT__mid[4U] = (0x4000U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                       >> 4U)))));
    vlSelf->__PVT__mid[5U] = (0x8000U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                       >> 5U)))));
    vlSelf->__PVT__mid[6U] = (0x10000U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                        >> 6U)))));
    vlSelf->__PVT__mid[7U] = (0x20000U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                        >> 7U)))));
    vlSelf->__PVT__mid[8U] = (0x40000U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                        >> 8U)))));
    vlSelf->__PVT__mid[9U] = (0x80000U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                        >> 9U)))));
    vlSelf->__PVT__mid[0xaU] = (0x100000U & (- (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                            >> 0xaU))))));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((IData)(0xfU) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result) 
                                                                      >> 0xaU))))))))));
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
    vlSelf->__PVT__overflow = (1U & ((IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result))) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3ffU 
                                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
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
    vlSelf->__PVT__zero = (1U & ((~ (IData)((0U != 
                                             (0x7fffU 
                                              & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result))))) 
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
    __Vtemp_1 = ((0x8000U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1.result)) 
                 | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                    - (IData)(0xfU)) 
                                   + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                             >> 0xbU)) 
                                      + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__PVT__float_res) 
                                                                          >> 0xaU))))))))) 
                                         + (1U & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->__PVT__float_res) 
                                                                 >> 0xaU))))))))) 
                                  | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                 & (- (IData)((1U & 
                                               (~ ((IData)(vlSelf->__PVT__zero) 
                                                   | ((1U 
                                                       & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                           - (IData)(0xfU)) 
                                                          >> 6U)) 
                                                      | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                << 0xaU)) | (0x3ffU 
                                             & (((0x40U 
                                                  & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                     - (IData)(0xfU)))
                                                  ? 
                                                 (vlSelf->__PVT__res_full 
                                                  >> 0xbU)
                                                  : 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelf->__PVT__float_res) 
                                                       >> 0xaU)))
                                                   ? 
                                                  ((0x800U 
                                                    & (IData)(vlSelf->__PVT__float_res))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__float_res) 
                                                    >> 1U)
                                                    : (IData)(vlSelf->__PVT__float_res))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__exSum_fault))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__exSum_fault))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__exSum_fault))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__exSum_fault))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                         : 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__exSum_fault))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__exSum_fault))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                         : 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                         : 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__exSum_fault))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                         : 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                         : (IData)(vlSelf->__PVT__fraSub))))))
                                                    : (IData)(vlSelf->__PVT__fraSub)))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelf->__PVT__zero) 
                                                                  | (IData)(vlSelf->__PVT__overflow))))))))));
    vlSelf->result = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__2__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__2__KET____DOT__m1__0\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->__PVT__mid[0U] = (0x400U & (- (IData)((1U 
                                                   & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result)))));
    vlSelf->__PVT__mid[1U] = (0x800U & (- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                      >> 1U)))));
    vlSelf->__PVT__mid[2U] = (0x1000U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                       >> 2U)))));
    vlSelf->__PVT__mid[3U] = (0x2000U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                       >> 3U)))));
    vlSelf->__PVT__mid[4U] = (0x4000U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                       >> 4U)))));
    vlSelf->__PVT__mid[5U] = (0x8000U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                       >> 5U)))));
    vlSelf->__PVT__mid[6U] = (0x10000U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                        >> 6U)))));
    vlSelf->__PVT__mid[7U] = (0x20000U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                        >> 7U)))));
    vlSelf->__PVT__mid[8U] = (0x40000U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                        >> 8U)))));
    vlSelf->__PVT__mid[9U] = (0x80000U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                        >> 9U)))));
    vlSelf->__PVT__mid[0xaU] = (0x100000U & (- (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                            >> 0xaU))))));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((IData)(0xfU) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result) 
                                                                      >> 0xaU))))))))));
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
    vlSelf->__PVT__overflow = (1U & ((IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result))) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3ffU 
                                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
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
    vlSelf->__PVT__zero = (1U & ((~ (IData)((0U != 
                                             (0x7fffU 
                                              & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result))))) 
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
    __Vtemp_1 = ((0x8000U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1.result)) 
                 | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                    - (IData)(0xfU)) 
                                   + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                             >> 0xbU)) 
                                      + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__PVT__float_res) 
                                                                          >> 0xaU))))))))) 
                                         + (1U & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->__PVT__float_res) 
                                                                 >> 0xaU))))))))) 
                                  | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                 & (- (IData)((1U & 
                                               (~ ((IData)(vlSelf->__PVT__zero) 
                                                   | ((1U 
                                                       & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                           - (IData)(0xfU)) 
                                                          >> 6U)) 
                                                      | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                << 0xaU)) | (0x3ffU 
                                             & (((0x40U 
                                                  & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                     - (IData)(0xfU)))
                                                  ? 
                                                 (vlSelf->__PVT__res_full 
                                                  >> 0xbU)
                                                  : 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelf->__PVT__float_res) 
                                                       >> 0xaU)))
                                                   ? 
                                                  ((0x800U 
                                                    & (IData)(vlSelf->__PVT__float_res))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__float_res) 
                                                    >> 1U)
                                                    : (IData)(vlSelf->__PVT__float_res))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__exSum_fault))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__exSum_fault))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__exSum_fault))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__exSum_fault))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                         : 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__exSum_fault))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__exSum_fault))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                         : 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                         : 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__exSum_fault))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                         : 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                         : (IData)(vlSelf->__PVT__fraSub))))))
                                                    : (IData)(vlSelf->__PVT__fraSub)))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelf->__PVT__zero) 
                                                                  | (IData)(vlSelf->__PVT__overflow))))))))));
    vlSelf->result = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__3__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__genblk1__BRA__3__KET____DOT__m1__0\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    vlSelf->__PVT__mid[0U] = (0x400U & (- (IData)((1U 
                                                   & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result)))));
    vlSelf->__PVT__mid[1U] = (0x800U & (- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result) 
                                                      >> 1U)))));
    vlSelf->__PVT__mid[2U] = (0x1000U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result) 
                                                       >> 2U)))));
    vlSelf->__PVT__mid[3U] = (0x2000U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result) 
                                                       >> 3U)))));
    vlSelf->__PVT__mid[4U] = (0x4000U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result) 
                                                       >> 4U)))));
    vlSelf->__PVT__mid[5U] = (0x8000U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result) 
                                                       >> 5U)))));
    vlSelf->__PVT__mid[6U] = (0x10000U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result) 
                                                        >> 6U)))));
    vlSelf->__PVT__mid[7U] = (0x20000U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result) 
                                                        >> 7U)))));
    vlSelf->__PVT__mid[8U] = (0x40000U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result) 
                                                        >> 8U)))));
    vlSelf->__PVT__mid[9U] = (0x80000U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result) 
                                                        >> 9U)))));
    vlSelf->__PVT__mid[0xaU] = (0x100000U & (- (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result) 
                                                            >> 0xaU))))));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((IData)(0xfU) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result) 
                                                                      >> 0xaU))))))))));
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
    vlSelf->__PVT__overflow = (1U & ((IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result))) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3ffU 
                                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
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
    vlSelf->__PVT__zero = (1U & ((~ (IData)((0U != 
                                             (0x7fffU 
                                              & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result))))) 
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
    __Vtemp_1 = ((0x8000U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1.result)) 
                 | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                    - (IData)(0xfU)) 
                                   + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                             >> 0xbU)) 
                                      + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__PVT__float_res) 
                                                                          >> 0xaU))))))))) 
                                         + (1U & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->__PVT__float_res) 
                                                                 >> 0xaU))))))))) 
                                  | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                 & (- (IData)((1U & 
                                               (~ ((IData)(vlSelf->__PVT__zero) 
                                                   | ((1U 
                                                       & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                           - (IData)(0xfU)) 
                                                          >> 6U)) 
                                                      | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                << 0xaU)) | (0x3ffU 
                                             & (((0x40U 
                                                  & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                     - (IData)(0xfU)))
                                                  ? 
                                                 (vlSelf->__PVT__res_full 
                                                  >> 0xbU)
                                                  : 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelf->__PVT__float_res) 
                                                       >> 0xaU)))
                                                   ? 
                                                  ((0x800U 
                                                    & (IData)(vlSelf->__PVT__float_res))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__float_res) 
                                                    >> 1U)
                                                    : (IData)(vlSelf->__PVT__float_res))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__exSum_fault))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__exSum_fault))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__exSum_fault))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__exSum_fault))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                         : 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__exSum_fault))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__exSum_fault))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                         : 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                         : 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__exSum_fault))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                         : 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__exSum_fault))
                                                         ? 
                                                        VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                         : (IData)(vlSelf->__PVT__fraSub))))))
                                                    : (IData)(vlSelf->__PVT__fraSub)))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelf->__PVT__zero) 
                                                                  | (IData)(vlSelf->__PVT__overflow))))))))));
    vlSelf->result = __Vtemp_1;
}

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__m1__0\n"); );
    // Body
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))))));
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                  >> 0xaU) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_num) 
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
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))) 
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
    vlSelf->result = ((0x8000U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                  ^ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                      | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                         - (IData)(0xfU)) 
                                        + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                                  >> 0xbU)) 
                                           + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__float_res) 
                                                                               >> 0xaU))))))))) 
                                              + (1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__float_res) 
                                                                   >> 0xaU))))))))) 
                                       | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__zero) 
                                                        | ((1U 
                                                            & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                                - (IData)(0xfU)) 
                                                               >> 6U)) 
                                                           | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                     << 0xaU)) | (0x3ffU 
                                                  & (((0x40U 
                                                       & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                          - (IData)(0xfU)))
                                                       ? 
                                                      (vlSelf->__PVT__res_full 
                                                       >> 0xbU)
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__float_res) 
                                                            >> 0xaU)))
                                                        ? 
                                                       ((0x800U 
                                                         & (IData)(vlSelf->__PVT__float_res))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__float_res) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->__PVT__float_res))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exSum_fault))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exSum_fault))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                              : (IData)(vlSelf->__PVT__fraSub))))))
                                                         : (IData)(vlSelf->__PVT__fraSub)))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->__PVT__zero) 
                                                                       | (IData)(vlSelf->__PVT__overflow))))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__m1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                              << 0xaU)));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__m1__1(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__m1__1\n"); );
    // Body
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))))));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                  >> 0xaU) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_num) 
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
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))) 
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
    vlSelf->result = ((0x8000U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                  ^ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                      | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                         - (IData)(0xfU)) 
                                        + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                                  >> 0xbU)) 
                                           + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__float_res) 
                                                                               >> 0xaU))))))))) 
                                              + (1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__float_res) 
                                                                   >> 0xaU))))))))) 
                                       | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__zero) 
                                                        | ((1U 
                                                            & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                                - (IData)(0xfU)) 
                                                               >> 6U)) 
                                                           | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                     << 0xaU)) | (0x3ffU 
                                                  & (((0x40U 
                                                       & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                          - (IData)(0xfU)))
                                                       ? 
                                                      (vlSelf->__PVT__res_full 
                                                       >> 0xbU)
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__float_res) 
                                                            >> 0xaU)))
                                                        ? 
                                                       ((0x800U 
                                                         & (IData)(vlSelf->__PVT__float_res))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__float_res) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->__PVT__float_res))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exSum_fault))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exSum_fault))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                              : (IData)(vlSelf->__PVT__fraSub))))))
                                                         : (IData)(vlSelf->__PVT__fraSub)))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->__PVT__zero) 
                                                                       | (IData)(vlSelf->__PVT__overflow))))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1__0\n"); );
    // Body
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))))));
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                  >> 0xaU) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_num) 
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
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))) 
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
    vlSelf->result = ((0x8000U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                  ^ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                      | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                         - (IData)(0xfU)) 
                                        + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                                  >> 0xbU)) 
                                           + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__float_res) 
                                                                               >> 0xaU))))))))) 
                                              + (1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__float_res) 
                                                                   >> 0xaU))))))))) 
                                       | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__zero) 
                                                        | ((1U 
                                                            & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                                - (IData)(0xfU)) 
                                                               >> 6U)) 
                                                           | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                     << 0xaU)) | (0x3ffU 
                                                  & (((0x40U 
                                                       & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                          - (IData)(0xfU)))
                                                       ? 
                                                      (vlSelf->__PVT__res_full 
                                                       >> 0xbU)
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__float_res) 
                                                            >> 0xaU)))
                                                        ? 
                                                       ((0x800U 
                                                         & (IData)(vlSelf->__PVT__float_res))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__float_res) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->__PVT__float_res))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exSum_fault))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exSum_fault))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                              : (IData)(vlSelf->__PVT__fraSub))))))
                                                         : (IData)(vlSelf->__PVT__fraSub)))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->__PVT__zero) 
                                                                       | (IData)(vlSelf->__PVT__overflow))))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                              << 0xaU)));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1__1(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__m1__1\n"); );
    // Body
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))))));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                  >> 0xaU) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_num) 
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
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))) 
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
    vlSelf->result = ((0x8000U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                  ^ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                      | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                         - (IData)(0xfU)) 
                                        + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                                  >> 0xbU)) 
                                           + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__float_res) 
                                                                               >> 0xaU))))))))) 
                                              + (1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__float_res) 
                                                                   >> 0xaU))))))))) 
                                       | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__zero) 
                                                        | ((1U 
                                                            & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                                - (IData)(0xfU)) 
                                                               >> 6U)) 
                                                           | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                     << 0xaU)) | (0x3ffU 
                                                  & (((0x40U 
                                                       & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                          - (IData)(0xfU)))
                                                       ? 
                                                      (vlSelf->__PVT__res_full 
                                                       >> 0xbU)
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__float_res) 
                                                            >> 0xaU)))
                                                        ? 
                                                       ((0x800U 
                                                         & (IData)(vlSelf->__PVT__float_res))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__float_res) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->__PVT__float_res))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exSum_fault))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exSum_fault))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                              : (IData)(vlSelf->__PVT__fraSub))))))
                                                         : (IData)(vlSelf->__PVT__fraSub)))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->__PVT__zero) 
                                                                       | (IData)(vlSelf->__PVT__overflow))))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1__0\n"); );
    // Body
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))))));
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                  >> 0xaU) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_num) 
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
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))) 
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
    vlSelf->result = ((0x8000U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                  ^ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                      | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                         - (IData)(0xfU)) 
                                        + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                                  >> 0xbU)) 
                                           + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__float_res) 
                                                                               >> 0xaU))))))))) 
                                              + (1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__float_res) 
                                                                   >> 0xaU))))))))) 
                                       | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__zero) 
                                                        | ((1U 
                                                            & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                                - (IData)(0xfU)) 
                                                               >> 6U)) 
                                                           | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                     << 0xaU)) | (0x3ffU 
                                                  & (((0x40U 
                                                       & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                          - (IData)(0xfU)))
                                                       ? 
                                                      (vlSelf->__PVT__res_full 
                                                       >> 0xbU)
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__float_res) 
                                                            >> 0xaU)))
                                                        ? 
                                                       ((0x800U 
                                                         & (IData)(vlSelf->__PVT__float_res))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__float_res) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->__PVT__float_res))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exSum_fault))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exSum_fault))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                              : (IData)(vlSelf->__PVT__fraSub))))))
                                                         : (IData)(vlSelf->__PVT__fraSub)))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->__PVT__zero) 
                                                                       | (IData)(vlSelf->__PVT__overflow))))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                              << 0xaU)));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1__1(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__m1__1\n"); );
    // Body
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))))));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                  >> 0xaU) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_num) 
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
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))) 
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
    vlSelf->result = ((0x8000U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                  ^ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                      | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                         - (IData)(0xfU)) 
                                        + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                                  >> 0xbU)) 
                                           + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__float_res) 
                                                                               >> 0xaU))))))))) 
                                              + (1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__float_res) 
                                                                   >> 0xaU))))))))) 
                                       | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__zero) 
                                                        | ((1U 
                                                            & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                                - (IData)(0xfU)) 
                                                               >> 6U)) 
                                                           | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                     << 0xaU)) | (0x3ffU 
                                                  & (((0x40U 
                                                       & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                          - (IData)(0xfU)))
                                                       ? 
                                                      (vlSelf->__PVT__res_full 
                                                       >> 0xbU)
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__float_res) 
                                                            >> 0xaU)))
                                                        ? 
                                                       ((0x800U 
                                                         & (IData)(vlSelf->__PVT__float_res))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__float_res) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->__PVT__float_res))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exSum_fault))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exSum_fault))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                              : (IData)(vlSelf->__PVT__fraSub))))))
                                                         : (IData)(vlSelf->__PVT__fraSub)))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->__PVT__zero) 
                                                                       | (IData)(vlSelf->__PVT__overflow))))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1__0\n"); );
    // Body
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))))));
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                  >> 0xaU) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_num) 
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
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))) 
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
    vlSelf->result = ((0x8000U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                  ^ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                      | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                         - (IData)(0xfU)) 
                                        + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                                  >> 0xbU)) 
                                           + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__float_res) 
                                                                               >> 0xaU))))))))) 
                                              + (1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__float_res) 
                                                                   >> 0xaU))))))))) 
                                       | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__zero) 
                                                        | ((1U 
                                                            & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                                - (IData)(0xfU)) 
                                                               >> 6U)) 
                                                           | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                     << 0xaU)) | (0x3ffU 
                                                  & (((0x40U 
                                                       & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                          - (IData)(0xfU)))
                                                       ? 
                                                      (vlSelf->__PVT__res_full 
                                                       >> 0xbU)
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__float_res) 
                                                            >> 0xaU)))
                                                        ? 
                                                       ((0x800U 
                                                         & (IData)(vlSelf->__PVT__float_res))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__float_res) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->__PVT__float_res))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exSum_fault))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exSum_fault))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                              : (IData)(vlSelf->__PVT__fraSub))))))
                                                         : (IData)(vlSelf->__PVT__fraSub)))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->__PVT__zero) 
                                                                       | (IData)(vlSelf->__PVT__overflow))))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1__0\n"); );
    // Body
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                              << 0xaU)));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1__1(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__m1__1\n"); );
    // Body
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))))));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                  >> 0xaU) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_num) 
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
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))))) 
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
    vlSelf->result = ((0x8000U & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                  ^ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__s1__DOT__out_o))) 
                      | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                         - (IData)(0xfU)) 
                                        + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                                  >> 0xbU)) 
                                           + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__float_res) 
                                                                               >> 0xaU))))))))) 
                                              + (1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__float_res) 
                                                                   >> 0xaU))))))))) 
                                       | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__zero) 
                                                        | ((1U 
                                                            & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                                - (IData)(0xfU)) 
                                                               >> 6U)) 
                                                           | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                     << 0xaU)) | (0x3ffU 
                                                  & (((0x40U 
                                                       & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                          - (IData)(0xfU)))
                                                       ? 
                                                      (vlSelf->__PVT__res_full 
                                                       >> 0xbU)
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__float_res) 
                                                            >> 0xaU)))
                                                        ? 
                                                       ((0x800U 
                                                         & (IData)(vlSelf->__PVT__float_res))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__float_res) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->__PVT__float_res))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exSum_fault))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exSum_fault))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                              : (IData)(vlSelf->__PVT__fraSub))))))
                                                         : (IData)(vlSelf->__PVT__fraSub)))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->__PVT__zero) 
                                                                       | (IData)(vlSelf->__PVT__overflow))))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__m1__0\n"); );
    // Body
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result))))))));
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                  >> 0xaU) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_num) 
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
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__0__KET____DOT__a1.result))))) 
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

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__m1__0\n"); );
    // Body
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result))))))));
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                  >> 0xaU) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_num) 
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
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__1__KET____DOT__a1.result))))) 
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

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__m1__0\n"); );
    // Body
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result))))))));
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                  >> 0xaU) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_num) 
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
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__2__KET____DOT__a1.result))))) 
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

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__m1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__m1__0\n"); );
    // Body
    vlSelf->__PVT__inf_num = ((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result))))))) 
                              | (IData)(((0x7c00U == 
                                          (0x7c00U 
                                           & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result))))))));
    vlSelf->__PVT__float1 = (((IData)((0U != (0x1fU 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                 >> 0xaU)))) 
                              << 0x14U) | (0xffc00U 
                                           & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                              << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((0x1fU 
                                              & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                  >> 0xaU) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                                    >> 0xaU)))))))) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                                      >> 0xaU))))))))));
    vlSelf->__PVT__mid[0U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 0xaU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result))))));
    vlSelf->__PVT__mid[1U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 9U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                            >> 1U))))));
    vlSelf->__PVT__mid[2U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 8U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                            >> 2U))))));
    vlSelf->__PVT__mid[3U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 7U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                            >> 3U))))));
    vlSelf->__PVT__mid[4U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 6U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                            >> 4U))))));
    vlSelf->__PVT__mid[5U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 5U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                            >> 5U))))));
    vlSelf->__PVT__mid[6U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 4U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                            >> 6U))))));
    vlSelf->__PVT__mid[7U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 3U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                            >> 7U))))));
    vlSelf->__PVT__mid[8U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 2U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                            >> 8U))))));
    vlSelf->__PVT__mid[9U] = (0x1fffffU & (VL_SHIFTR_III(21,21,32, vlSelf->__PVT__float1, 1U) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                            >> 9U))))));
    vlSelf->__PVT__mid[0xaU] = (vlSelf->__PVT__float1 
                                & (- (IData)((0U != 
                                              (0x1fU 
                                               & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result) 
                                                  >> 0xaU))))));
    vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_num) 
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
                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result))) 
                                     & (0U != (0x7fffU 
                                               & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__genblk1__BRA__3__KET____DOT__a1.result))))) 
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

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg__DOT__FM1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg__DOT__FM1__0\n"); );
    // Body
    vlSelf->__PVT__mid[0U] = 0U;
    vlSelf->__PVT__mid[1U] = 0U;
    vlSelf->__PVT__mid[2U] = 0U;
    vlSelf->__PVT__mid[3U] = 0U;
    vlSelf->__PVT__mid[4U] = 0U;
    vlSelf->__PVT__mid[5U] = 0U;
    vlSelf->__PVT__mid[6U] = 0U;
    vlSelf->__PVT__mid[7U] = 0U;
    vlSelf->__PVT__mid[8U] = 0U;
    vlSelf->__PVT__mid[9U] = 0U;
    vlSelf->__PVT__mid[0xaU] = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg__DOT__FADD1.result) 
                                                    >> 0xaU)))) 
                                 << 0x14U) | (0xffc00U 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg__DOT__FADD1.result) 
                                                 << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((IData)(0xdU) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg__DOT__FADD1.result) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg__DOT__FADD1.result) 
                                                                      >> 0xaU))))))))));
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
    vlSelf->__PVT__overflow = (1U & ((IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg__DOT__FADD1.result))) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3ffU 
                                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg__DOT__FADD1.result))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
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
    vlSelf->__PVT__zero = (1U & ((~ (IData)((0U != 
                                             (0x7fffU 
                                              & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg__DOT__FADD1.result))))) 
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
    vlSelf->result = ((0x8000U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg__DOT__FADD1.result)) 
                      | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                         - (IData)(0xfU)) 
                                        + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                                  >> 0xbU)) 
                                           + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__float_res) 
                                                                               >> 0xaU))))))))) 
                                              + (1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__float_res) 
                                                                   >> 0xaU))))))))) 
                                       | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__zero) 
                                                        | ((1U 
                                                            & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                                - (IData)(0xfU)) 
                                                               >> 6U)) 
                                                           | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                     << 0xaU)) | (0x3ffU 
                                                  & (((0x40U 
                                                       & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                          - (IData)(0xfU)))
                                                       ? 
                                                      (vlSelf->__PVT__res_full 
                                                       >> 0xbU)
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__float_res) 
                                                            >> 0xaU)))
                                                        ? 
                                                       ((0x800U 
                                                         & (IData)(vlSelf->__PVT__float_res))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__float_res) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->__PVT__float_res))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exSum_fault))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exSum_fault))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                              : (IData)(vlSelf->__PVT__fraSub))))))
                                                         : (IData)(vlSelf->__PVT__fraSub)))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->__PVT__zero) 
                                                                       | (IData)(vlSelf->__PVT__overflow))))))))));
}

VL_INLINE_OPT void Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg2__DOT__FM1__0(Vtb_verilator_floatMult* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_verilator_floatMult___act_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg2__DOT__FM1__0\n"); );
    // Body
    vlSelf->__PVT__mid[0U] = 0U;
    vlSelf->__PVT__mid[1U] = 0U;
    vlSelf->__PVT__mid[2U] = 0U;
    vlSelf->__PVT__mid[3U] = 0U;
    vlSelf->__PVT__mid[4U] = 0U;
    vlSelf->__PVT__mid[5U] = 0U;
    vlSelf->__PVT__mid[6U] = 0U;
    vlSelf->__PVT__mid[7U] = 0U;
    vlSelf->__PVT__mid[8U] = 0U;
    vlSelf->__PVT__mid[9U] = 0U;
    vlSelf->__PVT__mid[0xaU] = (((IData)((0U != (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg2__DOT__FADD1.result) 
                                                    >> 0xaU)))) 
                                 << 0x14U) | (0xffc00U 
                                              & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg2__DOT__FADD1.result) 
                                                 << 0xaU)));
    vlSelf->__PVT__exSum_prebais = (0x3fU & ((IData)(0xdU) 
                                             + (0x1fU 
                                                & (((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg2__DOT__FADD1.result) 
                                                    >> 0xaU) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg2__DOT__FADD1.result) 
                                                                      >> 0xaU))))))))));
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
    vlSelf->__PVT__overflow = (1U & ((IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg2__DOT__FADD1.result))) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3ffU 
                                                             & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg2__DOT__FADD1.result))))))) 
                                     | (3U & ((~ (1U 
                                                  & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                      - (IData)(0xfU)) 
                                                     >> 6U))) 
                                              & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                  - (IData)(0xfU)) 
                                                 >> 5U)))));
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
    vlSelf->__PVT__zero = (1U & ((~ (IData)((0U != 
                                             (0x7fffU 
                                              & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg2__DOT__FADD1.result))))) 
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
    vlSelf->result = ((0x8000U & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_acc_top__DOT__u_bn_multi__DOT__genblk1__BRA__0__KET____DOT__bn_c__DOT__b1__DOT__fangcha__DOT__avg2__DOT__FADD1.result)) 
                      | ((0x7c00U & ((((((IData)(vlSelf->__PVT__exSum_prebais) 
                                         - (IData)(0xfU)) 
                                        + ((1U & ((IData)(vlSelf->__PVT__float_res) 
                                                  >> 0xbU)) 
                                           + (((~ (IData)(vlSelf->__PVT__exSubCor)) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & ((IData)(vlSelf->__PVT__float_res) 
                                                                               >> 0xaU))))))))) 
                                              + (1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelf->__PVT__float_res) 
                                                                   >> 0xaU))))))))) 
                                       | (- (IData)((IData)(vlSelf->__PVT__overflow)))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__zero) 
                                                        | ((1U 
                                                            & (((IData)(vlSelf->__PVT__exSum_prebais) 
                                                                - (IData)(0xfU)) 
                                                               >> 6U)) 
                                                           | (IData)(vlSelf->__PVT__ex_cannot_correct)))))))) 
                                     << 0xaU)) | (0x3ffU 
                                                  & (((0x40U 
                                                       & ((IData)(vlSelf->__PVT__exSum_prebais) 
                                                          - (IData)(0xfU)))
                                                       ? 
                                                      (vlSelf->__PVT__res_full 
                                                       >> 0xbU)
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelf->__PVT__float_res) 
                                                            >> 0xaU)))
                                                        ? 
                                                       ((0x800U 
                                                         & (IData)(vlSelf->__PVT__float_res))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__float_res) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->__PVT__float_res))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__ex_cannot_correct)
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exSum_fault))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exSum_fault))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 9U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 8U))))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exSum_fault))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 7U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 6U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 5U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 4U)))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exSum_fault))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 3U)
                                                              : 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 2U))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exSum_fault))
                                                              ? 
                                                             VL_SHIFTR_III(10,10,32, (IData)(vlSelf->__PVT__fraSub), 1U)
                                                              : (IData)(vlSelf->__PVT__fraSub))))))
                                                         : (IData)(vlSelf->__PVT__fraSub)))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->__PVT__zero) 
                                                                       | (IData)(vlSelf->__PVT__overflow))))))))));
}
