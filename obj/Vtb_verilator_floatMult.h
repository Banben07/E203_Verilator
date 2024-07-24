// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_verilator.h for the primary calling header

#ifndef VERILATED_VTB_VERILATOR_FLOATMULT_H_
#define VERILATED_VTB_VERILATOR_FLOATMULT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_verilator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_verilator_floatMult final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__overflow;
    CData/*0:0*/ __PVT__zero;
    CData/*4:0*/ __PVT__exSubCor;
    CData/*4:0*/ __PVT__exSum_fault;
    CData/*0:0*/ __PVT__ex_cannot_correct;
    CData/*5:0*/ __PVT__exSum_prebais;
    CData/*5:0*/ __PVT__exSum_abs;
    CData/*0:0*/ __PVT__inf_num;
    VL_IN16(num1,15,0);
    VL_IN16(num2,15,0);
    VL_OUT16(result,15,0);
    SData/*9:0*/ __PVT__fraSub;
    SData/*11:0*/ __PVT__float_res;
    IData/*20:0*/ __PVT__float1;
    IData/*21:0*/ __PVT__res_full;
    IData/*21:0*/ __PVT__res_full_preshift;
    VlUnpacked<IData/*20:0*/, 11> __PVT__mid;

    // INTERNAL VARIABLES
    Vtb_verilator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_verilator_floatMult(Vtb_verilator__Syms* symsp, const char* v__name);
    ~Vtb_verilator_floatMult();
    VL_UNCOPYABLE(Vtb_verilator_floatMult);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
