// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_adder_selfcheck.h for the primary calling header

#ifndef VERILATED_VTB_ADDER_SELFCHECK___024ROOT_H_
#define VERILATED_VTB_ADDER_SELFCHECK___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_adder_selfcheck__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_adder_selfcheck___024root final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*3:0*/ tb_adder_selfcheck__DOT__a;
    ::CData/*3:0*/ tb_adder_selfcheck__DOT__b;
    ::CData/*0:0*/ tb_adder_selfcheck__DOT__cin;
    ::CData/*0:0*/ tb_adder_selfcheck__DOT__clk;
    ::CData/*4:0*/ tb_adder_selfcheck__DOT__expected;
    ::CData/*3:0*/ tb_adder_selfcheck__DOT__dut__DOT__sum;
    ::CData/*0:0*/ tb_adder_selfcheck__DOT__dut__DOT__cout;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__tb_adder_selfcheck__DOT__clk__0;
    ::IData/*31:0*/ tb_adder_selfcheck__DOT__i;
    ::IData/*31:0*/ tb_adder_selfcheck__DOT__pass_count;
    ::IData/*31:0*/ tb_adder_selfcheck__DOT__fail_count;
    ::IData/*31:0*/ __Vi;
    ::VlUnpacked<::QData/*63:0*/, 1> __VstlTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VicoTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggeredAcc;
    ::VlUnpacked<::QData/*63:0*/, 1> __VnbaTriggered;
    ::VlUnpacked<::CData/*0:0*/, 3> __VtraceActivity;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlDelayScheduler __VdlySched;
            ::VlTriggerScheduler __VtrigSched_h51ddc8c8__0;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_adder_selfcheck__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_adder_selfcheck___024root(Vtb_adder_selfcheck__Syms* symsp, const char* namep);
    ~Vtb_adder_selfcheck___024root();
    VL_UNCOPYABLE(Vtb_adder_selfcheck___024root);
    VL_UNMOVABLE(Vtb_adder_selfcheck___024root);

    // INTERNAL METHODS
};


#endif  // guard
