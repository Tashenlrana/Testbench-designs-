// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_adder_selfcheck__pch.h"


void Vtb_adder_selfcheck__Syms__ctor(Vtb_adder_selfcheck__Syms* vlSymsp, const char* namep) {
    // Setup top module instance
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP, vlSymsp, namep);
    // Check resources
    Verilated::stackCheck(21);
    // Setup names of the model and of its top module instances
    vlSymsp->__Vm_topNames[0] = vlSymsp->name();
    vlSymsp->__Vm_topNames[1] = vlSymsp->__Vm_isRoot ? Verilated::catName(vlSymsp->name(), "tb_adder_selfcheck") : vlSymsp->name();
    // Setup sub module instances
    // Configure time unit / time precision
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
}

Vtb_adder_selfcheck__Syms::Vtb_adder_selfcheck__Syms(VerilatedContext* contextp, Vtb_adder_selfcheck* modelp, const char* namep, bool isRoot)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_isRoot{isRoot}
    , __Vm_didInit{modelp->m_didInit}
{
    Vtb_adder_selfcheck__Syms__ctor(this, namep);
}

void Vtb_adder_selfcheck__Syms__dtor(Vtb_adder_selfcheck__Syms* vlSymsp) {
    // Tear down scopes
    // Tear down sub module instances
    // Tear down top module instance
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP);
}

Vtb_adder_selfcheck__Syms::~Vtb_adder_selfcheck__Syms() {
    Vtb_adder_selfcheck__Syms__dtor(this);
}
