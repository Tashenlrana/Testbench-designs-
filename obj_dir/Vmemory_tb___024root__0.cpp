// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmemory_tb.h for the primary calling header

#include "Vmemory_tb__pch.h"

VlCoroutine Vmemory_tb___024root___eval_initial__TOP__Vtiming__0(Vmemory_tb___024root* vlSelf);
VlCoroutine Vmemory_tb___024root___eval_initial__TOP__Vtiming__1(Vmemory_tb___024root* vlSelf);

void Vmemory_tb___024root___eval_initial(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_initial\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.memory_tb__DOT__clk = 0U;
    }
    vlSelfRef.__VtraceActivity[1U] = 1U;
    Vmemory_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmemory_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vmemory_tb___024root___eval_sample(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_sample\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vmemory_tb___024root___eval_ico(Vmemory_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_ico\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmemory_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vmemory_tb___024root___timing_ready(Vmemory_tb___024root* vlSelf);
void Vmemory_tb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vmemory_tb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
void Vmemory_tb___024root___timing_resume(Vmemory_tb___024root* vlSelf);

bool Vmemory_tb___024root___eval_act(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_act\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                            ((vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime() 
                                                              << 1U) 
                                                             | ((::IData)(vlSelfRef.memory_tb__DOT__clk) 
                                                                & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__memory_tb__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__memory_tb__DOT__clk__0 
            = vlSelfRef.memory_tb__DOT__clk;
    }
    Vmemory_tb___024root___timing_ready(vlSelf);
    Vmemory_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmemory_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vmemory_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vmemory_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vmemory_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vmemory_tb___024root___eval_inact(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_inact\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("memory_tb.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vmemory_tb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vmemory_tb___024root___eval_nba(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_nba\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmemory_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((1ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    ::CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__memory_tb__DOT__dut__DOT__mem_2;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__memory_tb__DOT__dut__DOT__mem_2 = 0;
                    ::CData/*7:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Val__memory_tb__DOT__dut__DOT__mem_3;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Val__memory_tb__DOT__dut__DOT__mem_3 = 0;
                    ::CData/*2:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Dim0__memory_tb__DOT__dut__DOT__mem_4;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Dim0__memory_tb__DOT__dut__DOT__mem_4 = 0;
                    ::CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__memory_tb__DOT__dut__DOT__mem_5;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__memory_tb__DOT__dut__DOT__mem_5 = 0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__memory_tb__DOT__dut__DOT__mem_2 = 0U;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__memory_tb__DOT__dut__DOT__mem_5 = 0U;
                    if (vlSelfRef.memory_tb__DOT__rst) {
                        vlSelfRef.memory_tb__DOT__dut__DOT__i = 8U;
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__memory_tb__DOT__dut__DOT__mem_2 = 1U;
                    } else if (vlSelfRef.memory_tb__DOT__wr_en) {
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Val__memory_tb__DOT__dut__DOT__mem_3 
                            = vlSelfRef.memory_tb__DOT__wr_data;
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Dim0__memory_tb__DOT__dut__DOT__mem_4 
                            = vlSelfRef.memory_tb__DOT__addr;
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__memory_tb__DOT__dut__DOT__mem_5 = 1U;
                    }
                    vlSelfRef.memory_tb__DOT__dut__DOT__ack = 0U;
                    vlSelfRef.memory_tb__DOT__dut__DOT__rd_data = 0U;
                    if ((1U & (~ (::IData)(vlSelfRef.memory_tb__DOT__rst)))) {
                        if (vlSelfRef.memory_tb__DOT__wr_en) {
                            vlSelfRef.memory_tb__DOT__dut__DOT__ack = 1U;
                        } else if (vlSelfRef.memory_tb__DOT__rd_en) {
                            vlSelfRef.memory_tb__DOT__dut__DOT__ack = 1U;
                        }
                        if ((1U & (~ (::IData)(vlSelfRef.memory_tb__DOT__wr_en)))) {
                            if (vlSelfRef.memory_tb__DOT__rd_en) {
                                vlSelfRef.memory_tb__DOT__dut__DOT__rd_data 
                                    = vlSelfRef.memory_tb__DOT__dut__DOT__mem
                                    [vlSelfRef.memory_tb__DOT__addr];
                            }
                        }
                    }
                    if (__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__memory_tb__DOT__dut__DOT__mem_2) {
                        vlSelfRef.memory_tb__DOT__dut__DOT__mem[0U] = 0U;
                        vlSelfRef.memory_tb__DOT__dut__DOT__mem[1U] = 0U;
                        vlSelfRef.memory_tb__DOT__dut__DOT__mem[2U] = 0U;
                        vlSelfRef.memory_tb__DOT__dut__DOT__mem[3U] = 0U;
                        vlSelfRef.memory_tb__DOT__dut__DOT__mem[4U] = 0U;
                        vlSelfRef.memory_tb__DOT__dut__DOT__mem[5U] = 0U;
                        vlSelfRef.memory_tb__DOT__dut__DOT__mem[6U] = 0U;
                        vlSelfRef.memory_tb__DOT__dut__DOT__mem[7U] = 0U;
                    }
                    if (__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__memory_tb__DOT__dut__DOT__mem_5) {
                        vlSelfRef.memory_tb__DOT__dut__DOT__mem[__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Dim0__memory_tb__DOT__dut__DOT__mem_4] 
                            = __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Val__memory_tb__DOT__dut__DOT__mem_3;
                    }
                }
                vlSelfRef.__VtraceActivity[3U] = 1U;
            }
        }
        Vmemory_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vmemory_tb___024root___eval_obs(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_obs\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vmemory_tb___024root___eval_react(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_react\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vmemory_tb___024root___eval_postponed(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_postponed\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmemory_tb___024root____VbeforeTrig_h4fa393ec__0(Vmemory_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vmemory_tb___024root___eval_initial__TOP__Vtiming__0(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.memory_tb__DOT__state = 0U;
    vlSelfRef.memory_tb__DOT__rst = 1U;
    vlSelfRef.memory_tb__DOT__wr_en = 0U;
    vlSelfRef.memory_tb__DOT__rd_en = 0U;
    vlSelfRef.memory_tb__DOT__addr = 0U;
    vlSelfRef.memory_tb__DOT__wr_data = 0U;
    vlSelfRef.memory_tb__DOT__cycle = 0U;
    VL_WRITEF_NX("Seed=%0d\n",1, '~',32,vlSymsp->_vm_contextp__->randSeed());
    vlSelfRef.memory_tb__DOT__pass_count = 0U;
    vlSelfRef.memory_tb__DOT__fail_count = 0U;
    vlSymsp->_vm_contextp__->dumpfile("memory_tb.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.memory_tb__DOT__shadow_mem[0U] = 0U;
    vlSelfRef.memory_tb__DOT__shadow_mem[1U] = 0U;
    vlSelfRef.memory_tb__DOT__shadow_mem[2U] = 0U;
    vlSelfRef.memory_tb__DOT__shadow_mem[3U] = 0U;
    vlSelfRef.memory_tb__DOT__shadow_mem[4U] = 0U;
    vlSelfRef.memory_tb__DOT__shadow_mem[5U] = 0U;
    vlSelfRef.memory_tb__DOT__shadow_mem[6U] = 0U;
    vlSelfRef.memory_tb__DOT__shadow_mem[7U] = 0U;
    vlSelfRef.memory_tb__DOT__init_shadow__DOT__j = 8U;
    Vmemory_tb___024root____VbeforeTrig_h4fa393ec__0(vlSelf, 
                                                     "@(posedge memory_tb.clk)");
    co_await vlSelfRef.__Vnontrivs.__VtrigSched_h4fa393ec__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge memory_tb.clk)", 
                                                                     "memory_tb.sv", 
                                                                     79);
    vlSelfRef.__VtraceActivity[2U] = 1U;
    Vmemory_tb___024root____VbeforeTrig_h4fa393ec__0(vlSelf, 
                                                     "@(posedge memory_tb.clk)");
    co_await vlSelfRef.__Vnontrivs.__VtrigSched_h4fa393ec__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge memory_tb.clk)", 
                                                                     "memory_tb.sv", 
                                                                     80);
    vlSelfRef.__VtraceActivity[2U] = 1U;
    vlSelfRef.memory_tb__DOT__rst = 0U;
    {
        while (true) {
            Vmemory_tb___024root____VbeforeTrig_h4fa393ec__0(vlSelf, 
                                                             "@(posedge memory_tb.clk)");
            co_await vlSelfRef.__Vnontrivs.__VtrigSched_h4fa393ec__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge memory_tb.clk)", 
                                                                             "memory_tb.sv", 
                                                                             85);
            vlSelfRef.__VtraceActivity[2U] = 1U;
            if (VL_UNLIKELY(((0U == vlSelfRef.memory_tb__DOT__state)))) {
                vlSelfRef.memory_tb__DOT__wr_en = 0U;
                vlSelfRef.memory_tb__DOT__rd_en = 0U;
                VL_WRITEF_NX("[%0t] State: IDLE \342\200\224 starting write transaction\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.memory_tb__DOT__state = 1U;
            } else if (VL_UNLIKELY(((1U == vlSelfRef.memory_tb__DOT__state)))) {
                vlSelfRef.memory_tb__DOT__wr_en = 1U;
                vlSelfRef.memory_tb__DOT__addr = (7U 
                                                  & VL_RANDOM_I());
                vlSelfRef.memory_tb__DOT__wr_data = 
                    (0x000000ffU & VL_RANDOM_I());
                vlSelfRef.memory_tb__DOT__shadow_mem[vlSelfRef.memory_tb__DOT__addr] 
                    = vlSelfRef.memory_tb__DOT__wr_data;
                VL_WRITEF_NX("[%0t] State: WRITE_REQ \342\200\224 addr=0x%0h data=0x%0h\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(vlSelfRef.memory_tb__DOT__addr)
                             , '#',8,vlSelfRef.memory_tb__DOT__wr_data);
                vlSelfRef.memory_tb__DOT__state = 2U;
            } else if ((2U == vlSelfRef.memory_tb__DOT__state)) {
                if (VL_UNLIKELY((vlSelfRef.memory_tb__DOT__dut__DOT__ack))) {
                    vlSelfRef.memory_tb__DOT__wr_en = 0U;
                    VL_WRITEF_NX("[%0t] State: WRITE_WAIT \342\200\224 ack received, write complete\n",2, 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    vlSelfRef.memory_tb__DOT__state = 3U;
                }
            } else if (VL_UNLIKELY(((3U == vlSelfRef.memory_tb__DOT__state)))) {
                vlSelfRef.memory_tb__DOT__rd_en = 1U;
                vlSelfRef.memory_tb__DOT__addr = (7U 
                                                  & VL_RANDOM_I());
                VL_WRITEF_NX("[%0t] State: READ_REQ \342\200\224 addr=0x%0h\n",3, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(vlSelfRef.memory_tb__DOT__addr));
                vlSelfRef.memory_tb__DOT__state = 4U;
            } else if ((4U == vlSelfRef.memory_tb__DOT__state)) {
                if (vlSelfRef.memory_tb__DOT__dut__DOT__ack) {
                    vlSelfRef.memory_tb__DOT__rd_en = 0U;
                    if (VL_UNLIKELY((((::IData)(vlSelfRef.memory_tb__DOT__dut__DOT__rd_data) 
                                      != vlSelfRef.memory_tb__DOT__shadow_mem
                                      [vlSelfRef.memory_tb__DOT__addr])))) {
                        VL_WRITEF_NX("[%0t] %%Error: memory_tb.sv:139: Assertion failed in %m: FAIL cycle %0d: addr=0x%0h expected=0x%0h got=0x%0h\n",7, 'M',vlSymsp->__Vm_topNames[1].c_str(),"", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '~',32,vlSelfRef.memory_tb__DOT__cycle
                                     , '#',3,(::IData)(vlSelfRef.memory_tb__DOT__addr)
                                     , '#',8,vlSelfRef.memory_tb__DOT__shadow_mem
                                     [vlSelfRef.memory_tb__DOT__addr]
                                     , '#',8,vlSelfRef.memory_tb__DOT__dut__DOT__rd_data);
                        VL_STOP_MT("memory_tb.sv", 139, "");
                        vlSelfRef.memory_tb__DOT__fail_count 
                            = ((::IData)(1U) + vlSelfRef.memory_tb__DOT__fail_count);
                    } else {
                        vlSelfRef.memory_tb__DOT__pass_count 
                            = ((::IData)(1U) + vlSelfRef.memory_tb__DOT__pass_count);
                    }
                    vlSelfRef.memory_tb__DOT__cycle 
                        = ((::IData)(1U) + vlSelfRef.memory_tb__DOT__cycle);
                    if (VL_LIKELY((VL_GTS_III(32, 0x000001f4U, vlSelfRef.memory_tb__DOT__cycle)))) {
                        vlSelfRef.memory_tb__DOT__state = 1U;
                    } else {
                        VL_WRITEF_NX("RESULTS: %0d PASSED, %0d FAILED\n",2
                                     , '~',32,vlSelfRef.memory_tb__DOT__pass_count
                                     , '~',32,vlSelfRef.memory_tb__DOT__fail_count);
                        if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.memory_tb__DOT__fail_count)))) {
                            VL_WRITEF_NX("[%0t] %%Fatal: memory_tb.sv:150: Assertion failed in %m: Test failed\n",3, 'M',vlSymsp->__Vm_topNames[1].c_str(),"", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("memory_tb.sv", 150, "", false);
                        } else {
                            VL_WRITEF_NX("Test passed\n",0);
                        }
                        VL_FINISH_MT("memory_tb.sv", 153, "");
                        goto __Vlabel0;
                    }
                }
            }
        }
        __Vlabel0: ;
    }
    vlSelfRef.__VtraceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vmemory_tb___024root___eval_initial__TOP__Vtiming__1(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000001388ULL, 
                                                         nullptr, 
                                                         "memory_tb.sv", 
                                                         31);
        vlSelfRef.memory_tb__DOT__clk = (1U & (~ (::IData)(vlSelfRef.memory_tb__DOT__clk)));
    }
    co_return;
}

bool Vmemory_tb___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___trigger_anySet__ico\n"); );
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

bool Vmemory_tb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___trigger_anySet__act\n"); );
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

void Vmemory_tb___024root___timing_ready(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___timing_ready\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((1ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h4fa393ec__0.ready(
                                                              "@(posedge memory_tb.clk)");
    }
}

void Vmemory_tb___024root___timing_resume(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___timing_resume\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vnontrivs.__VtrigSched_h4fa393ec__0.moveToResumeQueue(
                                                                      "@(posedge memory_tb.clk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_h4fa393ec__0.resume(
                                                           "@(posedge memory_tb.clk)");
    if ((((2ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VdlySched.resume();
    }
}

void Vmemory_tb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vmemory_tb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___trigger_clear__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((::IData)(1U) + n);
    } while ((1U > n));
}

void Vmemory_tb___024root____VbeforeTrig_h4fa393ec__0(Vmemory_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root____VbeforeTrig_h4fa393ec__0\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlUnpacked<::QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (::QData)((::IData)(((::IData)(vlSelfRef.memory_tb__DOT__clk) 
                                      & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__memory_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__memory_tb__DOT__clk__0 
        = vlSelfRef.memory_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h4fa393ec__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vmemory_tb___024root___eval_debug_assertions(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_debug_assertions\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
