// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_adder_selfcheck.h for the primary calling header

#include "Vtb_adder_selfcheck__pch.h"

void Vtb_adder_selfcheck___024root___ctor_var_reset(Vtb_adder_selfcheck___024root* vlSelf);

void Vtb_adder_selfcheck___024root__ctor(Vtb_adder_selfcheck___024root* vlSelf, Vtb_adder_selfcheck__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h51ddc8c8__0);
    // Reset structure values
    Vtb_adder_selfcheck___024root___ctor_var_reset(vlSelf);
}

Vtb_adder_selfcheck___024root::Vtb_adder_selfcheck___024root(Vtb_adder_selfcheck__Syms* symsp, const char* namep) {
    Vtb_adder_selfcheck___024root__ctor(this, symsp, namep);
}

void Vtb_adder_selfcheck___024root__dtor(Vtb_adder_selfcheck___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h51ddc8c8__0);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_adder_selfcheck___024root::~Vtb_adder_selfcheck___024root() {
    Vtb_adder_selfcheck___024root__dtor(this);
}
