// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator__Syms.h"
#include "Vtb_verilator_apb_uart_sv__A20.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vtb_verilator__ConstPool__TABLE_h8321f0c7_0;
extern const VlUnpacked<CData/*2:0*/, 4> Vtb_verilator__ConstPool__TABLE_hebc1be81_0;

VL_INLINE_OPT void Vtb_verilator_apb_uart_sv__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart0__0(Vtb_verilator_apb_uart_sv__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_uart_sv__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart0__0\n"); );
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*15:0*/ __Vdly__uart_rx_i__DOT__baud_cnt;
    __Vdly__uart_rx_i__DOT__baud_cnt = 0;
    SData/*15:0*/ __Vdly__uart_tx_i__DOT__baud_cnt;
    __Vdly__uart_tx_i__DOT__baud_cnt = 0;
    CData/*4:0*/ __Vdly__uart_rx_fifo_i__DOT__elements;
    __Vdly__uart_rx_fifo_i__DOT__elements = 0;
    SData/*8:0*/ __VdlyVal__uart_rx_fifo_i__DOT__buffer__v0;
    __VdlyVal__uart_rx_fifo_i__DOT__buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim0__uart_rx_fifo_i__DOT__buffer__v0;
    __VdlyDim0__uart_rx_fifo_i__DOT__buffer__v0 = 0;
    CData/*3:0*/ __Vdly__uart_rx_fifo_i__DOT__pointer_out;
    __Vdly__uart_rx_fifo_i__DOT__pointer_out = 0;
    CData/*3:0*/ __Vdly__uart_rx_fifo_i__DOT__pointer_in;
    __Vdly__uart_rx_fifo_i__DOT__pointer_in = 0;
    CData/*4:0*/ __Vdly__uart_tx_fifo_i__DOT__elements;
    __Vdly__uart_tx_fifo_i__DOT__elements = 0;
    CData/*7:0*/ __VdlyVal__uart_tx_fifo_i__DOT__buffer__v0;
    __VdlyVal__uart_tx_fifo_i__DOT__buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim0__uart_tx_fifo_i__DOT__buffer__v0;
    __VdlyDim0__uart_tx_fifo_i__DOT__buffer__v0 = 0;
    CData/*3:0*/ __Vdly__uart_tx_fifo_i__DOT__pointer_out;
    __Vdly__uart_tx_fifo_i__DOT__pointer_out = 0;
    CData/*3:0*/ __Vdly__uart_tx_fifo_i__DOT__pointer_in;
    __Vdly__uart_tx_fifo_i__DOT__pointer_in = 0;
    CData/*0:0*/ __VdlySet__uart_rx_fifo_i__DOT__buffer__v0;
    __VdlySet__uart_rx_fifo_i__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_rx_fifo_i__DOT__buffer__v1;
    __VdlySet__uart_rx_fifo_i__DOT__buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__uart_tx_fifo_i__DOT__buffer__v0;
    __VdlySet__uart_tx_fifo_i__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_tx_fifo_i__DOT__buffer__v1;
    __VdlySet__uart_tx_fifo_i__DOT__buffer__v1 = 0;
    // Body
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)) 
                      & (IData)(vlSelf->__PVT__tx_ready)) 
                     & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q)))) {
        VL_FWRITEF_NX(0x80000002U,"%c",0,8,vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer
                      [vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out]);
    }
    __VdlySet__uart_tx_fifo_i__DOT__buffer__v0 = 0U;
    __VdlySet__uart_tx_fifo_i__DOT__buffer__v1 = 0U;
    __Vdly__uart_rx_fifo_i__DOT__pointer_in = vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in;
    __Vdly__uart_tx_fifo_i__DOT__pointer_in = vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in;
    __Vdly__uart_tx_fifo_i__DOT__pointer_out = vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out;
    __Vdly__uart_rx_fifo_i__DOT__pointer_out = vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out;
    __Vdly__uart_rx_fifo_i__DOT__elements = vlSelf->__PVT__uart_rx_fifo_i__DOT__elements;
    __Vdly__uart_tx_fifo_i__DOT__elements = vlSelf->__PVT__uart_tx_fifo_i__DOT__elements;
    __Vdly__uart_tx_i__DOT__baud_cnt = vlSelf->__PVT__uart_tx_i__DOT__baud_cnt;
    __Vdly__uart_rx_i__DOT__baud_cnt = vlSelf->__PVT__uart_rx_i__DOT__baud_cnt;
    __VdlySet__uart_rx_fifo_i__DOT__buffer__v0 = 0U;
    __VdlySet__uart_rx_fifo_i__DOT__buffer__v1 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q)))) {
        vlSelf->__PVT__uart_rx_fifo_i__DOT__loop1 = 0x10U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__loop1 = 0x10U;
    }
    if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
        if (((IData)(vlSelf->__PVT__fifo_tx_valid) 
             & (0x10U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))) {
            __VdlyVal__uart_tx_fifo_i__DOT__buffer__v0 
                = vlSelf->__PVT__fifo_tx_data;
            __VdlyDim0__uart_tx_fifo_i__DOT__buffer__v0 
                = vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in;
            __VdlySet__uart_tx_fifo_i__DOT__buffer__v0 = 1U;
        }
        if (vlSelf->__PVT__rx_fifo_clr_q) {
            __Vdly__uart_rx_fifo_i__DOT__pointer_in = 0U;
            __Vdly__uart_rx_fifo_i__DOT__pointer_out = 0U;
            __Vdly__uart_rx_fifo_i__DOT__elements = 0U;
        } else {
            if (((IData)(vlSelf->__PVT__rx_valid) & 
                 (0x10U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)))) {
                __Vdly__uart_rx_fifo_i__DOT__pointer_in 
                    = ((0xfU == (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in))));
            }
            if (((IData)(vlSelf->__PVT__fifo_rx_ready) 
                 & (0U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)))) {
                __Vdly__uart_rx_fifo_i__DOT__pointer_out 
                    = ((0xfU == (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out))));
            }
            if ((((IData)(vlSelf->__PVT__fifo_rx_ready) 
                  & (IData)(vlSelf->__PVT__fifo_rx_valid)) 
                 & ((~ (IData)(vlSelf->__PVT__rx_valid)) 
                    | (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__full)))) {
                __Vdly__uart_rx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements) 
                                - (IData)(1U)));
            } else if (((((~ (IData)(vlSelf->__PVT__fifo_rx_valid)) 
                          | (~ (IData)(vlSelf->__PVT__fifo_rx_ready))) 
                         & (IData)(vlSelf->__PVT__rx_valid)) 
                        & (~ (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__full)))) {
                __Vdly__uart_rx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)));
            }
        }
        if (vlSelf->__PVT__tx_fifo_clr_q) {
            __Vdly__uart_tx_fifo_i__DOT__pointer_in = 0U;
            __Vdly__uart_tx_fifo_i__DOT__pointer_out = 0U;
            __Vdly__uart_tx_fifo_i__DOT__elements = 0U;
        } else {
            if (((IData)(vlSelf->__PVT__fifo_tx_valid) 
                 & (0x10U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))) {
                __Vdly__uart_tx_fifo_i__DOT__pointer_in 
                    = ((0xfU == (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in))));
            }
            if (((IData)(vlSelf->__PVT__tx_ready) & 
                 (0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))) {
                __Vdly__uart_tx_fifo_i__DOT__pointer_out 
                    = ((0xfU == (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out))));
            }
            if ((((IData)(vlSelf->__PVT__tx_ready) 
                  & (IData)(vlSelf->__PVT__tx_valid)) 
                 & ((~ (IData)(vlSelf->__PVT__fifo_tx_valid)) 
                    | (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__full)))) {
                __Vdly__uart_tx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements) 
                                - (IData)(1U)));
            } else if (((((~ (IData)(vlSelf->__PVT__tx_valid)) 
                          | (~ (IData)(vlSelf->__PVT__tx_ready))) 
                         & (IData)(vlSelf->__PVT__fifo_tx_valid)) 
                        & (~ (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__full)))) {
                __Vdly__uart_tx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)));
            }
        }
        vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync 
            = ((6U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                      << 1U)) | (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_gpioA__DOT__r_gpio_sync1 
                                       >> 0x10U)));
        if (((IData)(vlSelf->__PVT__rx_valid) & (0x10U 
                                                 != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)))) {
            __VdlyVal__uart_rx_fifo_i__DOT__buffer__v0 
                = (((IData)(vlSelf->__PVT__parity_error) 
                    << 8U) | (IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data));
            __VdlyDim0__uart_rx_fifo_i__DOT__buffer__v0 
                = vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in;
            __VdlySet__uart_rx_fifo_i__DOT__buffer__v0 = 1U;
        }
        vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count 
            = vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count_next;
        vlSelf->__PVT__uart_interrupt_i__DOT__iir_q 
            = vlSelf->__PVT__uart_interrupt_i__DOT__iir_n;
        vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count 
            = vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count_next;
        vlSelf->__PVT__trigger_level_q = vlSelf->__PVT__trigger_level_n;
        if (vlSelf->__PVT__uart_tx_i__DOT__sampleData) {
            vlSelf->__PVT__uart_tx_i__DOT__reg_data 
                = vlSelf->__PVT__uart_tx_i__DOT__reg_data_next;
        }
        vlSelf->__PVT__uart_rx_i__DOT__CS = vlSelf->__PVT__uart_rx_i__DOT__NS;
        vlSelf->__PVT__uart_tx_i__DOT__CS = vlSelf->__PVT__uart_tx_i__DOT__NS;
        if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_rx_i__DOT__parity_bit 
                = vlSelf->__PVT__uart_rx_i__DOT__parity_bit_next;
        }
        if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_tx_i__DOT__parity_bit 
                = vlSelf->__PVT__uart_tx_i__DOT__parity_bit_next;
        }
        if (vlSelf->__PVT__uart_rx_i__DOT__set_error) {
            vlSelf->__PVT__parity_error = 1U;
        }
        if (vlSelf->__PVT__uart_rx_i__DOT__sampleData) {
            vlSelf->__PVT__uart_rx_i__DOT__reg_data 
                = vlSelf->__PVT__uart_rx_i__DOT__reg_data_next;
        }
        if (vlSelf->__PVT__uart_rx_i__DOT__baudgen_en) {
            if (((~ (IData)(vlSelf->__PVT__uart_rx_i__DOT__start_bit)) 
                 & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__baud_cnt) 
                    == (0xffffU & vlSelf->__PVT__regs_q[2U])))) {
                __Vdly__uart_rx_i__DOT__baud_cnt = 0U;
                vlSelf->__PVT__uart_rx_i__DOT__bit_done = 1U;
            } else if (((IData)(vlSelf->__PVT__uart_rx_i__DOT__start_bit) 
                        & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__baud_cnt) 
                           == (0x7fffU & (vlSelf->__PVT__regs_q[2U] 
                                          >> 1U))))) {
                __Vdly__uart_rx_i__DOT__baud_cnt = 0U;
                vlSelf->__PVT__uart_rx_i__DOT__bit_done = 1U;
            } else {
                __Vdly__uart_rx_i__DOT__baud_cnt = 
                    (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart_rx_i__DOT__baud_cnt)));
                vlSelf->__PVT__uart_rx_i__DOT__bit_done = 0U;
            }
        } else {
            __Vdly__uart_rx_i__DOT__baud_cnt = 0U;
            vlSelf->__PVT__uart_rx_i__DOT__bit_done = 0U;
        }
        if (vlSelf->__PVT__uart_tx_i__DOT__baudgen_en) {
            if (((IData)(vlSelf->__PVT__uart_tx_i__DOT__baud_cnt) 
                 == (0xffffU & vlSelf->__PVT__regs_q[2U]))) {
                __Vdly__uart_tx_i__DOT__baud_cnt = 0U;
                vlSelf->__PVT__uart_tx_i__DOT__bit_done = 1U;
            } else {
                __Vdly__uart_tx_i__DOT__baud_cnt = 
                    (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart_tx_i__DOT__baud_cnt)));
                vlSelf->__PVT__uart_tx_i__DOT__bit_done = 0U;
            }
        } else {
            __Vdly__uart_tx_i__DOT__baud_cnt = 0U;
            vlSelf->__PVT__uart_tx_i__DOT__bit_done = 0U;
        }
        vlSelf->__PVT__regs_q[0U] = vlSelf->__PVT__regs_n[0U];
        vlSelf->__PVT__regs_q[1U] = vlSelf->__PVT__regs_n[1U];
        vlSelf->__PVT__regs_q[2U] = vlSelf->__PVT__regs_n[2U];
    } else {
        __VdlySet__uart_tx_fifo_i__DOT__buffer__v1 = 1U;
        __Vdly__uart_rx_fifo_i__DOT__pointer_in = 0U;
        __Vdly__uart_tx_fifo_i__DOT__pointer_in = 0U;
        __Vdly__uart_tx_fifo_i__DOT__pointer_out = 0U;
        __Vdly__uart_rx_fifo_i__DOT__pointer_out = 0U;
        __Vdly__uart_rx_fifo_i__DOT__elements = 0U;
        __Vdly__uart_tx_fifo_i__DOT__elements = 0U;
        vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync = 7U;
        __VdlySet__uart_rx_fifo_i__DOT__buffer__v1 = 1U;
        vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count = 0U;
        vlSelf->__PVT__uart_interrupt_i__DOT__iir_q = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count = 0U;
        vlSelf->__PVT__trigger_level_q = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__reg_data = 0xffU;
        vlSelf->__PVT__uart_rx_i__DOT__CS = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__CS = 0U;
        vlSelf->__PVT__uart_rx_i__DOT__parity_bit = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__parity_bit = 0U;
        vlSelf->__PVT__parity_error = 0U;
        vlSelf->__PVT__uart_rx_i__DOT__reg_data = 0xffU;
        __Vdly__uart_rx_i__DOT__baud_cnt = 0U;
        vlSelf->__PVT__uart_rx_i__DOT__bit_done = 0U;
        __Vdly__uart_tx_i__DOT__baud_cnt = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__bit_done = 0U;
        vlSelf->__PVT__regs_q[0U] = (0x10000U | (0xffU 
                                                 & vlSelf->__PVT__regs_q[0U]));
        vlSelf->__PVT__regs_q[1U] = 0x6000U;
        vlSelf->__PVT__regs_q[2U] = 0U;
    }
    if (__VdlySet__uart_tx_fifo_i__DOT__buffer__v0) {
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[__VdlyDim0__uart_tx_fifo_i__DOT__buffer__v0] 
            = __VdlyVal__uart_tx_fifo_i__DOT__buffer__v0;
    }
    if (__VdlySet__uart_tx_fifo_i__DOT__buffer__v1) {
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[1U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[2U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[3U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[4U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[5U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[6U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[7U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[8U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[9U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xaU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xbU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xcU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xdU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xeU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xfU] = 0U;
    }
    vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in 
        = __Vdly__uart_tx_fifo_i__DOT__pointer_in;
    vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out 
        = __Vdly__uart_tx_fifo_i__DOT__pointer_out;
    vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out 
        = __Vdly__uart_rx_fifo_i__DOT__pointer_out;
    vlSelf->__PVT__uart_tx_fifo_i__DOT__elements = __Vdly__uart_tx_fifo_i__DOT__elements;
    vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in 
        = __Vdly__uart_rx_fifo_i__DOT__pointer_in;
    if (__VdlySet__uart_rx_fifo_i__DOT__buffer__v0) {
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[__VdlyDim0__uart_rx_fifo_i__DOT__buffer__v0] 
            = __VdlyVal__uart_rx_fifo_i__DOT__buffer__v0;
    }
    if (__VdlySet__uart_rx_fifo_i__DOT__buffer__v1) {
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[1U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[2U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[3U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[4U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[5U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[6U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[7U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[8U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[9U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xaU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xbU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xcU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xdU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xeU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xfU] = 0U;
    }
    vlSelf->__PVT__uart_rx_fifo_i__DOT__elements = __Vdly__uart_rx_fifo_i__DOT__elements;
    vlSelf->__PVT__rx_fifo_clr_q = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) 
                                    && (IData)(vlSelf->__PVT__rx_fifo_clr_n));
    vlSelf->__PVT__tx_valid = (0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements));
    vlSelf->__PVT__uart_tx_fifo_i__DOT__full = (0x10U 
                                                == (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements));
    vlSelf->__PVT__tx_fifo_clr_q = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) 
                                    && (IData)(vlSelf->__PVT__tx_fifo_clr_n));
    vlSelf->__PVT__uart_rx_i__DOT__s_rx_fall = (IData)(
                                                       (4U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync))));
    vlSelf->__PVT__fifo_rx_data = vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer
        [vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out];
    vlSelf->__PVT__fifo_rx_valid = (0U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements));
    vlSelf->__PVT__uart_rx_fifo_i__DOT__full = (0x10U 
                                                == (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements));
    __Vtableidx3 = (((IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements) 
                     << 2U) | (IData)(vlSelf->__PVT__trigger_level_q));
    vlSelf->__PVT__uart_interrupt_i__DOT__trigger_level_reached 
        = Vtb_verilator__ConstPool__TABLE_h8321f0c7_0
        [__Vtableidx3];
    vlSelf->__PVT__rx_valid = 0U;
    vlSelf->__PVT__uart_tx_i__DOT__reg_data_next = 
        (0x80U | (0x7fU & ((IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_data) 
                           >> 1U)));
    vlSelf->__PVT__tx_ready = 0U;
    vlSelf->__PVT__uart_rx_i__DOT__parity_bit_next 
        = vlSelf->__PVT__uart_rx_i__DOT__parity_bit;
    vlSelf->__PVT__uart_tx_i__DOT__parity_bit_next 
        = vlSelf->__PVT__uart_tx_i__DOT__parity_bit;
    vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 0U;
    vlSelf->__PVT__uart_rx_i__DOT__start_bit = 0U;
    vlSelf->__PVT__uart_rx_i__DOT__baud_cnt = __Vdly__uart_rx_i__DOT__baud_cnt;
    vlSelf->__PVT__uart_tx_i__DOT__baudgen_en = 0U;
    vlSelf->__PVT__uart_tx_i__DOT__baud_cnt = __Vdly__uart_tx_i__DOT__baud_cnt;
    vlSelf->__PVT__uart_rx_i__DOT__sampleData = 0U;
    vlSelf->__PVT__uart_rx_i__DOT__reg_data_next = vlSelf->__PVT__uart_rx_i__DOT__reg_data;
    vlSelf->__PVT__uart_rx_i__DOT__set_error = 0U;
    vlSelf->tx_o = 1U;
    __Vtableidx1 = (3U & (vlSelf->__PVT__regs_q[0U] 
                          >> 0x18U));
    vlSelf->__PVT__uart_rx_i__DOT__s_target_bits = 
        Vtb_verilator__ConstPool__TABLE_hebc1be81_0
        [__Vtableidx1];
    __Vtableidx2 = (3U & (vlSelf->__PVT__regs_q[0U] 
                          >> 0x18U));
    vlSelf->__PVT__uart_tx_i__DOT__s_target_bits = 
        Vtb_verilator__ConstPool__TABLE_hebc1be81_0
        [__Vtableidx2];
    vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count_next 
        = vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count;
    if ((1U & (~ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
                vlSelf->__PVT__rx_valid = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS)))) {
                vlSelf->__PVT__uart_rx_i__DOT__parity_bit_next 
                    = ((IData)(vlSelf->__PVT__uart_rx_i__DOT__parity_bit) 
                       ^ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                          >> 2U));
                if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
                    vlSelf->__PVT__uart_rx_i__DOT__sampleData = 1U;
                    vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count_next 
                        = (((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count) 
                            == (IData)(vlSelf->__PVT__uart_rx_i__DOT__s_target_bits))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count))));
                }
                vlSelf->__PVT__uart_rx_i__DOT__reg_data_next 
                    = ((0x2000000U & vlSelf->__PVT__regs_q[0U])
                        ? ((0x1000000U & vlSelf->__PVT__regs_q[0U])
                            ? ((0x80U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                         << 5U)) | 
                               (0x7fU & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data) 
                                         >> 1U))) : 
                           ((0x40U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                      << 4U)) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data) 
                                                    >> 1U))))
                        : ((0x1000000U & vlSelf->__PVT__regs_q[0U])
                            ? ((0x20U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                         << 3U)) | 
                               (0x1fU & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data) 
                                         >> 1U))) : 
                           ((0x10U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                      << 2U)) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data) 
                                                    >> 1U)))));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            vlSelf->__PVT__uart_rx_i__DOT__parity_bit_next = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
                vlSelf->__PVT__uart_rx_i__DOT__start_bit = 1U;
            } else if (vlSelf->__PVT__uart_rx_i__DOT__s_rx_fall) {
                vlSelf->__PVT__uart_rx_i__DOT__start_bit = 1U;
            }
        }
    }
    vlSelf->__PVT__uart_rx_i__DOT__NS = vlSelf->__PVT__uart_rx_i__DOT__CS;
    if ((4U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__CS) 
                      >> 1U)))) {
            vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 1U;
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS)))) {
                if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
                    if ((0x20000000U & vlSelf->__PVT__regs_q[0U])) {
                        if ((0x10000000U & vlSelf->__PVT__regs_q[0U])) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                          >> 2U)))) {
                                vlSelf->__PVT__uart_rx_i__DOT__set_error = 1U;
                            }
                        } else if ((4U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync))) {
                            vlSelf->__PVT__uart_rx_i__DOT__set_error = 1U;
                        }
                    } else if ((0x10000000U & vlSelf->__PVT__regs_q[0U])) {
                        if (((1U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                    >> 2U)) != (IData)(vlSelf->__PVT__uart_rx_i__DOT__parity_bit))) {
                            vlSelf->__PVT__uart_rx_i__DOT__set_error = 1U;
                        }
                    } else if (((1U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                       >> 2U)) != (1U 
                                                   & (~ (IData)(vlSelf->__PVT__uart_rx_i__DOT__parity_bit))))) {
                        vlSelf->__PVT__uart_rx_i__DOT__set_error = 1U;
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            vlSelf->__PVT__uart_rx_i__DOT__NS = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
                vlSelf->__PVT__uart_rx_i__DOT__NS = 0U;
            }
        } else if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_rx_i__DOT__NS = 5U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
        vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 1U;
        if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            if ((0x10U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements))) {
                vlSelf->__PVT__uart_rx_i__DOT__NS = 
                    ((0x8000000U & vlSelf->__PVT__regs_q[0U])
                      ? 4U : 5U);
            }
        } else if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
            if (((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count) 
                 == (IData)(vlSelf->__PVT__uart_rx_i__DOT__s_target_bits))) {
                vlSelf->__PVT__uart_rx_i__DOT__NS = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
        vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 1U;
        if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_rx_i__DOT__NS = 2U;
        }
    } else if (vlSelf->__PVT__uart_rx_i__DOT__s_rx_fall) {
        vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 1U;
        vlSelf->__PVT__uart_rx_i__DOT__NS = 1U;
    }
    vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count_next 
        = vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count;
    vlSelf->__PVT__uart_tx_i__DOT__sampleData = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__uart_tx_i__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__uart_tx_i__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS)))) {
                if ((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements))) {
                    vlSelf->__PVT__uart_tx_i__DOT__reg_data_next 
                        = vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer
                        [vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out];
                }
                vlSelf->__PVT__tx_ready = 1U;
            }
        }
        if ((2U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS)))) {
                vlSelf->__PVT__uart_tx_i__DOT__parity_bit_next 
                    = (1U & ((IData)(vlSelf->__PVT__uart_tx_i__DOT__parity_bit) 
                             ^ (IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_data)));
                if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
                    vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count_next 
                        = (((IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count) 
                            == (IData)(vlSelf->__PVT__uart_tx_i__DOT__s_target_bits))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count))));
                    if (((IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count) 
                         != (IData)(vlSelf->__PVT__uart_tx_i__DOT__s_target_bits))) {
                        vlSelf->__PVT__uart_tx_i__DOT__sampleData = 1U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
                vlSelf->__PVT__uart_tx_i__DOT__parity_bit_next = 0U;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS)))) {
                if ((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements))) {
                    vlSelf->__PVT__uart_tx_i__DOT__sampleData = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__uart_tx_i__DOT__NS = vlSelf->__PVT__uart_tx_i__DOT__CS;
    if ((4U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__uart_tx_i__DOT__CS) 
                      >> 1U)))) {
            vlSelf->__PVT__uart_tx_i__DOT__baudgen_en = 1U;
            vlSelf->tx_o = 1U;
        }
        if ((2U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
            vlSelf->__PVT__uart_tx_i__DOT__NS = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
            if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
                vlSelf->__PVT__uart_tx_i__DOT__NS = 0U;
            }
        } else if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_tx_i__DOT__NS = ((0x4000000U 
                                                  & vlSelf->__PVT__regs_q[0U])
                                                  ? 5U
                                                  : 0U);
        }
    } else if ((2U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
        vlSelf->__PVT__uart_tx_i__DOT__baudgen_en = 1U;
        if ((1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
            vlSelf->tx_o = (1U & ((0x20000000U & vlSelf->__PVT__regs_q[0U])
                                   ? (vlSelf->__PVT__regs_q[0U] 
                                      >> 0x1cU) : (
                                                   (0x10000000U 
                                                    & vlSelf->__PVT__regs_q[0U])
                                                    ? (IData)(vlSelf->__PVT__uart_tx_i__DOT__parity_bit)
                                                    : 
                                                   (~ (IData)(vlSelf->__PVT__uart_tx_i__DOT__parity_bit)))));
            if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
                vlSelf->__PVT__uart_tx_i__DOT__NS = 4U;
            }
        } else {
            vlSelf->tx_o = (1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_data));
            if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
                if (((IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count) 
                     == (IData)(vlSelf->__PVT__uart_tx_i__DOT__s_target_bits))) {
                    vlSelf->__PVT__uart_tx_i__DOT__NS 
                        = ((0x8000000U & vlSelf->__PVT__regs_q[0U])
                            ? 3U : 4U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
        vlSelf->__PVT__uart_tx_i__DOT__baudgen_en = 1U;
        vlSelf->tx_o = 0U;
        if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_tx_i__DOT__NS = 2U;
        }
    } else if ((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements))) {
        vlSelf->__PVT__uart_tx_i__DOT__NS = 1U;
    }
}

VL_INLINE_OPT void Vtb_verilator_apb_uart_sv__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart0__0(Vtb_verilator_apb_uart_sv__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_uart_sv__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart0__0\n"); );
    // Body
    vlSelf->__PVT__tx_fifo_clr_n = 0U;
    vlSelf->__PVT__rx_fifo_clr_n = 0U;
    if ((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_valid) 
          & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r)) 
         & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_read)))) {
        if ((0U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                          >> 2U)))) {
            if ((1U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                              >> 2U)))) {
                if ((3U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                                  >> 2U)))) {
                    if ((2U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                                      >> 2U)))) {
                        vlSelf->__PVT__tx_fifo_clr_n 
                            = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_wdata 
                                     >> 2U));
                        vlSelf->__PVT__rx_fifo_clr_n 
                            = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_wdata 
                                     >> 1U));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtb_verilator_apb_uart_sv__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart0__1(Vtb_verilator_apb_uart_sv__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_uart_sv__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart0__1\n"); );
    // Body
    vlSelf->__PVT__fifo_tx_valid = 0U;
    vlSelf->__PVT__fifo_rx_ready = 0U;
    vlSelf->__PVT__trigger_level_n = vlSelf->__PVT__trigger_level_q;
    vlSelf->PRDATA = 0U;
    vlSelf->__PVT__clr_int = 0U;
    if ((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_valid) 
          & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r)) 
         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_read))) {
        if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                      >> 4U)))) {
            if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                          >> 3U)))) {
                if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelf->__PVT__regs_q[0U] 
                                  >> 0x1fU)))) {
                        vlSelf->__PVT__fifo_rx_ready = 1U;
                    }
                }
            }
        }
        if ((0x10U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr)) {
            vlSelf->PRDATA = ((8U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr)
                               ? 0U : ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr)
                                        ? (0xffU & 
                                           (vlSelf->__PVT__regs_q[1U] 
                                            >> 8U))
                                        : 0U));
            if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                          >> 3U)))) {
                if ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr)) {
                    vlSelf->__PVT__clr_int = 0xcU;
                }
            }
        } else if ((8U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr)) {
            vlSelf->PRDATA = ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr)
                               ? (vlSelf->__PVT__regs_q[0U] 
                                  >> 0x18U) : (0xc0U 
                                               | (IData)(vlSelf->__PVT__uart_interrupt_i__DOT__iir_q)));
            if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                          >> 2U)))) {
                vlSelf->__PVT__clr_int = 4U;
            }
        } else {
            vlSelf->PRDATA = ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr)
                               ? ((vlSelf->__PVT__regs_q[0U] 
                                   >> 0x1fU) ? (0xffU 
                                                & (vlSelf->__PVT__regs_q[2U] 
                                                   >> 8U))
                                   : (0xffU & (vlSelf->__PVT__regs_q[0U] 
                                               >> 8U)))
                               : ((vlSelf->__PVT__regs_q[0U] 
                                   >> 0x1fU) ? (0xffU 
                                                & vlSelf->__PVT__regs_q[2U])
                                   : (0xffU & (IData)(vlSelf->__PVT__fifo_rx_data))));
            if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                          >> 2U)))) {
                if ((1U & (~ (vlSelf->__PVT__regs_q[0U] 
                              >> 0x1fU)))) {
                    vlSelf->__PVT__clr_int = 8U;
                }
            }
        }
    }
    vlSelf->__PVT__regs_n[0U] = vlSelf->__PVT__regs_q[0U];
    vlSelf->__PVT__regs_n[1U] = vlSelf->__PVT__regs_q[1U];
    vlSelf->__PVT__regs_n[2U] = vlSelf->__PVT__regs_q[2U];
    vlSelf->__PVT__regs_n[1U] = ((0xfffffeffU & vlSelf->__PVT__regs_n[1U]) 
                                 | ((0U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)) 
                                    << 8U));
    vlSelf->__PVT__regs_n[1U] = ((0xfffffbffU & vlSelf->__PVT__regs_n[1U]) 
                                 | (0x400U & ((IData)(vlSelf->__PVT__fifo_rx_data) 
                                              << 2U)));
    vlSelf->__PVT__regs_n[1U] = ((0xffffdfffU & vlSelf->__PVT__regs_n[1U]) 
                                 | (0x2000U & ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))) 
                                               << 0xdU)));
    vlSelf->__PVT__regs_n[1U] = ((0xffffbfffU & vlSelf->__PVT__regs_n[1U]) 
                                 | (((IData)(vlSelf->__PVT__tx_ready) 
                                     & (~ (IData)((0U 
                                                   != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements))))) 
                                    << 0xeU));
    if ((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_valid) 
          & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart0_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r)) 
         & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_read)))) {
        if ((0U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                          >> 2U)))) {
            if ((1U & (~ (vlSelf->__PVT__regs_q[0U] 
                          >> 0x1fU)))) {
                vlSelf->__PVT__fifo_tx_valid = 1U;
                vlSelf->__PVT__fifo_tx_data = (0xffU 
                                               & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_wdata);
            }
            if ((vlSelf->__PVT__regs_q[0U] >> 0x1fU)) {
                vlSelf->__PVT__regs_n[2U] = ((0xff00U 
                                              & vlSelf->__PVT__regs_n[2U]) 
                                             | (0xffU 
                                                & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_wdata));
            }
        } else if ((1U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                                 >> 2U)))) {
            if ((vlSelf->__PVT__regs_q[0U] >> 0x1fU)) {
                vlSelf->__PVT__regs_n[2U] = ((0xffU 
                                              & vlSelf->__PVT__regs_n[2U]) 
                                             | (0xff00U 
                                                & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_wdata 
                                                   << 8U)));
            } else {
                vlSelf->__PVT__regs_n[0U] = ((0xffff00ffU 
                                              & vlSelf->__PVT__regs_n[0U]) 
                                             | (0xff00U 
                                                & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_wdata 
                                                   << 8U)));
            }
        } else if ((3U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                                 >> 2U)))) {
            vlSelf->__PVT__regs_n[0U] = ((0xffffffU 
                                          & vlSelf->__PVT__regs_n[0U]) 
                                         | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_wdata 
                                            << 0x18U));
        }
        if ((0U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                          >> 2U)))) {
            if ((1U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                              >> 2U)))) {
                if ((3U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                                  >> 2U)))) {
                    if ((2U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_addr 
                                      >> 2U)))) {
                        vlSelf->__PVT__trigger_level_n 
                            = (3U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart0_apb_icb_cmd_wdata 
                                     >> 6U));
                    }
                }
            }
        }
    }
    vlSelf->__PVT__uart_interrupt_i__DOT__iir_n = (
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__clr_int))
                                                    ? 
                                                   ((0x400U 
                                                     & (vlSelf->__PVT__regs_q[0U] 
                                                        & vlSelf->__PVT__regs_n[1U]))
                                                     ? 0xcU
                                                     : 
                                                    (((vlSelf->__PVT__regs_q[0U] 
                                                       >> 8U) 
                                                      & (IData)(vlSelf->__PVT__uart_interrupt_i__DOT__trigger_level_reached))
                                                      ? 8U
                                                      : 
                                                     (((vlSelf->__PVT__regs_q[0U] 
                                                        >> 9U) 
                                                       & (0U 
                                                          == (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))
                                                       ? 4U
                                                       : (IData)(vlSelf->__PVT__uart_interrupt_i__DOT__iir_q))))
                                                    : 
                                                   ((~ (IData)(vlSelf->__PVT__clr_int)) 
                                                    & (IData)(vlSelf->__PVT__uart_interrupt_i__DOT__iir_q)));
}

VL_INLINE_OPT void Vtb_verilator_apb_uart_sv__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart1__0(Vtb_verilator_apb_uart_sv__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_uart_sv__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart1__0\n"); );
    // Init
    CData/*1:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*1:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    SData/*15:0*/ __Vdly__uart_rx_i__DOT__baud_cnt;
    __Vdly__uart_rx_i__DOT__baud_cnt = 0;
    SData/*15:0*/ __Vdly__uart_tx_i__DOT__baud_cnt;
    __Vdly__uart_tx_i__DOT__baud_cnt = 0;
    CData/*4:0*/ __Vdly__uart_rx_fifo_i__DOT__elements;
    __Vdly__uart_rx_fifo_i__DOT__elements = 0;
    SData/*8:0*/ __VdlyVal__uart_rx_fifo_i__DOT__buffer__v0;
    __VdlyVal__uart_rx_fifo_i__DOT__buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim0__uart_rx_fifo_i__DOT__buffer__v0;
    __VdlyDim0__uart_rx_fifo_i__DOT__buffer__v0 = 0;
    CData/*3:0*/ __Vdly__uart_rx_fifo_i__DOT__pointer_out;
    __Vdly__uart_rx_fifo_i__DOT__pointer_out = 0;
    CData/*3:0*/ __Vdly__uart_rx_fifo_i__DOT__pointer_in;
    __Vdly__uart_rx_fifo_i__DOT__pointer_in = 0;
    CData/*4:0*/ __Vdly__uart_tx_fifo_i__DOT__elements;
    __Vdly__uart_tx_fifo_i__DOT__elements = 0;
    CData/*7:0*/ __VdlyVal__uart_tx_fifo_i__DOT__buffer__v0;
    __VdlyVal__uart_tx_fifo_i__DOT__buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim0__uart_tx_fifo_i__DOT__buffer__v0;
    __VdlyDim0__uart_tx_fifo_i__DOT__buffer__v0 = 0;
    CData/*3:0*/ __Vdly__uart_tx_fifo_i__DOT__pointer_out;
    __Vdly__uart_tx_fifo_i__DOT__pointer_out = 0;
    CData/*3:0*/ __Vdly__uart_tx_fifo_i__DOT__pointer_in;
    __Vdly__uart_tx_fifo_i__DOT__pointer_in = 0;
    CData/*0:0*/ __VdlySet__uart_rx_fifo_i__DOT__buffer__v0;
    __VdlySet__uart_rx_fifo_i__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_rx_fifo_i__DOT__buffer__v1;
    __VdlySet__uart_rx_fifo_i__DOT__buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__uart_tx_fifo_i__DOT__buffer__v0;
    __VdlySet__uart_tx_fifo_i__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_tx_fifo_i__DOT__buffer__v1;
    __VdlySet__uart_tx_fifo_i__DOT__buffer__v1 = 0;
    // Body
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)) 
                      & (IData)(vlSelf->__PVT__tx_ready)) 
                     & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q)))) {
        VL_FWRITEF_NX(0x80000002U,"%c",0,8,vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer
                      [vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out]);
    }
    __VdlySet__uart_tx_fifo_i__DOT__buffer__v0 = 0U;
    __VdlySet__uart_tx_fifo_i__DOT__buffer__v1 = 0U;
    __Vdly__uart_rx_fifo_i__DOT__pointer_in = vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in;
    __Vdly__uart_tx_fifo_i__DOT__pointer_in = vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in;
    __Vdly__uart_tx_fifo_i__DOT__pointer_out = vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out;
    __Vdly__uart_rx_fifo_i__DOT__pointer_out = vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out;
    __Vdly__uart_rx_fifo_i__DOT__elements = vlSelf->__PVT__uart_rx_fifo_i__DOT__elements;
    __Vdly__uart_tx_fifo_i__DOT__elements = vlSelf->__PVT__uart_tx_fifo_i__DOT__elements;
    __Vdly__uart_tx_i__DOT__baud_cnt = vlSelf->__PVT__uart_tx_i__DOT__baud_cnt;
    __Vdly__uart_rx_i__DOT__baud_cnt = vlSelf->__PVT__uart_rx_i__DOT__baud_cnt;
    __VdlySet__uart_rx_fifo_i__DOT__buffer__v0 = 0U;
    __VdlySet__uart_rx_fifo_i__DOT__buffer__v1 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q)))) {
        vlSelf->__PVT__uart_rx_fifo_i__DOT__loop1 = 0x10U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__loop1 = 0x10U;
    }
    if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
        if (((IData)(vlSelf->__PVT__fifo_tx_valid) 
             & (0x10U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))) {
            __VdlyVal__uart_tx_fifo_i__DOT__buffer__v0 
                = vlSelf->__PVT__fifo_tx_data;
            __VdlyDim0__uart_tx_fifo_i__DOT__buffer__v0 
                = vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in;
            __VdlySet__uart_tx_fifo_i__DOT__buffer__v0 = 1U;
        }
        if (vlSelf->__PVT__rx_fifo_clr_q) {
            __Vdly__uart_rx_fifo_i__DOT__pointer_in = 0U;
            __Vdly__uart_rx_fifo_i__DOT__pointer_out = 0U;
            __Vdly__uart_rx_fifo_i__DOT__elements = 0U;
        } else {
            if (((IData)(vlSelf->__PVT__rx_valid) & 
                 (0x10U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)))) {
                __Vdly__uart_rx_fifo_i__DOT__pointer_in 
                    = ((0xfU == (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in))));
            }
            if (((IData)(vlSelf->__PVT__fifo_rx_ready) 
                 & (0U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)))) {
                __Vdly__uart_rx_fifo_i__DOT__pointer_out 
                    = ((0xfU == (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out))));
            }
            if ((((IData)(vlSelf->__PVT__fifo_rx_ready) 
                  & (IData)(vlSelf->__PVT__fifo_rx_valid)) 
                 & ((~ (IData)(vlSelf->__PVT__rx_valid)) 
                    | (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__full)))) {
                __Vdly__uart_rx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements) 
                                - (IData)(1U)));
            } else if (((((~ (IData)(vlSelf->__PVT__fifo_rx_valid)) 
                          | (~ (IData)(vlSelf->__PVT__fifo_rx_ready))) 
                         & (IData)(vlSelf->__PVT__rx_valid)) 
                        & (~ (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__full)))) {
                __Vdly__uart_rx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)));
            }
        }
        if (vlSelf->__PVT__tx_fifo_clr_q) {
            __Vdly__uart_tx_fifo_i__DOT__pointer_in = 0U;
            __Vdly__uart_tx_fifo_i__DOT__pointer_out = 0U;
            __Vdly__uart_tx_fifo_i__DOT__elements = 0U;
        } else {
            if (((IData)(vlSelf->__PVT__fifo_tx_valid) 
                 & (0x10U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))) {
                __Vdly__uart_tx_fifo_i__DOT__pointer_in 
                    = ((0xfU == (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in))));
            }
            if (((IData)(vlSelf->__PVT__tx_ready) & 
                 (0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))) {
                __Vdly__uart_tx_fifo_i__DOT__pointer_out 
                    = ((0xfU == (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out))));
            }
            if ((((IData)(vlSelf->__PVT__tx_ready) 
                  & (IData)(vlSelf->__PVT__tx_valid)) 
                 & ((~ (IData)(vlSelf->__PVT__fifo_tx_valid)) 
                    | (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__full)))) {
                __Vdly__uart_tx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements) 
                                - (IData)(1U)));
            } else if (((((~ (IData)(vlSelf->__PVT__tx_valid)) 
                          | (~ (IData)(vlSelf->__PVT__tx_ready))) 
                         & (IData)(vlSelf->__PVT__fifo_tx_valid)) 
                        & (~ (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__full)))) {
                __Vdly__uart_tx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)));
            }
        }
        vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync 
            = ((6U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                      << 1U)) | (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_gpioB__DOT__r_gpio_sync1 
                                       >> 0x10U)));
        if (((IData)(vlSelf->__PVT__rx_valid) & (0x10U 
                                                 != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)))) {
            __VdlyVal__uart_rx_fifo_i__DOT__buffer__v0 
                = (((IData)(vlSelf->__PVT__parity_error) 
                    << 8U) | (IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data));
            __VdlyDim0__uart_rx_fifo_i__DOT__buffer__v0 
                = vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in;
            __VdlySet__uart_rx_fifo_i__DOT__buffer__v0 = 1U;
        }
        vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count 
            = vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count_next;
        vlSelf->__PVT__uart_interrupt_i__DOT__iir_q 
            = vlSelf->__PVT__uart_interrupt_i__DOT__iir_n;
        vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count 
            = vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count_next;
        vlSelf->__PVT__trigger_level_q = vlSelf->__PVT__trigger_level_n;
        if (vlSelf->__PVT__uart_tx_i__DOT__sampleData) {
            vlSelf->__PVT__uart_tx_i__DOT__reg_data 
                = vlSelf->__PVT__uart_tx_i__DOT__reg_data_next;
        }
        vlSelf->__PVT__uart_rx_i__DOT__CS = vlSelf->__PVT__uart_rx_i__DOT__NS;
        vlSelf->__PVT__uart_tx_i__DOT__CS = vlSelf->__PVT__uart_tx_i__DOT__NS;
        if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_tx_i__DOT__parity_bit 
                = vlSelf->__PVT__uart_tx_i__DOT__parity_bit_next;
        }
        if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_rx_i__DOT__parity_bit 
                = vlSelf->__PVT__uart_rx_i__DOT__parity_bit_next;
        }
        if (vlSelf->__PVT__uart_rx_i__DOT__set_error) {
            vlSelf->__PVT__parity_error = 1U;
        }
        if (vlSelf->__PVT__uart_rx_i__DOT__sampleData) {
            vlSelf->__PVT__uart_rx_i__DOT__reg_data 
                = vlSelf->__PVT__uart_rx_i__DOT__reg_data_next;
        }
        if (vlSelf->__PVT__uart_tx_i__DOT__baudgen_en) {
            if (((IData)(vlSelf->__PVT__uart_tx_i__DOT__baud_cnt) 
                 == (0xffffU & vlSelf->__PVT__regs_q[2U]))) {
                __Vdly__uart_tx_i__DOT__baud_cnt = 0U;
                vlSelf->__PVT__uart_tx_i__DOT__bit_done = 1U;
            } else {
                __Vdly__uart_tx_i__DOT__baud_cnt = 
                    (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart_tx_i__DOT__baud_cnt)));
                vlSelf->__PVT__uart_tx_i__DOT__bit_done = 0U;
            }
        } else {
            __Vdly__uart_tx_i__DOT__baud_cnt = 0U;
            vlSelf->__PVT__uart_tx_i__DOT__bit_done = 0U;
        }
        if (vlSelf->__PVT__uart_rx_i__DOT__baudgen_en) {
            if (((~ (IData)(vlSelf->__PVT__uart_rx_i__DOT__start_bit)) 
                 & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__baud_cnt) 
                    == (0xffffU & vlSelf->__PVT__regs_q[2U])))) {
                __Vdly__uart_rx_i__DOT__baud_cnt = 0U;
                vlSelf->__PVT__uart_rx_i__DOT__bit_done = 1U;
            } else if (((IData)(vlSelf->__PVT__uart_rx_i__DOT__start_bit) 
                        & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__baud_cnt) 
                           == (0x7fffU & (vlSelf->__PVT__regs_q[2U] 
                                          >> 1U))))) {
                __Vdly__uart_rx_i__DOT__baud_cnt = 0U;
                vlSelf->__PVT__uart_rx_i__DOT__bit_done = 1U;
            } else {
                __Vdly__uart_rx_i__DOT__baud_cnt = 
                    (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart_rx_i__DOT__baud_cnt)));
                vlSelf->__PVT__uart_rx_i__DOT__bit_done = 0U;
            }
        } else {
            __Vdly__uart_rx_i__DOT__baud_cnt = 0U;
            vlSelf->__PVT__uart_rx_i__DOT__bit_done = 0U;
        }
        vlSelf->__PVT__regs_q[0U] = vlSelf->__PVT__regs_n[0U];
        vlSelf->__PVT__regs_q[1U] = vlSelf->__PVT__regs_n[1U];
        vlSelf->__PVT__regs_q[2U] = vlSelf->__PVT__regs_n[2U];
    } else {
        __VdlySet__uart_tx_fifo_i__DOT__buffer__v1 = 1U;
        __Vdly__uart_rx_fifo_i__DOT__pointer_in = 0U;
        __Vdly__uart_tx_fifo_i__DOT__pointer_in = 0U;
        __Vdly__uart_tx_fifo_i__DOT__pointer_out = 0U;
        vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync = 7U;
        __Vdly__uart_rx_fifo_i__DOT__pointer_out = 0U;
        __Vdly__uart_rx_fifo_i__DOT__elements = 0U;
        __Vdly__uart_tx_fifo_i__DOT__elements = 0U;
        __VdlySet__uart_rx_fifo_i__DOT__buffer__v1 = 1U;
        vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count = 0U;
        vlSelf->__PVT__uart_interrupt_i__DOT__iir_q = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count = 0U;
        vlSelf->__PVT__trigger_level_q = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__reg_data = 0xffU;
        vlSelf->__PVT__uart_rx_i__DOT__CS = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__CS = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__parity_bit = 0U;
        vlSelf->__PVT__uart_rx_i__DOT__parity_bit = 0U;
        vlSelf->__PVT__parity_error = 0U;
        vlSelf->__PVT__uart_rx_i__DOT__reg_data = 0xffU;
        __Vdly__uart_tx_i__DOT__baud_cnt = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__bit_done = 0U;
        __Vdly__uart_rx_i__DOT__baud_cnt = 0U;
        vlSelf->__PVT__uart_rx_i__DOT__bit_done = 0U;
        vlSelf->__PVT__regs_q[0U] = (0x10000U | (0xffU 
                                                 & vlSelf->__PVT__regs_q[0U]));
        vlSelf->__PVT__regs_q[1U] = 0x6000U;
        vlSelf->__PVT__regs_q[2U] = 0U;
    }
    if (__VdlySet__uart_tx_fifo_i__DOT__buffer__v0) {
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[__VdlyDim0__uart_tx_fifo_i__DOT__buffer__v0] 
            = __VdlyVal__uart_tx_fifo_i__DOT__buffer__v0;
    }
    if (__VdlySet__uart_tx_fifo_i__DOT__buffer__v1) {
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[1U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[2U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[3U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[4U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[5U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[6U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[7U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[8U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[9U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xaU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xbU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xcU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xdU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xeU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xfU] = 0U;
    }
    vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in 
        = __Vdly__uart_tx_fifo_i__DOT__pointer_in;
    vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out 
        = __Vdly__uart_tx_fifo_i__DOT__pointer_out;
    vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out 
        = __Vdly__uart_rx_fifo_i__DOT__pointer_out;
    vlSelf->__PVT__uart_tx_fifo_i__DOT__elements = __Vdly__uart_tx_fifo_i__DOT__elements;
    vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in 
        = __Vdly__uart_rx_fifo_i__DOT__pointer_in;
    if (__VdlySet__uart_rx_fifo_i__DOT__buffer__v0) {
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[__VdlyDim0__uart_rx_fifo_i__DOT__buffer__v0] 
            = __VdlyVal__uart_rx_fifo_i__DOT__buffer__v0;
    }
    if (__VdlySet__uart_rx_fifo_i__DOT__buffer__v1) {
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[1U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[2U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[3U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[4U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[5U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[6U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[7U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[8U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[9U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xaU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xbU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xcU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xdU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xeU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xfU] = 0U;
    }
    vlSelf->__PVT__uart_rx_fifo_i__DOT__elements = __Vdly__uart_rx_fifo_i__DOT__elements;
    vlSelf->__PVT__uart_rx_i__DOT__s_rx_fall = (IData)(
                                                       (4U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync))));
    vlSelf->__PVT__rx_fifo_clr_q = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) 
                                    && (IData)(vlSelf->__PVT__rx_fifo_clr_n));
    vlSelf->__PVT__tx_valid = (0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements));
    vlSelf->__PVT__uart_tx_fifo_i__DOT__full = (0x10U 
                                                == (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements));
    vlSelf->__PVT__tx_fifo_clr_q = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) 
                                    && (IData)(vlSelf->__PVT__tx_fifo_clr_n));
    vlSelf->__PVT__fifo_rx_data = vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer
        [vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out];
    vlSelf->__PVT__fifo_rx_valid = (0U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements));
    vlSelf->__PVT__uart_rx_fifo_i__DOT__full = (0x10U 
                                                == (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements));
    __Vtableidx6 = (((IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements) 
                     << 2U) | (IData)(vlSelf->__PVT__trigger_level_q));
    vlSelf->__PVT__uart_interrupt_i__DOT__trigger_level_reached 
        = Vtb_verilator__ConstPool__TABLE_h8321f0c7_0
        [__Vtableidx6];
    vlSelf->__PVT__rx_valid = 0U;
    vlSelf->__PVT__uart_tx_i__DOT__reg_data_next = 
        (0x80U | (0x7fU & ((IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_data) 
                           >> 1U)));
    vlSelf->__PVT__tx_ready = 0U;
    vlSelf->__PVT__uart_tx_i__DOT__parity_bit_next 
        = vlSelf->__PVT__uart_tx_i__DOT__parity_bit;
    vlSelf->__PVT__uart_rx_i__DOT__parity_bit_next 
        = vlSelf->__PVT__uart_rx_i__DOT__parity_bit;
    vlSelf->__PVT__uart_tx_i__DOT__baudgen_en = 0U;
    vlSelf->__PVT__uart_tx_i__DOT__baud_cnt = __Vdly__uart_tx_i__DOT__baud_cnt;
    vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 0U;
    vlSelf->__PVT__uart_rx_i__DOT__start_bit = 0U;
    vlSelf->__PVT__uart_rx_i__DOT__baud_cnt = __Vdly__uart_rx_i__DOT__baud_cnt;
    vlSelf->__PVT__uart_rx_i__DOT__sampleData = 0U;
    vlSelf->__PVT__uart_rx_i__DOT__reg_data_next = vlSelf->__PVT__uart_rx_i__DOT__reg_data;
    vlSelf->__PVT__uart_rx_i__DOT__set_error = 0U;
    vlSelf->tx_o = 1U;
    __Vtableidx4 = (3U & (vlSelf->__PVT__regs_q[0U] 
                          >> 0x18U));
    vlSelf->__PVT__uart_rx_i__DOT__s_target_bits = 
        Vtb_verilator__ConstPool__TABLE_hebc1be81_0
        [__Vtableidx4];
    __Vtableidx5 = (3U & (vlSelf->__PVT__regs_q[0U] 
                          >> 0x18U));
    vlSelf->__PVT__uart_tx_i__DOT__s_target_bits = 
        Vtb_verilator__ConstPool__TABLE_hebc1be81_0
        [__Vtableidx5];
    vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count_next 
        = vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count;
    if ((1U & (~ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
                vlSelf->__PVT__rx_valid = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS)))) {
                vlSelf->__PVT__uart_rx_i__DOT__parity_bit_next 
                    = ((IData)(vlSelf->__PVT__uart_rx_i__DOT__parity_bit) 
                       ^ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                          >> 2U));
                if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
                    vlSelf->__PVT__uart_rx_i__DOT__sampleData = 1U;
                    vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count_next 
                        = (((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count) 
                            == (IData)(vlSelf->__PVT__uart_rx_i__DOT__s_target_bits))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count))));
                }
                vlSelf->__PVT__uart_rx_i__DOT__reg_data_next 
                    = ((0x2000000U & vlSelf->__PVT__regs_q[0U])
                        ? ((0x1000000U & vlSelf->__PVT__regs_q[0U])
                            ? ((0x80U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                         << 5U)) | 
                               (0x7fU & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data) 
                                         >> 1U))) : 
                           ((0x40U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                      << 4U)) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data) 
                                                    >> 1U))))
                        : ((0x1000000U & vlSelf->__PVT__regs_q[0U])
                            ? ((0x20U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                         << 3U)) | 
                               (0x1fU & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data) 
                                         >> 1U))) : 
                           ((0x10U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                      << 2U)) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data) 
                                                    >> 1U)))));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            vlSelf->__PVT__uart_rx_i__DOT__parity_bit_next = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
                vlSelf->__PVT__uart_rx_i__DOT__start_bit = 1U;
            } else if (vlSelf->__PVT__uart_rx_i__DOT__s_rx_fall) {
                vlSelf->__PVT__uart_rx_i__DOT__start_bit = 1U;
            }
        }
    }
    vlSelf->__PVT__uart_rx_i__DOT__NS = vlSelf->__PVT__uart_rx_i__DOT__CS;
    if ((4U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__CS) 
                      >> 1U)))) {
            vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 1U;
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS)))) {
                if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
                    if ((0x20000000U & vlSelf->__PVT__regs_q[0U])) {
                        if ((0x10000000U & vlSelf->__PVT__regs_q[0U])) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                          >> 2U)))) {
                                vlSelf->__PVT__uart_rx_i__DOT__set_error = 1U;
                            }
                        } else if ((4U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync))) {
                            vlSelf->__PVT__uart_rx_i__DOT__set_error = 1U;
                        }
                    } else if ((0x10000000U & vlSelf->__PVT__regs_q[0U])) {
                        if (((1U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                    >> 2U)) != (IData)(vlSelf->__PVT__uart_rx_i__DOT__parity_bit))) {
                            vlSelf->__PVT__uart_rx_i__DOT__set_error = 1U;
                        }
                    } else if (((1U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                       >> 2U)) != (1U 
                                                   & (~ (IData)(vlSelf->__PVT__uart_rx_i__DOT__parity_bit))))) {
                        vlSelf->__PVT__uart_rx_i__DOT__set_error = 1U;
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            vlSelf->__PVT__uart_rx_i__DOT__NS = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
                vlSelf->__PVT__uart_rx_i__DOT__NS = 0U;
            }
        } else if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_rx_i__DOT__NS = 5U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
        vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 1U;
        if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            if ((0x10U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements))) {
                vlSelf->__PVT__uart_rx_i__DOT__NS = 
                    ((0x8000000U & vlSelf->__PVT__regs_q[0U])
                      ? 4U : 5U);
            }
        } else if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
            if (((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count) 
                 == (IData)(vlSelf->__PVT__uart_rx_i__DOT__s_target_bits))) {
                vlSelf->__PVT__uart_rx_i__DOT__NS = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
        vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 1U;
        if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_rx_i__DOT__NS = 2U;
        }
    } else if (vlSelf->__PVT__uart_rx_i__DOT__s_rx_fall) {
        vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 1U;
        vlSelf->__PVT__uart_rx_i__DOT__NS = 1U;
    }
    vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count_next 
        = vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count;
    vlSelf->__PVT__uart_tx_i__DOT__sampleData = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__uart_tx_i__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__uart_tx_i__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS)))) {
                if ((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements))) {
                    vlSelf->__PVT__uart_tx_i__DOT__reg_data_next 
                        = vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer
                        [vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out];
                }
                vlSelf->__PVT__tx_ready = 1U;
            }
        }
        if ((2U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS)))) {
                vlSelf->__PVT__uart_tx_i__DOT__parity_bit_next 
                    = (1U & ((IData)(vlSelf->__PVT__uart_tx_i__DOT__parity_bit) 
                             ^ (IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_data)));
                if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
                    vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count_next 
                        = (((IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count) 
                            == (IData)(vlSelf->__PVT__uart_tx_i__DOT__s_target_bits))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count))));
                    if (((IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count) 
                         != (IData)(vlSelf->__PVT__uart_tx_i__DOT__s_target_bits))) {
                        vlSelf->__PVT__uart_tx_i__DOT__sampleData = 1U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
                vlSelf->__PVT__uart_tx_i__DOT__parity_bit_next = 0U;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS)))) {
                if ((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements))) {
                    vlSelf->__PVT__uart_tx_i__DOT__sampleData = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__uart_tx_i__DOT__NS = vlSelf->__PVT__uart_tx_i__DOT__CS;
    if ((4U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__uart_tx_i__DOT__CS) 
                      >> 1U)))) {
            vlSelf->__PVT__uart_tx_i__DOT__baudgen_en = 1U;
            vlSelf->tx_o = 1U;
        }
        if ((2U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
            vlSelf->__PVT__uart_tx_i__DOT__NS = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
            if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
                vlSelf->__PVT__uart_tx_i__DOT__NS = 0U;
            }
        } else if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_tx_i__DOT__NS = ((0x4000000U 
                                                  & vlSelf->__PVT__regs_q[0U])
                                                  ? 5U
                                                  : 0U);
        }
    } else if ((2U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
        vlSelf->__PVT__uart_tx_i__DOT__baudgen_en = 1U;
        if ((1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
            vlSelf->tx_o = (1U & ((0x20000000U & vlSelf->__PVT__regs_q[0U])
                                   ? (vlSelf->__PVT__regs_q[0U] 
                                      >> 0x1cU) : (
                                                   (0x10000000U 
                                                    & vlSelf->__PVT__regs_q[0U])
                                                    ? (IData)(vlSelf->__PVT__uart_tx_i__DOT__parity_bit)
                                                    : 
                                                   (~ (IData)(vlSelf->__PVT__uart_tx_i__DOT__parity_bit)))));
            if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
                vlSelf->__PVT__uart_tx_i__DOT__NS = 4U;
            }
        } else {
            vlSelf->tx_o = (1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_data));
            if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
                if (((IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count) 
                     == (IData)(vlSelf->__PVT__uart_tx_i__DOT__s_target_bits))) {
                    vlSelf->__PVT__uart_tx_i__DOT__NS 
                        = ((0x8000000U & vlSelf->__PVT__regs_q[0U])
                            ? 3U : 4U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
        vlSelf->__PVT__uart_tx_i__DOT__baudgen_en = 1U;
        vlSelf->tx_o = 0U;
        if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_tx_i__DOT__NS = 2U;
        }
    } else if ((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements))) {
        vlSelf->__PVT__uart_tx_i__DOT__NS = 1U;
    }
}

VL_INLINE_OPT void Vtb_verilator_apb_uart_sv__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart1__0(Vtb_verilator_apb_uart_sv__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_uart_sv__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart1__0\n"); );
    // Body
    vlSelf->__PVT__tx_fifo_clr_n = 0U;
    vlSelf->__PVT__rx_fifo_clr_n = 0U;
    if ((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_valid) 
          & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r)) 
         & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_read)))) {
        if ((0U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                          >> 2U)))) {
            if ((1U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                              >> 2U)))) {
                if ((3U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                                  >> 2U)))) {
                    if ((2U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                                      >> 2U)))) {
                        vlSelf->__PVT__tx_fifo_clr_n 
                            = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_wdata 
                                     >> 2U));
                        vlSelf->__PVT__rx_fifo_clr_n 
                            = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_wdata 
                                     >> 1U));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtb_verilator_apb_uart_sv__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart1__1(Vtb_verilator_apb_uart_sv__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_uart_sv__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart1__1\n"); );
    // Body
    vlSelf->__PVT__fifo_tx_valid = 0U;
    vlSelf->__PVT__fifo_rx_ready = 0U;
    vlSelf->__PVT__trigger_level_n = vlSelf->__PVT__trigger_level_q;
    vlSelf->PRDATA = 0U;
    vlSelf->__PVT__clr_int = 0U;
    if ((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_valid) 
          & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r)) 
         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_read))) {
        if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                      >> 4U)))) {
            if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                          >> 3U)))) {
                if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelf->__PVT__regs_q[0U] 
                                  >> 0x1fU)))) {
                        vlSelf->__PVT__fifo_rx_ready = 1U;
                    }
                }
            }
        }
        if ((0x10U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr)) {
            vlSelf->PRDATA = ((8U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr)
                               ? 0U : ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr)
                                        ? (0xffU & 
                                           (vlSelf->__PVT__regs_q[1U] 
                                            >> 8U))
                                        : 0U));
            if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                          >> 3U)))) {
                if ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr)) {
                    vlSelf->__PVT__clr_int = 0xcU;
                }
            }
        } else if ((8U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr)) {
            vlSelf->PRDATA = ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr)
                               ? (vlSelf->__PVT__regs_q[0U] 
                                  >> 0x18U) : (0xc0U 
                                               | (IData)(vlSelf->__PVT__uart_interrupt_i__DOT__iir_q)));
            if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                          >> 2U)))) {
                vlSelf->__PVT__clr_int = 4U;
            }
        } else {
            vlSelf->PRDATA = ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr)
                               ? ((vlSelf->__PVT__regs_q[0U] 
                                   >> 0x1fU) ? (0xffU 
                                                & (vlSelf->__PVT__regs_q[2U] 
                                                   >> 8U))
                                   : (0xffU & (vlSelf->__PVT__regs_q[0U] 
                                               >> 8U)))
                               : ((vlSelf->__PVT__regs_q[0U] 
                                   >> 0x1fU) ? (0xffU 
                                                & vlSelf->__PVT__regs_q[2U])
                                   : (0xffU & (IData)(vlSelf->__PVT__fifo_rx_data))));
            if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                          >> 2U)))) {
                if ((1U & (~ (vlSelf->__PVT__regs_q[0U] 
                              >> 0x1fU)))) {
                    vlSelf->__PVT__clr_int = 8U;
                }
            }
        }
    }
    vlSelf->__PVT__regs_n[0U] = vlSelf->__PVT__regs_q[0U];
    vlSelf->__PVT__regs_n[1U] = vlSelf->__PVT__regs_q[1U];
    vlSelf->__PVT__regs_n[2U] = vlSelf->__PVT__regs_q[2U];
    vlSelf->__PVT__regs_n[1U] = ((0xfffffeffU & vlSelf->__PVT__regs_n[1U]) 
                                 | ((0U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)) 
                                    << 8U));
    vlSelf->__PVT__regs_n[1U] = ((0xfffffbffU & vlSelf->__PVT__regs_n[1U]) 
                                 | (0x400U & ((IData)(vlSelf->__PVT__fifo_rx_data) 
                                              << 2U)));
    vlSelf->__PVT__regs_n[1U] = ((0xffffdfffU & vlSelf->__PVT__regs_n[1U]) 
                                 | (0x2000U & ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))) 
                                               << 0xdU)));
    vlSelf->__PVT__regs_n[1U] = ((0xffffbfffU & vlSelf->__PVT__regs_n[1U]) 
                                 | (((IData)(vlSelf->__PVT__tx_ready) 
                                     & (~ (IData)((0U 
                                                   != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements))))) 
                                    << 0xeU));
    if ((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_valid) 
          & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart1_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r)) 
         & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_read)))) {
        if ((0U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                          >> 2U)))) {
            if ((1U & (~ (vlSelf->__PVT__regs_q[0U] 
                          >> 0x1fU)))) {
                vlSelf->__PVT__fifo_tx_valid = 1U;
                vlSelf->__PVT__fifo_tx_data = (0xffU 
                                               & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_wdata);
            }
            if ((vlSelf->__PVT__regs_q[0U] >> 0x1fU)) {
                vlSelf->__PVT__regs_n[2U] = ((0xff00U 
                                              & vlSelf->__PVT__regs_n[2U]) 
                                             | (0xffU 
                                                & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_wdata));
            }
        } else if ((1U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                                 >> 2U)))) {
            if ((vlSelf->__PVT__regs_q[0U] >> 0x1fU)) {
                vlSelf->__PVT__regs_n[2U] = ((0xffU 
                                              & vlSelf->__PVT__regs_n[2U]) 
                                             | (0xff00U 
                                                & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_wdata 
                                                   << 8U)));
            } else {
                vlSelf->__PVT__regs_n[0U] = ((0xffff00ffU 
                                              & vlSelf->__PVT__regs_n[0U]) 
                                             | (0xff00U 
                                                & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_wdata 
                                                   << 8U)));
            }
        } else if ((3U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                                 >> 2U)))) {
            vlSelf->__PVT__regs_n[0U] = ((0xffffffU 
                                          & vlSelf->__PVT__regs_n[0U]) 
                                         | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_wdata 
                                            << 0x18U));
        }
        if ((0U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                          >> 2U)))) {
            if ((1U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                              >> 2U)))) {
                if ((3U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                                  >> 2U)))) {
                    if ((2U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_addr 
                                      >> 2U)))) {
                        vlSelf->__PVT__trigger_level_n 
                            = (3U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart1_apb_icb_cmd_wdata 
                                     >> 6U));
                    }
                }
            }
        }
    }
    vlSelf->__PVT__uart_interrupt_i__DOT__iir_n = (
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__clr_int))
                                                    ? 
                                                   ((0x400U 
                                                     & (vlSelf->__PVT__regs_q[0U] 
                                                        & vlSelf->__PVT__regs_n[1U]))
                                                     ? 0xcU
                                                     : 
                                                    (((vlSelf->__PVT__regs_q[0U] 
                                                       >> 8U) 
                                                      & (IData)(vlSelf->__PVT__uart_interrupt_i__DOT__trigger_level_reached))
                                                      ? 8U
                                                      : 
                                                     (((vlSelf->__PVT__regs_q[0U] 
                                                        >> 9U) 
                                                       & (0U 
                                                          == (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))
                                                       ? 4U
                                                       : (IData)(vlSelf->__PVT__uart_interrupt_i__DOT__iir_q))))
                                                    : 
                                                   ((~ (IData)(vlSelf->__PVT__clr_int)) 
                                                    & (IData)(vlSelf->__PVT__uart_interrupt_i__DOT__iir_q)));
}

VL_INLINE_OPT void Vtb_verilator_apb_uart_sv__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart2__0(Vtb_verilator_apb_uart_sv__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_uart_sv__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart2__0\n"); );
    // Init
    CData/*1:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*1:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    SData/*15:0*/ __Vdly__uart_rx_i__DOT__baud_cnt;
    __Vdly__uart_rx_i__DOT__baud_cnt = 0;
    SData/*15:0*/ __Vdly__uart_tx_i__DOT__baud_cnt;
    __Vdly__uart_tx_i__DOT__baud_cnt = 0;
    CData/*4:0*/ __Vdly__uart_rx_fifo_i__DOT__elements;
    __Vdly__uart_rx_fifo_i__DOT__elements = 0;
    SData/*8:0*/ __VdlyVal__uart_rx_fifo_i__DOT__buffer__v0;
    __VdlyVal__uart_rx_fifo_i__DOT__buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim0__uart_rx_fifo_i__DOT__buffer__v0;
    __VdlyDim0__uart_rx_fifo_i__DOT__buffer__v0 = 0;
    CData/*3:0*/ __Vdly__uart_rx_fifo_i__DOT__pointer_out;
    __Vdly__uart_rx_fifo_i__DOT__pointer_out = 0;
    CData/*3:0*/ __Vdly__uart_rx_fifo_i__DOT__pointer_in;
    __Vdly__uart_rx_fifo_i__DOT__pointer_in = 0;
    CData/*4:0*/ __Vdly__uart_tx_fifo_i__DOT__elements;
    __Vdly__uart_tx_fifo_i__DOT__elements = 0;
    CData/*7:0*/ __VdlyVal__uart_tx_fifo_i__DOT__buffer__v0;
    __VdlyVal__uart_tx_fifo_i__DOT__buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim0__uart_tx_fifo_i__DOT__buffer__v0;
    __VdlyDim0__uart_tx_fifo_i__DOT__buffer__v0 = 0;
    CData/*3:0*/ __Vdly__uart_tx_fifo_i__DOT__pointer_out;
    __Vdly__uart_tx_fifo_i__DOT__pointer_out = 0;
    CData/*3:0*/ __Vdly__uart_tx_fifo_i__DOT__pointer_in;
    __Vdly__uart_tx_fifo_i__DOT__pointer_in = 0;
    CData/*0:0*/ __VdlySet__uart_rx_fifo_i__DOT__buffer__v0;
    __VdlySet__uart_rx_fifo_i__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_rx_fifo_i__DOT__buffer__v1;
    __VdlySet__uart_rx_fifo_i__DOT__buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__uart_tx_fifo_i__DOT__buffer__v0;
    __VdlySet__uart_tx_fifo_i__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_tx_fifo_i__DOT__buffer__v1;
    __VdlySet__uart_tx_fifo_i__DOT__buffer__v1 = 0;
    // Body
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)) 
                      & (IData)(vlSelf->__PVT__tx_ready)) 
                     & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q)))) {
        VL_FWRITEF_NX(0x80000002U,"%c",0,8,vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer
                      [vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out]);
    }
    __VdlySet__uart_tx_fifo_i__DOT__buffer__v0 = 0U;
    __VdlySet__uart_tx_fifo_i__DOT__buffer__v1 = 0U;
    __Vdly__uart_rx_fifo_i__DOT__pointer_in = vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in;
    __Vdly__uart_tx_fifo_i__DOT__pointer_in = vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in;
    __Vdly__uart_tx_fifo_i__DOT__pointer_out = vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out;
    __Vdly__uart_rx_fifo_i__DOT__pointer_out = vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out;
    __Vdly__uart_rx_fifo_i__DOT__elements = vlSelf->__PVT__uart_rx_fifo_i__DOT__elements;
    __Vdly__uart_tx_fifo_i__DOT__elements = vlSelf->__PVT__uart_tx_fifo_i__DOT__elements;
    __Vdly__uart_tx_i__DOT__baud_cnt = vlSelf->__PVT__uart_tx_i__DOT__baud_cnt;
    __Vdly__uart_rx_i__DOT__baud_cnt = vlSelf->__PVT__uart_rx_i__DOT__baud_cnt;
    __VdlySet__uart_rx_fifo_i__DOT__buffer__v0 = 0U;
    __VdlySet__uart_rx_fifo_i__DOT__buffer__v1 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q)))) {
        vlSelf->__PVT__uart_rx_fifo_i__DOT__loop1 = 0x10U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__loop1 = 0x10U;
    }
    if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
        if (((IData)(vlSelf->__PVT__fifo_tx_valid) 
             & (0x10U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))) {
            __VdlyVal__uart_tx_fifo_i__DOT__buffer__v0 
                = vlSelf->__PVT__fifo_tx_data;
            __VdlyDim0__uart_tx_fifo_i__DOT__buffer__v0 
                = vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in;
            __VdlySet__uart_tx_fifo_i__DOT__buffer__v0 = 1U;
        }
        if (vlSelf->__PVT__rx_fifo_clr_q) {
            __Vdly__uart_rx_fifo_i__DOT__pointer_in = 0U;
            __Vdly__uart_rx_fifo_i__DOT__pointer_out = 0U;
            __Vdly__uart_rx_fifo_i__DOT__elements = 0U;
        } else {
            if (((IData)(vlSelf->__PVT__rx_valid) & 
                 (0x10U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)))) {
                __Vdly__uart_rx_fifo_i__DOT__pointer_in 
                    = ((0xfU == (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in))));
            }
            if (((IData)(vlSelf->__PVT__fifo_rx_ready) 
                 & (0U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)))) {
                __Vdly__uart_rx_fifo_i__DOT__pointer_out 
                    = ((0xfU == (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out))));
            }
            if ((((IData)(vlSelf->__PVT__fifo_rx_ready) 
                  & (IData)(vlSelf->__PVT__fifo_rx_valid)) 
                 & ((~ (IData)(vlSelf->__PVT__rx_valid)) 
                    | (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__full)))) {
                __Vdly__uart_rx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements) 
                                - (IData)(1U)));
            } else if (((((~ (IData)(vlSelf->__PVT__fifo_rx_valid)) 
                          | (~ (IData)(vlSelf->__PVT__fifo_rx_ready))) 
                         & (IData)(vlSelf->__PVT__rx_valid)) 
                        & (~ (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__full)))) {
                __Vdly__uart_rx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)));
            }
        }
        if (vlSelf->__PVT__tx_fifo_clr_q) {
            __Vdly__uart_tx_fifo_i__DOT__pointer_in = 0U;
            __Vdly__uart_tx_fifo_i__DOT__pointer_out = 0U;
            __Vdly__uart_tx_fifo_i__DOT__elements = 0U;
        } else {
            if (((IData)(vlSelf->__PVT__fifo_tx_valid) 
                 & (0x10U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))) {
                __Vdly__uart_tx_fifo_i__DOT__pointer_in 
                    = ((0xfU == (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in))));
            }
            if (((IData)(vlSelf->__PVT__tx_ready) & 
                 (0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))) {
                __Vdly__uart_tx_fifo_i__DOT__pointer_out 
                    = ((0xfU == (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out))));
            }
            if ((((IData)(vlSelf->__PVT__tx_ready) 
                  & (IData)(vlSelf->__PVT__tx_valid)) 
                 & ((~ (IData)(vlSelf->__PVT__fifo_tx_valid)) 
                    | (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__full)))) {
                __Vdly__uart_tx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements) 
                                - (IData)(1U)));
            } else if (((((~ (IData)(vlSelf->__PVT__tx_valid)) 
                          | (~ (IData)(vlSelf->__PVT__tx_ready))) 
                         & (IData)(vlSelf->__PVT__fifo_tx_valid)) 
                        & (~ (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__full)))) {
                __Vdly__uart_tx_fifo_i__DOT__elements 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)));
            }
        }
        vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync 
            = ((6U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                      << 1U)) | (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_gpioA__DOT__r_gpio_sync1 
                                       >> 0x12U)));
        if (((IData)(vlSelf->__PVT__rx_valid) & (0x10U 
                                                 != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)))) {
            __VdlyVal__uart_rx_fifo_i__DOT__buffer__v0 
                = (((IData)(vlSelf->__PVT__parity_error) 
                    << 8U) | (IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data));
            __VdlyDim0__uart_rx_fifo_i__DOT__buffer__v0 
                = vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in;
            __VdlySet__uart_rx_fifo_i__DOT__buffer__v0 = 1U;
        }
        vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count 
            = vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count_next;
        vlSelf->__PVT__uart_interrupt_i__DOT__iir_q 
            = vlSelf->__PVT__uart_interrupt_i__DOT__iir_n;
        vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count 
            = vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count_next;
        vlSelf->__PVT__trigger_level_q = vlSelf->__PVT__trigger_level_n;
        if (vlSelf->__PVT__uart_tx_i__DOT__sampleData) {
            vlSelf->__PVT__uart_tx_i__DOT__reg_data 
                = vlSelf->__PVT__uart_tx_i__DOT__reg_data_next;
        }
        vlSelf->__PVT__uart_rx_i__DOT__CS = vlSelf->__PVT__uart_rx_i__DOT__NS;
        vlSelf->__PVT__uart_tx_i__DOT__CS = vlSelf->__PVT__uart_tx_i__DOT__NS;
        if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_rx_i__DOT__parity_bit 
                = vlSelf->__PVT__uart_rx_i__DOT__parity_bit_next;
        }
        if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_tx_i__DOT__parity_bit 
                = vlSelf->__PVT__uart_tx_i__DOT__parity_bit_next;
        }
        if (vlSelf->__PVT__uart_rx_i__DOT__set_error) {
            vlSelf->__PVT__parity_error = 1U;
        }
        if (vlSelf->__PVT__uart_rx_i__DOT__sampleData) {
            vlSelf->__PVT__uart_rx_i__DOT__reg_data 
                = vlSelf->__PVT__uart_rx_i__DOT__reg_data_next;
        }
        if (vlSelf->__PVT__uart_rx_i__DOT__baudgen_en) {
            if (((~ (IData)(vlSelf->__PVT__uart_rx_i__DOT__start_bit)) 
                 & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__baud_cnt) 
                    == (0xffffU & vlSelf->__PVT__regs_q[2U])))) {
                __Vdly__uart_rx_i__DOT__baud_cnt = 0U;
                vlSelf->__PVT__uart_rx_i__DOT__bit_done = 1U;
            } else if (((IData)(vlSelf->__PVT__uart_rx_i__DOT__start_bit) 
                        & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__baud_cnt) 
                           == (0x7fffU & (vlSelf->__PVT__regs_q[2U] 
                                          >> 1U))))) {
                __Vdly__uart_rx_i__DOT__baud_cnt = 0U;
                vlSelf->__PVT__uart_rx_i__DOT__bit_done = 1U;
            } else {
                __Vdly__uart_rx_i__DOT__baud_cnt = 
                    (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart_rx_i__DOT__baud_cnt)));
                vlSelf->__PVT__uart_rx_i__DOT__bit_done = 0U;
            }
        } else {
            __Vdly__uart_rx_i__DOT__baud_cnt = 0U;
            vlSelf->__PVT__uart_rx_i__DOT__bit_done = 0U;
        }
        if (vlSelf->__PVT__uart_tx_i__DOT__baudgen_en) {
            if (((IData)(vlSelf->__PVT__uart_tx_i__DOT__baud_cnt) 
                 == (0xffffU & vlSelf->__PVT__regs_q[2U]))) {
                __Vdly__uart_tx_i__DOT__baud_cnt = 0U;
                vlSelf->__PVT__uart_tx_i__DOT__bit_done = 1U;
            } else {
                __Vdly__uart_tx_i__DOT__baud_cnt = 
                    (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__uart_tx_i__DOT__baud_cnt)));
                vlSelf->__PVT__uart_tx_i__DOT__bit_done = 0U;
            }
        } else {
            __Vdly__uart_tx_i__DOT__baud_cnt = 0U;
            vlSelf->__PVT__uart_tx_i__DOT__bit_done = 0U;
        }
        vlSelf->__PVT__regs_q[0U] = vlSelf->__PVT__regs_n[0U];
        vlSelf->__PVT__regs_q[1U] = vlSelf->__PVT__regs_n[1U];
        vlSelf->__PVT__regs_q[2U] = vlSelf->__PVT__regs_n[2U];
    } else {
        __VdlySet__uart_tx_fifo_i__DOT__buffer__v1 = 1U;
        __Vdly__uart_rx_fifo_i__DOT__pointer_in = 0U;
        __Vdly__uart_tx_fifo_i__DOT__pointer_in = 0U;
        __Vdly__uart_tx_fifo_i__DOT__pointer_out = 0U;
        __Vdly__uart_rx_fifo_i__DOT__pointer_out = 0U;
        __Vdly__uart_rx_fifo_i__DOT__elements = 0U;
        __Vdly__uart_tx_fifo_i__DOT__elements = 0U;
        vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync = 7U;
        __VdlySet__uart_rx_fifo_i__DOT__buffer__v1 = 1U;
        vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count = 0U;
        vlSelf->__PVT__uart_interrupt_i__DOT__iir_q = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count = 0U;
        vlSelf->__PVT__trigger_level_q = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__reg_data = 0xffU;
        vlSelf->__PVT__uart_rx_i__DOT__CS = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__CS = 0U;
        vlSelf->__PVT__uart_rx_i__DOT__parity_bit = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__parity_bit = 0U;
        vlSelf->__PVT__parity_error = 0U;
        vlSelf->__PVT__uart_rx_i__DOT__reg_data = 0xffU;
        __Vdly__uart_rx_i__DOT__baud_cnt = 0U;
        vlSelf->__PVT__uart_rx_i__DOT__bit_done = 0U;
        __Vdly__uart_tx_i__DOT__baud_cnt = 0U;
        vlSelf->__PVT__uart_tx_i__DOT__bit_done = 0U;
        vlSelf->__PVT__regs_q[0U] = (0x10000U | (0xffU 
                                                 & vlSelf->__PVT__regs_q[0U]));
        vlSelf->__PVT__regs_q[1U] = 0x6000U;
        vlSelf->__PVT__regs_q[2U] = 0U;
    }
    if (__VdlySet__uart_tx_fifo_i__DOT__buffer__v0) {
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[__VdlyDim0__uart_tx_fifo_i__DOT__buffer__v0] 
            = __VdlyVal__uart_tx_fifo_i__DOT__buffer__v0;
    }
    if (__VdlySet__uart_tx_fifo_i__DOT__buffer__v1) {
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[1U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[2U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[3U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[4U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[5U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[6U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[7U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[8U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[9U] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xaU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xbU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xcU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xdU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xeU] = 0U;
        vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer[0xfU] = 0U;
    }
    vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_in 
        = __Vdly__uart_tx_fifo_i__DOT__pointer_in;
    vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out 
        = __Vdly__uart_tx_fifo_i__DOT__pointer_out;
    vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out 
        = __Vdly__uart_rx_fifo_i__DOT__pointer_out;
    vlSelf->__PVT__uart_tx_fifo_i__DOT__elements = __Vdly__uart_tx_fifo_i__DOT__elements;
    vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_in 
        = __Vdly__uart_rx_fifo_i__DOT__pointer_in;
    if (__VdlySet__uart_rx_fifo_i__DOT__buffer__v0) {
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[__VdlyDim0__uart_rx_fifo_i__DOT__buffer__v0] 
            = __VdlyVal__uart_rx_fifo_i__DOT__buffer__v0;
    }
    if (__VdlySet__uart_rx_fifo_i__DOT__buffer__v1) {
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[1U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[2U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[3U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[4U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[5U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[6U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[7U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[8U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[9U] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xaU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xbU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xcU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xdU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xeU] = 0U;
        vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer[0xfU] = 0U;
    }
    vlSelf->__PVT__uart_rx_fifo_i__DOT__elements = __Vdly__uart_rx_fifo_i__DOT__elements;
    vlSelf->__PVT__rx_fifo_clr_q = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) 
                                    && (IData)(vlSelf->__PVT__rx_fifo_clr_n));
    vlSelf->__PVT__tx_valid = (0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements));
    vlSelf->__PVT__uart_tx_fifo_i__DOT__full = (0x10U 
                                                == (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements));
    vlSelf->__PVT__tx_fifo_clr_q = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) 
                                    && (IData)(vlSelf->__PVT__tx_fifo_clr_n));
    vlSelf->__PVT__uart_rx_i__DOT__s_rx_fall = (IData)(
                                                       (4U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync))));
    vlSelf->__PVT__fifo_rx_data = vlSelf->__PVT__uart_rx_fifo_i__DOT__buffer
        [vlSelf->__PVT__uart_rx_fifo_i__DOT__pointer_out];
    vlSelf->__PVT__fifo_rx_valid = (0U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements));
    vlSelf->__PVT__uart_rx_fifo_i__DOT__full = (0x10U 
                                                == (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements));
    __Vtableidx9 = (((IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements) 
                     << 2U) | (IData)(vlSelf->__PVT__trigger_level_q));
    vlSelf->__PVT__uart_interrupt_i__DOT__trigger_level_reached 
        = Vtb_verilator__ConstPool__TABLE_h8321f0c7_0
        [__Vtableidx9];
    vlSelf->__PVT__rx_valid = 0U;
    vlSelf->__PVT__uart_tx_i__DOT__reg_data_next = 
        (0x80U | (0x7fU & ((IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_data) 
                           >> 1U)));
    vlSelf->__PVT__tx_ready = 0U;
    vlSelf->__PVT__uart_rx_i__DOT__parity_bit_next 
        = vlSelf->__PVT__uart_rx_i__DOT__parity_bit;
    vlSelf->__PVT__uart_tx_i__DOT__parity_bit_next 
        = vlSelf->__PVT__uart_tx_i__DOT__parity_bit;
    vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 0U;
    vlSelf->__PVT__uart_rx_i__DOT__start_bit = 0U;
    vlSelf->__PVT__uart_rx_i__DOT__baud_cnt = __Vdly__uart_rx_i__DOT__baud_cnt;
    vlSelf->__PVT__uart_tx_i__DOT__baudgen_en = 0U;
    vlSelf->__PVT__uart_tx_i__DOT__baud_cnt = __Vdly__uart_tx_i__DOT__baud_cnt;
    vlSelf->__PVT__uart_rx_i__DOT__sampleData = 0U;
    vlSelf->__PVT__uart_rx_i__DOT__reg_data_next = vlSelf->__PVT__uart_rx_i__DOT__reg_data;
    vlSelf->__PVT__uart_rx_i__DOT__set_error = 0U;
    vlSelf->tx_o = 1U;
    __Vtableidx7 = (3U & (vlSelf->__PVT__regs_q[0U] 
                          >> 0x18U));
    vlSelf->__PVT__uart_rx_i__DOT__s_target_bits = 
        Vtb_verilator__ConstPool__TABLE_hebc1be81_0
        [__Vtableidx7];
    __Vtableidx8 = (3U & (vlSelf->__PVT__regs_q[0U] 
                          >> 0x18U));
    vlSelf->__PVT__uart_tx_i__DOT__s_target_bits = 
        Vtb_verilator__ConstPool__TABLE_hebc1be81_0
        [__Vtableidx8];
    vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count_next 
        = vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count;
    if ((1U & (~ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
                vlSelf->__PVT__rx_valid = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS)))) {
                vlSelf->__PVT__uart_rx_i__DOT__parity_bit_next 
                    = ((IData)(vlSelf->__PVT__uart_rx_i__DOT__parity_bit) 
                       ^ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                          >> 2U));
                if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
                    vlSelf->__PVT__uart_rx_i__DOT__sampleData = 1U;
                    vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count_next 
                        = (((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count) 
                            == (IData)(vlSelf->__PVT__uart_rx_i__DOT__s_target_bits))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count))));
                }
                vlSelf->__PVT__uart_rx_i__DOT__reg_data_next 
                    = ((0x2000000U & vlSelf->__PVT__regs_q[0U])
                        ? ((0x1000000U & vlSelf->__PVT__regs_q[0U])
                            ? ((0x80U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                         << 5U)) | 
                               (0x7fU & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data) 
                                         >> 1U))) : 
                           ((0x40U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                      << 4U)) | (0x3fU 
                                                 & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data) 
                                                    >> 1U))))
                        : ((0x1000000U & vlSelf->__PVT__regs_q[0U])
                            ? ((0x20U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                         << 3U)) | 
                               (0x1fU & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data) 
                                         >> 1U))) : 
                           ((0x10U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                      << 2U)) | (0xfU 
                                                 & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_data) 
                                                    >> 1U)))));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            vlSelf->__PVT__uart_rx_i__DOT__parity_bit_next = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
                vlSelf->__PVT__uart_rx_i__DOT__start_bit = 1U;
            } else if (vlSelf->__PVT__uart_rx_i__DOT__s_rx_fall) {
                vlSelf->__PVT__uart_rx_i__DOT__start_bit = 1U;
            }
        }
    }
    vlSelf->__PVT__uart_rx_i__DOT__NS = vlSelf->__PVT__uart_rx_i__DOT__CS;
    if ((4U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__CS) 
                      >> 1U)))) {
            vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 1U;
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS)))) {
                if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
                    if ((0x20000000U & vlSelf->__PVT__regs_q[0U])) {
                        if ((0x10000000U & vlSelf->__PVT__regs_q[0U])) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                          >> 2U)))) {
                                vlSelf->__PVT__uart_rx_i__DOT__set_error = 1U;
                            }
                        } else if ((4U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync))) {
                            vlSelf->__PVT__uart_rx_i__DOT__set_error = 1U;
                        }
                    } else if ((0x10000000U & vlSelf->__PVT__regs_q[0U])) {
                        if (((1U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                    >> 2U)) != (IData)(vlSelf->__PVT__uart_rx_i__DOT__parity_bit))) {
                            vlSelf->__PVT__uart_rx_i__DOT__set_error = 1U;
                        }
                    } else if (((1U & ((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_rx_sync) 
                                       >> 2U)) != (1U 
                                                   & (~ (IData)(vlSelf->__PVT__uart_rx_i__DOT__parity_bit))))) {
                        vlSelf->__PVT__uart_rx_i__DOT__set_error = 1U;
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            vlSelf->__PVT__uart_rx_i__DOT__NS = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
                vlSelf->__PVT__uart_rx_i__DOT__NS = 0U;
            }
        } else if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_rx_i__DOT__NS = 5U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
        vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 1U;
        if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
            if ((0x10U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements))) {
                vlSelf->__PVT__uart_rx_i__DOT__NS = 
                    ((0x8000000U & vlSelf->__PVT__regs_q[0U])
                      ? 4U : 5U);
            }
        } else if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
            if (((IData)(vlSelf->__PVT__uart_rx_i__DOT__reg_bit_count) 
                 == (IData)(vlSelf->__PVT__uart_rx_i__DOT__s_target_bits))) {
                vlSelf->__PVT__uart_rx_i__DOT__NS = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__uart_rx_i__DOT__CS))) {
        vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 1U;
        if (vlSelf->__PVT__uart_rx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_rx_i__DOT__NS = 2U;
        }
    } else if (vlSelf->__PVT__uart_rx_i__DOT__s_rx_fall) {
        vlSelf->__PVT__uart_rx_i__DOT__baudgen_en = 1U;
        vlSelf->__PVT__uart_rx_i__DOT__NS = 1U;
    }
    vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count_next 
        = vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count;
    vlSelf->__PVT__uart_tx_i__DOT__sampleData = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__uart_tx_i__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__uart_tx_i__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS)))) {
                if ((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements))) {
                    vlSelf->__PVT__uart_tx_i__DOT__reg_data_next 
                        = vlSelf->__PVT__uart_tx_fifo_i__DOT__buffer
                        [vlSelf->__PVT__uart_tx_fifo_i__DOT__pointer_out];
                }
                vlSelf->__PVT__tx_ready = 1U;
            }
        }
        if ((2U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS)))) {
                vlSelf->__PVT__uart_tx_i__DOT__parity_bit_next 
                    = (1U & ((IData)(vlSelf->__PVT__uart_tx_i__DOT__parity_bit) 
                             ^ (IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_data)));
                if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
                    vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count_next 
                        = (((IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count) 
                            == (IData)(vlSelf->__PVT__uart_tx_i__DOT__s_target_bits))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count))));
                    if (((IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count) 
                         != (IData)(vlSelf->__PVT__uart_tx_i__DOT__s_target_bits))) {
                        vlSelf->__PVT__uart_tx_i__DOT__sampleData = 1U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
                vlSelf->__PVT__uart_tx_i__DOT__parity_bit_next = 0U;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS)))) {
                if ((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements))) {
                    vlSelf->__PVT__uart_tx_i__DOT__sampleData = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__uart_tx_i__DOT__NS = vlSelf->__PVT__uart_tx_i__DOT__CS;
    if ((4U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__uart_tx_i__DOT__CS) 
                      >> 1U)))) {
            vlSelf->__PVT__uart_tx_i__DOT__baudgen_en = 1U;
            vlSelf->tx_o = 1U;
        }
        if ((2U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
            vlSelf->__PVT__uart_tx_i__DOT__NS = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
            if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
                vlSelf->__PVT__uart_tx_i__DOT__NS = 0U;
            }
        } else if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_tx_i__DOT__NS = ((0x4000000U 
                                                  & vlSelf->__PVT__regs_q[0U])
                                                  ? 5U
                                                  : 0U);
        }
    } else if ((2U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
        vlSelf->__PVT__uart_tx_i__DOT__baudgen_en = 1U;
        if ((1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
            vlSelf->tx_o = (1U & ((0x20000000U & vlSelf->__PVT__regs_q[0U])
                                   ? (vlSelf->__PVT__regs_q[0U] 
                                      >> 0x1cU) : (
                                                   (0x10000000U 
                                                    & vlSelf->__PVT__regs_q[0U])
                                                    ? (IData)(vlSelf->__PVT__uart_tx_i__DOT__parity_bit)
                                                    : 
                                                   (~ (IData)(vlSelf->__PVT__uart_tx_i__DOT__parity_bit)))));
            if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
                vlSelf->__PVT__uart_tx_i__DOT__NS = 4U;
            }
        } else {
            vlSelf->tx_o = (1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_data));
            if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
                if (((IData)(vlSelf->__PVT__uart_tx_i__DOT__reg_bit_count) 
                     == (IData)(vlSelf->__PVT__uart_tx_i__DOT__s_target_bits))) {
                    vlSelf->__PVT__uart_tx_i__DOT__NS 
                        = ((0x8000000U & vlSelf->__PVT__regs_q[0U])
                            ? 3U : 4U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__uart_tx_i__DOT__CS))) {
        vlSelf->__PVT__uart_tx_i__DOT__baudgen_en = 1U;
        vlSelf->tx_o = 0U;
        if (vlSelf->__PVT__uart_tx_i__DOT__bit_done) {
            vlSelf->__PVT__uart_tx_i__DOT__NS = 2U;
        }
    } else if ((0U != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements))) {
        vlSelf->__PVT__uart_tx_i__DOT__NS = 1U;
    }
}

VL_INLINE_OPT void Vtb_verilator_apb_uart_sv__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart2__0(Vtb_verilator_apb_uart_sv__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_uart_sv__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart2__0\n"); );
    // Body
    vlSelf->__PVT__tx_fifo_clr_n = 0U;
    vlSelf->__PVT__rx_fifo_clr_n = 0U;
    if ((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_valid) 
          & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r)) 
         & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_read)))) {
        if ((0U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                          >> 2U)))) {
            if ((1U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                              >> 2U)))) {
                if ((3U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                                  >> 2U)))) {
                    if ((2U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                                      >> 2U)))) {
                        vlSelf->__PVT__tx_fifo_clr_n 
                            = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_wdata 
                                     >> 2U));
                        vlSelf->__PVT__rx_fifo_clr_n 
                            = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_wdata 
                                     >> 1U));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtb_verilator_apb_uart_sv__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart2__1(Vtb_verilator_apb_uart_sv__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_uart_sv__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_uart2__1\n"); );
    // Body
    vlSelf->__PVT__fifo_tx_valid = 0U;
    vlSelf->__PVT__fifo_rx_ready = 0U;
    vlSelf->__PVT__trigger_level_n = vlSelf->__PVT__trigger_level_q;
    vlSelf->PRDATA = 0U;
    vlSelf->__PVT__clr_int = 0U;
    if ((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_valid) 
          & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r)) 
         & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_read))) {
        if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                      >> 4U)))) {
            if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                          >> 3U)))) {
                if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelf->__PVT__regs_q[0U] 
                                  >> 0x1fU)))) {
                        vlSelf->__PVT__fifo_rx_ready = 1U;
                    }
                }
            }
        }
        if ((0x10U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr)) {
            vlSelf->PRDATA = ((8U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr)
                               ? 0U : ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr)
                                        ? (0xffU & 
                                           (vlSelf->__PVT__regs_q[1U] 
                                            >> 8U))
                                        : 0U));
            if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                          >> 3U)))) {
                if ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr)) {
                    vlSelf->__PVT__clr_int = 0xcU;
                }
            }
        } else if ((8U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr)) {
            vlSelf->PRDATA = ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr)
                               ? (vlSelf->__PVT__regs_q[0U] 
                                  >> 0x18U) : (0xc0U 
                                               | (IData)(vlSelf->__PVT__uart_interrupt_i__DOT__iir_q)));
            if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                          >> 2U)))) {
                vlSelf->__PVT__clr_int = 4U;
            }
        } else {
            vlSelf->PRDATA = ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr)
                               ? ((vlSelf->__PVT__regs_q[0U] 
                                   >> 0x1fU) ? (0xffU 
                                                & (vlSelf->__PVT__regs_q[2U] 
                                                   >> 8U))
                                   : (0xffU & (vlSelf->__PVT__regs_q[0U] 
                                               >> 8U)))
                               : ((vlSelf->__PVT__regs_q[0U] 
                                   >> 0x1fU) ? (0xffU 
                                                & vlSelf->__PVT__regs_q[2U])
                                   : (0xffU & (IData)(vlSelf->__PVT__fifo_rx_data))));
            if ((1U & (~ (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                          >> 2U)))) {
                if ((1U & (~ (vlSelf->__PVT__regs_q[0U] 
                              >> 0x1fU)))) {
                    vlSelf->__PVT__clr_int = 8U;
                }
            }
        }
    }
    vlSelf->__PVT__regs_n[0U] = vlSelf->__PVT__regs_q[0U];
    vlSelf->__PVT__regs_n[1U] = vlSelf->__PVT__regs_q[1U];
    vlSelf->__PVT__regs_n[2U] = vlSelf->__PVT__regs_q[2U];
    vlSelf->__PVT__regs_n[1U] = ((0xfffffeffU & vlSelf->__PVT__regs_n[1U]) 
                                 | ((0U != (IData)(vlSelf->__PVT__uart_rx_fifo_i__DOT__elements)) 
                                    << 8U));
    vlSelf->__PVT__regs_n[1U] = ((0xfffffbffU & vlSelf->__PVT__regs_n[1U]) 
                                 | (0x400U & ((IData)(vlSelf->__PVT__fifo_rx_data) 
                                              << 2U)));
    vlSelf->__PVT__regs_n[1U] = ((0xffffdfffU & vlSelf->__PVT__regs_n[1U]) 
                                 | (0x2000U & ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))) 
                                               << 0xdU)));
    vlSelf->__PVT__regs_n[1U] = ((0xffffbfffU & vlSelf->__PVT__regs_n[1U]) 
                                 | (((IData)(vlSelf->__PVT__tx_ready) 
                                     & (~ (IData)((0U 
                                                   != (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements))))) 
                                    << 0xeU));
    if ((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_valid) 
          & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_uart2_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r)) 
         & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_read)))) {
        if ((0U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                          >> 2U)))) {
            if ((1U & (~ (vlSelf->__PVT__regs_q[0U] 
                          >> 0x1fU)))) {
                vlSelf->__PVT__fifo_tx_valid = 1U;
                vlSelf->__PVT__fifo_tx_data = (0xffU 
                                               & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_wdata);
            }
            if ((vlSelf->__PVT__regs_q[0U] >> 0x1fU)) {
                vlSelf->__PVT__regs_n[2U] = ((0xff00U 
                                              & vlSelf->__PVT__regs_n[2U]) 
                                             | (0xffU 
                                                & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_wdata));
            }
        } else if ((1U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                                 >> 2U)))) {
            if ((vlSelf->__PVT__regs_q[0U] >> 0x1fU)) {
                vlSelf->__PVT__regs_n[2U] = ((0xffU 
                                              & vlSelf->__PVT__regs_n[2U]) 
                                             | (0xff00U 
                                                & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_wdata 
                                                   << 8U)));
            } else {
                vlSelf->__PVT__regs_n[0U] = ((0xffff00ffU 
                                              & vlSelf->__PVT__regs_n[0U]) 
                                             | (0xff00U 
                                                & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_wdata 
                                                   << 8U)));
            }
        } else if ((3U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                                 >> 2U)))) {
            vlSelf->__PVT__regs_n[0U] = ((0xffffffU 
                                          & vlSelf->__PVT__regs_n[0U]) 
                                         | (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_wdata 
                                            << 0x18U));
        }
        if ((0U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                          >> 2U)))) {
            if ((1U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                              >> 2U)))) {
                if ((3U != (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                                  >> 2U)))) {
                    if ((2U == (7U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_addr 
                                      >> 2U)))) {
                        vlSelf->__PVT__trigger_level_n 
                            = (3U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__uart2_apb_icb_cmd_wdata 
                                     >> 6U));
                    }
                }
            }
        }
    }
    vlSelf->__PVT__uart_interrupt_i__DOT__iir_n = (
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__clr_int))
                                                    ? 
                                                   ((0x400U 
                                                     & (vlSelf->__PVT__regs_q[0U] 
                                                        & vlSelf->__PVT__regs_n[1U]))
                                                     ? 0xcU
                                                     : 
                                                    (((vlSelf->__PVT__regs_q[0U] 
                                                       >> 8U) 
                                                      & (IData)(vlSelf->__PVT__uart_interrupt_i__DOT__trigger_level_reached))
                                                      ? 8U
                                                      : 
                                                     (((vlSelf->__PVT__regs_q[0U] 
                                                        >> 9U) 
                                                       & (0U 
                                                          == (IData)(vlSelf->__PVT__uart_tx_fifo_i__DOT__elements)))
                                                       ? 4U
                                                       : (IData)(vlSelf->__PVT__uart_interrupt_i__DOT__iir_q))))
                                                    : 
                                                   ((~ (IData)(vlSelf->__PVT__clr_int)) 
                                                    & (IData)(vlSelf->__PVT__uart_interrupt_i__DOT__iir_q)));
}
