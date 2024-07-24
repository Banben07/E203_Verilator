// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_verilator.h for the primary calling header

#ifndef VERILATED_VTB_VERILATOR_FLOATADD_H_
#define VERILATED_VTB_VERILATOR_FLOATADD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_verilator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_verilator_floatAdd final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__overflow;
    CData/*0:0*/ __PVT__zero;
    CData/*4:0*/ __PVT__big_ex;
    CData/*4:0*/ __PVT__small_ex;
    CData/*4:0*/ __PVT__ex_diff;
    CData/*3:0*/ __PVT__shift_am;
    CData/*0:0*/ __PVT__neg_exp;
    CData/*0:0*/ __PVT__sum_carry;
    CData/*0:0*/ __PVT__sameSign;
    CData/*0:0*/ __PVT__zeroSmall;
    CData/*0:0*/ __PVT__inf_num;
    CData/*4:0*/ __PVT__res_exp_same_s;
    VL_IN16(num1,15,0);
    VL_IN16(num2,15,0);
    VL_OUT16(result,15,0);
    SData/*15:0*/ __PVT__mid_result;
    SData/*15:0*/ __PVT__bigNum;
    SData/*15:0*/ __PVT__smallNum;
    SData/*10:0*/ __PVT__big_float;
    SData/*10:0*/ __PVT__sign_small_float;
    SData/*10:0*/ __PVT__shifted_small_float;
    SData/*9:0*/ __PVT__small_extension;
    SData/*10:0*/ __PVT__sum;

    // INTERNAL VARIABLES
    Vtb_verilator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_verilator_floatAdd(Vtb_verilator__Syms* symsp, const char* v__name);
    ~Vtb_verilator_floatAdd();
    VL_UNCOPYABLE(Vtb_verilator_floatAdd);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
