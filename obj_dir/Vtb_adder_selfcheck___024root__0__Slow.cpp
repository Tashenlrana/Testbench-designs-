// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_adder_selfcheck.h for the primary calling header

#include "Vtb_adder_selfcheck__pch.h"

void Vtb_adder_selfcheck___024root___timing_ready(Vtb_adder_selfcheck___024root* vlSelf);

VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_static(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_static\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_adder_selfcheck__DOT__clk = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_adder_selfcheck__DOT__clk__0 = 0U;
    Vtb_adder_selfcheck___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((::IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_adder_selfcheck___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vtb_adder_selfcheck___024root___eval_stl(Vtb_adder_selfcheck___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_stl\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_adder_selfcheck___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_adder_selfcheck___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((((1ULL & vlSelfRef.__VstlTriggered[0U])) != 0ULL)) {
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
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_dump_triggers__stl(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_dump_triggers__stl\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_adder_selfcheck___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_dump_triggers__ico(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_dump_triggers__ico\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_adder_selfcheck___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_dump_triggers__act(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_dump_triggers__act\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_adder_selfcheck___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_dump_triggers__nba(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_dump_triggers__nba\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_adder_selfcheck___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_dump_triggers__obs(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_dump_triggers__obs\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_dump_triggers__react(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_dump_triggers__react\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_final(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___eval_final\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_adder_selfcheck___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_adder_selfcheck___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___trigger_anySet__stl\n"); );
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

bool Vtb_adder_selfcheck___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_adder_selfcheck___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_adder_selfcheck___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_adder_selfcheck___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_adder_selfcheck.clk)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_adder_selfcheck___024root___ctor_var_reset(Vtb_adder_selfcheck___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_adder_selfcheck___024root___ctor_var_reset\n"); );
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_adder_selfcheck__DOT__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 203547536502998142ull);
    vlSelf->tb_adder_selfcheck__DOT__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11606681189548080275ull);
    vlSelf->tb_adder_selfcheck__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15665700277826032345ull);
    vlSelf->tb_adder_selfcheck__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17088110799048630089ull);
    vlSelf->tb_adder_selfcheck__DOT__pass_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4189623937209381108ull);
    vlSelf->tb_adder_selfcheck__DOT__fail_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 391080500374655949ull);
    vlSelf->tb_adder_selfcheck__DOT__expected = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 595470643150900213ull);
    vlSelf->tb_adder_selfcheck__DOT__dut__DOT__sum = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1917359727111224898ull);
    vlSelf->tb_adder_selfcheck__DOT__dut__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6415269142032314666ull);
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 1);
    vlSelf->__VactTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggered.data(), sizeof(vlSelf->__VactTriggered[0]), 1);
    vlSelf->__VactTriggeredAcc[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggeredAcc.data(), sizeof(vlSelf->__VactTriggeredAcc[0]), 1);
    vlSelf->__Vtrigprevexpr___TOP__tb_adder_selfcheck__DOT__clk__0 = 0;
    vlSelf->__VnbaTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VnbaTriggered.data(), sizeof(vlSelf->__VnbaTriggered[0]), 1);
    vlSelf->__Vi = 0;
    vlSelf->__VtraceActivity[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VtraceActivity.data(), sizeof(vlSelf->__VtraceActivity[0]), 3);
}
