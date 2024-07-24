// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator__Syms.h"
#include "Vtb_verilator_floatMult.h"

void Vtb_verilator_floatMult___ctor_var_reset(Vtb_verilator_floatMult* vlSelf);

Vtb_verilator_floatMult::Vtb_verilator_floatMult(Vtb_verilator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_verilator_floatMult___ctor_var_reset(this);
}

void Vtb_verilator_floatMult::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_verilator_floatMult::~Vtb_verilator_floatMult() {
}
