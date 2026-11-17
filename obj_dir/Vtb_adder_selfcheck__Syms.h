// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_ADDER_SELFCHECK__SYMS_H_
#define VERILATED_VTB_ADDER_SELFCHECK__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_adder_selfcheck.h"

// INCLUDE MODULE CLASSES
#include "Vtb_adder_selfcheck___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_adder_selfcheck__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_adder_selfcheck* const __Vm_modelp;
    const bool __Vm_isRoot;
    std::string __Vm_topNames[2];
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    union {
        struct {
            Vtb_adder_selfcheck___024root  TOP;
        } vlInst;
    };

    // CONSTRUCTORS
    Vtb_adder_selfcheck__Syms(VerilatedContext* contextp, Vtb_adder_selfcheck* modelp, const char* namep, bool isRoot);
    ~Vtb_adder_selfcheck__Syms();

    // METHODS
    const char* name() const { return vlInst.TOP.vlNamep; }
};

#endif  // guard
