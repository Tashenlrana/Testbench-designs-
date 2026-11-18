// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmemory_tb.h for the primary calling header

#include "Vmemory_tb__pch.h"

void Vmemory_tb___024root___timing_ready(Vmemory_tb___024root* vlSelf);

VL_ATTR_COLD void Vmemory_tb___024root___eval_static(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_static\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.memory_tb__DOT__init_shadow__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15411430583160351166ull);
    }
    vlSelfRef.__Vtrigprevexpr___TOP__memory_tb__DOT__clk__0 
        = vlSelfRef.memory_tb__DOT__clk;
    Vmemory_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((::IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmemory_tb___024root___eval_stl(Vmemory_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_stl\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmemory_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    return (0U);
}

VL_ATTR_COLD void Vmemory_tb___024root___eval_dump_triggers__stl(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_dump_triggers__stl\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vmemory_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmemory_tb___024root___eval_dump_triggers__ico(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_dump_triggers__ico\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vmemory_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmemory_tb___024root___eval_dump_triggers__act(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_dump_triggers__act\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vmemory_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vmemory_tb___024root___eval_dump_triggers__nba(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_dump_triggers__nba\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vmemory_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vmemory_tb___024root___eval_dump_triggers__obs(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_dump_triggers__obs\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmemory_tb___024root___eval_dump_triggers__react(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_dump_triggers__react\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmemory_tb___024root___eval_final(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_final\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD bool Vmemory_tb___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Vmemory_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmemory_tb___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___trigger_anySet__stl\n"); );
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

bool Vmemory_tb___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Vmemory_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vmemory_tb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (::IData)(Vmemory_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge memory_tb.clk)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmemory_tb___024root___ctor_var_reset(Vmemory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___ctor_var_reset\n"); );
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->memory_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10920788578282900337ull);
    vlSelf->memory_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7277766959816927266ull);
    vlSelf->memory_tb__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 909215665310251292ull);
    vlSelf->memory_tb__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10277225962627025269ull);
    vlSelf->memory_tb__DOT__addr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 395162379560039105ull);
    vlSelf->memory_tb__DOT__wr_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17365791473594574665ull);
    vlSelf->memory_tb__DOT__state = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18010691699616095477ull);
    vlSelf->memory_tb__DOT__cycle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11369008660755589564ull);
    vlSelf->memory_tb__DOT__shadow_mem[0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12675697577234106804ull);
    VL_UNPACKED_FILL(vlSelf->memory_tb__DOT__shadow_mem.data(), sizeof(vlSelf->memory_tb__DOT__shadow_mem[0]), 8);
    vlSelf->memory_tb__DOT__pass_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5007832703366995601ull);
    vlSelf->memory_tb__DOT__fail_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13947636983095974671ull);
    vlSelf->memory_tb__DOT__dut__DOT__rd_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5850618813707109780ull);
    vlSelf->memory_tb__DOT__dut__DOT__ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7610119828665890341ull);
    vlSelf->memory_tb__DOT__dut__DOT__mem[0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2127220696412820693ull);
    VL_UNPACKED_FILL(vlSelf->memory_tb__DOT__dut__DOT__mem.data(), sizeof(vlSelf->memory_tb__DOT__dut__DOT__mem[0]), 8);
    vlSelf->memory_tb__DOT__dut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12704078403771442279ull);
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 1);
    vlSelf->__VactTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggered.data(), sizeof(vlSelf->__VactTriggered[0]), 1);
    vlSelf->__VactTriggeredAcc[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggeredAcc.data(), sizeof(vlSelf->__VactTriggeredAcc[0]), 1);
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__clk__0 = 0;
    vlSelf->__VnbaTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VnbaTriggered.data(), sizeof(vlSelf->__VnbaTriggered[0]), 1);
    vlSelf->__Vi = 0;
    vlSelf->__VtraceActivity[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VtraceActivity.data(), sizeof(vlSelf->__VtraceActivity[0]), 4);
}
