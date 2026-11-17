// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_adder_selfcheck__Syms.h"


VL_ATTR_COLD void Vtb_adder_selfcheck___024root__trace_init_sub__TOP__0(Vtb_adder_selfcheck___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root__trace_init_sub__TOP__0\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_adder_selfcheck", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_adder_selfcheck___024root__trace_init_top(Vtb_adder_selfcheck___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root__trace_init_top\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_adder_selfcheck___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_adder_selfcheck___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_adder_selfcheck___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_adder_selfcheck___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_adder_selfcheck___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_adder_selfcheck___024root__trace_register(Vtb_adder_selfcheck___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root__trace_register\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_adder_selfcheck___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_adder_selfcheck___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_adder_selfcheck___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_adder_selfcheck___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_adder_selfcheck___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root__trace_const_0\n"); );
    // Body
    Vtb_adder_selfcheck___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_adder_selfcheck___024root*>(voidSelf);
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_adder_selfcheck___024root__trace_full_0_sub_0(Vtb_adder_selfcheck___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_adder_selfcheck___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root__trace_full_0\n"); );
    // Body
    Vtb_adder_selfcheck___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_adder_selfcheck___024root*>(voidSelf);
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_adder_selfcheck___024root__trace_full_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

VL_ATTR_COLD void Vtb_adder_selfcheck___024root__trace_full_0_sub_0(Vtb_adder_selfcheck___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root__trace_full_0_sub_0\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.tb_adder_selfcheck__DOT__a),4);
    bufp->fullCData(oldp+1,(vlSelfRef.tb_adder_selfcheck__DOT__b),4);
    bufp->fullBit(oldp+2,(vlSelfRef.tb_adder_selfcheck__DOT__cin));
    bufp->fullCData(oldp+3,((0x0000000fU & ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__a) 
                                            + ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__b) 
                                               + (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__cin))))),4);
    bufp->fullBit(oldp+4,((1U & (((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__a) 
                                  + ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__cin) 
                                     + (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__b))) 
                                 >> 4U))));
    bufp->fullIData(oldp+5,(vlSelfRef.tb_adder_selfcheck__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_adder_selfcheck__DOT__pass_count),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_adder_selfcheck__DOT__fail_count),32);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_adder_selfcheck__DOT__expected),5);
    bufp->fullBit(oldp+9,(vlSelfRef.tb_adder_selfcheck__DOT__clk));
}
