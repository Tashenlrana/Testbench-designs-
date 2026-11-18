// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mem.h for the primary calling header

#ifndef VERILATED_VTB_MEM___024ROOT_H_
#define VERILATED_VTB_MEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mem___024root final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ tb_mem__DOT__clk;
    ::CData/*0:0*/ tb_mem__DOT__rst;
    ::CData/*0:0*/ tb_mem__DOT__wr_en;
    ::CData/*0:0*/ tb_mem__DOT__rd_en;
    ::CData/*2:0*/ tb_mem__DOT__addr;
    ::CData/*7:0*/ tb_mem__DOT__wr_data;
    ::CData/*2:0*/ tb_mem__DOT__read_addr;
    ::CData/*7:0*/ tb_mem__DOT__dut__DOT__rd_data;
    ::CData/*0:0*/ tb_mem__DOT__dut__DOT__ack;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mem__DOT__clk__0;
    ::IData/*31:0*/ tb_mem__DOT__state;
    ::IData/*31:0*/ tb_mem__DOT__tx_count;
    ::IData/*31:0*/ tb_mem__DOT__cycle;
    ::IData/*31:0*/ tb_mem__DOT__k;
    ::IData/*31:0*/ tb_mem__DOT__dut__DOT__i;
    ::IData/*31:0*/ __Vi;
    ::VlUnpacked<::CData/*7:0*/, 8> tb_mem__DOT__expected;
    ::VlUnpacked<::CData/*7:0*/, 8> tb_mem__DOT__dut__DOT__mem;
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
            ::VlTriggerScheduler __VtrigSched_hfd291d4e__0;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_mem__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mem___024root(Vtb_mem__Syms* symsp, const char* namep);
    ~Vtb_mem___024root();
    VL_UNCOPYABLE(Vtb_mem___024root);
    VL_UNMOVABLE(Vtb_mem___024root);

    // INTERNAL METHODS
};


#endif  // guard
