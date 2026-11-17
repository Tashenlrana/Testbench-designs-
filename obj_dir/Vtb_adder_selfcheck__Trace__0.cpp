// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_adder_selfcheck__Syms.h"


void Vtb_adder_selfcheck___024root__trace_chg_0_sub_0(Vtb_adder_selfcheck___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_adder_selfcheck___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root__trace_chg_0\n"); );
    // Body
    Vtb_adder_selfcheck___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_adder_selfcheck___024root*>(voidSelf);
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_adder_selfcheck___024root__trace_chg_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

void Vtb_adder_selfcheck___024root__trace_chg_0_sub_0(Vtb_adder_selfcheck___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root__trace_chg_0_sub_0\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__VtraceActivity[1U] 
                      | vlSelfRef.__VtraceActivity[2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_adder_selfcheck__DOT__a),4);
        bufp->chgCData(oldp+1,(vlSelfRef.tb_adder_selfcheck__DOT__b),4);
        bufp->chgBit(oldp+2,(vlSelfRef.tb_adder_selfcheck__DOT__cin));
        bufp->chgCData(oldp+3,((0x0000000fU & ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__a) 
                                               + ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__b) 
                                                  + (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__cin))))),4);
        bufp->chgBit(oldp+4,((1U & (((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__a) 
                                     + ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__cin) 
                                        + (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__b))) 
                                    >> 4U))));
        bufp->chgIData(oldp+5,(vlSelfRef.tb_adder_selfcheck__DOT__i),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_adder_selfcheck__DOT__pass_count),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_adder_selfcheck__DOT__fail_count),32);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_adder_selfcheck__DOT__expected),5);
    }
    bufp->chgBit(oldp+9,(vlSelfRef.tb_adder_selfcheck__DOT__clk));
}

void Vtb_adder_selfcheck___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root__trace_cleanup\n"); );
    // Body
    Vtb_adder_selfcheck___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_adder_selfcheck___024root*>(voidSelf);
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->vlInst.TOP.__VtraceActivity[0U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[1U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[2U] = 0U;
}
