// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator_apb_spi_master__A20.h"

VL_ATTR_COLD void Vtb_verilator_apb_spi_master__A20___ctor_var_reset(Vtb_verilator_apb_spi_master__A20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_verilator_apb_spi_master__A20___ctor_var_reset\n"); );
    // Body
    vlSelf->HCLK = VL_RAND_RESET_I(1);
    vlSelf->HRESETn = VL_RAND_RESET_I(1);
    vlSelf->PADDR = VL_RAND_RESET_I(32);
    vlSelf->PWDATA = VL_RAND_RESET_I(32);
    vlSelf->PWRITE = VL_RAND_RESET_I(1);
    vlSelf->PSEL = VL_RAND_RESET_I(1);
    vlSelf->PENABLE = VL_RAND_RESET_I(1);
    vlSelf->PRDATA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PREADY = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PSLVERR = VL_RAND_RESET_I(1);
    vlSelf->events_o = VL_RAND_RESET_I(1);
    vlSelf->spi_clk = VL_RAND_RESET_I(1);
    vlSelf->spi_csn0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_csn1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_csn2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_csn3 = VL_RAND_RESET_I(1);
    vlSelf->spi_sdo0 = VL_RAND_RESET_I(1);
    vlSelf->spi_sdo1 = VL_RAND_RESET_I(1);
    vlSelf->spi_sdo2 = VL_RAND_RESET_I(1);
    vlSelf->spi_sdo3 = VL_RAND_RESET_I(1);
    vlSelf->spi_oe0 = VL_RAND_RESET_I(1);
    vlSelf->spi_oe1 = VL_RAND_RESET_I(1);
    vlSelf->spi_oe2 = VL_RAND_RESET_I(1);
    vlSelf->spi_oe3 = VL_RAND_RESET_I(1);
    vlSelf->spi_sdi0 = VL_RAND_RESET_I(1);
    vlSelf->spi_sdi1 = VL_RAND_RESET_I(1);
    vlSelf->spi_sdi2 = VL_RAND_RESET_I(1);
    vlSelf->spi_sdi3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_clk_div = VL_RAND_RESET_I(8);
    vlSelf->__PVT__spi_clk_div_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__spi_addr_len = VL_RAND_RESET_I(6);
    vlSelf->__PVT__spi_cmd = VL_RAND_RESET_I(32);
    vlSelf->__PVT__spi_cmd_len = VL_RAND_RESET_I(6);
    vlSelf->__PVT__spi_data_len = VL_RAND_RESET_I(16);
    vlSelf->__PVT__spi_dummy_rd = VL_RAND_RESET_I(16);
    vlSelf->__PVT__spi_dummy_wr = VL_RAND_RESET_I(16);
    vlSelf->__PVT__spi_swrst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_rd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_qrd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_qwr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_csreg = VL_RAND_RESET_I(4);
    vlSelf->__PVT__spi_data_tx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_data_rx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_data_rx_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_ctrl_status = VL_RAND_RESET_I(7);
    vlSelf->__PVT__spi_ctrl_data_tx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_ctrl_data_tx_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_ctrl_data_rx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__spi_mode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__s_eot = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_th_tx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__s_th_rx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__s_rise_int_tx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_rise_int_rx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_int_tx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_int_rx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_int_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_txfifo__DOT__pointer_in = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_txfifo__DOT__pointer_out = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_txfifo__DOT__elements = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__PVT__u_txfifo__DOT__buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_txfifo__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_txfifo__DOT__loop1 = VL_RAND_RESET_I(32);
    vlSelf->u_txfifo__DOT____Vlvbound_h4efa324b__0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_rxfifo__DOT__pointer_in = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_rxfifo__DOT__pointer_out = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_rxfifo__DOT__elements = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__PVT__u_rxfifo__DOT__buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_rxfifo__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rxfifo__DOT__loop1 = VL_RAND_RESET_I(32);
    vlSelf->u_rxfifo__DOT____Vlvbound_h4efa324b__0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_spictrl__DOT__spi_rise = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__spi_fall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__spi_clock_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__spi_en_tx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__spi_en_rx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__counter_tx = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_spictrl__DOT__counter_tx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__counter_rx = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_spictrl__DOT__counter_rx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__data_to_tx = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_spictrl__DOT__data_to_tx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__data_to_tx_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__en_quad = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__en_quad_int = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__do_tx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__do_rx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__tx_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__rx_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__s_spi_mode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__spi_cs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__tx_clk_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__rx_clk_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__ctrl_data_mux = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_spictrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_spictrl__DOT__state_next = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_trgt_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__counter_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__spi_clk_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__u_clkgen__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__data_int_next = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_next = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__counter_trgt_next = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__reg_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_CS = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__u_txreg__DOT__tx_NS = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__data_int_next = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_next = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__counter_trgt_next = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__reg_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_CS = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_spictrl__DOT__u_rxreg__DOT__rx_NS = VL_RAND_RESET_I(2);
}
