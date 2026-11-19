// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmemory_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmemory_tb::Vmemory_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vmemory_tb{_vcontextp__, _vcname__, true} {}

Vmemory_tb::Vmemory_tb(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmemory_tb__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmemory_tb::Vmemory_tb(const char* _vcname__)
    : Vmemory_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmemory_tb::~Vmemory_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmemory_tb___024root___eval_debug_assertions(Vmemory_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___eval_static(Vmemory_tb___024root* vlSelf);
void Vmemory_tb___024root___eval_initial(Vmemory_tb___024root* vlSelf);
VL_ATTR_COLD bool Vmemory_tb___024root___eval_stl(Vmemory_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vmemory_tb___024root___eval_sample(Vmemory_tb___024root* vlSelf);
bool Vmemory_tb___024root___eval_ico(Vmemory_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vmemory_tb___024root___eval_act(Vmemory_tb___024root* vlSelf);
bool Vmemory_tb___024root___eval_inact(Vmemory_tb___024root* vlSelf);
bool Vmemory_tb___024root___eval_nba(Vmemory_tb___024root* vlSelf);
bool Vmemory_tb___024root___eval_obs(Vmemory_tb___024root* vlSelf);
bool Vmemory_tb___024root___eval_react(Vmemory_tb___024root* vlSelf);
void Vmemory_tb___024root___eval_postponed(Vmemory_tb___024root* vlSelf);
VL_ATTR_COLD void Vmemory_tb___024root___eval_final(Vmemory_tb___024root* vlSelf);
VL_ATTR_COLD void Vmemory_tb___024root___eval_dump_triggers__stl(Vmemory_tb___024root* vlSelf);
VL_ATTR_COLD void Vmemory_tb___024root___eval_dump_triggers__ico(Vmemory_tb___024root* vlSelf);
VL_ATTR_COLD void Vmemory_tb___024root___eval_dump_triggers__act(Vmemory_tb___024root* vlSelf);
VL_ATTR_COLD void Vmemory_tb___024root___eval_dump_triggers__nba(Vmemory_tb___024root* vlSelf);
VL_ATTR_COLD void Vmemory_tb___024root___eval_dump_triggers__obs(Vmemory_tb___024root* vlSelf);
VL_ATTR_COLD void Vmemory_tb___024root___eval_dump_triggers__react(Vmemory_tb___024root* vlSelf);

void Vmemory_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmemory_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vmemory_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vmemory_tb___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vmemory_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vmemory_tb::evalStatic() {
    Vmemory_tb___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vmemory_tb::evalInitial() {
    Vmemory_tb___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vmemory_tb::evalStl(bool firstIteration) {
    return Vmemory_tb___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vmemory_tb::evalSample() {
    Vmemory_tb___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vmemory_tb::evalIco(bool firstIteration) {
    return Vmemory_tb___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vmemory_tb::evalAct() {
    return Vmemory_tb___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vmemory_tb::evalInact() {
    return Vmemory_tb___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vmemory_tb::evalNba() {
    return Vmemory_tb___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vmemory_tb::evalObs() {
    return Vmemory_tb___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vmemory_tb::evalReact() {
    return Vmemory_tb___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vmemory_tb::evalPostponed() {
    Vmemory_tb___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vmemory_tb::evalFinal() {
    Vmemory_tb___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vmemory_tb::dumpTriggersStl() {
    Vmemory_tb___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vmemory_tb::dumpTriggersIco() {
    Vmemory_tb___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vmemory_tb::dumpTriggersAct() {
    Vmemory_tb___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vmemory_tb::dumpTriggersNba() {
    Vmemory_tb___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vmemory_tb::dumpTriggersObs() {
    Vmemory_tb___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vmemory_tb::dumpTriggersReact() {
    Vmemory_tb___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

void Vmemory_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vmemory_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vmemory_tb::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vmemory_tb::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vmemory_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmemory_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmemory_tb::hierName() const { return vlSymsp->name(); }
const char* Vmemory_tb::modelName() const { return "Vmemory_tb"; }
unsigned Vmemory_tb::threads() const { return 1; }
void Vmemory_tb::prepareClone() const { contextp()->prepareClone(); }
void Vmemory_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmemory_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vmemory_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmemory_tb___024root__trace_init_top(Vmemory_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmemory_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmemory_tb___024root*>(voidSelf);
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vmemory_tb___024root__trace_decl_types(tracep);
    Vmemory_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmemory_tb___024root__trace_register(Vmemory_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmemory_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmemory_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 35);
    Vmemory_tb___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
