// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_adder_selfcheck.h for the primary calling header

#include "Vtb_adder_selfcheck__pch.h"

VlCoroutine Vtb_adder_selfcheck___024root___eval_initial__TOP__Vtiming__0(Vtb_adder_selfcheck___024root* vlSelf);
VlCoroutine Vtb_adder_selfcheck___024root___eval_initial__TOP__Vtiming__1(Vtb_adder_selfcheck___024root* vlSelf);

void Vtb_adder_selfcheck___024root___eval_initial(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_initial\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_adder_selfcheck___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__VtraceActivity[1U] = 1U;
    Vtb_adder_selfcheck___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_adder_selfcheck___024root___eval_sample(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_sample\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vtb_adder_selfcheck___024root___eval_ico(Vtb_adder_selfcheck___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_ico\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_adder_selfcheck___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_adder_selfcheck___024root___timing_ready(Vtb_adder_selfcheck___024root* vlSelf);
void Vtb_adder_selfcheck___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vtb_adder_selfcheck___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
void Vtb_adder_selfcheck___024root___timing_resume(Vtb_adder_selfcheck___024root* vlSelf);

bool Vtb_adder_selfcheck___024root___eval_act(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_act\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                            ((vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime() 
                                                              << 1U) 
                                                             | ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__clk) 
                                                                & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_adder_selfcheck__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_adder_selfcheck__DOT__clk__0 
            = vlSelfRef.tb_adder_selfcheck__DOT__clk;
    }
    Vtb_adder_selfcheck___024root___timing_ready(vlSelf);
    Vtb_adder_selfcheck___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_adder_selfcheck___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_adder_selfcheck___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_adder_selfcheck___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_adder_selfcheck___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((((3ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb_adder_selfcheck__DOT__dut__DOT__cout 
                        = (1U & (((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__a) 
                                  + ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__cin) 
                                     + (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__b))) 
                                 >> 4U));
                    vlSelfRef.tb_adder_selfcheck__DOT__dut__DOT__sum 
                        = (0x0000000fU & ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__a) 
                                          + ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__b) 
                                             + (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__cin))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_adder_selfcheck___024root___eval_inact(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_inact\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_adder_selfcheck.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_adder_selfcheck___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vtb_adder_selfcheck___024root___eval_nba(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_nba\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_adder_selfcheck___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb_adder_selfcheck__DOT__dut__DOT__cout 
                        = (1U & (((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__a) 
                                  + ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__cin) 
                                     + (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__b))) 
                                 >> 4U));
                    vlSelfRef.tb_adder_selfcheck__DOT__dut__DOT__sum 
                        = (0x0000000fU & ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__a) 
                                          + ((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__b) 
                                             + (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__cin))));
                }
            }
        }
        Vtb_adder_selfcheck___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_adder_selfcheck___024root___eval_obs(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_obs\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_adder_selfcheck___024root___eval_react(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_react\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_adder_selfcheck___024root___eval_postponed(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_postponed\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_adder_selfcheck___024root____VbeforeTrig_h51ddc8c8__0(Vtb_adder_selfcheck___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_adder_selfcheck___024root___eval_initial__TOP__Vtiming__0(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Seed=%0d\n",1, '~',32,vlSymsp->_vm_contextp__->randSeed());
    vlSelfRef.tb_adder_selfcheck__DOT__pass_count = 0U;
    vlSelfRef.tb_adder_selfcheck__DOT__fail_count = 0U;
    vlSelfRef.tb_adder_selfcheck__DOT__a = 0U;
    vlSelfRef.tb_adder_selfcheck__DOT__b = 0U;
    vlSelfRef.tb_adder_selfcheck__DOT__cin = 0U;
    Vtb_adder_selfcheck___024root____VbeforeTrig_h51ddc8c8__0(vlSelf, 
                                                              "@(posedge tb_adder_selfcheck.clk)");
    co_await vlSelfRef.__Vnontrivs.__VtrigSched_h51ddc8c8__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_adder_selfcheck.clk)", 
                                                                     "tb_adder_selfcheck.sv", 
                                                                     35);
    vlSelfRef.__VtraceActivity[2U] = 1U;
    Vtb_adder_selfcheck___024root____VbeforeTrig_h51ddc8c8__0(vlSelf, 
                                                              "@(posedge tb_adder_selfcheck.clk)");
    co_await vlSelfRef.__Vnontrivs.__VtrigSched_h51ddc8c8__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_adder_selfcheck.clk)", 
                                                                     "tb_adder_selfcheck.sv", 
                                                                     36);
    vlSelfRef.__VtraceActivity[2U] = 1U;
    vlSelfRef.tb_adder_selfcheck__DOT__i = 0U;
    while (VL_GTS_III(32, 0x000003e8U, vlSelfRef.tb_adder_selfcheck__DOT__i)) {
        vlSelfRef.tb_adder_selfcheck__DOT__a = (0x0000000fU 
                                                & VL_RANDOM_I());
        vlSelfRef.tb_adder_selfcheck__DOT__b = (0x0000000fU 
                                                & VL_RANDOM_I());
        vlSelfRef.tb_adder_selfcheck__DOT__cin = (1U 
                                                  & VL_RANDOM_I());
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(1ULL, 
                                                         nullptr, 
                                                         "tb_adder_selfcheck.sv", 
                                                         42);
        vlSelfRef.__VtraceActivity[2U] = 1U;
        vlSelfRef.tb_adder_selfcheck__DOT__expected 
            = (0x0000001fU & (((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__a) 
                               + (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__b)) 
                              + (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__cin)));
        Vtb_adder_selfcheck___024root____VbeforeTrig_h51ddc8c8__0(vlSelf, 
                                                                  "@(posedge tb_adder_selfcheck.clk)");
        co_await vlSelfRef.__Vnontrivs.__VtrigSched_h51ddc8c8__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_adder_selfcheck.clk)", 
                                                                         "tb_adder_selfcheck.sv", 
                                                                         44);
        vlSelfRef.__VtraceActivity[2U] = 1U;
        vlSelfRef.tb_adder_selfcheck__DOT__expected 
            = (0x0000001fU & (((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__a) 
                               + (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__b)) 
                              + (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__cin)));
        if (VL_UNLIKELY((((((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__dut__DOT__cout) 
                            << 4U) | (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__dut__DOT__sum)) 
                          != (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__expected))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_adder_selfcheck.sv:51: Assertion failed in %m: FAIL [%0d]: a=%0d b=%0d cin=%0d | expected=%05b got=%b%04b\n",10, 'M',vlSymsp->__Vm_topNames[1].c_str(),"", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '~',32,vlSelfRef.tb_adder_selfcheck__DOT__i
                         , '#',4,(::IData)(vlSelfRef.tb_adder_selfcheck__DOT__a)
                         , '#',4,vlSelfRef.tb_adder_selfcheck__DOT__b
                         , '#',1,(::IData)(vlSelfRef.tb_adder_selfcheck__DOT__cin)
                         , '#',5,vlSelfRef.tb_adder_selfcheck__DOT__expected
                         , '#',1,(::IData)(vlSelfRef.tb_adder_selfcheck__DOT__dut__DOT__cout)
                         , '#',4,vlSelfRef.tb_adder_selfcheck__DOT__dut__DOT__sum);
            VL_STOP_MT("tb_adder_selfcheck.sv", 51, "");
            vlSelfRef.tb_adder_selfcheck__DOT__fail_count 
                = ((::IData)(1U) + vlSelfRef.tb_adder_selfcheck__DOT__fail_count);
        } else {
            vlSelfRef.tb_adder_selfcheck__DOT__pass_count 
                = ((::IData)(1U) + vlSelfRef.tb_adder_selfcheck__DOT__pass_count);
        }
        vlSelfRef.tb_adder_selfcheck__DOT__i = ((::IData)(1U) 
                                                + vlSelfRef.tb_adder_selfcheck__DOT__i);
    }
    VL_WRITEF_NX("Results:%0d passed, %0d failed/1000 total\n",2
                 , '~',32,vlSelfRef.tb_adder_selfcheck__DOT__pass_count
                 , '~',32,vlSelfRef.tb_adder_selfcheck__DOT__fail_count);
    if (VL_LTS_III(32, 0U, vlSelfRef.tb_adder_selfcheck__DOT__fail_count)) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_adder_selfcheck.sv:62: Assertion failed in %m: Test failed -%0d errors detected\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '~',32,vlSelfRef.tb_adder_selfcheck__DOT__fail_count);
        VL_STOP_MT("tb_adder_selfcheck.sv", 62, "", false);
    } else {
        VL_WRITEF_NX("Test passed\n",0);
        VL_FINISH_MT("tb_adder_selfcheck.sv", 65, "");
    }
    vlSelfRef.__VtraceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_adder_selfcheck___024root___eval_initial__TOP__Vtiming__1(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(5ULL, 
                                                         nullptr, 
                                                         "tb_adder_selfcheck.sv", 
                                                         21);
        vlSelfRef.tb_adder_selfcheck__DOT__clk = (1U 
                                                  & (~ (::IData)(vlSelfRef.tb_adder_selfcheck__DOT__clk)));
    }
    co_return;
}

bool Vtb_adder_selfcheck___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___trigger_anySet__ico\n"); );
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

bool Vtb_adder_selfcheck___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___trigger_anySet__act\n"); );
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

void Vtb_adder_selfcheck___024root___timing_ready(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___timing_ready\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((1ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h51ddc8c8__0.ready(
                                                              "@(posedge tb_adder_selfcheck.clk)");
    }
}

void Vtb_adder_selfcheck___024root___timing_resume(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___timing_resume\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vnontrivs.__VtrigSched_h51ddc8c8__0.moveToResumeQueue(
                                                                      "@(posedge tb_adder_selfcheck.clk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_h51ddc8c8__0.resume(
                                                           "@(posedge tb_adder_selfcheck.clk)");
    if ((((2ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VdlySched.resume();
    }
}

void Vtb_adder_selfcheck___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_adder_selfcheck___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___trigger_clear__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((::IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_adder_selfcheck___024root____VbeforeTrig_h51ddc8c8__0(Vtb_adder_selfcheck___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root____VbeforeTrig_h51ddc8c8__0\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlUnpacked<::QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (::QData)((::IData)(((::IData)(vlSelfRef.tb_adder_selfcheck__DOT__clk) 
                                      & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_adder_selfcheck__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_adder_selfcheck__DOT__clk__0 
        = vlSelfRef.tb_adder_selfcheck__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h51ddc8c8__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_adder_selfcheck___024root___eval_debug_assertions(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_debug_assertions\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
