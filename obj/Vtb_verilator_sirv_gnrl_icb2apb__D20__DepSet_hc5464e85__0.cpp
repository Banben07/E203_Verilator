// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator__Syms.h"
#include "Vtb_verilator_sirv_gnrl_icb2apb__D20.h"

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__0____Vfork_5__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h0b278ce4__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__apb_enable_ena) {
                vlSelf->__Vintraval_h0b278ce4__0 = vlSelf->__PVT__apb_enable_nxt;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__0____Vfork_5__1(vlSelf, vlSelf->__Vintraval_h0b278ce4__0);
            }
        } else {
            vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__0____Vfork_5__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h0b278ce4__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__0____Vfork_5__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__apb_enable_dfflr__DOT__qout_r__v0 
        = __Vintraval_h0b278ce4__0;
    vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__1____Vfork_4__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hf1e0f51e__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_hf1e0f51e__0 = 
                    (1U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                           >> 1U));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__1____Vfork_4__1(vlSelf, vlSelf->__Vintraval_hf1e0f51e__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__1____Vfork_4__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hf1e0f51e__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__1____Vfork_4__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 
        = __Vintraval_hf1e0f51e__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__2____Vfork_3__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_ha1cf8c48__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__2(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_ha1cf8c48__0 = 
                    (1U & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__2____Vfork_3__1(vlSelf, vlSelf->__Vintraval_ha1cf8c48__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__2____Vfork_3__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_ha1cf8c48__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__2____Vfork_3__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_ha1cf8c48__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__3____Vfork_2__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h3bbf7f9e__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__3(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) {
                vlSelf->__Vintraval_h3bbf7f9e__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__3____Vfork_2__1(vlSelf, vlSelf->__Vintraval_h3bbf7f9e__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__3____Vfork_2__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h3bbf7f9e__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__3____Vfork_2__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h3bbf7f9e__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__4____Vfork_1__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_ha331ffbe__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__4(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) {
                vlSelf->__Vintraval_ha331ffbe__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__4____Vfork_1__1(vlSelf, vlSelf->__Vintraval_ha331ffbe__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__4____Vfork_1__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_ha331ffbe__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__4____Vfork_1__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_ha331ffbe__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__5____Vfork_6__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_h02b11549__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__5(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h66cc82c0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                146);
        if (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) 
             & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r))) {
            vlSelf->__Vintraval_h02b11549__0 = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__gpioA_apb_prdata;
            Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__5____Vfork_6__1(vlSelf, vlSelf->__Vintraval_h02b11549__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__5____Vfork_6__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_h02b11549__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__Vtiming__5____Vfork_6__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            149);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 
        = __Vintraval_h02b11549__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 = 1U;
}

VL_INLINE_OPT void Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioA_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__gpioA_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__gpioA_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__0____Vfork_11__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hb6882b39__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__apb_enable_ena) {
                vlSelf->__Vintraval_hb6882b39__0 = vlSelf->__PVT__apb_enable_nxt;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__0____Vfork_11__1(vlSelf, vlSelf->__Vintraval_hb6882b39__0);
            }
        } else {
            vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__0____Vfork_11__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hb6882b39__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__0____Vfork_11__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__apb_enable_dfflr__DOT__qout_r__v0 
        = __Vintraval_hb6882b39__0;
    vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__1____Vfork_10__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h494bb454__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_h494bb454__0 = 
                    (1U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                           >> 1U));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__1____Vfork_10__1(vlSelf, vlSelf->__Vintraval_h494bb454__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__1____Vfork_10__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h494bb454__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__1____Vfork_10__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 
        = __Vintraval_h494bb454__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__2____Vfork_9__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hb2c59c82__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__2(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_hb2c59c82__0 = 
                    (1U & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__2____Vfork_9__1(vlSelf, vlSelf->__Vintraval_hb2c59c82__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__2____Vfork_9__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hb2c59c82__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__2____Vfork_9__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_hb2c59c82__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__3____Vfork_8__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h3f54d94b__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__3(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) {
                vlSelf->__Vintraval_h3f54d94b__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__3____Vfork_8__1(vlSelf, vlSelf->__Vintraval_h3f54d94b__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__3____Vfork_8__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h3f54d94b__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__3____Vfork_8__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h3f54d94b__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__4____Vfork_7__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h2df7890d__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__4(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) {
                vlSelf->__Vintraval_h2df7890d__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__4____Vfork_7__1(vlSelf, vlSelf->__Vintraval_h2df7890d__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__4____Vfork_7__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h2df7890d__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__4____Vfork_7__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h2df7890d__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__5____Vfork_12__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_ha5083dad__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__5(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h66cc82c0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                146);
        if (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) 
             & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r))) {
            vlSelf->__Vintraval_ha5083dad__0 = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__gpioB_apb_prdata;
            Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__5____Vfork_12__1(vlSelf, vlSelf->__Vintraval_ha5083dad__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__5____Vfork_12__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_ha5083dad__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__Vtiming__5____Vfork_12__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            149);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 
        = __Vintraval_ha5083dad__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 = 1U;
}

VL_INLINE_OPT void Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_gpioB_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__gpioB_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__gpioB_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__0____Vfork_17__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h1c395524__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__apb_enable_ena) {
                vlSelf->__Vintraval_h1c395524__0 = vlSelf->__PVT__apb_enable_nxt;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__0____Vfork_17__1(vlSelf, vlSelf->__Vintraval_h1c395524__0);
            }
        } else {
            vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__0____Vfork_17__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h1c395524__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__0____Vfork_17__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__apb_enable_dfflr__DOT__qout_r__v0 
        = __Vintraval_h1c395524__0;
    vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__1____Vfork_16__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hc81c32e4__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_hc81c32e4__0 = 
                    (1U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                           >> 1U));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__1____Vfork_16__1(vlSelf, vlSelf->__Vintraval_hc81c32e4__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__1____Vfork_16__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hc81c32e4__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__1____Vfork_16__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 
        = __Vintraval_hc81c32e4__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__2____Vfork_15__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h56343153__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__2(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_h56343153__0 = 
                    (1U & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__2____Vfork_15__1(vlSelf, vlSelf->__Vintraval_h56343153__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__2____Vfork_15__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h56343153__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__2____Vfork_15__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h56343153__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__3____Vfork_14__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h0301f72f__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__3(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) {
                vlSelf->__Vintraval_h0301f72f__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__3____Vfork_14__1(vlSelf, vlSelf->__Vintraval_h0301f72f__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__3____Vfork_14__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h0301f72f__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__3____Vfork_14__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h0301f72f__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__4____Vfork_13__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hf4765fe1__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__4(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) {
                vlSelf->__Vintraval_hf4765fe1__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__4____Vfork_13__1(vlSelf, vlSelf->__Vintraval_hf4765fe1__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__4____Vfork_13__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hf4765fe1__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__4____Vfork_13__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_hf4765fe1__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__5____Vfork_18__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_ha6cb60e1__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__5(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h66cc82c0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                146);
        if (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) 
             & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r))) {
            vlSelf->__Vintraval_ha6cb60e1__0 = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart0.PRDATA;
            Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__5____Vfork_18__1(vlSelf, vlSelf->__Vintraval_ha6cb60e1__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__5____Vfork_18__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_ha6cb60e1__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__Vtiming__5____Vfork_18__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            149);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 
        = __Vintraval_ha6cb60e1__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 = 1U;
}

VL_INLINE_OPT void Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__0____Vfork_23__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h2854be7c__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__apb_enable_ena) {
                vlSelf->__Vintraval_h2854be7c__0 = vlSelf->__PVT__apb_enable_nxt;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__0____Vfork_23__1(vlSelf, vlSelf->__Vintraval_h2854be7c__0);
            }
        } else {
            vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__0____Vfork_23__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h2854be7c__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__0____Vfork_23__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__apb_enable_dfflr__DOT__qout_r__v0 
        = __Vintraval_h2854be7c__0;
    vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__1____Vfork_22__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h11c905b9__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_h11c905b9__0 = 
                    (1U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                           >> 1U));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__1____Vfork_22__1(vlSelf, vlSelf->__Vintraval_h11c905b9__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__1____Vfork_22__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h11c905b9__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__1____Vfork_22__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 
        = __Vintraval_h11c905b9__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__2____Vfork_21__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h5a9e5f65__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__2(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_h5a9e5f65__0 = 
                    (1U & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__2____Vfork_21__1(vlSelf, vlSelf->__Vintraval_h5a9e5f65__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__2____Vfork_21__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h5a9e5f65__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__2____Vfork_21__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h5a9e5f65__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__3____Vfork_20__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_he0ac10f7__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__3(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) {
                vlSelf->__Vintraval_he0ac10f7__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__3____Vfork_20__1(vlSelf, vlSelf->__Vintraval_he0ac10f7__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__3____Vfork_20__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_he0ac10f7__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__3____Vfork_20__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_he0ac10f7__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__4____Vfork_19__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_he17d3f89__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__4(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) {
                vlSelf->__Vintraval_he17d3f89__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__4____Vfork_19__1(vlSelf, vlSelf->__Vintraval_he17d3f89__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__4____Vfork_19__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_he17d3f89__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__4____Vfork_19__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_he17d3f89__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__5____Vfork_24__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_h10f8287f__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__5(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h66cc82c0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                146);
        if (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) 
             & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r))) {
            vlSelf->__Vintraval_h10f8287f__0 = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart1.PRDATA;
            Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__5____Vfork_24__1(vlSelf, vlSelf->__Vintraval_h10f8287f__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__5____Vfork_24__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_h10f8287f__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__Vtiming__5____Vfork_24__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            149);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 
        = __Vintraval_h10f8287f__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 = 1U;
}

VL_INLINE_OPT void Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__0____Vfork_29__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h68a5d3f4__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__apb_enable_ena) {
                vlSelf->__Vintraval_h68a5d3f4__0 = vlSelf->__PVT__apb_enable_nxt;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__0____Vfork_29__1(vlSelf, vlSelf->__Vintraval_h68a5d3f4__0);
            }
        } else {
            vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__0____Vfork_29__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h68a5d3f4__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__0____Vfork_29__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__apb_enable_dfflr__DOT__qout_r__v0 
        = __Vintraval_h68a5d3f4__0;
    vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__1____Vfork_28__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h241059f0__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_h241059f0__0 = 
                    (1U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                           >> 1U));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__1____Vfork_28__1(vlSelf, vlSelf->__Vintraval_h241059f0__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__1____Vfork_28__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h241059f0__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__1____Vfork_28__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 
        = __Vintraval_h241059f0__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__2____Vfork_27__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h72aaa4e6__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__2(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_h72aaa4e6__0 = 
                    (1U & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__2____Vfork_27__1(vlSelf, vlSelf->__Vintraval_h72aaa4e6__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__2____Vfork_27__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h72aaa4e6__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__2____Vfork_27__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h72aaa4e6__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__3____Vfork_26__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h18a779c5__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__3(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) {
                vlSelf->__Vintraval_h18a779c5__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__3____Vfork_26__1(vlSelf, vlSelf->__Vintraval_h18a779c5__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__3____Vfork_26__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h18a779c5__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__3____Vfork_26__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h18a779c5__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__4____Vfork_25__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h1c209a53__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__4(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) {
                vlSelf->__Vintraval_h1c209a53__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__4____Vfork_25__1(vlSelf, vlSelf->__Vintraval_h1c209a53__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__4____Vfork_25__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h1c209a53__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__4____Vfork_25__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h1c209a53__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__5____Vfork_30__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_h792f4f96__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__5(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h66cc82c0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                146);
        if (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) 
             & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r))) {
            vlSelf->__Vintraval_h792f4f96__0 = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart2.PRDATA;
            Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__5____Vfork_30__1(vlSelf, vlSelf->__Vintraval_h792f4f96__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__5____Vfork_30__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_h792f4f96__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__Vtiming__5____Vfork_30__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            149);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 
        = __Vintraval_h792f4f96__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 = 1U;
}

VL_INLINE_OPT void Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__0____Vfork_35__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_ha0714bb7__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__apb_enable_ena) {
                vlSelf->__Vintraval_ha0714bb7__0 = vlSelf->__PVT__apb_enable_nxt;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__0____Vfork_35__1(vlSelf, vlSelf->__Vintraval_ha0714bb7__0);
            }
        } else {
            vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__0____Vfork_35__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_ha0714bb7__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__0____Vfork_35__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__apb_enable_dfflr__DOT__qout_r__v0 
        = __Vintraval_ha0714bb7__0;
    vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__1____Vfork_34__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h98cc63a7__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_h98cc63a7__0 = 
                    (1U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                           >> 1U));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__1____Vfork_34__1(vlSelf, vlSelf->__Vintraval_h98cc63a7__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__1____Vfork_34__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h98cc63a7__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__1____Vfork_34__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 
        = __Vintraval_h98cc63a7__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__2____Vfork_33__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h573f80c7__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__2(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_h573f80c7__0 = 
                    (1U & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__2____Vfork_33__1(vlSelf, vlSelf->__Vintraval_h573f80c7__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__2____Vfork_33__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h573f80c7__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__2____Vfork_33__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h573f80c7__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__3____Vfork_32__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hef5eef90__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__3(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) {
                vlSelf->__Vintraval_hef5eef90__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__3____Vfork_32__1(vlSelf, vlSelf->__Vintraval_hef5eef90__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__3____Vfork_32__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hef5eef90__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__3____Vfork_32__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_hef5eef90__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__4____Vfork_31__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h85431378__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__4(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) {
                vlSelf->__Vintraval_h85431378__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__4____Vfork_31__1(vlSelf, vlSelf->__Vintraval_h85431378__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__4____Vfork_31__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h85431378__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__4____Vfork_31__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h85431378__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__5____Vfork_36__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_heb66fdc7__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__5(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h66cc82c0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                146);
        if (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) 
             & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r))) {
            vlSelf->__Vintraval_heb66fdc7__0 = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi1.PRDATA;
            Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__5____Vfork_36__1(vlSelf, vlSelf->__Vintraval_heb66fdc7__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__5____Vfork_36__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_heb66fdc7__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__Vtiming__5____Vfork_36__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            149);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 
        = __Vintraval_heb66fdc7__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 = 1U;
}

VL_INLINE_OPT void Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__0____Vfork_41__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_ha07fadac__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__apb_enable_ena) {
                vlSelf->__Vintraval_ha07fadac__0 = vlSelf->__PVT__apb_enable_nxt;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__0____Vfork_41__1(vlSelf, vlSelf->__Vintraval_ha07fadac__0);
            }
        } else {
            vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__0____Vfork_41__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_ha07fadac__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__0____Vfork_41__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__apb_enable_dfflr__DOT__qout_r__v0 
        = __Vintraval_ha07fadac__0;
    vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__1____Vfork_40__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_he326474f__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_he326474f__0 = 
                    (1U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                           >> 1U));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__1____Vfork_40__1(vlSelf, vlSelf->__Vintraval_he326474f__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__1____Vfork_40__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_he326474f__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__1____Vfork_40__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 
        = __Vintraval_he326474f__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__2____Vfork_39__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h4f80555e__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__2(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_h4f80555e__0 = 
                    (1U & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__2____Vfork_39__1(vlSelf, vlSelf->__Vintraval_h4f80555e__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__2____Vfork_39__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h4f80555e__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__2____Vfork_39__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h4f80555e__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__3____Vfork_38__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hd473dce6__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__3(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) {
                vlSelf->__Vintraval_hd473dce6__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__3____Vfork_38__1(vlSelf, vlSelf->__Vintraval_hd473dce6__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__3____Vfork_38__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hd473dce6__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__3____Vfork_38__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_hd473dce6__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__4____Vfork_37__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h6f967c06__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__4(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) {
                vlSelf->__Vintraval_h6f967c06__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__4____Vfork_37__1(vlSelf, vlSelf->__Vintraval_h6f967c06__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__4____Vfork_37__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h6f967c06__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__4____Vfork_37__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h6f967c06__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__5____Vfork_42__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_h4bd730f3__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__5(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h66cc82c0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                146);
        if (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) 
             & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r))) {
            vlSelf->__Vintraval_h4bd730f3__0 = vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi2.PRDATA;
            Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__5____Vfork_42__1(vlSelf, vlSelf->__Vintraval_h4bd730f3__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__5____Vfork_42__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_h4bd730f3__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__Vtiming__5____Vfork_42__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            149);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 
        = __Vintraval_h4bd730f3__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 = 1U;
}

VL_INLINE_OPT void Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__0____Vfork_47__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h197f1b3f__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__apb_enable_ena) {
                vlSelf->__Vintraval_h197f1b3f__0 = vlSelf->__PVT__apb_enable_nxt;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__0____Vfork_47__1(vlSelf, vlSelf->__Vintraval_h197f1b3f__0);
            }
        } else {
            vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__0____Vfork_47__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h197f1b3f__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__0____Vfork_47__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__apb_enable_dfflr__DOT__qout_r__v0 
        = __Vintraval_h197f1b3f__0;
    vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__1____Vfork_46__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h14d2426f__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_h14d2426f__0 = 
                    (1U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                           >> 1U));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__1____Vfork_46__1(vlSelf, vlSelf->__Vintraval_h14d2426f__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__1____Vfork_46__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h14d2426f__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__1____Vfork_46__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 
        = __Vintraval_h14d2426f__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__2____Vfork_45__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hbdf84f3c__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__2(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_hbdf84f3c__0 = 
                    (1U & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__2____Vfork_45__1(vlSelf, vlSelf->__Vintraval_hbdf84f3c__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__2____Vfork_45__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hbdf84f3c__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__2____Vfork_45__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_hbdf84f3c__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__3____Vfork_44__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hb6832b9e__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__3(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) {
                vlSelf->__Vintraval_hb6832b9e__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__3____Vfork_44__1(vlSelf, vlSelf->__Vintraval_hb6832b9e__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__3____Vfork_44__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hb6832b9e__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__3____Vfork_44__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_hb6832b9e__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__4____Vfork_43__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h0d5151c3__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__4(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) {
                vlSelf->__Vintraval_h0d5151c3__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__4____Vfork_43__1(vlSelf, vlSelf->__Vintraval_h0d5151c3__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__4____Vfork_43__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h0d5151c3__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__4____Vfork_43__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h0d5151c3__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__5____Vfork_48__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_h89df4abd__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__5(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h66cc82c0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                146);
        if (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) 
             & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r))) {
            vlSelf->__Vintraval_h89df4abd__0 = ((0x20U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c0_apb_icb_cmd_addr)
                                                 ? 0U
                                                 : 
                                                ((0x10U 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c0_apb_icb_cmd_addr)
                                                  ? 
                                                 ((8U 
                                                   & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c0_apb_icb_cmd_addr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c0_apb_icb_cmd_addr)
                                                    ? (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c0__DOT__r_cmd)
                                                    : (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c0__DOT__r_tx)))
                                                  : 
                                                 ((8U 
                                                   & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c0_apb_icb_cmd_addr)
                                                   ? 
                                                  ((4U 
                                                    & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c0_apb_icb_cmd_addr)
                                                    ? 
                                                   (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c0__DOT__rxack) 
                                                     << 7U) 
                                                    | (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c0__DOT__i2c_busy) 
                                                        << 6U) 
                                                       | (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c0__DOT__al) 
                                                           << 5U) 
                                                          | (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c0__DOT__tip) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c0__DOT__irq_flag)))))
                                                    : (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c0__DOT__byte_controller__DOT__sr))
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c0_apb_icb_cmd_addr)
                                                    ? (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c0__DOT__r_ctrl)
                                                    : (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c0__DOT__r_pre)))));
            Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__5____Vfork_48__1(vlSelf, vlSelf->__Vintraval_h89df4abd__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__5____Vfork_48__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_h89df4abd__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__Vtiming__5____Vfork_48__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            149);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 
        = __Vintraval_h89df4abd__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 = 1U;
}

VL_INLINE_OPT void Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c0_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c0_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c0_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__0____Vfork_53__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h2677b83f__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__apb_enable_ena) {
                vlSelf->__Vintraval_h2677b83f__0 = vlSelf->__PVT__apb_enable_nxt;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__0____Vfork_53__1(vlSelf, vlSelf->__Vintraval_h2677b83f__0);
            }
        } else {
            vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__0____Vfork_53__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h2677b83f__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__0____Vfork_53__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__apb_enable_dfflr__DOT__qout_r__v0 
        = __Vintraval_h2677b83f__0;
    vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__1____Vfork_52__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_he0b19e8e__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_he0b19e8e__0 = 
                    (1U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                           >> 1U));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__1____Vfork_52__1(vlSelf, vlSelf->__Vintraval_he0b19e8e__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__1____Vfork_52__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_he0b19e8e__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__1____Vfork_52__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 
        = __Vintraval_he0b19e8e__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__2____Vfork_51__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h8d6ac0a9__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__2(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_h8d6ac0a9__0 = 
                    (1U & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__2____Vfork_51__1(vlSelf, vlSelf->__Vintraval_h8d6ac0a9__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__2____Vfork_51__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h8d6ac0a9__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__2____Vfork_51__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h8d6ac0a9__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__3____Vfork_50__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h6af20574__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__3(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) {
                vlSelf->__Vintraval_h6af20574__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__3____Vfork_50__1(vlSelf, vlSelf->__Vintraval_h6af20574__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__3____Vfork_50__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h6af20574__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__3____Vfork_50__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h6af20574__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__4____Vfork_49__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_heb36c953__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__4(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) {
                vlSelf->__Vintraval_heb36c953__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__4____Vfork_49__1(vlSelf, vlSelf->__Vintraval_heb36c953__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__4____Vfork_49__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_heb36c953__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__4____Vfork_49__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_heb36c953__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__5____Vfork_54__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_had4b1146__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__5(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h66cc82c0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                146);
        if (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) 
             & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r))) {
            vlSelf->__Vintraval_had4b1146__0 = ((0x20U 
                                                 & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c1_apb_icb_cmd_addr)
                                                 ? 0U
                                                 : 
                                                ((0x10U 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c1_apb_icb_cmd_addr)
                                                  ? 
                                                 ((8U 
                                                   & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c1_apb_icb_cmd_addr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c1_apb_icb_cmd_addr)
                                                    ? (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c1__DOT__r_cmd)
                                                    : (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c1__DOT__r_tx)))
                                                  : 
                                                 ((8U 
                                                   & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c1_apb_icb_cmd_addr)
                                                   ? 
                                                  ((4U 
                                                    & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c1_apb_icb_cmd_addr)
                                                    ? 
                                                   (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c1__DOT__rxack) 
                                                     << 7U) 
                                                    | (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c1__DOT__i2c_busy) 
                                                        << 6U) 
                                                       | (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c1__DOT__al) 
                                                           << 5U) 
                                                          | (((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c1__DOT__tip) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c1__DOT__irq_flag)))))
                                                    : (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c1__DOT__byte_controller__DOT__sr))
                                                   : 
                                                  ((4U 
                                                    & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c1_apb_icb_cmd_addr)
                                                    ? (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c1__DOT__r_ctrl)
                                                    : (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_i2c1__DOT__r_pre)))));
            Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__5____Vfork_54__1(vlSelf, vlSelf->__Vintraval_had4b1146__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__5____Vfork_54__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_had4b1146__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__Vtiming__5____Vfork_54__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            149);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 
        = __Vintraval_had4b1146__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 = 1U;
}

VL_INLINE_OPT void Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_i2c1_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c1_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__i2c1_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__0____Vfork_59__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hb74de3d9__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__apb_enable_ena) {
                vlSelf->__Vintraval_hb74de3d9__0 = vlSelf->__PVT__apb_enable_nxt;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__0____Vfork_59__1(vlSelf, vlSelf->__Vintraval_hb74de3d9__0);
            }
        } else {
            vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__0____Vfork_59__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_hb74de3d9__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__0____Vfork_59__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__apb_enable_dfflr__DOT__qout_r__v0 
        = __Vintraval_hb74de3d9__0;
    vlSelf->__VdlySet__apb_enable_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__1____Vfork_58__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h2829ac8a__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                101);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_h2829ac8a__0 = 
                    (1U & ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt) 
                           >> 1U));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__1____Vfork_58__1(vlSelf, vlSelf->__Vintraval_h2829ac8a__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__1____Vfork_58__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h2829ac8a__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__1____Vfork_58__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            106);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 
        = __Vintraval_h2829ac8a__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__2____Vfork_57__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_he8046ed5__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__2(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en) {
                vlSelf->__Vintraval_he8046ed5__0 = 
                    (1U & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt));
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__2____Vfork_57__1(vlSelf, vlSelf->__Vintraval_he8046ed5__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__2____Vfork_57__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_he8046ed5__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__2____Vfork_57__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_he8046ed5__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__3____Vfork_56__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h8d934228__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__3(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) {
                vlSelf->__Vintraval_h8d934228__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__3____Vfork_56__1(vlSelf, vlSelf->__Vintraval_h8d934228__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__3____Vfork_56__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h8d934228__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__3____Vfork_56__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h8d934228__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__4____Vfork_55__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h24a7ea78__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__4(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h69098086__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon or negedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_main_ResetCatchAndSync_2_1.reset_n_catch_reg.reg_0_q)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                54);
        if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
            if (vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) {
                vlSelf->__Vintraval_h24a7ea78__0 = 1U;
                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__4____Vfork_55__1(vlSelf, vlSelf->__Vintraval_h24a7ea78__0);
            }
        } else {
            vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v1 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__4____Vfork_55__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, CData/*0:0*/ __Vintraval_h24a7ea78__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__4____Vfork_55__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            59);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 
        = __Vintraval_h24a7ea78__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0 = 1U;
}

VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__5____Vfork_60__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_hc962cb77__0);

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__5(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h66cc82c0__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_verilator.u_e203_soc_top.u_e203_subsys_top.u_e203_subsys_main.u_e203_cpu_top.u_e203_cpu.clk_aon)", 
                                                                "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                                                146);
        if (((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen) 
             & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r))) {
            vlSelf->__Vintraval_hc962cb77__0 = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__pwm_apb_prdata;
            Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__5____Vfork_60__1(vlSelf, vlSelf->__Vintraval_hc962cb77__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__5____Vfork_60__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf, IData/*31:0*/ __Vintraval_hc962cb77__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___eval_initial__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__Vtiming__5____Vfork_60__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(1ULL, nullptr, 
                                            "../rtl/e203/general/sirv_gnrl_dffs.v", 
                                            149);
    vlSelf->__VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 
        = __Vintraval_hc962cb77__0;
    vlSelf->__VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0 = 1U;
}

VL_INLINE_OPT void Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__0(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__0\n"); );
    // Body
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__pwm_apb_icb_rsp_ready) 
           & (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r));
}

VL_INLINE_OPT void Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__1(Vtb_verilator_sirv_gnrl_icb2apb__D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_sirv_gnrl_icb2apb__D20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_pwm_apb_icb2apb__1\n"); );
    // Body
    vlSelf->__PVT__apb_enable_set = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & ((~ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r)) 
                                        & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__pwm_apb_icb_cmd_valid)));
    vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en 
        = ((IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren) 
           ^ (IData)(vlSelf->__PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen));
    vlSelf->__PVT__apb_enable_ena = ((IData)(vlSelf->__PVT__apb_enable_set) 
                                     | (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r));
    vlSelf->__PVT__apb_enable_nxt = ((~ (IData)(vlSelf->__PVT__apb_enable_dfflr__DOT__qout_r)) 
                                     & (IData)(vlSelf->__PVT__apb_enable_set));
}
