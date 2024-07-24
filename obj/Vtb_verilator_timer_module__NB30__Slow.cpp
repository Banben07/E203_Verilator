// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator__Syms.h"
#include "Vtb_verilator_timer_module__NB30.h"

void Vtb_verilator_timer_module__NB30___ctor_var_reset(Vtb_verilator_timer_module__NB30* vlSelf);

Vtb_verilator_timer_module__NB30::Vtb_verilator_timer_module__NB30(Vtb_verilator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_verilator_timer_module__NB30___ctor_var_reset(this);
}

void Vtb_verilator_timer_module__NB30::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_verilator_timer_module__NB30::~Vtb_verilator_timer_module__NB30() {
}
