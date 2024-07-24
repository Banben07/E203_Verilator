// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_verilator.h for the primary calling header

#include "Vtb_verilator__pch.h"
#include "Vtb_verilator__Syms.h"
#include "Vtb_verilator___024root.h"

void Vtb_verilator___024root___ctor_var_reset(Vtb_verilator___024root* vlSelf);

Vtb_verilator___024root::Vtb_verilator___024root(Vtb_verilator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_verilator___024root___ctor_var_reset(this);
}

void Vtb_verilator___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_verilator___024root::~Vtb_verilator___024root() {
}
