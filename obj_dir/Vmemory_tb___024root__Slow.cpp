// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmemory_tb.h for the primary calling header

#include "Vmemory_tb__pch.h"

void Vmemory_tb___024root___ctor_var_reset(Vmemory_tb___024root* vlSelf);

void Vmemory_tb___024root__ctor(Vmemory_tb___024root* vlSelf, Vmemory_tb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h4fa393ec__0);
    // Reset structure values
    Vmemory_tb___024root___ctor_var_reset(vlSelf);
}

Vmemory_tb___024root::Vmemory_tb___024root(Vmemory_tb__Syms* symsp, const char* namep) {
    Vmemory_tb___024root__ctor(this, symsp, namep);
}

void Vmemory_tb___024root__dtor(Vmemory_tb___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h4fa393ec__0);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vmemory_tb___024root::~Vmemory_tb___024root() {
    Vmemory_tb___024root__dtor(this);
}
