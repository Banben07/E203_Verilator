// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator__Syms.h"
#include "Vtb_verilator_timer_module__NB30.h"

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_verilator__ConstPool__TABLE_h82cd3644_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_verilator__ConstPool__TABLE_hb23e0b38_0;

VL_ATTR_COLD void Vtb_verilator_timer_module__NB30___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_tim0__0(Vtb_verilator_timer_module__NB30* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_verilator_timer_module__NB30___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_tim0__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->__PVT__u_in_stage__DOT__s_rise_ls_clk = (IData)(
                                                            (2U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__PVT__u_in_stage__DOT__r_ls_clk_sync))));
    vlSelf->__PVT__s_ctrl_rst = (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer0_start) 
                                  & (~ (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) 
                                 || (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer0_rst));
    vlSelf->__PVT__s_cnt_evt = ((IData)(vlSelf->__PVT__u_controller__DOT__r_active) 
                                & (IData)(vlSelf->__PVT__u_counter__DOT__r_event));
    vlSelf->pwm_o = (((IData)(vlSelf->__PVT__u_comp_ch3__DOT__r_value) 
                      << 3U) | (((IData)(vlSelf->__PVT__u_comp_ch2__DOT__r_value) 
                                 << 2U) | (((IData)(vlSelf->__PVT__u_comp_ch1__DOT__r_value) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__u_comp_ch0__DOT__r_value))));
    vlSelf->__PVT__s_ctrl_update_all = (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer0_start) 
                                         & (~ (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) 
                                        || (IData)(vlSelf->__PVT__s_cnt_evt));
    vlSelf->__PVT__u_comp_ch0__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch0__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_comp_ch1__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch1__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_comp_ch2__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch2__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_comp_ch3__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch3__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_counter__DOT__s_is_update = ((IData)(vlSelf->__PVT__u_counter__DOT__r_sawtooth)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                                   == (IData)(vlSelf->__PVT__u_counter__DOT__r_end))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_counter__DOT__r_direction) 
                                                   & ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                                      == 
                                                      ((IData)(vlSelf->__PVT__u_counter__DOT__r_start) 
                                                       - (IData)(1U)))));
    vlSelf->__PVT__s_cnt_end = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                & (IData)(vlSelf->__PVT__u_counter__DOT__s_is_update));
    if (vlSelf->__PVT__u_counter__DOT__r_sawtooth) {
        vlSelf->__PVT__u_comp_ch0__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
        vlSelf->__PVT__u_comp_ch1__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
        vlSelf->__PVT__u_comp_ch2__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
        vlSelf->__PVT__u_comp_ch3__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
    } else {
        vlSelf->__PVT__u_comp_ch0__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch0__DOT__s_match;
        vlSelf->__PVT__u_comp_ch1__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch1__DOT__s_match;
        vlSelf->__PVT__u_comp_ch2__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch2__DOT__s_match;
        vlSelf->__PVT__u_comp_ch3__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch3__DOT__s_match;
    }
    __Vtableidx3 = (((IData)(vlSelf->__PVT__s_ctrl_rst) 
                     << 5U) | (((IData)(vlSelf->__PVT__s_presc_evt) 
                                << 4U) | (((IData)(vlSelf->__PVT__u_counter__DOT__s_is_update) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__u_controller__DOT__r_active) 
                                            << 2U) 
                                           | (((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer0_start) 
                                                 & (~ (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) 
                                                || (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer0_update)) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__u_counter__DOT__r_pending_update))))));
    vlSelf->__PVT__u_counter__DOT__s_pending_update 
        = Vtb_verilator__ConstPool__TABLE_h82cd3644_0
        [__Vtableidx3];
    vlSelf->__PVT__u_counter__DOT__s_do_update = Vtb_verilator__ConstPool__TABLE_hb23e0b38_0
        [__Vtableidx3];
    vlSelf->__PVT__u_counter__DOT__s_start = vlSelf->__PVT__u_counter__DOT__r_start;
    vlSelf->__PVT__u_counter__DOT__s_sawtooth = vlSelf->__PVT__u_counter__DOT__r_sawtooth;
    vlSelf->__PVT__u_counter__DOT__s_end = vlSelf->__PVT__u_counter__DOT__r_end;
    vlSelf->__PVT__u_counter__DOT__s_direction = vlSelf->__PVT__u_counter__DOT__r_direction;
    vlSelf->__PVT__u_counter__DOT__s_counter = vlSelf->__PVT__u_counter__DOT__r_counter;
    if (vlSelf->__PVT__u_counter__DOT__s_do_update) {
        vlSelf->__PVT__u_counter__DOT__s_start = (0xffffU 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer0_th);
        vlSelf->__PVT__u_counter__DOT__s_sawtooth = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer0_saw;
        vlSelf->__PVT__u_counter__DOT__s_end = (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer0_th 
                                                >> 0x10U);
        vlSelf->__PVT__u_counter__DOT__s_direction = 0U;
        vlSelf->__PVT__u_counter__DOT__s_counter = 
            (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer0_th);
    } else if (((IData)(vlSelf->__PVT__s_presc_evt) 
                & (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) {
        if (((~ (IData)(vlSelf->__PVT__u_counter__DOT__r_direction)) 
             & ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                == (IData)(vlSelf->__PVT__u_counter__DOT__r_end)))) {
            vlSelf->__PVT__u_counter__DOT__s_direction 
                = (1U & (~ (IData)(vlSelf->__PVT__u_counter__DOT__r_sawtooth)));
            vlSelf->__PVT__u_counter__DOT__s_counter 
                = (0xffffU & ((IData)(vlSelf->__PVT__u_counter__DOT__r_sawtooth)
                               ? (IData)(vlSelf->__PVT__u_counter__DOT__r_start)
                               : ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                  - (IData)(1U))));
        } else if (((IData)(vlSelf->__PVT__u_counter__DOT__r_direction) 
                    & ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                       == (IData)(vlSelf->__PVT__u_counter__DOT__r_start)))) {
            vlSelf->__PVT__u_counter__DOT__s_direction = 0U;
            vlSelf->__PVT__u_counter__DOT__s_counter 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
        } else {
            vlSelf->__PVT__u_counter__DOT__s_counter 
                = (0xffffU & ((IData)(vlSelf->__PVT__u_counter__DOT__r_direction)
                               ? ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                  - (IData)(1U)) : 
                              ((IData)(1U) + (IData)(vlSelf->__PVT__u_counter__DOT__r_counter))));
        }
    }
}

VL_ATTR_COLD void Vtb_verilator_timer_module__NB30___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_tim1__0(Vtb_verilator_timer_module__NB30* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_verilator_timer_module__NB30___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_tim1__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->__PVT__u_in_stage__DOT__s_rise_ls_clk = (IData)(
                                                            (2U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__PVT__u_in_stage__DOT__r_ls_clk_sync))));
    vlSelf->__PVT__s_ctrl_rst = (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer1_start) 
                                  & (~ (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) 
                                 || (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer1_rst));
    vlSelf->__PVT__s_cnt_evt = ((IData)(vlSelf->__PVT__u_controller__DOT__r_active) 
                                & (IData)(vlSelf->__PVT__u_counter__DOT__r_event));
    vlSelf->pwm_o = (((IData)(vlSelf->__PVT__u_comp_ch3__DOT__r_value) 
                      << 3U) | (((IData)(vlSelf->__PVT__u_comp_ch2__DOT__r_value) 
                                 << 2U) | (((IData)(vlSelf->__PVT__u_comp_ch1__DOT__r_value) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__u_comp_ch0__DOT__r_value))));
    vlSelf->__PVT__s_ctrl_update_all = (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer1_start) 
                                         & (~ (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) 
                                        || (IData)(vlSelf->__PVT__s_cnt_evt));
    vlSelf->__PVT__u_comp_ch0__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch0__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_comp_ch1__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch1__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_comp_ch2__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch2__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_comp_ch3__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch3__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_counter__DOT__s_is_update = ((IData)(vlSelf->__PVT__u_counter__DOT__r_sawtooth)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                                   == (IData)(vlSelf->__PVT__u_counter__DOT__r_end))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_counter__DOT__r_direction) 
                                                   & ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                                      == 
                                                      ((IData)(vlSelf->__PVT__u_counter__DOT__r_start) 
                                                       - (IData)(1U)))));
    vlSelf->__PVT__s_cnt_end = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                & (IData)(vlSelf->__PVT__u_counter__DOT__s_is_update));
    if (vlSelf->__PVT__u_counter__DOT__r_sawtooth) {
        vlSelf->__PVT__u_comp_ch0__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
        vlSelf->__PVT__u_comp_ch1__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
        vlSelf->__PVT__u_comp_ch2__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
        vlSelf->__PVT__u_comp_ch3__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
    } else {
        vlSelf->__PVT__u_comp_ch0__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch0__DOT__s_match;
        vlSelf->__PVT__u_comp_ch1__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch1__DOT__s_match;
        vlSelf->__PVT__u_comp_ch2__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch2__DOT__s_match;
        vlSelf->__PVT__u_comp_ch3__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch3__DOT__s_match;
    }
    __Vtableidx6 = (((IData)(vlSelf->__PVT__s_ctrl_rst) 
                     << 5U) | (((IData)(vlSelf->__PVT__s_presc_evt) 
                                << 4U) | (((IData)(vlSelf->__PVT__u_counter__DOT__s_is_update) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__u_controller__DOT__r_active) 
                                            << 2U) 
                                           | (((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer1_start) 
                                                 & (~ (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) 
                                                || (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer1_update)) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__u_counter__DOT__r_pending_update))))));
    vlSelf->__PVT__u_counter__DOT__s_pending_update 
        = Vtb_verilator__ConstPool__TABLE_h82cd3644_0
        [__Vtableidx6];
    vlSelf->__PVT__u_counter__DOT__s_do_update = Vtb_verilator__ConstPool__TABLE_hb23e0b38_0
        [__Vtableidx6];
    vlSelf->__PVT__u_counter__DOT__s_start = vlSelf->__PVT__u_counter__DOT__r_start;
    vlSelf->__PVT__u_counter__DOT__s_sawtooth = vlSelf->__PVT__u_counter__DOT__r_sawtooth;
    vlSelf->__PVT__u_counter__DOT__s_end = vlSelf->__PVT__u_counter__DOT__r_end;
    vlSelf->__PVT__u_counter__DOT__s_direction = vlSelf->__PVT__u_counter__DOT__r_direction;
    vlSelf->__PVT__u_counter__DOT__s_counter = vlSelf->__PVT__u_counter__DOT__r_counter;
    if (vlSelf->__PVT__u_counter__DOT__s_do_update) {
        vlSelf->__PVT__u_counter__DOT__s_start = (0xffffU 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer1_th);
        vlSelf->__PVT__u_counter__DOT__s_sawtooth = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer1_saw;
        vlSelf->__PVT__u_counter__DOT__s_end = (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer1_th 
                                                >> 0x10U);
        vlSelf->__PVT__u_counter__DOT__s_direction = 0U;
        vlSelf->__PVT__u_counter__DOT__s_counter = 
            (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer1_th);
    } else if (((IData)(vlSelf->__PVT__s_presc_evt) 
                & (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) {
        if (((~ (IData)(vlSelf->__PVT__u_counter__DOT__r_direction)) 
             & ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                == (IData)(vlSelf->__PVT__u_counter__DOT__r_end)))) {
            vlSelf->__PVT__u_counter__DOT__s_direction 
                = (1U & (~ (IData)(vlSelf->__PVT__u_counter__DOT__r_sawtooth)));
            vlSelf->__PVT__u_counter__DOT__s_counter 
                = (0xffffU & ((IData)(vlSelf->__PVT__u_counter__DOT__r_sawtooth)
                               ? (IData)(vlSelf->__PVT__u_counter__DOT__r_start)
                               : ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                  - (IData)(1U))));
        } else if (((IData)(vlSelf->__PVT__u_counter__DOT__r_direction) 
                    & ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                       == (IData)(vlSelf->__PVT__u_counter__DOT__r_start)))) {
            vlSelf->__PVT__u_counter__DOT__s_direction = 0U;
            vlSelf->__PVT__u_counter__DOT__s_counter 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
        } else {
            vlSelf->__PVT__u_counter__DOT__s_counter 
                = (0xffffU & ((IData)(vlSelf->__PVT__u_counter__DOT__r_direction)
                               ? ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                  - (IData)(1U)) : 
                              ((IData)(1U) + (IData)(vlSelf->__PVT__u_counter__DOT__r_counter))));
        }
    }
}

VL_ATTR_COLD void Vtb_verilator_timer_module__NB30___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_tim2__0(Vtb_verilator_timer_module__NB30* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_verilator_timer_module__NB30___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_tim2__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelf->__PVT__u_in_stage__DOT__s_rise_ls_clk = (IData)(
                                                            (2U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__PVT__u_in_stage__DOT__r_ls_clk_sync))));
    vlSelf->__PVT__s_ctrl_rst = (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer2_start) 
                                  & (~ (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) 
                                 || (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer2_rst));
    vlSelf->__PVT__s_cnt_evt = ((IData)(vlSelf->__PVT__u_controller__DOT__r_active) 
                                & (IData)(vlSelf->__PVT__u_counter__DOT__r_event));
    vlSelf->pwm_o = (((IData)(vlSelf->__PVT__u_comp_ch3__DOT__r_value) 
                      << 3U) | (((IData)(vlSelf->__PVT__u_comp_ch2__DOT__r_value) 
                                 << 2U) | (((IData)(vlSelf->__PVT__u_comp_ch1__DOT__r_value) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__u_comp_ch0__DOT__r_value))));
    vlSelf->__PVT__s_ctrl_update_all = (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer2_start) 
                                         & (~ (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) 
                                        || (IData)(vlSelf->__PVT__s_cnt_evt));
    vlSelf->__PVT__u_comp_ch0__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch0__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_comp_ch1__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch1__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_comp_ch2__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch2__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_comp_ch3__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch3__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_counter__DOT__s_is_update = ((IData)(vlSelf->__PVT__u_counter__DOT__r_sawtooth)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                                   == (IData)(vlSelf->__PVT__u_counter__DOT__r_end))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_counter__DOT__r_direction) 
                                                   & ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                                      == 
                                                      ((IData)(vlSelf->__PVT__u_counter__DOT__r_start) 
                                                       - (IData)(1U)))));
    vlSelf->__PVT__s_cnt_end = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                & (IData)(vlSelf->__PVT__u_counter__DOT__s_is_update));
    if (vlSelf->__PVT__u_counter__DOT__r_sawtooth) {
        vlSelf->__PVT__u_comp_ch0__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
        vlSelf->__PVT__u_comp_ch1__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
        vlSelf->__PVT__u_comp_ch2__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
        vlSelf->__PVT__u_comp_ch3__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
    } else {
        vlSelf->__PVT__u_comp_ch0__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch0__DOT__s_match;
        vlSelf->__PVT__u_comp_ch1__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch1__DOT__s_match;
        vlSelf->__PVT__u_comp_ch2__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch2__DOT__s_match;
        vlSelf->__PVT__u_comp_ch3__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch3__DOT__s_match;
    }
    __Vtableidx9 = (((IData)(vlSelf->__PVT__s_ctrl_rst) 
                     << 5U) | (((IData)(vlSelf->__PVT__s_presc_evt) 
                                << 4U) | (((IData)(vlSelf->__PVT__u_counter__DOT__s_is_update) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__u_controller__DOT__r_active) 
                                            << 2U) 
                                           | (((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer2_start) 
                                                 & (~ (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) 
                                                || (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer2_update)) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__u_counter__DOT__r_pending_update))))));
    vlSelf->__PVT__u_counter__DOT__s_pending_update 
        = Vtb_verilator__ConstPool__TABLE_h82cd3644_0
        [__Vtableidx9];
    vlSelf->__PVT__u_counter__DOT__s_do_update = Vtb_verilator__ConstPool__TABLE_hb23e0b38_0
        [__Vtableidx9];
    vlSelf->__PVT__u_counter__DOT__s_start = vlSelf->__PVT__u_counter__DOT__r_start;
    vlSelf->__PVT__u_counter__DOT__s_sawtooth = vlSelf->__PVT__u_counter__DOT__r_sawtooth;
    vlSelf->__PVT__u_counter__DOT__s_end = vlSelf->__PVT__u_counter__DOT__r_end;
    vlSelf->__PVT__u_counter__DOT__s_direction = vlSelf->__PVT__u_counter__DOT__r_direction;
    vlSelf->__PVT__u_counter__DOT__s_counter = vlSelf->__PVT__u_counter__DOT__r_counter;
    if (vlSelf->__PVT__u_counter__DOT__s_do_update) {
        vlSelf->__PVT__u_counter__DOT__s_start = (0xffffU 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer2_th);
        vlSelf->__PVT__u_counter__DOT__s_sawtooth = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer2_saw;
        vlSelf->__PVT__u_counter__DOT__s_end = (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer2_th 
                                                >> 0x10U);
        vlSelf->__PVT__u_counter__DOT__s_direction = 0U;
        vlSelf->__PVT__u_counter__DOT__s_counter = 
            (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer2_th);
    } else if (((IData)(vlSelf->__PVT__s_presc_evt) 
                & (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) {
        if (((~ (IData)(vlSelf->__PVT__u_counter__DOT__r_direction)) 
             & ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                == (IData)(vlSelf->__PVT__u_counter__DOT__r_end)))) {
            vlSelf->__PVT__u_counter__DOT__s_direction 
                = (1U & (~ (IData)(vlSelf->__PVT__u_counter__DOT__r_sawtooth)));
            vlSelf->__PVT__u_counter__DOT__s_counter 
                = (0xffffU & ((IData)(vlSelf->__PVT__u_counter__DOT__r_sawtooth)
                               ? (IData)(vlSelf->__PVT__u_counter__DOT__r_start)
                               : ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                  - (IData)(1U))));
        } else if (((IData)(vlSelf->__PVT__u_counter__DOT__r_direction) 
                    & ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                       == (IData)(vlSelf->__PVT__u_counter__DOT__r_start)))) {
            vlSelf->__PVT__u_counter__DOT__s_direction = 0U;
            vlSelf->__PVT__u_counter__DOT__s_counter 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
        } else {
            vlSelf->__PVT__u_counter__DOT__s_counter 
                = (0xffffU & ((IData)(vlSelf->__PVT__u_counter__DOT__r_direction)
                               ? ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                  - (IData)(1U)) : 
                              ((IData)(1U) + (IData)(vlSelf->__PVT__u_counter__DOT__r_counter))));
        }
    }
}

VL_ATTR_COLD void Vtb_verilator_timer_module__NB30___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_tim3__0(Vtb_verilator_timer_module__NB30* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_verilator_timer_module__NB30___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_tim3__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelf->__PVT__u_in_stage__DOT__s_rise_ls_clk = (IData)(
                                                            (2U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__PVT__u_in_stage__DOT__r_ls_clk_sync))));
    vlSelf->__PVT__s_ctrl_rst = (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer3_start) 
                                  & (~ (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) 
                                 || (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer3_rst));
    vlSelf->__PVT__s_cnt_evt = ((IData)(vlSelf->__PVT__u_controller__DOT__r_active) 
                                & (IData)(vlSelf->__PVT__u_counter__DOT__r_event));
    vlSelf->pwm_o = (((IData)(vlSelf->__PVT__u_comp_ch3__DOT__r_value) 
                      << 3U) | (((IData)(vlSelf->__PVT__u_comp_ch2__DOT__r_value) 
                                 << 2U) | (((IData)(vlSelf->__PVT__u_comp_ch1__DOT__r_value) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__u_comp_ch0__DOT__r_value))));
    vlSelf->__PVT__s_ctrl_update_all = (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer3_start) 
                                         & (~ (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) 
                                        || (IData)(vlSelf->__PVT__s_cnt_evt));
    vlSelf->__PVT__u_comp_ch0__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch0__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_comp_ch1__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch1__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_comp_ch2__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch2__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_comp_ch3__DOT__s_match = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                               & ((IData)(vlSelf->__PVT__u_comp_ch3__DOT__r_comp) 
                                                  == (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
    vlSelf->__PVT__u_counter__DOT__s_is_update = ((IData)(vlSelf->__PVT__u_counter__DOT__r_sawtooth)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                                   == (IData)(vlSelf->__PVT__u_counter__DOT__r_end))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_counter__DOT__r_direction) 
                                                   & ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                                      == 
                                                      ((IData)(vlSelf->__PVT__u_counter__DOT__r_start) 
                                                       - (IData)(1U)))));
    vlSelf->__PVT__s_cnt_end = ((IData)(vlSelf->__PVT__s_cnt_evt) 
                                & (IData)(vlSelf->__PVT__u_counter__DOT__s_is_update));
    if (vlSelf->__PVT__u_counter__DOT__r_sawtooth) {
        vlSelf->__PVT__u_comp_ch0__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
        vlSelf->__PVT__u_comp_ch1__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
        vlSelf->__PVT__u_comp_ch2__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
        vlSelf->__PVT__u_comp_ch3__DOT__s_2nd_event 
            = vlSelf->__PVT__s_cnt_end;
    } else {
        vlSelf->__PVT__u_comp_ch0__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch0__DOT__s_match;
        vlSelf->__PVT__u_comp_ch1__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch1__DOT__s_match;
        vlSelf->__PVT__u_comp_ch2__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch2__DOT__s_match;
        vlSelf->__PVT__u_comp_ch3__DOT__s_2nd_event 
            = vlSelf->__PVT__u_comp_ch3__DOT__s_match;
    }
    __Vtableidx12 = (((IData)(vlSelf->__PVT__s_ctrl_rst) 
                      << 5U) | (((IData)(vlSelf->__PVT__s_presc_evt) 
                                 << 4U) | (((IData)(vlSelf->__PVT__u_counter__DOT__s_is_update) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__u_controller__DOT__r_active) 
                                               << 2U) 
                                              | (((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer3_start) 
                                                    & (~ (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) 
                                                   || (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer3_update)) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__u_counter__DOT__r_pending_update))))));
    vlSelf->__PVT__u_counter__DOT__s_pending_update 
        = Vtb_verilator__ConstPool__TABLE_h82cd3644_0
        [__Vtableidx12];
    vlSelf->__PVT__u_counter__DOT__s_do_update = Vtb_verilator__ConstPool__TABLE_hb23e0b38_0
        [__Vtableidx12];
    vlSelf->__PVT__u_counter__DOT__s_start = vlSelf->__PVT__u_counter__DOT__r_start;
    vlSelf->__PVT__u_counter__DOT__s_sawtooth = vlSelf->__PVT__u_counter__DOT__r_sawtooth;
    vlSelf->__PVT__u_counter__DOT__s_end = vlSelf->__PVT__u_counter__DOT__r_end;
    vlSelf->__PVT__u_counter__DOT__s_direction = vlSelf->__PVT__u_counter__DOT__r_direction;
    vlSelf->__PVT__u_counter__DOT__s_counter = vlSelf->__PVT__u_counter__DOT__r_counter;
    if (vlSelf->__PVT__u_counter__DOT__s_do_update) {
        vlSelf->__PVT__u_counter__DOT__s_start = (0xffffU 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer3_th);
        vlSelf->__PVT__u_counter__DOT__s_sawtooth = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer3_saw;
        vlSelf->__PVT__u_counter__DOT__s_end = (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer3_th 
                                                >> 0x10U);
        vlSelf->__PVT__u_counter__DOT__s_direction = 0U;
        vlSelf->__PVT__u_counter__DOT__s_counter = 
            (0xffffU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_pwm__DOT__u_apb_if__DOT__r_timer3_th);
    } else if (((IData)(vlSelf->__PVT__s_presc_evt) 
                & (IData)(vlSelf->__PVT__u_controller__DOT__r_active))) {
        if (((~ (IData)(vlSelf->__PVT__u_counter__DOT__r_direction)) 
             & ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                == (IData)(vlSelf->__PVT__u_counter__DOT__r_end)))) {
            vlSelf->__PVT__u_counter__DOT__s_direction 
                = (1U & (~ (IData)(vlSelf->__PVT__u_counter__DOT__r_sawtooth)));
            vlSelf->__PVT__u_counter__DOT__s_counter 
                = (0xffffU & ((IData)(vlSelf->__PVT__u_counter__DOT__r_sawtooth)
                               ? (IData)(vlSelf->__PVT__u_counter__DOT__r_start)
                               : ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                  - (IData)(1U))));
        } else if (((IData)(vlSelf->__PVT__u_counter__DOT__r_direction) 
                    & ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                       == (IData)(vlSelf->__PVT__u_counter__DOT__r_start)))) {
            vlSelf->__PVT__u_counter__DOT__s_direction = 0U;
            vlSelf->__PVT__u_counter__DOT__s_counter 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_counter__DOT__r_counter)));
        } else {
            vlSelf->__PVT__u_counter__DOT__s_counter 
                = (0xffffU & ((IData)(vlSelf->__PVT__u_counter__DOT__r_direction)
                               ? ((IData)(vlSelf->__PVT__u_counter__DOT__r_counter) 
                                  - (IData)(1U)) : 
                              ((IData)(1U) + (IData)(vlSelf->__PVT__u_counter__DOT__r_counter))));
        }
    }
}
