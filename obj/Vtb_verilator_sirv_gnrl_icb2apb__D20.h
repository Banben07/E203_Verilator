// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_verilator.h for the primary calling header

#ifndef VERILATED_VTB_VERILATOR_SIRV_GNRL_ICB2APB__D20_H_
#define VERILATED_VTB_VERILATOR_SIRV_GNRL_ICB2APB__D20_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_verilator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_verilator_sirv_gnrl_icb2apb__D20 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(i_icb_cmd_valid,0,0);
        VL_OUT8(i_icb_cmd_ready,0,0);
        VL_IN8(i_icb_cmd_read,0,0);
        VL_IN8(i_icb_cmd_wmask,3,0);
        VL_IN8(__PVT__i_icb_cmd_size,1,0);
        VL_OUT8(i_icb_rsp_valid,0,0);
        VL_IN8(i_icb_rsp_ready,0,0);
        VL_OUT8(__PVT__i_icb_rsp_err,0,0);
        VL_OUT8(apb_pwrite,0,0);
        VL_OUT8(apb_pselx,0,0);
        VL_OUT8(apb_penable,0,0);
        CData/*0:0*/ __PVT__apb_enable_set;
        CData/*0:0*/ __PVT__apb_enable_ena;
        CData/*0:0*/ __PVT__apb_enable_nxt;
        CData/*0:0*/ __PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wen;
        CData/*0:0*/ __PVT__u_rsp_fifo__DOT__dp_gt0__DOT__ren;
        CData/*1:0*/ __PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_nxt;
        CData/*0:0*/ __PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_en;
        CData/*0:0*/ __PVT__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r;
        CData/*0:0*/ __PVT__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r;
        CData/*0:0*/ __PVT__apb_enable_dfflr__DOT__qout_r;
        CData/*0:0*/ __Vintraval_ha331ffbe__0;
        CData/*0:0*/ __Vintraval_h3bbf7f9e__0;
        CData/*0:0*/ __Vintraval_ha1cf8c48__0;
        CData/*0:0*/ __Vintraval_hf1e0f51e__0;
        CData/*0:0*/ __Vintraval_h0b278ce4__0;
        CData/*0:0*/ __Vintraval_h2df7890d__0;
        CData/*0:0*/ __Vintraval_h3f54d94b__0;
        CData/*0:0*/ __Vintraval_hb2c59c82__0;
        CData/*0:0*/ __Vintraval_h494bb454__0;
        CData/*0:0*/ __Vintraval_hb6882b39__0;
        CData/*0:0*/ __Vintraval_hf4765fe1__0;
        CData/*0:0*/ __Vintraval_h0301f72f__0;
        CData/*0:0*/ __Vintraval_h56343153__0;
        CData/*0:0*/ __Vintraval_hc81c32e4__0;
        CData/*0:0*/ __Vintraval_h1c395524__0;
        CData/*0:0*/ __Vintraval_he17d3f89__0;
        CData/*0:0*/ __Vintraval_he0ac10f7__0;
        CData/*0:0*/ __Vintraval_h5a9e5f65__0;
        CData/*0:0*/ __Vintraval_h11c905b9__0;
        CData/*0:0*/ __Vintraval_h2854be7c__0;
        CData/*0:0*/ __Vintraval_h1c209a53__0;
        CData/*0:0*/ __Vintraval_h18a779c5__0;
        CData/*0:0*/ __Vintraval_h72aaa4e6__0;
        CData/*0:0*/ __Vintraval_h241059f0__0;
        CData/*0:0*/ __Vintraval_h68a5d3f4__0;
        CData/*0:0*/ __Vintraval_h85431378__0;
        CData/*0:0*/ __Vintraval_hef5eef90__0;
        CData/*0:0*/ __Vintraval_h573f80c7__0;
        CData/*0:0*/ __Vintraval_h98cc63a7__0;
        CData/*0:0*/ __Vintraval_ha0714bb7__0;
        CData/*0:0*/ __Vintraval_h6f967c06__0;
        CData/*0:0*/ __Vintraval_hd473dce6__0;
        CData/*0:0*/ __Vintraval_h4f80555e__0;
        CData/*0:0*/ __Vintraval_he326474f__0;
        CData/*0:0*/ __Vintraval_ha07fadac__0;
        CData/*0:0*/ __Vintraval_h0d5151c3__0;
        CData/*0:0*/ __Vintraval_hb6832b9e__0;
        CData/*0:0*/ __Vintraval_hbdf84f3c__0;
        CData/*0:0*/ __Vintraval_h14d2426f__0;
    };
    struct {
        CData/*0:0*/ __Vintraval_h197f1b3f__0;
        CData/*0:0*/ __Vintraval_heb36c953__0;
        CData/*0:0*/ __Vintraval_h6af20574__0;
        CData/*0:0*/ __Vintraval_h8d6ac0a9__0;
        CData/*0:0*/ __Vintraval_he0b19e8e__0;
        CData/*0:0*/ __Vintraval_h2677b83f__0;
        CData/*0:0*/ __Vintraval_h24a7ea78__0;
        CData/*0:0*/ __Vintraval_h8d934228__0;
        CData/*0:0*/ __Vintraval_he8046ed5__0;
        CData/*0:0*/ __Vintraval_h2829ac8a__0;
        CData/*0:0*/ __Vintraval_hb74de3d9__0;
        CData/*0:0*/ __VdlyVal__apb_enable_dfflr__DOT__qout_r__v0;
        CData/*0:0*/ __VdlySet__apb_enable_dfflr__DOT__qout_r__v0;
        CData/*0:0*/ __VdlySet__apb_enable_dfflr__DOT__qout_r__v1;
        CData/*0:0*/ __VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0;
        CData/*0:0*/ __VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v0;
        CData/*0:0*/ __VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_31_dfflr__DOT__qout_r__v1;
        CData/*0:0*/ __VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0;
        CData/*0:0*/ __VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v0;
        CData/*0:0*/ __VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__vec_0_dfflrs__DOT__qout_r__v1;
        CData/*0:0*/ __VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0;
        CData/*0:0*/ __VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v0;
        CData/*0:0*/ __VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__wptr_vec_0_dfflrs__DOT__qout_r__v1;
        CData/*0:0*/ __VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0;
        CData/*0:0*/ __VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v0;
        CData/*0:0*/ __VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__rptr_vec_0_dfflrs__DOT__qout_r__v1;
        CData/*0:0*/ __VdlySet__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0;
        VL_IN(i_icb_cmd_addr,31,0);
        VL_IN(i_icb_cmd_wdata,31,0);
        VL_OUT(i_icb_rsp_rdata,31,0);
        VL_OUT(apb_paddr,31,0);
        VL_OUT(apb_pwdata,31,0);
        VL_IN(apb_prdata,31,0);
        IData/*31:0*/ __PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r;
        IData/*31:0*/ __Vintraval_h02b11549__0;
        IData/*31:0*/ __Vintraval_ha5083dad__0;
        IData/*31:0*/ __Vintraval_ha6cb60e1__0;
        IData/*31:0*/ __Vintraval_h10f8287f__0;
        IData/*31:0*/ __Vintraval_h792f4f96__0;
        IData/*31:0*/ __Vintraval_heb66fdc7__0;
        IData/*31:0*/ __Vintraval_h4bd730f3__0;
        IData/*31:0*/ __Vintraval_h89df4abd__0;
        IData/*31:0*/ __Vintraval_had4b1146__0;
        IData/*31:0*/ __Vintraval_hc962cb77__0;
        IData/*31:0*/ __VdlyVal__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf__BRA__0__KET____DOT__fifo_rf_dffl__DOT__qout_r__v0;
        VlUnpacked<IData/*31:0*/, 1> __PVT__u_rsp_fifo__DOT__dp_gt0__DOT__fifo_rf_r;
    };

    // INTERNAL VARIABLES
    Vtb_verilator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_verilator_sirv_gnrl_icb2apb__D20(Vtb_verilator__Syms* symsp, const char* v__name);
    ~Vtb_verilator_sirv_gnrl_icb2apb__D20();
    VL_UNCOPYABLE(Vtb_verilator_sirv_gnrl_icb2apb__D20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
