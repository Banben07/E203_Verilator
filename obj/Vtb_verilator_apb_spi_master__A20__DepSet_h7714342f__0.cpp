// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator__Syms.h"
#include "Vtb_verilator_apb_spi_master__A20.h"

extern const VlUnpacked<CData/*0:0*/, 4> Vtb_verilator__ConstPool__TABLE_h3bccb52a_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtb_verilator__ConstPool__TABLE_h6e51dc8e_0;

VL_INLINE_OPT void Vtb_verilator_apb_spi_master__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi1__0(Vtb_verilator_apb_spi_master__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_spi_master__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi1__0\n"); );
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vdly__u_txfifo__DOT__elements;
    __Vdly__u_txfifo__DOT__elements = 0;
    IData/*31:0*/ __VdlyVal__u_txfifo__DOT__buffer__v0;
    __VdlyVal__u_txfifo__DOT__buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim0__u_txfifo__DOT__buffer__v0;
    __VdlyDim0__u_txfifo__DOT__buffer__v0 = 0;
    CData/*3:0*/ __Vdly__u_txfifo__DOT__pointer_out;
    __Vdly__u_txfifo__DOT__pointer_out = 0;
    CData/*3:0*/ __Vdly__u_txfifo__DOT__pointer_in;
    __Vdly__u_txfifo__DOT__pointer_in = 0;
    CData/*4:0*/ __Vdly__u_rxfifo__DOT__elements;
    __Vdly__u_rxfifo__DOT__elements = 0;
    IData/*31:0*/ __VdlyVal__u_rxfifo__DOT__buffer__v0;
    __VdlyVal__u_rxfifo__DOT__buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim0__u_rxfifo__DOT__buffer__v0;
    __VdlyDim0__u_rxfifo__DOT__buffer__v0 = 0;
    CData/*3:0*/ __Vdly__u_rxfifo__DOT__pointer_out;
    __Vdly__u_rxfifo__DOT__pointer_out = 0;
    CData/*3:0*/ __Vdly__u_rxfifo__DOT__pointer_in;
    __Vdly__u_rxfifo__DOT__pointer_in = 0;
    CData/*0:0*/ __VdlySet__u_txfifo__DOT__buffer__v0;
    __VdlySet__u_txfifo__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__u_txfifo__DOT__buffer__v1;
    __VdlySet__u_txfifo__DOT__buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__u_rxfifo__DOT__buffer__v0;
    __VdlySet__u_rxfifo__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__u_rxfifo__DOT__buffer__v1;
    __VdlySet__u_rxfifo__DOT__buffer__v1 = 0;
    // Body
    __VdlySet__u_rxfifo__DOT__buffer__v0 = 0U;
    __VdlySet__u_rxfifo__DOT__buffer__v1 = 0U;
    __VdlySet__u_txfifo__DOT__buffer__v0 = 0U;
    __VdlySet__u_txfifo__DOT__buffer__v1 = 0U;
    __Vdly__u_rxfifo__DOT__pointer_in = vlSelf->__PVT__u_rxfifo__DOT__pointer_in;
    __Vdly__u_txfifo__DOT__pointer_in = vlSelf->__PVT__u_txfifo__DOT__pointer_in;
    __Vdly__u_rxfifo__DOT__pointer_out = vlSelf->__PVT__u_rxfifo__DOT__pointer_out;
    __Vdly__u_txfifo__DOT__pointer_out = vlSelf->__PVT__u_txfifo__DOT__pointer_out;
    __Vdly__u_rxfifo__DOT__elements = vlSelf->__PVT__u_rxfifo__DOT__elements;
    __Vdly__u_txfifo__DOT__elements = vlSelf->__PVT__u_txfifo__DOT__elements;
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q)))) {
        vlSelf->__PVT__u_txfifo__DOT__loop1 = 0xaU;
        vlSelf->__PVT__u_rxfifo__DOT__loop1 = 0xaU;
    }
    if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
        if (((IData)(vlSelf->__PVT__spi_ctrl_data_rx_valid) 
             & (0xaU != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements)))) {
            vlSelf->u_rxfifo__DOT____Vlvbound_h4efa324b__0 
                = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int_next;
            if ((9U >= (IData)(vlSelf->__PVT__u_rxfifo__DOT__pointer_in))) {
                __VdlyVal__u_rxfifo__DOT__buffer__v0 
                    = vlSelf->u_rxfifo__DOT____Vlvbound_h4efa324b__0;
                __VdlyDim0__u_rxfifo__DOT__buffer__v0 
                    = vlSelf->__PVT__u_rxfifo__DOT__pointer_in;
                __VdlySet__u_rxfifo__DOT__buffer__v0 = 1U;
            }
        }
        if (((IData)(vlSelf->__PVT__spi_data_tx_valid) 
             & (0xaU != (IData)(vlSelf->__PVT__u_txfifo__DOT__elements)))) {
            vlSelf->u_txfifo__DOT____Vlvbound_h4efa324b__0 
                = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata;
            if ((9U >= (IData)(vlSelf->__PVT__u_txfifo__DOT__pointer_in))) {
                __VdlyVal__u_txfifo__DOT__buffer__v0 
                    = vlSelf->u_txfifo__DOT____Vlvbound_h4efa324b__0;
                __VdlyDim0__u_txfifo__DOT__buffer__v0 
                    = vlSelf->__PVT__u_txfifo__DOT__pointer_in;
                __VdlySet__u_txfifo__DOT__buffer__v0 = 1U;
            }
        }
        if (vlSelf->__PVT__spi_swrst) {
            __Vdly__u_rxfifo__DOT__pointer_in = 0U;
            __Vdly__u_txfifo__DOT__pointer_in = 0U;
            __Vdly__u_rxfifo__DOT__pointer_out = 0U;
            __Vdly__u_txfifo__DOT__pointer_out = 0U;
            __Vdly__u_rxfifo__DOT__elements = 0U;
            __Vdly__u_txfifo__DOT__elements = 0U;
        } else {
            if (((IData)(vlSelf->__PVT__spi_ctrl_data_rx_valid) 
                 & (0xaU != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements)))) {
                __Vdly__u_rxfifo__DOT__pointer_in = 
                    ((9U == (IData)(vlSelf->__PVT__u_rxfifo__DOT__pointer_in))
                      ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_rxfifo__DOT__pointer_in))));
            }
            if (((IData)(vlSelf->__PVT__spi_data_tx_valid) 
                 & (0xaU != (IData)(vlSelf->__PVT__u_txfifo__DOT__elements)))) {
                __Vdly__u_txfifo__DOT__pointer_in = 
                    ((9U == (IData)(vlSelf->__PVT__u_txfifo__DOT__pointer_in))
                      ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_txfifo__DOT__pointer_in))));
            }
            if (((IData)(vlSelf->__PVT__spi_data_rx_ready) 
                 & (0U != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements)))) {
                __Vdly__u_rxfifo__DOT__pointer_out 
                    = ((9U == (IData)(vlSelf->__PVT__u_rxfifo__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__u_rxfifo__DOT__pointer_out))));
            }
            if (((IData)(vlSelf->__PVT__spi_ctrl_data_tx_ready) 
                 & (0U != (IData)(vlSelf->__PVT__u_txfifo__DOT__elements)))) {
                __Vdly__u_txfifo__DOT__pointer_out 
                    = ((9U == (IData)(vlSelf->__PVT__u_txfifo__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__u_txfifo__DOT__pointer_out))));
            }
            if ((((IData)(vlSelf->__PVT__spi_data_rx_ready) 
                  & (IData)(vlSelf->__PVT__spi_data_rx_valid)) 
                 & ((~ (IData)(vlSelf->__PVT__spi_ctrl_data_rx_valid)) 
                    | (IData)(vlSelf->__PVT__u_rxfifo__DOT__full)))) {
                __Vdly__u_rxfifo__DOT__elements = (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__u_rxfifo__DOT__elements) 
                                                      - (IData)(1U)));
            } else if (((((~ (IData)(vlSelf->__PVT__spi_data_rx_valid)) 
                          | (~ (IData)(vlSelf->__PVT__spi_data_rx_ready))) 
                         & (IData)(vlSelf->__PVT__spi_ctrl_data_rx_valid)) 
                        & (~ (IData)(vlSelf->__PVT__u_rxfifo__DOT__full)))) {
                __Vdly__u_rxfifo__DOT__elements = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements)));
            }
            if ((((IData)(vlSelf->__PVT__spi_ctrl_data_tx_ready) 
                  & (IData)(vlSelf->__PVT__spi_ctrl_data_tx_valid)) 
                 & ((~ (IData)(vlSelf->__PVT__spi_data_tx_valid)) 
                    | (IData)(vlSelf->__PVT__u_txfifo__DOT__full)))) {
                __Vdly__u_txfifo__DOT__elements = (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__u_txfifo__DOT__elements) 
                                                      - (IData)(1U)));
            } else if (((((~ (IData)(vlSelf->__PVT__spi_ctrl_data_tx_valid)) 
                          | (~ (IData)(vlSelf->__PVT__spi_ctrl_data_tx_ready))) 
                         & (IData)(vlSelf->__PVT__spi_data_tx_valid)) 
                        & (~ (IData)(vlSelf->__PVT__u_txfifo__DOT__full)))) {
                __Vdly__u_txfifo__DOT__elements = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__u_txfifo__DOT__elements)));
            }
        }
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int 
            = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int_next;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int 
            = vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS 
            = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS;
        vlSelf->__PVT__spi_mode = vlSelf->__PVT__u_spictrl__DOT__s_spi_mode;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt 
            = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt_next;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter 
            = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_next;
        vlSelf->__PVT__u_spictrl__DOT__state = vlSelf->__PVT__u_spictrl__DOT__state_next;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt 
            = vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt_next;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter 
            = vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_next;
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt 
            = vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt_next;
        if ((1U & ((~ (IData)(vlSelf->spi_clk)) & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__spi_clock_en))))) {
            vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__running = 0U;
        } else {
            vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__running = 1U;
            vlSelf->spi_clk = vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next;
            vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter 
                = vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_next;
        }
        if (((IData)(vlSelf->__PVT__spi_qrd) | (IData)(vlSelf->__PVT__spi_qwr))) {
            vlSelf->__PVT__u_spictrl__DOT__en_quad_int = 1U;
        } else if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state_next))) {
            vlSelf->__PVT__u_spictrl__DOT__en_quad_int = 0U;
        }
        if (((IData)(vlSelf->__PVT__spi_rd) | (IData)(vlSelf->__PVT__spi_qrd))) {
            vlSelf->__PVT__u_spictrl__DOT__do_tx = 0U;
            vlSelf->__PVT__u_spictrl__DOT__do_rx = 1U;
        } else if (((IData)(vlSelf->__PVT__spi_wr) 
                    | (IData)(vlSelf->__PVT__spi_qwr))) {
            vlSelf->__PVT__u_spictrl__DOT__do_tx = 1U;
            vlSelf->__PVT__u_spictrl__DOT__do_rx = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state_next))) {
            vlSelf->__PVT__u_spictrl__DOT__do_tx = 0U;
            vlSelf->__PVT__u_spictrl__DOT__do_rx = 0U;
        }
        if ((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_valid) 
              & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r)) 
             & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_read)))) {
            vlSelf->__PVT__spi_clk_div_valid = 0U;
            if ((0U != (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                >> 2U)))) {
                if ((1U == (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                    >> 2U)))) {
                    vlSelf->__PVT__spi_clk_div_valid = 1U;
                    vlSelf->__PVT__spi_clk_div = (0xffU 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata);
                }
                if ((1U != (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                    >> 2U)))) {
                    if ((2U != (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                        >> 2U)))) {
                        if ((3U == (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                            >> 2U)))) {
                            vlSelf->__PVT__spi_addr 
                                = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata;
                        }
                        if ((3U != (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                            >> 2U)))) {
                            if ((4U != (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                                >> 2U)))) {
                                if ((5U != (0xfU & 
                                            (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                             >> 2U)))) {
                                    if ((9U == (0xfU 
                                                & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                                   >> 2U)))) {
                                        vlSelf->__PVT__s_th_tx 
                                            = (0x1fU 
                                               & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata);
                                        vlSelf->__PVT__s_th_rx 
                                            = (0x1fU 
                                               & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata 
                                                  >> 8U));
                                        vlSelf->__PVT__s_int_en 
                                            = (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata 
                                               >> 0x1fU);
                                    }
                                }
                                if ((5U == (0xfU & 
                                            (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                             >> 2U)))) {
                                    vlSelf->__PVT__spi_dummy_wr 
                                        = (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata 
                                           >> 0x10U);
                                    vlSelf->__PVT__spi_dummy_rd 
                                        = (0xffffU 
                                           & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata);
                                }
                            }
                            if ((4U == (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                                >> 2U)))) {
                                vlSelf->__PVT__spi_addr_len 
                                    = (0x3fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata 
                                                >> 8U));
                                vlSelf->__PVT__spi_cmd_len 
                                    = (0x3fU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata);
                                vlSelf->__PVT__spi_data_len 
                                    = (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata 
                                       >> 0x10U);
                            }
                        }
                    }
                    if ((2U == (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                        >> 2U)))) {
                        vlSelf->__PVT__spi_cmd = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata;
                    }
                }
            }
            vlSelf->__PVT__spi_swrst = 0U;
            vlSelf->__PVT__spi_rd = 0U;
            vlSelf->__PVT__spi_wr = 0U;
            vlSelf->__PVT__spi_qrd = 0U;
            vlSelf->__PVT__spi_qwr = 0U;
            if ((0U == (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr 
                                >> 2U)))) {
                vlSelf->__PVT__spi_csreg = (0xfU & 
                                            (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata 
                                             >> 8U));
                vlSelf->__PVT__spi_swrst = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata 
                                                  >> 4U));
                vlSelf->__PVT__spi_rd = (1U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata);
                vlSelf->__PVT__spi_wr = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata 
                                               >> 1U));
                vlSelf->__PVT__spi_qrd = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata 
                                                >> 2U));
                vlSelf->__PVT__spi_qwr = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_wdata 
                                                >> 3U));
            }
        } else {
            vlSelf->__PVT__spi_clk_div_valid = 0U;
            vlSelf->__PVT__spi_swrst = 0U;
            vlSelf->__PVT__spi_rd = 0U;
            vlSelf->__PVT__spi_wr = 0U;
            vlSelf->__PVT__spi_qrd = 0U;
            vlSelf->__PVT__spi_qwr = 0U;
        }
    } else {
        __VdlySet__u_rxfifo__DOT__buffer__v1 = 1U;
        __VdlySet__u_txfifo__DOT__buffer__v1 = 1U;
        __Vdly__u_rxfifo__DOT__pointer_in = 0U;
        __Vdly__u_txfifo__DOT__pointer_in = 0U;
        __Vdly__u_rxfifo__DOT__pointer_out = 0U;
        __Vdly__u_txfifo__DOT__pointer_out = 0U;
        __Vdly__u_rxfifo__DOT__elements = 0U;
        __Vdly__u_txfifo__DOT__elements = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS = 0U;
        vlSelf->__PVT__spi_mode = 2U;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt = 8U;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter = 0U;
        vlSelf->__PVT__spi_clk_div_valid = 0U;
        vlSelf->__PVT__spi_csreg = 0U;
        vlSelf->__PVT__spi_clk_div = 0U;
        vlSelf->__PVT__spi_addr = 0U;
        vlSelf->__PVT__spi_cmd = 0U;
        vlSelf->__PVT__s_th_tx = 0U;
        vlSelf->__PVT__s_th_rx = 0U;
        vlSelf->__PVT__s_int_en = 0U;
        vlSelf->__PVT__u_spictrl__DOT__state = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt = 8U;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter = 0U;
        vlSelf->__PVT__spi_dummy_wr = 0U;
        vlSelf->__PVT__spi_dummy_rd = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt = 0U;
        vlSelf->__PVT__spi_addr_len = 0U;
        vlSelf->__PVT__spi_cmd_len = 0U;
        vlSelf->__PVT__spi_data_len = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter = 0U;
        vlSelf->spi_clk = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__running = 0U;
        vlSelf->__PVT__u_spictrl__DOT__en_quad_int = 0U;
        vlSelf->__PVT__u_spictrl__DOT__do_tx = 0U;
        vlSelf->__PVT__u_spictrl__DOT__do_rx = 0U;
        vlSelf->__PVT__spi_swrst = 0U;
        vlSelf->__PVT__spi_rd = 0U;
        vlSelf->__PVT__spi_wr = 0U;
        vlSelf->__PVT__spi_qrd = 0U;
        vlSelf->__PVT__spi_qwr = 0U;
    }
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_CS 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) 
           && (IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS));
    if (__VdlySet__u_rxfifo__DOT__buffer__v0) {
        vlSelf->__PVT__u_rxfifo__DOT__buffer[__VdlyDim0__u_rxfifo__DOT__buffer__v0] 
            = __VdlyVal__u_rxfifo__DOT__buffer__v0;
    }
    if (__VdlySet__u_rxfifo__DOT__buffer__v1) {
        vlSelf->__PVT__u_rxfifo__DOT__buffer[0U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[1U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[2U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[3U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[4U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[5U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[6U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[7U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[8U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[9U] = 0U;
    }
    if (__VdlySet__u_txfifo__DOT__buffer__v0) {
        vlSelf->__PVT__u_txfifo__DOT__buffer[__VdlyDim0__u_txfifo__DOT__buffer__v0] 
            = __VdlyVal__u_txfifo__DOT__buffer__v0;
    }
    if (__VdlySet__u_txfifo__DOT__buffer__v1) {
        vlSelf->__PVT__u_txfifo__DOT__buffer[0U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[1U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[2U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[3U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[4U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[5U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[6U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[7U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[8U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[9U] = 0U;
    }
    vlSelf->__PVT__u_rxfifo__DOT__pointer_in = __Vdly__u_rxfifo__DOT__pointer_in;
    vlSelf->__PVT__u_txfifo__DOT__pointer_in = __Vdly__u_txfifo__DOT__pointer_in;
    vlSelf->__PVT__u_rxfifo__DOT__pointer_out = __Vdly__u_rxfifo__DOT__pointer_out;
    vlSelf->__PVT__u_txfifo__DOT__pointer_out = __Vdly__u_txfifo__DOT__pointer_out;
    vlSelf->__PVT__u_rxfifo__DOT__elements = __Vdly__u_rxfifo__DOT__elements;
    vlSelf->__PVT__u_txfifo__DOT__elements = __Vdly__u_txfifo__DOT__elements;
    vlSelf->__PVT__spi_data_rx_valid = (0U != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements));
    vlSelf->__PVT__u_rxfifo__DOT__full = (0xaU == (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements));
    vlSelf->__PVT__spi_ctrl_data_tx_valid = (0U != (IData)(vlSelf->__PVT__u_txfifo__DOT__elements));
    vlSelf->__PVT__u_txfifo__DOT__full = (0xaU == (IData)(vlSelf->__PVT__u_txfifo__DOT__elements));
    __Vtableidx1 = vlSelf->__PVT__spi_mode;
    vlSelf->spi_oe0 = Vtb_verilator__ConstPool__TABLE_h3bccb52a_0
        [__Vtableidx1];
    vlSelf->spi_oe1 = Vtb_verilator__ConstPool__TABLE_h6e51dc8e_0
        [__Vtableidx1];
    vlSelf->spi_oe2 = Vtb_verilator__ConstPool__TABLE_h6e51dc8e_0
        [__Vtableidx1];
    vlSelf->spi_oe3 = Vtb_verilator__ConstPool__TABLE_h6e51dc8e_0
        [__Vtableidx1];
    vlSelf->__PVT__s_rise_int_tx = ((IData)(vlSelf->__PVT__s_int_en) 
                                    & ((IData)(vlSelf->__PVT__u_txfifo__DOT__elements) 
                                       < (IData)(vlSelf->__PVT__s_th_tx)));
    vlSelf->__PVT__s_rise_int_rx = ((IData)(vlSelf->__PVT__s_int_en) 
                                    & ((IData)(vlSelf->__PVT__u_rxfifo__DOT__elements) 
                                       > (IData)(vlSelf->__PVT__s_th_rx)));
    vlSelf->__PVT__spi_ctrl_status = 0U;
    vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt_next 
        = ((IData)(vlSelf->__PVT__spi_clk_div_valid)
            ? (IData)(vlSelf->__PVT__spi_clk_div) : (IData)(vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt));
    vlSelf->__PVT__u_spictrl__DOT__spi_rise = 0U;
    vlSelf->__PVT__u_spictrl__DOT__spi_fall = 0U;
    if (((IData)(vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter) 
         == (IData)(vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt))) {
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_next = 0U;
        if ((1U & (~ (IData)(vlSelf->spi_clk)))) {
            vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next = 1U;
            vlSelf->__PVT__u_spictrl__DOT__spi_rise 
                = vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__running;
        } else {
            vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next = 0U;
        }
        if (vlSelf->spi_clk) {
            vlSelf->__PVT__u_spictrl__DOT__spi_fall 
                = vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__running;
        }
    } else {
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_next 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter)));
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next 
            = (1U & (IData)(vlSelf->spi_clk));
    }
    vlSelf->__PVT__u_spictrl__DOT__rx_done = (((IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter) 
                                               == ((IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt) 
                                                   - (IData)(1U))) 
                                              & (IData)(vlSelf->__PVT__u_spictrl__DOT__spi_rise));
    vlSelf->__PVT__u_spictrl__DOT__tx_done = (((IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter) 
                                               == ((IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt) 
                                                   - (IData)(1U))) 
                                              & (IData)(vlSelf->__PVT__u_spictrl__DOT__spi_fall));
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_next 
        = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter;
    vlSelf->__PVT__s_eot = 0U;
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_next 
        = vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter;
    vlSelf->__PVT__u_spictrl__DOT__state_next = vlSelf->__PVT__u_spictrl__DOT__state;
    vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 0U;
    vlSelf->__PVT__u_spictrl__DOT__counter_rx = 0U;
    vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid = 0U;
    vlSelf->__PVT__u_spictrl__DOT__spi_cs = 1U;
    vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = 0U;
    vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 0U;
    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 0U;
    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 0U;
    vlSelf->__PVT__u_spictrl__DOT__en_quad = ((IData)(vlSelf->__PVT__spi_qrd) 
                                              | ((IData)(vlSelf->__PVT__spi_qwr) 
                                                 | (IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad_int)));
    vlSelf->__PVT__u_spictrl__DOT__data_to_tx = 0U;
    vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid = 0U;
    if (((((((((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__spi_ctrl_status = (1U | (IData)(vlSelf->__PVT__spi_ctrl_status));
            if (((((IData)(vlSelf->__PVT__spi_rd) | (IData)(vlSelf->__PVT__spi_wr)) 
                  | (IData)(vlSelf->__PVT__spi_qrd)) 
                 | (IData)(vlSelf->__PVT__spi_qwr))) {
                if ((0U != (IData)(vlSelf->__PVT__spi_cmd_len))) {
                    vlSelf->__PVT__u_spictrl__DOT__state_next = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                } else if ((0U != (IData)(vlSelf->__PVT__spi_addr_len))) {
                    vlSelf->__PVT__u_spictrl__DOT__state_next = 2U;
                    vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                } else if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if (((IData)(vlSelf->__PVT__spi_rd) 
                         | (IData)(vlSelf->__PVT__spi_qrd))) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 4U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 6U;
                        }
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__state_next 
                            = ((0U != (IData)(vlSelf->__PVT__spi_dummy_wr))
                                ? 4U : 5U);
                        vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                    }
                }
                if ((0U == (IData)(vlSelf->__PVT__spi_cmd_len))) {
                    if ((0U == (IData)(vlSelf->__PVT__spi_addr_len))) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                            if (((IData)(vlSelf->__PVT__spi_rd) 
                                 | (IData)(vlSelf->__PVT__spi_qrd))) {
                                if ((0U == (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                                    vlSelf->__PVT__u_spictrl__DOT__counter_rx 
                                        = vlSelf->__PVT__spi_data_len;
                                    vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->__PVT__u_spictrl__DOT__state_next = 0U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__spi_ctrl_status = (2U | (IData)(vlSelf->__PVT__spi_ctrl_status));
            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                if ((0U != (IData)(vlSelf->__PVT__spi_addr_len))) {
                    vlSelf->__PVT__u_spictrl__DOT__state_next = 2U;
                    vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                } else if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 4U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 6U;
                        }
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__state_next 
                            = ((0U != (IData)(vlSelf->__PVT__spi_dummy_wr))
                                ? 4U : 5U);
                        vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                    }
                } else {
                    vlSelf->__PVT__u_spictrl__DOT__state_next = 0U;
                }
                if ((0U == (IData)(vlSelf->__PVT__spi_addr_len))) {
                    if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                        if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                            if ((0U == (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                                vlSelf->__PVT__u_spictrl__DOT__counter_rx 
                                    = vlSelf->__PVT__spi_data_len;
                                vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid = 1U;
                            }
                        }
                    }
                }
            } else {
                vlSelf->__PVT__u_spictrl__DOT__state_next = 1U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__spi_ctrl_status = (4U | (IData)(vlSelf->__PVT__spi_ctrl_status));
            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 4U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 6U;
                        }
                        if ((0U == (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__counter_rx 
                                = vlSelf->__PVT__spi_data_len;
                            vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid = 1U;
                        }
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__state_next 
                            = ((0U != (IData)(vlSelf->__PVT__spi_dummy_wr))
                                ? 4U : 5U);
                        vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                    }
                } else {
                    vlSelf->__PVT__u_spictrl__DOT__state_next = 0U;
                }
            }
        } else {
            vlSelf->__PVT__spi_ctrl_status = ((3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))
                                               ? (8U 
                                                  | (IData)(vlSelf->__PVT__spi_ctrl_status))
                                               : ((4U 
                                                   == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))
                                                   ? 
                                                  (0x10U 
                                                   | (IData)(vlSelf->__PVT__spi_ctrl_status))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))
                                                    ? 
                                                   (0x20U 
                                                    | (IData)(vlSelf->__PVT__spi_ctrl_status))
                                                    : 
                                                   (0x40U 
                                                    | (IData)(vlSelf->__PVT__spi_ctrl_status)))));
            if ((3U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                    if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                            if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                                vlSelf->__PVT__u_spictrl__DOT__state_next = 6U;
                                vlSelf->__PVT__u_spictrl__DOT__counter_rx 
                                    = vlSelf->__PVT__spi_data_len;
                                vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid = 1U;
                            } else {
                                vlSelf->__PVT__u_spictrl__DOT__state_next = 5U;
                            }
                            if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__do_rx)))) {
                                vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                            }
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 0U;
                        }
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__state_next = 4U;
                    }
                } else {
                    vlSelf->__PVT__u_spictrl__DOT__state_next 
                        = ((5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))
                            ? ((IData)(vlSelf->__PVT__u_spictrl__DOT__tx_done)
                                ? 0U : 5U) : ((6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))
                                               ? ((IData)(vlSelf->__PVT__u_spictrl__DOT__rx_done)
                                                   ? 7U
                                                   : 6U)
                                               : ((IData)(vlSelf->__PVT__u_spictrl__DOT__spi_fall)
                                                   ? 0U
                                                   : 7U)));
                }
            }
        }
        if ((0U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            if ((1U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                if ((2U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                    if ((3U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                        if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                                if ((0U == (IData)(vlSelf->__PVT__spi_data_len))) {
                                    vlSelf->__PVT__s_eot = 1U;
                                }
                            }
                        } else if ((5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                                vlSelf->__PVT__s_eot = 1U;
                            }
                        } else if ((6U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                            if (vlSelf->__PVT__u_spictrl__DOT__spi_fall) {
                                vlSelf->__PVT__s_eot = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt_next 
        = (0xffffU & ((IData)(vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid)
                       ? ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                           ? VL_SHIFTR_III(16,16,32, (IData)(vlSelf->__PVT__u_spictrl__DOT__counter_rx), 2U)
                           : (IData)(vlSelf->__PVT__u_spictrl__DOT__counter_rx))
                       : (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt)));
    vlSelf->__PVT__u_spictrl__DOT__s_spi_mode = 2U;
    vlSelf->__PVT__u_spictrl__DOT__counter_tx = 0U;
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__reg_done 
        = (((~ (IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)) 
            & (0x1fU == (0x1fU & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter)))) 
           | ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad) 
              & (7U == (7U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter)))));
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__reg_done 
        = (((~ (IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)) 
            & (0x1fU == (0x1fU & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter)))) 
           | ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad) 
              & (7U == (7U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter)))));
    if (((((((((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)))) {
        vlSelf->__PVT__u_spictrl__DOT__spi_cs = ((0U 
                                                  == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)) 
                                                 && (1U 
                                                     & (~ 
                                                        ((((IData)(vlSelf->__PVT__spi_rd) 
                                                           | (IData)(vlSelf->__PVT__spi_wr)) 
                                                          | (IData)(vlSelf->__PVT__spi_qrd)) 
                                                         | (IData)(vlSelf->__PVT__spi_qwr)))));
        if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__s_spi_mode = 2U;
            if (((((IData)(vlSelf->__PVT__spi_rd) | (IData)(vlSelf->__PVT__spi_wr)) 
                  | (IData)(vlSelf->__PVT__spi_qrd)) 
                 | (IData)(vlSelf->__PVT__spi_qwr))) {
                if ((0U == (IData)(vlSelf->__PVT__spi_cmd_len))) {
                    if ((0U == (IData)(vlSelf->__PVT__spi_addr_len))) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                            if (((IData)(vlSelf->__PVT__spi_rd) 
                                 | (IData)(vlSelf->__PVT__spi_qrd))) {
                                if ((0U == (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                                    vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = 1U;
                                }
                            }
                        }
                    }
                }
                if ((0U != (IData)(vlSelf->__PVT__spi_cmd_len))) {
                    vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 2U;
                    vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                        = (((IData)(vlSelf->__PVT__spi_qrd) 
                            | (IData)(vlSelf->__PVT__spi_qwr))
                            ? 1U : 0U);
                    vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                        = vlSelf->__PVT__spi_cmd_len;
                } else if ((0U != (IData)(vlSelf->__PVT__spi_addr_len))) {
                    vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 3U;
                    vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                        = (((IData)(vlSelf->__PVT__spi_qrd) 
                            | (IData)(vlSelf->__PVT__spi_qwr))
                            ? 1U : 0U);
                    vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                        = vlSelf->__PVT__spi_addr_len;
                } else if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if (((IData)(vlSelf->__PVT__spi_rd) 
                         | (IData)(vlSelf->__PVT__spi_qrd))) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? (0xfffcU & ((IData)(vlSelf->__PVT__spi_dummy_rd) 
                                                  << 2U))
                                    : (IData)(vlSelf->__PVT__spi_dummy_rd));
                        }
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__spi_qrd)
                                ? 2U : 0U);
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_wr))) {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? (0xfffcU & ((IData)(vlSelf->__PVT__spi_dummy_wr) 
                                                  << 2U))
                                    : (IData)(vlSelf->__PVT__spi_dummy_wr));
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 4U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = vlSelf->__PVT__spi_data_len;
                        }
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__spi_qwr)
                                ? 1U : 0U);
                    }
                    if ((1U & (~ ((IData)(vlSelf->__PVT__spi_rd) 
                                  | (IData)(vlSelf->__PVT__spi_qrd))))) {
                        if ((0U == (IData)(vlSelf->__PVT__spi_dummy_wr))) {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 0U;
                        }
                    }
                }
            }
        } else if ((1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                    ? 1U : 0U);
            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                if ((0U == (IData)(vlSelf->__PVT__spi_addr_len))) {
                    if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                        if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                            if ((0U == (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                                vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = 1U;
                            }
                        }
                    }
                }
                if ((0U != (IData)(vlSelf->__PVT__spi_addr_len))) {
                    vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 3U;
                    vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                        = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                            ? 1U : 0U);
                    vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                        = vlSelf->__PVT__spi_addr_len;
                } else if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? (0xfffcU & ((IData)(vlSelf->__PVT__spi_dummy_rd) 
                                                  << 2U))
                                    : (IData)(vlSelf->__PVT__spi_dummy_rd));
                        }
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                ? 2U : 0U);
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_wr))) {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? (0xfffcU & ((IData)(vlSelf->__PVT__spi_dummy_wr) 
                                                  << 2U))
                                    : (IData)(vlSelf->__PVT__spi_dummy_wr));
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 4U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = vlSelf->__PVT__spi_data_len;
                        }
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                ? 1U : 0U);
                    }
                    if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__do_rx)))) {
                        if ((0U == (IData)(vlSelf->__PVT__spi_dummy_wr))) {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 1U;
                        }
                    }
                }
            } else {
                vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
            vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                    ? 1U : 0U);
            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                        if ((0U == (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = 1U;
                        }
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? (0xfffcU & ((IData)(vlSelf->__PVT__spi_dummy_rd) 
                                                  << 2U))
                                    : (IData)(vlSelf->__PVT__spi_dummy_rd));
                        }
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                ? 2U : 0U);
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_wr))) {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? (0xfffcU & ((IData)(vlSelf->__PVT__spi_dummy_wr) 
                                                  << 2U))
                                    : (IData)(vlSelf->__PVT__spi_dummy_wr));
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 4U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = vlSelf->__PVT__spi_data_len;
                        }
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                ? 1U : 0U);
                    }
                    if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__do_rx)))) {
                        if ((0U == (IData)(vlSelf->__PVT__spi_dummy_wr))) {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 1U;
                        }
                    }
                }
            }
        } else {
            if ((3U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__tx_done)))) {
                        vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                    }
                    vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                        = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                            ? 2U : 0U);
                    if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                            if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                                vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = 1U;
                            }
                            if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__do_rx)))) {
                                vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                                    = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                        ? 1U : 0U);
                                vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                    = vlSelf->__PVT__spi_data_len;
                            }
                        }
                    }
                } else {
                    if ((5U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                        if ((6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__rx_done)))) {
                                vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = 1U;
                            }
                        }
                    }
                    if ((5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                        vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 4U;
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                ? 1U : 0U);
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))
                                ? ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? 2U : 0U) : ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                                   ? 2U
                                                   : 0U));
                    }
                }
                if ((4U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                    if ((5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                        vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
            } else if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                    if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                        if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__do_rx)))) {
                            vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                        }
                    }
                } else {
                    vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                }
            } else if ((5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
            }
        }
    }
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt_next 
        = (0xffffU & ((IData)(vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid)
                       ? ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                           ? VL_SHIFTR_III(16,16,32, (IData)(vlSelf->__PVT__u_spictrl__DOT__counter_tx), 2U)
                           : (IData)(vlSelf->__PVT__u_spictrl__DOT__counter_tx))
                       : (IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt)));
    vlSelf->__PVT__spi_ctrl_data_rx_valid = 0U;
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS 
        = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS;
    if ((2U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
        vlSelf->__PVT__spi_ctrl_data_rx_valid = 1U;
        if ((1U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
            if ((0xaU != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements))) {
                vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 0U;
            }
        } else if ((0xaU != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements))) {
            vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 1U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
        if (vlSelf->__PVT__u_spictrl__DOT__spi_rise) {
            if (vlSelf->__PVT__u_spictrl__DOT__rx_done) {
                vlSelf->__PVT__spi_ctrl_data_rx_valid = 1U;
                vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS 
                    = ((0xaU != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements))
                        ? 0U : 3U);
            } else if (vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__reg_done) {
                vlSelf->__PVT__spi_ctrl_data_rx_valid = 1U;
                if ((0xaU == (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements))) {
                    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 2U;
                }
            }
        }
    } else if (vlSelf->__PVT__u_spictrl__DOT__spi_en_rx) {
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 1U;
    }
    vlSelf->__PVT__u_spictrl__DOT__rx_clk_en = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
            vlSelf->__PVT__u_spictrl__DOT__rx_clk_en = 1U;
            if (vlSelf->__PVT__u_spictrl__DOT__spi_rise) {
                vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter)));
                if (vlSelf->__PVT__u_spictrl__DOT__rx_done) {
                    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_next = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__rx_done)))) {
                    if (vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__reg_done) {
                        if ((0xaU == (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements))) {
                            vlSelf->__PVT__u_spictrl__DOT__rx_clk_en = 0U;
                        }
                    }
                }
            }
        } else {
            vlSelf->__PVT__u_spictrl__DOT__rx_clk_en = 0U;
        }
    }
    if (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 1U;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
            = vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int;
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready = 0U;
        vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = 0U;
        if (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
            if (vlSelf->__PVT__u_spictrl__DOT__spi_fall) {
                vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter)));
                if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_next = 0U;
                }
            }
        }
    } else {
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
            = vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int;
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready = 0U;
        vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = 0U;
    }
    if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx = 0U;
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx = 0U;
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid = 1U;
    } else if ((2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx = vlSelf->__PVT__spi_cmd;
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid 
            = vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid;
    } else if ((3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx = vlSelf->__PVT__spi_addr;
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid 
            = vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid;
    } else if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx = 
            ((9U >= (IData)(vlSelf->__PVT__u_txfifo__DOT__pointer_out))
              ? vlSelf->__PVT__u_txfifo__DOT__buffer
             [vlSelf->__PVT__u_txfifo__DOT__pointer_out]
              : 0U);
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid 
            = (0U != (IData)(vlSelf->__PVT__u_txfifo__DOT__elements));
    }
    if (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
        if (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
            vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = 1U;
            if (vlSelf->__PVT__u_spictrl__DOT__spi_fall) {
                vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
                    = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                        ? (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int 
                           << 4U) : (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int 
                                     << 1U));
                if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                    if (((IData)(vlSelf->__PVT__u_spictrl__DOT__spi_en_tx) 
                         & (IData)(vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid))) {
                        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 1U;
                        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
                            = vlSelf->__PVT__u_spictrl__DOT__data_to_tx;
                        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready = 1U;
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 0U;
                    }
                    if ((1U & (~ ((IData)(vlSelf->__PVT__u_spictrl__DOT__spi_en_tx) 
                                  & (IData)(vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid))))) {
                        vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = 0U;
                    }
                } else if (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__reg_done) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid)))) {
                        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 0U;
                        vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = 0U;
                    }
                    if (vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid) {
                        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
                            = vlSelf->__PVT__u_spictrl__DOT__data_to_tx;
                        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready = 1U;
                    }
                }
            }
        }
    } else {
        if (((IData)(vlSelf->__PVT__u_spictrl__DOT__spi_en_tx) 
             & (IData)(vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid))) {
            vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 1U;
            vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
                = vlSelf->__PVT__u_spictrl__DOT__data_to_tx;
            vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready = 1U;
        }
        vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = 0U;
    }
    vlSelf->__PVT__spi_ctrl_data_tx_ready = 0U;
    if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelf->__PVT__spi_ctrl_data_tx_ready = 0U;
    } else if ((1U != (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        if ((2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
            vlSelf->__PVT__spi_ctrl_data_tx_ready = 0U;
        } else if ((3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
            vlSelf->__PVT__spi_ctrl_data_tx_ready = 0U;
        } else if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
            vlSelf->__PVT__spi_ctrl_data_tx_ready = vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready;
        }
    }
    vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 0U;
    if (((((((((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            if (((((IData)(vlSelf->__PVT__spi_rd) | (IData)(vlSelf->__PVT__spi_wr)) 
                  | (IData)(vlSelf->__PVT__spi_qrd)) 
                 | (IData)(vlSelf->__PVT__spi_qwr))) {
                vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 1U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 1U;
        } else if ((2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 1U;
        } else if ((3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 1U;
        } else if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 1U;
            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__do_rx)))) {
                        vlSelf->__PVT__u_spictrl__DOT__spi_clock_en 
                            = vlSelf->__PVT__u_spictrl__DOT__tx_clk_en;
                    }
                }
            }
        } else if ((5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__spi_clock_en 
                = vlSelf->__PVT__u_spictrl__DOT__tx_clk_en;
            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 0U;
            }
        } else {
            vlSelf->__PVT__u_spictrl__DOT__spi_clock_en 
                = ((6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)) 
                   && (IData)(vlSelf->__PVT__u_spictrl__DOT__rx_clk_en));
        }
    }
}

VL_INLINE_OPT void Vtb_verilator_apb_spi_master__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi1__1(Vtb_verilator_apb_spi_master__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_spi_master__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi1__1\n"); );
    // Body
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int_next 
        = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int;
    if ((1U & (~ ((IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
            if (vlSelf->__PVT__u_spictrl__DOT__spi_rise) {
                vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int_next 
                    = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                        ? ((vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int 
                            << 4U) | (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_gpioA__DOT__r_gpio_sync1 
                                              >> 0xaU)))
                        : ((vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int 
                            << 1U) | (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_gpioA__DOT__r_gpio_sync1 
                                            >> 0xbU))));
            }
        }
    }
}

VL_INLINE_OPT void Vtb_verilator_apb_spi_master__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi1__0(Vtb_verilator_apb_spi_master__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_spi_master__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi1__0\n"); );
    // Init
    CData/*0:0*/ u_axiregs__DOT____VdfgRegularize_h5baf15b8_0_0;
    u_axiregs__DOT____VdfgRegularize_h5baf15b8_0_0 = 0;
    // Body
    u_axiregs__DOT____VdfgRegularize_h5baf15b8_0_0 
        = ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi1_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r) 
           & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_valid));
    vlSelf->__PVT__spi_data_tx_valid = ((IData)(u_axiregs__DOT____VdfgRegularize_h5baf15b8_0_0) 
                                        & ((~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_read)) 
                                           & (0x18U 
                                              == (0x3cU 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr))));
    vlSelf->__PVT__spi_data_rx_ready = ((IData)(u_axiregs__DOT____VdfgRegularize_h5baf15b8_0_0) 
                                        & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_read) 
                                           & (0x20U 
                                              == (0x3cU 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr))));
}

VL_INLINE_OPT void Vtb_verilator_apb_spi_master__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi1__1(Vtb_verilator_apb_spi_master__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_spi_master__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi1__1\n"); );
    // Body
    if ((0x20U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr)) {
        if ((0x10U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr)) {
            vlSelf->PRDATA = 0U;
        } else if ((8U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr)) {
            vlSelf->PRDATA = ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr)
                               ? 0U : (((IData)(vlSelf->__PVT__s_rise_int_rx) 
                                        << 1U) | (IData)(vlSelf->__PVT__s_rise_int_tx)));
        } else if ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr)) {
            vlSelf->PRDATA = 0U;
            vlSelf->PRDATA = ((0xffffffe0U & vlSelf->PRDATA) 
                              | (IData)(vlSelf->__PVT__s_th_tx));
            vlSelf->PRDATA = ((0xffffe0ffU & vlSelf->PRDATA) 
                              | ((IData)(vlSelf->__PVT__s_th_rx) 
                                 << 8U));
            vlSelf->PRDATA = ((0x7fffffffU & vlSelf->PRDATA) 
                              | ((IData)(vlSelf->__PVT__s_int_en) 
                                 << 0x1fU));
        } else {
            vlSelf->PRDATA = ((9U >= (IData)(vlSelf->__PVT__u_rxfifo__DOT__pointer_out))
                               ? vlSelf->__PVT__u_rxfifo__DOT__buffer
                              [vlSelf->__PVT__u_rxfifo__DOT__pointer_out]
                               : 0U);
        }
    } else {
        vlSelf->PRDATA = ((0x10U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr)
                           ? ((8U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr)
                               ? 0U : ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr)
                                        ? (((IData)(vlSelf->__PVT__spi_dummy_wr) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->__PVT__spi_dummy_rd))
                                        : (((IData)(vlSelf->__PVT__spi_data_len) 
                                            << 0x10U) 
                                           | (((IData)(vlSelf->__PVT__spi_addr_len) 
                                               << 8U) 
                                              | (IData)(vlSelf->__PVT__spi_cmd_len)))))
                           : ((8U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr)
                               ? ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr)
                                   ? vlSelf->__PVT__spi_addr
                                   : vlSelf->__PVT__spi_cmd)
                               : ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi1_apb_icb_cmd_addr)
                                   ? (IData)(vlSelf->__PVT__spi_clk_div)
                                   : (((IData)(vlSelf->__PVT__u_txfifo__DOT__elements) 
                                       << 0x18U) | 
                                      (((IData)(vlSelf->__PVT__u_rxfifo__DOT__elements) 
                                        << 0x10U) | (IData)(vlSelf->__PVT__spi_ctrl_status))))));
    }
}

VL_INLINE_OPT void Vtb_verilator_apb_spi_master__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi2__0(Vtb_verilator_apb_spi_master__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_spi_master__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi2__0\n"); );
    // Init
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vdly__u_txfifo__DOT__elements;
    __Vdly__u_txfifo__DOT__elements = 0;
    IData/*31:0*/ __VdlyVal__u_txfifo__DOT__buffer__v0;
    __VdlyVal__u_txfifo__DOT__buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim0__u_txfifo__DOT__buffer__v0;
    __VdlyDim0__u_txfifo__DOT__buffer__v0 = 0;
    CData/*3:0*/ __Vdly__u_txfifo__DOT__pointer_out;
    __Vdly__u_txfifo__DOT__pointer_out = 0;
    CData/*3:0*/ __Vdly__u_txfifo__DOT__pointer_in;
    __Vdly__u_txfifo__DOT__pointer_in = 0;
    CData/*4:0*/ __Vdly__u_rxfifo__DOT__elements;
    __Vdly__u_rxfifo__DOT__elements = 0;
    IData/*31:0*/ __VdlyVal__u_rxfifo__DOT__buffer__v0;
    __VdlyVal__u_rxfifo__DOT__buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim0__u_rxfifo__DOT__buffer__v0;
    __VdlyDim0__u_rxfifo__DOT__buffer__v0 = 0;
    CData/*3:0*/ __Vdly__u_rxfifo__DOT__pointer_out;
    __Vdly__u_rxfifo__DOT__pointer_out = 0;
    CData/*3:0*/ __Vdly__u_rxfifo__DOT__pointer_in;
    __Vdly__u_rxfifo__DOT__pointer_in = 0;
    CData/*0:0*/ __VdlySet__u_txfifo__DOT__buffer__v0;
    __VdlySet__u_txfifo__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__u_txfifo__DOT__buffer__v1;
    __VdlySet__u_txfifo__DOT__buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__u_rxfifo__DOT__buffer__v0;
    __VdlySet__u_rxfifo__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__u_rxfifo__DOT__buffer__v1;
    __VdlySet__u_rxfifo__DOT__buffer__v1 = 0;
    // Body
    __VdlySet__u_rxfifo__DOT__buffer__v0 = 0U;
    __VdlySet__u_rxfifo__DOT__buffer__v1 = 0U;
    __VdlySet__u_txfifo__DOT__buffer__v0 = 0U;
    __VdlySet__u_txfifo__DOT__buffer__v1 = 0U;
    __Vdly__u_rxfifo__DOT__pointer_in = vlSelf->__PVT__u_rxfifo__DOT__pointer_in;
    __Vdly__u_txfifo__DOT__pointer_in = vlSelf->__PVT__u_txfifo__DOT__pointer_in;
    __Vdly__u_rxfifo__DOT__pointer_out = vlSelf->__PVT__u_rxfifo__DOT__pointer_out;
    __Vdly__u_txfifo__DOT__pointer_out = vlSelf->__PVT__u_txfifo__DOT__pointer_out;
    __Vdly__u_rxfifo__DOT__elements = vlSelf->__PVT__u_rxfifo__DOT__elements;
    __Vdly__u_txfifo__DOT__elements = vlSelf->__PVT__u_txfifo__DOT__elements;
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q)))) {
        vlSelf->__PVT__u_txfifo__DOT__loop1 = 0xaU;
        vlSelf->__PVT__u_rxfifo__DOT__loop1 = 0xaU;
    }
    if (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) {
        if (((IData)(vlSelf->__PVT__spi_ctrl_data_rx_valid) 
             & (0xaU != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements)))) {
            vlSelf->u_rxfifo__DOT____Vlvbound_h4efa324b__0 
                = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int_next;
            if ((9U >= (IData)(vlSelf->__PVT__u_rxfifo__DOT__pointer_in))) {
                __VdlyVal__u_rxfifo__DOT__buffer__v0 
                    = vlSelf->u_rxfifo__DOT____Vlvbound_h4efa324b__0;
                __VdlyDim0__u_rxfifo__DOT__buffer__v0 
                    = vlSelf->__PVT__u_rxfifo__DOT__pointer_in;
                __VdlySet__u_rxfifo__DOT__buffer__v0 = 1U;
            }
        }
        if (((IData)(vlSelf->__PVT__spi_data_tx_valid) 
             & (0xaU != (IData)(vlSelf->__PVT__u_txfifo__DOT__elements)))) {
            vlSelf->u_txfifo__DOT____Vlvbound_h4efa324b__0 
                = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata;
            if ((9U >= (IData)(vlSelf->__PVT__u_txfifo__DOT__pointer_in))) {
                __VdlyVal__u_txfifo__DOT__buffer__v0 
                    = vlSelf->u_txfifo__DOT____Vlvbound_h4efa324b__0;
                __VdlyDim0__u_txfifo__DOT__buffer__v0 
                    = vlSelf->__PVT__u_txfifo__DOT__pointer_in;
                __VdlySet__u_txfifo__DOT__buffer__v0 = 1U;
            }
        }
        if (vlSelf->__PVT__spi_swrst) {
            __Vdly__u_rxfifo__DOT__pointer_in = 0U;
            __Vdly__u_txfifo__DOT__pointer_in = 0U;
            __Vdly__u_rxfifo__DOT__pointer_out = 0U;
            __Vdly__u_txfifo__DOT__pointer_out = 0U;
            __Vdly__u_rxfifo__DOT__elements = 0U;
            __Vdly__u_txfifo__DOT__elements = 0U;
        } else {
            if (((IData)(vlSelf->__PVT__spi_ctrl_data_rx_valid) 
                 & (0xaU != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements)))) {
                __Vdly__u_rxfifo__DOT__pointer_in = 
                    ((9U == (IData)(vlSelf->__PVT__u_rxfifo__DOT__pointer_in))
                      ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_rxfifo__DOT__pointer_in))));
            }
            if (((IData)(vlSelf->__PVT__spi_data_tx_valid) 
                 & (0xaU != (IData)(vlSelf->__PVT__u_txfifo__DOT__elements)))) {
                __Vdly__u_txfifo__DOT__pointer_in = 
                    ((9U == (IData)(vlSelf->__PVT__u_txfifo__DOT__pointer_in))
                      ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_txfifo__DOT__pointer_in))));
            }
            if (((IData)(vlSelf->__PVT__spi_data_rx_ready) 
                 & (0U != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements)))) {
                __Vdly__u_rxfifo__DOT__pointer_out 
                    = ((9U == (IData)(vlSelf->__PVT__u_rxfifo__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__u_rxfifo__DOT__pointer_out))));
            }
            if (((IData)(vlSelf->__PVT__spi_ctrl_data_tx_ready) 
                 & (0U != (IData)(vlSelf->__PVT__u_txfifo__DOT__elements)))) {
                __Vdly__u_txfifo__DOT__pointer_out 
                    = ((9U == (IData)(vlSelf->__PVT__u_txfifo__DOT__pointer_out))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__u_txfifo__DOT__pointer_out))));
            }
            if ((((IData)(vlSelf->__PVT__spi_data_rx_ready) 
                  & (IData)(vlSelf->__PVT__spi_data_rx_valid)) 
                 & ((~ (IData)(vlSelf->__PVT__spi_ctrl_data_rx_valid)) 
                    | (IData)(vlSelf->__PVT__u_rxfifo__DOT__full)))) {
                __Vdly__u_rxfifo__DOT__elements = (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__u_rxfifo__DOT__elements) 
                                                      - (IData)(1U)));
            } else if (((((~ (IData)(vlSelf->__PVT__spi_data_rx_valid)) 
                          | (~ (IData)(vlSelf->__PVT__spi_data_rx_ready))) 
                         & (IData)(vlSelf->__PVT__spi_ctrl_data_rx_valid)) 
                        & (~ (IData)(vlSelf->__PVT__u_rxfifo__DOT__full)))) {
                __Vdly__u_rxfifo__DOT__elements = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements)));
            }
            if ((((IData)(vlSelf->__PVT__spi_ctrl_data_tx_ready) 
                  & (IData)(vlSelf->__PVT__spi_ctrl_data_tx_valid)) 
                 & ((~ (IData)(vlSelf->__PVT__spi_data_tx_valid)) 
                    | (IData)(vlSelf->__PVT__u_txfifo__DOT__full)))) {
                __Vdly__u_txfifo__DOT__elements = (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__u_txfifo__DOT__elements) 
                                                      - (IData)(1U)));
            } else if (((((~ (IData)(vlSelf->__PVT__spi_ctrl_data_tx_valid)) 
                          | (~ (IData)(vlSelf->__PVT__spi_ctrl_data_tx_ready))) 
                         & (IData)(vlSelf->__PVT__spi_data_tx_valid)) 
                        & (~ (IData)(vlSelf->__PVT__u_txfifo__DOT__full)))) {
                __Vdly__u_txfifo__DOT__elements = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__u_txfifo__DOT__elements)));
            }
        }
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int 
            = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int_next;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int 
            = vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS 
            = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS;
        vlSelf->__PVT__spi_mode = vlSelf->__PVT__u_spictrl__DOT__s_spi_mode;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt 
            = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt_next;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter 
            = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_next;
        vlSelf->__PVT__u_spictrl__DOT__state = vlSelf->__PVT__u_spictrl__DOT__state_next;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt 
            = vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt_next;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter 
            = vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_next;
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt 
            = vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt_next;
        if ((1U & ((~ (IData)(vlSelf->spi_clk)) & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__spi_clock_en))))) {
            vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__running = 0U;
        } else {
            vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__running = 1U;
            vlSelf->spi_clk = vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next;
            vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter 
                = vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_next;
        }
        if (((IData)(vlSelf->__PVT__spi_qrd) | (IData)(vlSelf->__PVT__spi_qwr))) {
            vlSelf->__PVT__u_spictrl__DOT__en_quad_int = 1U;
        } else if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state_next))) {
            vlSelf->__PVT__u_spictrl__DOT__en_quad_int = 0U;
        }
        if (((IData)(vlSelf->__PVT__spi_rd) | (IData)(vlSelf->__PVT__spi_qrd))) {
            vlSelf->__PVT__u_spictrl__DOT__do_tx = 0U;
            vlSelf->__PVT__u_spictrl__DOT__do_rx = 1U;
        } else if (((IData)(vlSelf->__PVT__spi_wr) 
                    | (IData)(vlSelf->__PVT__spi_qwr))) {
            vlSelf->__PVT__u_spictrl__DOT__do_tx = 1U;
            vlSelf->__PVT__u_spictrl__DOT__do_rx = 0U;
        } else if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state_next))) {
            vlSelf->__PVT__u_spictrl__DOT__do_tx = 0U;
            vlSelf->__PVT__u_spictrl__DOT__do_rx = 0U;
        }
        if ((((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_valid) 
              & (IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r)) 
             & (~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_read)))) {
            vlSelf->__PVT__spi_clk_div_valid = 0U;
            if ((0U != (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                >> 2U)))) {
                if ((1U == (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                    >> 2U)))) {
                    vlSelf->__PVT__spi_clk_div_valid = 1U;
                    vlSelf->__PVT__spi_clk_div = (0xffU 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata);
                }
                if ((1U != (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                    >> 2U)))) {
                    if ((2U != (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                        >> 2U)))) {
                        if ((3U == (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                            >> 2U)))) {
                            vlSelf->__PVT__spi_addr 
                                = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata;
                        }
                        if ((3U != (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                            >> 2U)))) {
                            if ((4U != (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                                >> 2U)))) {
                                if ((5U != (0xfU & 
                                            (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                             >> 2U)))) {
                                    if ((9U == (0xfU 
                                                & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                                   >> 2U)))) {
                                        vlSelf->__PVT__s_th_tx 
                                            = (0x1fU 
                                               & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata);
                                        vlSelf->__PVT__s_th_rx 
                                            = (0x1fU 
                                               & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata 
                                                  >> 8U));
                                        vlSelf->__PVT__s_int_en 
                                            = (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata 
                                               >> 0x1fU);
                                    }
                                }
                                if ((5U == (0xfU & 
                                            (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                             >> 2U)))) {
                                    vlSelf->__PVT__spi_dummy_wr 
                                        = (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata 
                                           >> 0x10U);
                                    vlSelf->__PVT__spi_dummy_rd 
                                        = (0xffffU 
                                           & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata);
                                }
                            }
                            if ((4U == (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                                >> 2U)))) {
                                vlSelf->__PVT__spi_addr_len 
                                    = (0x3fU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata 
                                                >> 8U));
                                vlSelf->__PVT__spi_cmd_len 
                                    = (0x3fU & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata);
                                vlSelf->__PVT__spi_data_len 
                                    = (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata 
                                       >> 0x10U);
                            }
                        }
                    }
                    if ((2U == (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                        >> 2U)))) {
                        vlSelf->__PVT__spi_cmd = vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata;
                    }
                }
            }
            vlSelf->__PVT__spi_swrst = 0U;
            vlSelf->__PVT__spi_rd = 0U;
            vlSelf->__PVT__spi_wr = 0U;
            vlSelf->__PVT__spi_qrd = 0U;
            vlSelf->__PVT__spi_qwr = 0U;
            if ((0U == (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr 
                                >> 2U)))) {
                vlSelf->__PVT__spi_csreg = (0xfU & 
                                            (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata 
                                             >> 8U));
                vlSelf->__PVT__spi_swrst = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata 
                                                  >> 4U));
                vlSelf->__PVT__spi_rd = (1U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata);
                vlSelf->__PVT__spi_wr = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata 
                                               >> 1U));
                vlSelf->__PVT__spi_qrd = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata 
                                                >> 2U));
                vlSelf->__PVT__spi_qwr = (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_wdata 
                                                >> 3U));
            }
        } else {
            vlSelf->__PVT__spi_clk_div_valid = 0U;
            vlSelf->__PVT__spi_swrst = 0U;
            vlSelf->__PVT__spi_rd = 0U;
            vlSelf->__PVT__spi_wr = 0U;
            vlSelf->__PVT__spi_qrd = 0U;
            vlSelf->__PVT__spi_qwr = 0U;
        }
    } else {
        __VdlySet__u_rxfifo__DOT__buffer__v1 = 1U;
        __VdlySet__u_txfifo__DOT__buffer__v1 = 1U;
        __Vdly__u_rxfifo__DOT__pointer_in = 0U;
        __Vdly__u_txfifo__DOT__pointer_in = 0U;
        __Vdly__u_rxfifo__DOT__pointer_out = 0U;
        __Vdly__u_txfifo__DOT__pointer_out = 0U;
        __Vdly__u_rxfifo__DOT__elements = 0U;
        __Vdly__u_txfifo__DOT__elements = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS = 0U;
        vlSelf->__PVT__spi_mode = 2U;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt = 8U;
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter = 0U;
        vlSelf->__PVT__spi_clk_div_valid = 0U;
        vlSelf->__PVT__spi_csreg = 0U;
        vlSelf->__PVT__spi_clk_div = 0U;
        vlSelf->__PVT__spi_addr = 0U;
        vlSelf->__PVT__spi_cmd = 0U;
        vlSelf->__PVT__s_th_tx = 0U;
        vlSelf->__PVT__s_th_rx = 0U;
        vlSelf->__PVT__s_int_en = 0U;
        vlSelf->__PVT__u_spictrl__DOT__state = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt = 8U;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter = 0U;
        vlSelf->__PVT__spi_dummy_wr = 0U;
        vlSelf->__PVT__spi_dummy_rd = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt = 0U;
        vlSelf->__PVT__spi_addr_len = 0U;
        vlSelf->__PVT__spi_cmd_len = 0U;
        vlSelf->__PVT__spi_data_len = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter = 0U;
        vlSelf->spi_clk = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__running = 0U;
        vlSelf->__PVT__u_spictrl__DOT__en_quad_int = 0U;
        vlSelf->__PVT__u_spictrl__DOT__do_tx = 0U;
        vlSelf->__PVT__u_spictrl__DOT__do_rx = 0U;
        vlSelf->__PVT__spi_swrst = 0U;
        vlSelf->__PVT__spi_rd = 0U;
        vlSelf->__PVT__spi_wr = 0U;
        vlSelf->__PVT__spi_qrd = 0U;
        vlSelf->__PVT__spi_qwr = 0U;
    }
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_CS 
        = ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_main_ResetCatchAndSync_2_1__DOT__reset_n_catch_reg__DOT__reg_0_q) 
           && (IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS));
    if (__VdlySet__u_rxfifo__DOT__buffer__v0) {
        vlSelf->__PVT__u_rxfifo__DOT__buffer[__VdlyDim0__u_rxfifo__DOT__buffer__v0] 
            = __VdlyVal__u_rxfifo__DOT__buffer__v0;
    }
    if (__VdlySet__u_rxfifo__DOT__buffer__v1) {
        vlSelf->__PVT__u_rxfifo__DOT__buffer[0U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[1U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[2U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[3U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[4U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[5U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[6U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[7U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[8U] = 0U;
        vlSelf->__PVT__u_rxfifo__DOT__buffer[9U] = 0U;
    }
    if (__VdlySet__u_txfifo__DOT__buffer__v0) {
        vlSelf->__PVT__u_txfifo__DOT__buffer[__VdlyDim0__u_txfifo__DOT__buffer__v0] 
            = __VdlyVal__u_txfifo__DOT__buffer__v0;
    }
    if (__VdlySet__u_txfifo__DOT__buffer__v1) {
        vlSelf->__PVT__u_txfifo__DOT__buffer[0U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[1U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[2U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[3U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[4U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[5U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[6U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[7U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[8U] = 0U;
        vlSelf->__PVT__u_txfifo__DOT__buffer[9U] = 0U;
    }
    vlSelf->__PVT__u_rxfifo__DOT__pointer_in = __Vdly__u_rxfifo__DOT__pointer_in;
    vlSelf->__PVT__u_txfifo__DOT__pointer_in = __Vdly__u_txfifo__DOT__pointer_in;
    vlSelf->__PVT__u_rxfifo__DOT__pointer_out = __Vdly__u_rxfifo__DOT__pointer_out;
    vlSelf->__PVT__u_txfifo__DOT__pointer_out = __Vdly__u_txfifo__DOT__pointer_out;
    vlSelf->__PVT__u_rxfifo__DOT__elements = __Vdly__u_rxfifo__DOT__elements;
    vlSelf->__PVT__u_txfifo__DOT__elements = __Vdly__u_txfifo__DOT__elements;
    vlSelf->__PVT__spi_data_rx_valid = (0U != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements));
    vlSelf->__PVT__u_rxfifo__DOT__full = (0xaU == (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements));
    vlSelf->__PVT__spi_ctrl_data_tx_valid = (0U != (IData)(vlSelf->__PVT__u_txfifo__DOT__elements));
    vlSelf->__PVT__u_txfifo__DOT__full = (0xaU == (IData)(vlSelf->__PVT__u_txfifo__DOT__elements));
    __Vtableidx2 = vlSelf->__PVT__spi_mode;
    vlSelf->spi_oe0 = Vtb_verilator__ConstPool__TABLE_h3bccb52a_0
        [__Vtableidx2];
    vlSelf->spi_oe1 = Vtb_verilator__ConstPool__TABLE_h6e51dc8e_0
        [__Vtableidx2];
    vlSelf->spi_oe2 = Vtb_verilator__ConstPool__TABLE_h6e51dc8e_0
        [__Vtableidx2];
    vlSelf->spi_oe3 = Vtb_verilator__ConstPool__TABLE_h6e51dc8e_0
        [__Vtableidx2];
    vlSelf->__PVT__s_rise_int_tx = ((IData)(vlSelf->__PVT__s_int_en) 
                                    & ((IData)(vlSelf->__PVT__u_txfifo__DOT__elements) 
                                       < (IData)(vlSelf->__PVT__s_th_tx)));
    vlSelf->__PVT__s_rise_int_rx = ((IData)(vlSelf->__PVT__s_int_en) 
                                    & ((IData)(vlSelf->__PVT__u_rxfifo__DOT__elements) 
                                       > (IData)(vlSelf->__PVT__s_th_rx)));
    vlSelf->__PVT__spi_ctrl_status = 0U;
    vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt_next 
        = ((IData)(vlSelf->__PVT__spi_clk_div_valid)
            ? (IData)(vlSelf->__PVT__spi_clk_div) : (IData)(vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt));
    vlSelf->__PVT__u_spictrl__DOT__spi_rise = 0U;
    vlSelf->__PVT__u_spictrl__DOT__spi_fall = 0U;
    if (((IData)(vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter) 
         == (IData)(vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt))) {
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_next = 0U;
        if ((1U & (~ (IData)(vlSelf->spi_clk)))) {
            vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next = 1U;
            vlSelf->__PVT__u_spictrl__DOT__spi_rise 
                = vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__running;
        } else {
            vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next = 0U;
        }
        if (vlSelf->spi_clk) {
            vlSelf->__PVT__u_spictrl__DOT__spi_fall 
                = vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__running;
        }
    } else {
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_next 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter)));
        vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next 
            = (1U & (IData)(vlSelf->spi_clk));
    }
    vlSelf->__PVT__u_spictrl__DOT__rx_done = (((IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter) 
                                               == ((IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt) 
                                                   - (IData)(1U))) 
                                              & (IData)(vlSelf->__PVT__u_spictrl__DOT__spi_rise));
    vlSelf->__PVT__u_spictrl__DOT__tx_done = (((IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter) 
                                               == ((IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt) 
                                                   - (IData)(1U))) 
                                              & (IData)(vlSelf->__PVT__u_spictrl__DOT__spi_fall));
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_next 
        = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter;
    vlSelf->__PVT__s_eot = 0U;
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_next 
        = vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter;
    vlSelf->__PVT__u_spictrl__DOT__state_next = vlSelf->__PVT__u_spictrl__DOT__state;
    vlSelf->__PVT__u_spictrl__DOT__spi_cs = 1U;
    vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 0U;
    vlSelf->__PVT__u_spictrl__DOT__counter_rx = 0U;
    vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid = 0U;
    vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = 0U;
    vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 0U;
    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 0U;
    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 0U;
    vlSelf->__PVT__u_spictrl__DOT__en_quad = ((IData)(vlSelf->__PVT__spi_qrd) 
                                              | ((IData)(vlSelf->__PVT__spi_qwr) 
                                                 | (IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad_int)));
    vlSelf->__PVT__u_spictrl__DOT__data_to_tx = 0U;
    vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid = 0U;
    if (((((((((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__spi_ctrl_status = (1U | (IData)(vlSelf->__PVT__spi_ctrl_status));
            if (((((IData)(vlSelf->__PVT__spi_rd) | (IData)(vlSelf->__PVT__spi_wr)) 
                  | (IData)(vlSelf->__PVT__spi_qrd)) 
                 | (IData)(vlSelf->__PVT__spi_qwr))) {
                if ((0U != (IData)(vlSelf->__PVT__spi_cmd_len))) {
                    vlSelf->__PVT__u_spictrl__DOT__state_next = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                } else if ((0U != (IData)(vlSelf->__PVT__spi_addr_len))) {
                    vlSelf->__PVT__u_spictrl__DOT__state_next = 2U;
                    vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                } else if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if (((IData)(vlSelf->__PVT__spi_rd) 
                         | (IData)(vlSelf->__PVT__spi_qrd))) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 4U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 6U;
                        }
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__state_next 
                            = ((0U != (IData)(vlSelf->__PVT__spi_dummy_wr))
                                ? 4U : 5U);
                        vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                    }
                }
                if ((0U == (IData)(vlSelf->__PVT__spi_cmd_len))) {
                    if ((0U == (IData)(vlSelf->__PVT__spi_addr_len))) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                            if (((IData)(vlSelf->__PVT__spi_rd) 
                                 | (IData)(vlSelf->__PVT__spi_qrd))) {
                                if ((0U == (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                                    vlSelf->__PVT__u_spictrl__DOT__counter_rx 
                                        = vlSelf->__PVT__spi_data_len;
                                    vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->__PVT__u_spictrl__DOT__state_next = 0U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__spi_ctrl_status = (2U | (IData)(vlSelf->__PVT__spi_ctrl_status));
            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                if ((0U != (IData)(vlSelf->__PVT__spi_addr_len))) {
                    vlSelf->__PVT__u_spictrl__DOT__state_next = 2U;
                    vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                } else if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 4U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 6U;
                        }
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__state_next 
                            = ((0U != (IData)(vlSelf->__PVT__spi_dummy_wr))
                                ? 4U : 5U);
                        vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                    }
                } else {
                    vlSelf->__PVT__u_spictrl__DOT__state_next = 0U;
                }
                if ((0U == (IData)(vlSelf->__PVT__spi_addr_len))) {
                    if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                        if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                            if ((0U == (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                                vlSelf->__PVT__u_spictrl__DOT__counter_rx 
                                    = vlSelf->__PVT__spi_data_len;
                                vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid = 1U;
                            }
                        }
                    }
                }
            } else {
                vlSelf->__PVT__u_spictrl__DOT__state_next = 1U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__spi_ctrl_status = (4U | (IData)(vlSelf->__PVT__spi_ctrl_status));
            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 4U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 6U;
                        }
                        if ((0U == (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__counter_rx 
                                = vlSelf->__PVT__spi_data_len;
                            vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid = 1U;
                        }
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__state_next 
                            = ((0U != (IData)(vlSelf->__PVT__spi_dummy_wr))
                                ? 4U : 5U);
                        vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                    }
                } else {
                    vlSelf->__PVT__u_spictrl__DOT__state_next = 0U;
                }
            }
        } else {
            vlSelf->__PVT__spi_ctrl_status = ((3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))
                                               ? (8U 
                                                  | (IData)(vlSelf->__PVT__spi_ctrl_status))
                                               : ((4U 
                                                   == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))
                                                   ? 
                                                  (0x10U 
                                                   | (IData)(vlSelf->__PVT__spi_ctrl_status))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))
                                                    ? 
                                                   (0x20U 
                                                    | (IData)(vlSelf->__PVT__spi_ctrl_status))
                                                    : 
                                                   (0x40U 
                                                    | (IData)(vlSelf->__PVT__spi_ctrl_status)))));
            if ((3U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                    if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                            if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                                vlSelf->__PVT__u_spictrl__DOT__state_next = 6U;
                                vlSelf->__PVT__u_spictrl__DOT__counter_rx 
                                    = vlSelf->__PVT__spi_data_len;
                                vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid = 1U;
                            } else {
                                vlSelf->__PVT__u_spictrl__DOT__state_next = 5U;
                            }
                            if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__do_rx)))) {
                                vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = 1U;
                            }
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__state_next = 0U;
                        }
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__state_next = 4U;
                    }
                } else {
                    vlSelf->__PVT__u_spictrl__DOT__state_next 
                        = ((5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))
                            ? ((IData)(vlSelf->__PVT__u_spictrl__DOT__tx_done)
                                ? 0U : 5U) : ((6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))
                                               ? ((IData)(vlSelf->__PVT__u_spictrl__DOT__rx_done)
                                                   ? 7U
                                                   : 6U)
                                               : ((IData)(vlSelf->__PVT__u_spictrl__DOT__spi_fall)
                                                   ? 0U
                                                   : 7U)));
                }
            }
        }
        if ((0U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            if ((1U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                if ((2U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                    if ((3U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                        if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                                if ((0U == (IData)(vlSelf->__PVT__spi_data_len))) {
                                    vlSelf->__PVT__s_eot = 1U;
                                }
                            }
                        } else if ((5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                                vlSelf->__PVT__s_eot = 1U;
                            }
                        } else if ((6U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                            if (vlSelf->__PVT__u_spictrl__DOT__spi_fall) {
                                vlSelf->__PVT__s_eot = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->__PVT__u_spictrl__DOT__spi_cs = ((0U 
                                                  == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)) 
                                                 && (1U 
                                                     & (~ 
                                                        ((((IData)(vlSelf->__PVT__spi_rd) 
                                                           | (IData)(vlSelf->__PVT__spi_wr)) 
                                                          | (IData)(vlSelf->__PVT__spi_qrd)) 
                                                         | (IData)(vlSelf->__PVT__spi_qwr)))));
    }
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt_next 
        = (0xffffU & ((IData)(vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid)
                       ? ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                           ? VL_SHIFTR_III(16,16,32, (IData)(vlSelf->__PVT__u_spictrl__DOT__counter_rx), 2U)
                           : (IData)(vlSelf->__PVT__u_spictrl__DOT__counter_rx))
                       : (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt)));
    vlSelf->__PVT__u_spictrl__DOT__s_spi_mode = 2U;
    vlSelf->__PVT__u_spictrl__DOT__counter_tx = 0U;
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__reg_done 
        = (((~ (IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)) 
            & (0x1fU == (0x1fU & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter)))) 
           | ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad) 
              & (7U == (7U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter)))));
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__reg_done 
        = (((~ (IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)) 
            & (0x1fU == (0x1fU & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter)))) 
           | ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad) 
              & (7U == (7U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter)))));
    if (((((((((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__s_spi_mode = 2U;
            if (((((IData)(vlSelf->__PVT__spi_rd) | (IData)(vlSelf->__PVT__spi_wr)) 
                  | (IData)(vlSelf->__PVT__spi_qrd)) 
                 | (IData)(vlSelf->__PVT__spi_qwr))) {
                if ((0U == (IData)(vlSelf->__PVT__spi_cmd_len))) {
                    if ((0U == (IData)(vlSelf->__PVT__spi_addr_len))) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                            if (((IData)(vlSelf->__PVT__spi_rd) 
                                 | (IData)(vlSelf->__PVT__spi_qrd))) {
                                if ((0U == (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                                    vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = 1U;
                                }
                            }
                        }
                    }
                }
                if ((0U != (IData)(vlSelf->__PVT__spi_cmd_len))) {
                    vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 2U;
                    vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                        = (((IData)(vlSelf->__PVT__spi_qrd) 
                            | (IData)(vlSelf->__PVT__spi_qwr))
                            ? 1U : 0U);
                    vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                        = vlSelf->__PVT__spi_cmd_len;
                } else if ((0U != (IData)(vlSelf->__PVT__spi_addr_len))) {
                    vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 3U;
                    vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                        = (((IData)(vlSelf->__PVT__spi_qrd) 
                            | (IData)(vlSelf->__PVT__spi_qwr))
                            ? 1U : 0U);
                    vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                        = vlSelf->__PVT__spi_addr_len;
                } else if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if (((IData)(vlSelf->__PVT__spi_rd) 
                         | (IData)(vlSelf->__PVT__spi_qrd))) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? (0xfffcU & ((IData)(vlSelf->__PVT__spi_dummy_rd) 
                                                  << 2U))
                                    : (IData)(vlSelf->__PVT__spi_dummy_rd));
                        }
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__spi_qrd)
                                ? 2U : 0U);
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_wr))) {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? (0xfffcU & ((IData)(vlSelf->__PVT__spi_dummy_wr) 
                                                  << 2U))
                                    : (IData)(vlSelf->__PVT__spi_dummy_wr));
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 4U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = vlSelf->__PVT__spi_data_len;
                        }
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__spi_qwr)
                                ? 1U : 0U);
                    }
                    if ((1U & (~ ((IData)(vlSelf->__PVT__spi_rd) 
                                  | (IData)(vlSelf->__PVT__spi_qrd))))) {
                        if ((0U == (IData)(vlSelf->__PVT__spi_dummy_wr))) {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 0U;
                        }
                    }
                }
            }
        } else if ((1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                    ? 1U : 0U);
            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                if ((0U == (IData)(vlSelf->__PVT__spi_addr_len))) {
                    if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                        if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                            if ((0U == (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                                vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = 1U;
                            }
                        }
                    }
                }
                if ((0U != (IData)(vlSelf->__PVT__spi_addr_len))) {
                    vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 1U;
                    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 3U;
                    vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                        = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                            ? 1U : 0U);
                    vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                        = vlSelf->__PVT__spi_addr_len;
                } else if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? (0xfffcU & ((IData)(vlSelf->__PVT__spi_dummy_rd) 
                                                  << 2U))
                                    : (IData)(vlSelf->__PVT__spi_dummy_rd));
                        }
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                ? 2U : 0U);
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_wr))) {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? (0xfffcU & ((IData)(vlSelf->__PVT__spi_dummy_wr) 
                                                  << 2U))
                                    : (IData)(vlSelf->__PVT__spi_dummy_wr));
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 4U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = vlSelf->__PVT__spi_data_len;
                        }
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                ? 1U : 0U);
                    }
                    if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__do_rx)))) {
                        if ((0U == (IData)(vlSelf->__PVT__spi_dummy_wr))) {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 1U;
                        }
                    }
                }
            } else {
                vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
            vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                    ? 1U : 0U);
            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                        if ((0U == (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = 1U;
                        }
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_rd))) {
                            vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? (0xfffcU & ((IData)(vlSelf->__PVT__spi_dummy_rd) 
                                                  << 2U))
                                    : (IData)(vlSelf->__PVT__spi_dummy_rd));
                        }
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                ? 2U : 0U);
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                        if ((0U != (IData)(vlSelf->__PVT__spi_dummy_wr))) {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? (0xfffcU & ((IData)(vlSelf->__PVT__spi_dummy_wr) 
                                                  << 2U))
                                    : (IData)(vlSelf->__PVT__spi_dummy_wr));
                        } else {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 4U;
                            vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                = vlSelf->__PVT__spi_data_len;
                        }
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                ? 1U : 0U);
                    }
                    if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__do_rx)))) {
                        if ((0U == (IData)(vlSelf->__PVT__spi_dummy_wr))) {
                            vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 1U;
                        }
                    }
                }
            }
        } else {
            if ((3U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__tx_done)))) {
                        vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 1U;
                    }
                    vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                        = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                            ? 2U : 0U);
                    if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                        if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                            if (vlSelf->__PVT__u_spictrl__DOT__do_rx) {
                                vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = 1U;
                            }
                            if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__do_rx)))) {
                                vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                                    = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                        ? 1U : 0U);
                                vlSelf->__PVT__u_spictrl__DOT__counter_tx 
                                    = vlSelf->__PVT__spi_data_len;
                            }
                        }
                    }
                } else {
                    if ((5U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                        if ((6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__rx_done)))) {
                                vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = 1U;
                            }
                        }
                    }
                    if ((5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                        vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = 4U;
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                ? 1U : 0U);
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__s_spi_mode 
                            = ((6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))
                                ? ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                    ? 2U : 0U) : ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                                                   ? 2U
                                                   : 0U));
                    }
                }
                if ((4U != (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                    if ((5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                        vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = 1U;
                    }
                }
            }
            if ((3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
            } else if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                    if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                        if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__do_rx)))) {
                            vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                        }
                    }
                } else {
                    vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
                }
            } else if ((5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
                vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = 1U;
            }
        }
    }
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt_next 
        = (0xffffU & ((IData)(vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid)
                       ? ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                           ? VL_SHIFTR_III(16,16,32, (IData)(vlSelf->__PVT__u_spictrl__DOT__counter_tx), 2U)
                           : (IData)(vlSelf->__PVT__u_spictrl__DOT__counter_tx))
                       : (IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt)));
    vlSelf->__PVT__spi_ctrl_data_rx_valid = 0U;
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS 
        = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS;
    if ((2U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
        vlSelf->__PVT__spi_ctrl_data_rx_valid = 1U;
        if ((1U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
            if ((0xaU != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements))) {
                vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 0U;
            }
        } else if ((0xaU != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements))) {
            vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 1U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
        if (vlSelf->__PVT__u_spictrl__DOT__spi_rise) {
            if (vlSelf->__PVT__u_spictrl__DOT__rx_done) {
                vlSelf->__PVT__spi_ctrl_data_rx_valid = 1U;
                vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS 
                    = ((0xaU != (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements))
                        ? 0U : 3U);
            } else if (vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__reg_done) {
                vlSelf->__PVT__spi_ctrl_data_rx_valid = 1U;
                if ((0xaU == (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements))) {
                    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 2U;
                }
            }
        }
    } else if (vlSelf->__PVT__u_spictrl__DOT__spi_en_rx) {
        vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = 1U;
    }
    vlSelf->__PVT__u_spictrl__DOT__rx_clk_en = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
            vlSelf->__PVT__u_spictrl__DOT__rx_clk_en = 1U;
            if (vlSelf->__PVT__u_spictrl__DOT__spi_rise) {
                vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter)));
                if (vlSelf->__PVT__u_spictrl__DOT__rx_done) {
                    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_next = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__rx_done)))) {
                    if (vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__reg_done) {
                        if ((0xaU == (IData)(vlSelf->__PVT__u_rxfifo__DOT__elements))) {
                            vlSelf->__PVT__u_spictrl__DOT__rx_clk_en = 0U;
                        }
                    }
                }
            }
        } else {
            vlSelf->__PVT__u_spictrl__DOT__rx_clk_en = 0U;
        }
    }
    if (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 1U;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
            = vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int;
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready = 0U;
        vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = 0U;
        if (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
            if (vlSelf->__PVT__u_spictrl__DOT__spi_fall) {
                vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter)));
                if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_next = 0U;
                }
            }
        }
    } else {
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 0U;
        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
            = vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int;
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready = 0U;
        vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = 0U;
    }
    if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx = 0U;
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx = 0U;
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid = 1U;
    } else if ((2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx = vlSelf->__PVT__spi_cmd;
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid 
            = vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid;
    } else if ((3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx = vlSelf->__PVT__spi_addr;
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid 
            = vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid;
    } else if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx = 
            ((9U >= (IData)(vlSelf->__PVT__u_txfifo__DOT__pointer_out))
              ? vlSelf->__PVT__u_txfifo__DOT__buffer
             [vlSelf->__PVT__u_txfifo__DOT__pointer_out]
              : 0U);
        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid 
            = (0U != (IData)(vlSelf->__PVT__u_txfifo__DOT__elements));
    }
    if (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
        if (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_CS) {
            vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = 1U;
            if (vlSelf->__PVT__u_spictrl__DOT__spi_fall) {
                vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
                    = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                        ? (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int 
                           << 4U) : (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int 
                                     << 1U));
                if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                    if (((IData)(vlSelf->__PVT__u_spictrl__DOT__spi_en_tx) 
                         & (IData)(vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid))) {
                        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 1U;
                        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
                            = vlSelf->__PVT__u_spictrl__DOT__data_to_tx;
                        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready = 1U;
                    } else {
                        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 0U;
                    }
                    if ((1U & (~ ((IData)(vlSelf->__PVT__u_spictrl__DOT__spi_en_tx) 
                                  & (IData)(vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid))))) {
                        vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = 0U;
                    }
                } else if (vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__reg_done) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid)))) {
                        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 0U;
                        vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = 0U;
                    }
                    if (vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid) {
                        vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
                            = vlSelf->__PVT__u_spictrl__DOT__data_to_tx;
                        vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready = 1U;
                    }
                }
            }
        }
    } else {
        if (((IData)(vlSelf->__PVT__u_spictrl__DOT__spi_en_tx) 
             & (IData)(vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid))) {
            vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = 1U;
            vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next 
                = vlSelf->__PVT__u_spictrl__DOT__data_to_tx;
            vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready = 1U;
        }
        vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = 0U;
    }
    vlSelf->__PVT__spi_ctrl_data_tx_ready = 0U;
    if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        vlSelf->__PVT__spi_ctrl_data_tx_ready = 0U;
    } else if ((1U != (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
        if ((2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
            vlSelf->__PVT__spi_ctrl_data_tx_ready = 0U;
        } else if ((3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
            vlSelf->__PVT__spi_ctrl_data_tx_ready = 0U;
        } else if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux))) {
            vlSelf->__PVT__spi_ctrl_data_tx_ready = vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready;
        }
    }
    vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 0U;
    if (((((((((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)) 
               | (1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
              | (2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
             | (3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
            | (4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
           | (5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
          | (6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) 
         | (7U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)))) {
        if ((0U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            if (((((IData)(vlSelf->__PVT__spi_rd) | (IData)(vlSelf->__PVT__spi_wr)) 
                  | (IData)(vlSelf->__PVT__spi_qrd)) 
                 | (IData)(vlSelf->__PVT__spi_qwr))) {
                vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 1U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 1U;
        } else if ((2U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 1U;
        } else if ((3U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 1U;
        } else if ((4U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 1U;
            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                if ((0U != (IData)(vlSelf->__PVT__spi_data_len))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__u_spictrl__DOT__do_rx)))) {
                        vlSelf->__PVT__u_spictrl__DOT__spi_clock_en 
                            = vlSelf->__PVT__u_spictrl__DOT__tx_clk_en;
                    }
                }
            }
        } else if ((5U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state))) {
            vlSelf->__PVT__u_spictrl__DOT__spi_clock_en 
                = vlSelf->__PVT__u_spictrl__DOT__tx_clk_en;
            if (vlSelf->__PVT__u_spictrl__DOT__tx_done) {
                vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = 0U;
            }
        } else {
            vlSelf->__PVT__u_spictrl__DOT__spi_clock_en 
                = ((6U == (IData)(vlSelf->__PVT__u_spictrl__DOT__state)) 
                   && (IData)(vlSelf->__PVT__u_spictrl__DOT__rx_clk_en));
        }
    }
}

VL_INLINE_OPT void Vtb_verilator_apb_spi_master__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi2__1(Vtb_verilator_apb_spi_master__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_spi_master__A20___nba_sequent__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi2__1\n"); );
    // Body
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int_next 
        = vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int;
    if ((1U & (~ ((IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS))) {
            if (vlSelf->__PVT__u_spictrl__DOT__spi_rise) {
                vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int_next 
                    = ((IData)(vlSelf->__PVT__u_spictrl__DOT__en_quad)
                        ? ((vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int 
                            << 4U) | (0xfU & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_gpioB__DOT__r_gpio_sync1 
                                              >> 0xaU)))
                        : ((vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int 
                            << 1U) | (1U & (vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_gpioB__DOT__r_gpio_sync1 
                                            >> 0xbU))));
            }
        }
    }
}

VL_INLINE_OPT void Vtb_verilator_apb_spi_master__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi2__0(Vtb_verilator_apb_spi_master__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_spi_master__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi2__0\n"); );
    // Init
    CData/*0:0*/ u_axiregs__DOT____VdfgRegularize_h5baf15b8_0_0;
    u_axiregs__DOT____VdfgRegularize_h5baf15b8_0_0 = 0;
    // Body
    u_axiregs__DOT____VdfgRegularize_h5baf15b8_0_0 
        = ((IData)(vlSymsp->TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_spi2_apb_icb2apb.__PVT__apb_enable_dfflr__DOT__qout_r) 
           & (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_valid));
    vlSelf->__PVT__spi_data_tx_valid = ((IData)(u_axiregs__DOT____VdfgRegularize_h5baf15b8_0_0) 
                                        & ((~ (IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_read)) 
                                           & (0x18U 
                                              == (0x3cU 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr))));
    vlSelf->__PVT__spi_data_rx_ready = ((IData)(u_axiregs__DOT____VdfgRegularize_h5baf15b8_0_0) 
                                        & ((IData)(vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_read) 
                                           & (0x20U 
                                              == (0x3cU 
                                                  & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr))));
}

VL_INLINE_OPT void Vtb_verilator_apb_spi_master__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi2__1(Vtb_verilator_apb_spi_master__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_spi_master__A20___nba_comb__TOP__tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__u_perips_apb_spi2__1\n"); );
    // Body
    if ((0x20U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr)) {
        if ((0x10U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr)) {
            vlSelf->PRDATA = 0U;
        } else if ((8U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr)) {
            vlSelf->PRDATA = ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr)
                               ? 0U : (((IData)(vlSelf->__PVT__s_rise_int_rx) 
                                        << 1U) | (IData)(vlSelf->__PVT__s_rise_int_tx)));
        } else if ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr)) {
            vlSelf->PRDATA = 0U;
            vlSelf->PRDATA = ((0xffffffe0U & vlSelf->PRDATA) 
                              | (IData)(vlSelf->__PVT__s_th_tx));
            vlSelf->PRDATA = ((0xffffe0ffU & vlSelf->PRDATA) 
                              | ((IData)(vlSelf->__PVT__s_th_rx) 
                                 << 8U));
            vlSelf->PRDATA = ((0x7fffffffU & vlSelf->PRDATA) 
                              | ((IData)(vlSelf->__PVT__s_int_en) 
                                 << 0x1fU));
        } else {
            vlSelf->PRDATA = ((9U >= (IData)(vlSelf->__PVT__u_rxfifo__DOT__pointer_out))
                               ? vlSelf->__PVT__u_rxfifo__DOT__buffer
                              [vlSelf->__PVT__u_rxfifo__DOT__pointer_out]
                               : 0U);
        }
    } else {
        vlSelf->PRDATA = ((0x10U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr)
                           ? ((8U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr)
                               ? 0U : ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr)
                                        ? (((IData)(vlSelf->__PVT__spi_dummy_wr) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->__PVT__spi_dummy_rd))
                                        : (((IData)(vlSelf->__PVT__spi_data_len) 
                                            << 0x10U) 
                                           | (((IData)(vlSelf->__PVT__spi_addr_len) 
                                               << 8U) 
                                              | (IData)(vlSelf->__PVT__spi_cmd_len)))))
                           : ((8U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr)
                               ? ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr)
                                   ? vlSelf->__PVT__spi_addr
                                   : vlSelf->__PVT__spi_cmd)
                               : ((4U & vlSymsp->TOP.tb_verilator__DOT__u_e203_soc_top__DOT__u_e203_subsys_top__DOT__u_e203_subsys_main__DOT__u_e203_subsys_perips__DOT__spi2_apb_icb_cmd_addr)
                                   ? (IData)(vlSelf->__PVT__spi_clk_div)
                                   : (((IData)(vlSelf->__PVT__u_txfifo__DOT__elements) 
                                       << 0x18U) | 
                                      (((IData)(vlSelf->__PVT__u_rxfifo__DOT__elements) 
                                        << 0x10U) | (IData)(vlSelf->__PVT__spi_ctrl_status))))));
    }
}
