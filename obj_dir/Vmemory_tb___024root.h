// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmemory_tb.h for the primary calling header

#ifndef VERILATED_VMEMORY_TB___024ROOT_H_
#define VERILATED_VMEMORY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmemory_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmemory_tb___024root final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ memory_tb__DOT__clk;
    ::CData/*0:0*/ memory_tb__DOT__rst;
    ::CData/*0:0*/ memory_tb__DOT__wr_en;
    ::CData/*0:0*/ memory_tb__DOT__rd_en;
    ::CData/*2:0*/ memory_tb__DOT__addr;
    ::CData/*7:0*/ memory_tb__DOT__wr_data;
    ::CData/*7:0*/ memory_tb__DOT__dut__DOT__rd_data;
    ::CData/*0:0*/ memory_tb__DOT__dut__DOT__ack;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__memory_tb__DOT__clk__0;
    ::IData/*31:0*/ memory_tb__DOT__state;
    ::IData/*31:0*/ memory_tb__DOT__cycle;
    ::IData/*31:0*/ memory_tb__DOT__pass_count;
    ::IData/*31:0*/ memory_tb__DOT__fail_count;
    ::IData/*31:0*/ memory_tb__DOT__init_shadow__DOT__j;
    ::IData/*31:0*/ memory_tb__DOT__dut__DOT__i;
    ::IData/*31:0*/ __Vi;
    ::VlUnpacked<::CData/*7:0*/, 8> memory_tb__DOT__shadow_mem;
    ::VlUnpacked<::CData/*7:0*/, 8> memory_tb__DOT__dut__DOT__mem;
    ::VlUnpacked<::QData/*63:0*/, 1> __VstlTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VicoTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggeredAcc;
    ::VlUnpacked<::QData/*63:0*/, 1> __VnbaTriggered;
    ::VlUnpacked<::CData/*0:0*/, 4> __VtraceActivity;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlDelayScheduler __VdlySched;
            ::VlTriggerScheduler __VtrigSched_h4fa393ec__0;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vmemory_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmemory_tb___024root(Vmemory_tb__Syms* symsp, const char* namep);
    ~Vmemory_tb___024root();
    VL_UNCOPYABLE(Vmemory_tb___024root);
    VL_UNMOVABLE(Vmemory_tb___024root);

    // INTERNAL METHODS
};


#endif  // guard
