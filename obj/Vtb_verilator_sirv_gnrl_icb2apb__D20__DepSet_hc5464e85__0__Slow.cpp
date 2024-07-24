// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator__Syms.h"
#include "Vtb_verilator_sirv_gnrl_icb2apb__D20.h"

VL_ATTR_COLD void Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen 
        = ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__gpioA_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__gpioA_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (3U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r) 
                           << 1U)) : VL_SHIFTR_III(2,2,32, 
                                                   (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r)), 1U)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VL_ATTR_COLD void Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen 
        = ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__gpioB_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__gpioB_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (3U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r) 
                           << 1U)) : VL_SHIFTR_III(2,2,32, 
                                                   (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r)), 1U)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VL_ATTR_COLD void Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen 
        = ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (3U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r) 
                           << 1U)) : VL_SHIFTR_III(2,2,32, 
                                                   (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r)), 1U)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VL_ATTR_COLD void Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen 
        = ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (3U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r) 
                           << 1U)) : VL_SHIFTR_III(2,2,32, 
                                                   (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r)), 1U)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VL_ATTR_COLD void Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen 
        = ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (3U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r) 
                           << 1U)) : VL_SHIFTR_III(2,2,32, 
                                                   (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r)), 1U)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VL_ATTR_COLD void Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen 
        = ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (3U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r) 
                           << 1U)) : VL_SHIFTR_III(2,2,32, 
                                                   (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r)), 1U)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VL_ATTR_COLD void Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen 
        = ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (3U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r) 
                           << 1U)) : VL_SHIFTR_III(2,2,32, 
                                                   (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r)), 1U)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VL_ATTR_COLD void Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen 
        = ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c0_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c0_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (3U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r) 
                           << 1U)) : VL_SHIFTR_III(2,2,32, 
                                                   (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r)), 1U)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VL_ATTR_COLD void Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen 
        = ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c1_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c1_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (3U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r) 
                           << 1U)) : VL_SHIFTR_III(2,2,32, 
                                                   (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r)), 1U)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VL_ATTR_COLD void Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___stl_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf_r[0U] 
        = vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen 
        = ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
           & (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__pwm_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__pwm_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt 
        = (3U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen)
                  ? (1U | ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r) 
                           << 1U)) : VL_SHIFTR_III(2,2,32, 
                                                   (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r)), 1U)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}
