// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem.h for the primary calling header

#include "Vtb_mem__pch.h"

VlCoroutine Vtb_mem___024root___eval_initial__TOP__Vtiming__0(Vtb_mem___024root* vlSelf);
VlCoroutine Vtb_mem___024root___eval_initial__TOP__Vtiming__1(Vtb_mem___024root* vlSelf);

void Vtb_mem___024root___eval_initial(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_initial\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.tb_mem__DOT__clk = 0U;
    }
    vlSelfRef.__VtraceActivity[1U] = 1U;
    Vtb_mem___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_mem___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_mem___024root___eval_sample(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_sample\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vtb_mem___024root___eval_ico(Vtb_mem___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_ico\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mem___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_mem___024root___timing_ready(Vtb_mem___024root* vlSelf);
void Vtb_mem___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vtb_mem___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
void Vtb_mem___024root___timing_resume(Vtb_mem___024root* vlSelf);

bool Vtb_mem___024root___eval_act(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_act\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                            ((vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime() 
                                                              << 1U) 
                                                             | ((::IData)(vlSelfRef.tb_mem__DOT__clk) 
                                                                & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__clk__0 
            = vlSelfRef.tb_mem__DOT__clk;
    }
    Vtb_mem___024root___timing_ready(vlSelf);
    Vtb_mem___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mem___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_mem___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_mem___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_mem___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_mem___024root___eval_inact(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_inact\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_mem.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_mem___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vtb_mem___024root___eval_nba(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_nba\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_mem___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((1ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    ::CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_mem__DOT__dut__DOT__mem_2;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_mem__DOT__dut__DOT__mem_2 = 0;
                    ::CData/*7:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Val__tb_mem__DOT__dut__DOT__mem_3;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Val__tb_mem__DOT__dut__DOT__mem_3 = 0;
                    ::CData/*2:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Dim0__tb_mem__DOT__dut__DOT__mem_4;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Dim0__tb_mem__DOT__dut__DOT__mem_4 = 0;
                    ::CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_mem__DOT__dut__DOT__mem_5;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_mem__DOT__dut__DOT__mem_5 = 0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_mem__DOT__dut__DOT__mem_2 = 0U;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_mem__DOT__dut__DOT__mem_5 = 0U;
                    if (vlSelfRef.tb_mem__DOT__rst) {
                        vlSelfRef.tb_mem__DOT__dut__DOT__i = 8U;
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_mem__DOT__dut__DOT__mem_2 = 1U;
                    } else if (vlSelfRef.tb_mem__DOT__wr_en) {
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Val__tb_mem__DOT__dut__DOT__mem_3 
                            = vlSelfRef.tb_mem__DOT__wr_data;
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Dim0__tb_mem__DOT__dut__DOT__mem_4 
                            = vlSelfRef.tb_mem__DOT__addr;
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_mem__DOT__dut__DOT__mem_5 = 1U;
                    }
                    vlSelfRef.tb_mem__DOT__dut__DOT__ack = 0U;
                    vlSelfRef.tb_mem__DOT__dut__DOT__rd_data = 0U;
                    if ((1U & (~ (::IData)(vlSelfRef.tb_mem__DOT__rst)))) {
                        if (vlSelfRef.tb_mem__DOT__wr_en) {
                            vlSelfRef.tb_mem__DOT__dut__DOT__ack = 1U;
                        } else if (vlSelfRef.tb_mem__DOT__rd_en) {
                            vlSelfRef.tb_mem__DOT__dut__DOT__ack = 1U;
                        }
                        if ((1U & (~ (::IData)(vlSelfRef.tb_mem__DOT__wr_en)))) {
                            if (vlSelfRef.tb_mem__DOT__rd_en) {
                                vlSelfRef.tb_mem__DOT__dut__DOT__rd_data 
                                    = vlSelfRef.tb_mem__DOT__dut__DOT__mem
                                    [vlSelfRef.tb_mem__DOT__addr];
                            }
                        }
                    }
                    if (__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_mem__DOT__dut__DOT__mem_2) {
                        vlSelfRef.tb_mem__DOT__dut__DOT__mem[0U] = 0U;
                        vlSelfRef.tb_mem__DOT__dut__DOT__mem[1U] = 0U;
                        vlSelfRef.tb_mem__DOT__dut__DOT__mem[2U] = 0U;
                        vlSelfRef.tb_mem__DOT__dut__DOT__mem[3U] = 0U;
                        vlSelfRef.tb_mem__DOT__dut__DOT__mem[4U] = 0U;
                        vlSelfRef.tb_mem__DOT__dut__DOT__mem[5U] = 0U;
                        vlSelfRef.tb_mem__DOT__dut__DOT__mem[6U] = 0U;
                        vlSelfRef.tb_mem__DOT__dut__DOT__mem[7U] = 0U;
                    }
                    if (__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_mem__DOT__dut__DOT__mem_5) {
                        vlSelfRef.tb_mem__DOT__dut__DOT__mem[__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Dim0__tb_mem__DOT__dut__DOT__mem_4] 
                            = __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Val__tb_mem__DOT__dut__DOT__mem_3;
                    }
                }
                vlSelfRef.__VtraceActivity[3U] = 1U;
            }
        }
        Vtb_mem___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_mem___024root___eval_obs(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_obs\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_mem___024root___eval_react(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_react\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_mem___024root___eval_postponed(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_postponed\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_mem___024root____VbeforeTrig_hfd291d4e__0(Vtb_mem___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_mem___024root___eval_initial__TOP__Vtiming__0(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_mem__DOT__state = 0U;
    vlSelfRef.tb_mem__DOT__rst = 1U;
    vlSelfRef.tb_mem__DOT__wr_en = 0U;
    vlSelfRef.tb_mem__DOT__rd_en = 0U;
    vlSelfRef.tb_mem__DOT__addr = 0U;
    vlSelfRef.tb_mem__DOT__wr_data = 0U;
    vlSelfRef.tb_mem__DOT__tx_count = 0U;
    vlSelfRef.tb_mem__DOT__read_addr = 0U;
    VL_WRITEF_NX("Seed=%0d\n",1, '~',32,vlSymsp->_vm_contextp__->randSeed());
    vlSelfRef.tb_mem__DOT__cycle = 0U;
    vlSymsp->_vm_contextp__->dumpfile("waveform.vcd"s);
    vlSymsp->_traceDumpOpen();
    Vtb_mem___024root____VbeforeTrig_hfd291d4e__0(vlSelf, 
                                                  "@(posedge tb_mem.clk)");
    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hfd291d4e__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_mem.clk)", 
                                                                     "tb_mem.sv", 
                                                                     66);
    vlSelfRef.__VtraceActivity[2U] = 1U;
    Vtb_mem___024root____VbeforeTrig_hfd291d4e__0(vlSelf, 
                                                  "@(posedge tb_mem.clk)");
    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hfd291d4e__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_mem.clk)", 
                                                                     "tb_mem.sv", 
                                                                     67);
    vlSelfRef.__VtraceActivity[2U] = 1U;
    vlSelfRef.tb_mem__DOT__rst = 0U;
    vlSelfRef.tb_mem__DOT__k = 0U;
    vlSelfRef.tb_mem__DOT__expected[0U] = 0U;
    vlSelfRef.tb_mem__DOT__k = 1U;
    vlSelfRef.tb_mem__DOT__expected[1U] = 0U;
    vlSelfRef.tb_mem__DOT__k = 2U;
    vlSelfRef.tb_mem__DOT__expected[2U] = 0U;
    vlSelfRef.tb_mem__DOT__k = 3U;
    vlSelfRef.tb_mem__DOT__expected[3U] = 0U;
    vlSelfRef.tb_mem__DOT__k = 4U;
    vlSelfRef.tb_mem__DOT__expected[4U] = 0U;
    vlSelfRef.tb_mem__DOT__k = 5U;
    vlSelfRef.tb_mem__DOT__expected[5U] = 0U;
    vlSelfRef.tb_mem__DOT__k = 6U;
    vlSelfRef.tb_mem__DOT__expected[6U] = 0U;
    vlSelfRef.tb_mem__DOT__k = 7U;
    vlSelfRef.tb_mem__DOT__expected[7U] = 0U;
    vlSelfRef.tb_mem__DOT__k = 8U;
    {
        while (true) {
            Vtb_mem___024root____VbeforeTrig_hfd291d4e__0(vlSelf, 
                                                          "@(posedge tb_mem.clk)");
            co_await vlSelfRef.__Vnontrivs.__VtrigSched_hfd291d4e__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_mem.clk)", 
                                                                             "tb_mem.sv", 
                                                                             75);
            vlSelfRef.__VtraceActivity[2U] = 1U;
            if (VL_UNLIKELY(((0U == vlSelfRef.tb_mem__DOT__state)))) {
                vlSelfRef.tb_mem__DOT__wr_en = 0U;
                vlSelfRef.tb_mem__DOT__rd_en = 0U;
                VL_WRITEF_NX("[%0t] State: IDLE \342\200\224 starting write transaction\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_mem__DOT__state = 1U;
            } else if (VL_UNLIKELY(((1U == vlSelfRef.tb_mem__DOT__state)))) {
                vlSelfRef.tb_mem__DOT__wr_en = 1U;
                vlSelfRef.tb_mem__DOT__addr = (7U & 
                                               VL_RANDOM_I());
                vlSelfRef.tb_mem__DOT__wr_data = (0x000000ffU 
                                                  & VL_RANDOM_I());
                vlSelfRef.tb_mem__DOT__expected[vlSelfRef.tb_mem__DOT__addr] 
                    = vlSelfRef.tb_mem__DOT__wr_data;
                VL_WRITEF_NX("[%0t] Cycle %0d: WRITE: addr=0x%0h data=0x%0h\n",5, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '~',32,vlSelfRef.tb_mem__DOT__cycle
                             , '#',3,(::IData)(vlSelfRef.tb_mem__DOT__addr)
                             , '#',8,vlSelfRef.tb_mem__DOT__wr_data);
                vlSelfRef.tb_mem__DOT__state = 2U;
            } else if ((2U == vlSelfRef.tb_mem__DOT__state)) {
                if (vlSelfRef.tb_mem__DOT__dut__DOT__ack) {
                    vlSelfRef.tb_mem__DOT__wr_en = 0U;
                    if (VL_GTS_III(32, 7U, vlSelfRef.tb_mem__DOT__tx_count)) {
                        vlSelfRef.tb_mem__DOT__tx_count 
                            = ((::IData)(1U) + vlSelfRef.tb_mem__DOT__tx_count);
                        vlSelfRef.tb_mem__DOT__state = 1U;
                    } else {
                        vlSelfRef.tb_mem__DOT__tx_count = 0U;
                        vlSelfRef.tb_mem__DOT__state = 3U;
                    }
                }
            } else if (VL_UNLIKELY(((3U == vlSelfRef.tb_mem__DOT__state)))) {
                vlSelfRef.tb_mem__DOT__rd_en = 1U;
                vlSelfRef.tb_mem__DOT__addr = vlSelfRef.tb_mem__DOT__read_addr;
                VL_WRITEF_NX("[%0t] State: READ_REQ \342\200\224 addr=0x%0h\n",3, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',3,(::IData)(vlSelfRef.tb_mem__DOT__addr));
                vlSelfRef.tb_mem__DOT__state = 4U;
            } else if ((4U == vlSelfRef.tb_mem__DOT__state)) {
                if (vlSelfRef.tb_mem__DOT__dut__DOT__ack) {
                    vlSelfRef.tb_mem__DOT__rd_en = 0U;
                    if (VL_UNLIKELY((((::IData)(vlSelfRef.tb_mem__DOT__dut__DOT__rd_data) 
                                      != vlSelfRef.tb_mem__DOT__expected
                                      [vlSelfRef.tb_mem__DOT__read_addr])))) {
                        VL_WRITEF_NX("[%0t] %%Error: tb_mem.sv:124: Assertion failed in %m: Cycle %0d MISMATCH: expected 0x%0h, read 0x%0h%d\n",7, 'M',vlSymsp->__Vm_topNames[1].c_str(),"", 'T',-12
                                     , '#',64,VL_TIME_UNITED_Q(1)
                                     , '~',32,vlSelfRef.tb_mem__DOT__cycle
                                     , '#',3,(::IData)(vlSelfRef.tb_mem__DOT__read_addr)
                                     , '#',8,vlSelfRef.tb_mem__DOT__expected
                                     [vlSelfRef.tb_mem__DOT__read_addr]
                                     , '#',8,vlSelfRef.tb_mem__DOT__dut__DOT__rd_data);
                        VL_STOP_MT("tb_mem.sv", 124, "");
                    } else {
                        VL_WRITEF_NX("[%0t] Cycle %0d PASS%d\n",4, 'T',-12
                                     , '#',64,VL_TIME_UNITED_Q(1)
                                     , '~',32,vlSelfRef.tb_mem__DOT__cycle
                                     , '#',3,(::IData)(vlSelfRef.tb_mem__DOT__read_addr));
                    }
                    if ((7U > (::IData)(vlSelfRef.tb_mem__DOT__read_addr))) {
                        vlSelfRef.tb_mem__DOT__read_addr 
                            = (7U & ((::IData)(1U) 
                                     + (::IData)(vlSelfRef.tb_mem__DOT__read_addr)));
                        vlSelfRef.tb_mem__DOT__state = 3U;
                    } else {
                        vlSelfRef.tb_mem__DOT__read_addr = 0U;
                        vlSelfRef.tb_mem__DOT__cycle 
                            = ((::IData)(1U) + vlSelfRef.tb_mem__DOT__cycle);
                        if (VL_LIKELY((VL_GTS_III(32, 0x00000014U, vlSelfRef.tb_mem__DOT__cycle)))) {
                            vlSelfRef.tb_mem__DOT__state = 1U;
                        } else {
                            VL_WRITEF_NX("All 20 cycles  complete, finishing test\n",0);
                            VL_FINISH_MT("tb_mem.sv", 136, "");
                            goto __Vlabel0;
                        }
                    }
                }
            }
        }
        __Vlabel0: ;
    }
    vlSelfRef.__VtraceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_mem___024root___eval_initial__TOP__Vtiming__1(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(5ULL, 
                                                         nullptr, 
                                                         "tb_mem.sv", 
                                                         30);
        vlSelfRef.tb_mem__DOT__clk = (1U & (~ (::IData)(vlSelfRef.tb_mem__DOT__clk)));
    }
    co_return;
}

bool Vtb_mem___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___trigger_anySet__ico\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vtb_mem___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___trigger_anySet__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_mem___024root___timing_ready(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___timing_ready\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((1ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VtrigSched_hfd291d4e__0.ready(
                                                              "@(posedge tb_mem.clk)");
    }
}

void Vtb_mem___024root___timing_resume(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___timing_resume\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vnontrivs.__VtrigSched_hfd291d4e__0.moveToResumeQueue(
                                                                      "@(posedge tb_mem.clk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_hfd291d4e__0.resume(
                                                           "@(posedge tb_mem.clk)");
    if ((((2ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VdlySched.resume();
    }
}

void Vtb_mem___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_mem___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___trigger_clear__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((::IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_mem___024root____VbeforeTrig_hfd291d4e__0(Vtb_mem___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root____VbeforeTrig_hfd291d4e__0\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlUnpacked<::QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (::QData)((::IData)(((::IData)(vlSelfRef.tb_mem__DOT__clk) 
                                      & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__clk__0 
        = vlSelfRef.tb_mem__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_hfd291d4e__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_mem___024root___eval_debug_assertions(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_debug_assertions\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
