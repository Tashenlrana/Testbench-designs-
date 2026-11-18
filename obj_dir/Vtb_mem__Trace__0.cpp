// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_mem__Syms.h"


void Vtb_mem___024root__trace_chg_0_sub_0(Vtb_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_mem___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_chg_0\n"); );
    // Body
    Vtb_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mem___024root*>(voidSelf);
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_mem___024root__trace_chg_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

void Vtb_mem___024root__trace_chg_dtype____0(Vtb_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const ::VlUnpacked<::CData/*7:0*/, 8>& __VdtypeVar);

void Vtb_mem___024root__trace_chg_0_sub_0(Vtb_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_chg_0_sub_0\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__VtraceActivity[1U] 
                      | vlSelfRef.__VtraceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_mem__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_mem__DOT__wr_en));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_mem__DOT__rd_en));
        bufp->chgCData(oldp+3,(vlSelfRef.tb_mem__DOT__addr),3);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_mem__DOT__wr_data),8);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_mem__DOT__state),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_mem__DOT__tx_count),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_mem__DOT__cycle),32);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_mem__DOT__expected[0]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.tb_mem__DOT__expected[1]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_mem__DOT__expected[2]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.tb_mem__DOT__expected[3]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_mem__DOT__expected[4]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_mem__DOT__expected[5]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.tb_mem__DOT__expected[6]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_mem__DOT__expected[7]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.tb_mem__DOT__read_addr),3);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_mem__DOT__k),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__VtraceActivity[3U]))) {
        bufp->chgCData(oldp+18,(vlSelfRef.tb_mem__DOT__dut__DOT__rd_data),8);
        bufp->chgBit(oldp+19,(vlSelfRef.tb_mem__DOT__dut__DOT__ack));
        Vtb_mem___024root__trace_chg_dtype____0(vlSelf, bufp, 20, vlSelfRef.tb_mem__DOT__dut__DOT__mem);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_mem__DOT__dut__DOT__i),32);
    }
    bufp->chgBit(oldp+29,(vlSelfRef.tb_mem__DOT__clk));
}

void Vtb_mem___024root__trace_chg_dtype____0(Vtb_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const ::VlUnpacked<::CData/*7:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_chg_dtype____0\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),8);
}

void Vtb_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_cleanup\n"); );
    // Body
    Vtb_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mem___024root*>(voidSelf);
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->vlInst.TOP.__VtraceActivity[0U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[1U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[2U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[3U] = 0U;
}
