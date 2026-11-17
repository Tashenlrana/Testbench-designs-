// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_adder_selfcheck__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_adder_selfcheck::Vtb_adder_selfcheck(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vtb_adder_selfcheck{_vcontextp__, _vcname__, true} {}

Vtb_adder_selfcheck::Vtb_adder_selfcheck(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_adder_selfcheck__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_adder_selfcheck::Vtb_adder_selfcheck(const char* _vcname__)
    : Vtb_adder_selfcheck(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_adder_selfcheck::~Vtb_adder_selfcheck() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_adder_selfcheck___024root___eval_debug_assertions(Vtb_adder_selfcheck___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_static(Vtb_adder_selfcheck___024root* vlSelf);
void Vtb_adder_selfcheck___024root___eval_initial(Vtb_adder_selfcheck___024root* vlSelf);
VL_ATTR_COLD bool Vtb_adder_selfcheck___024root___eval_stl(Vtb_adder_selfcheck___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vtb_adder_selfcheck___024root___eval_sample(Vtb_adder_selfcheck___024root* vlSelf);
bool Vtb_adder_selfcheck___024root___eval_ico(Vtb_adder_selfcheck___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vtb_adder_selfcheck___024root___eval_act(Vtb_adder_selfcheck___024root* vlSelf);
bool Vtb_adder_selfcheck___024root___eval_inact(Vtb_adder_selfcheck___024root* vlSelf);
bool Vtb_adder_selfcheck___024root___eval_nba(Vtb_adder_selfcheck___024root* vlSelf);
bool Vtb_adder_selfcheck___024root___eval_obs(Vtb_adder_selfcheck___024root* vlSelf);
bool Vtb_adder_selfcheck___024root___eval_react(Vtb_adder_selfcheck___024root* vlSelf);
void Vtb_adder_selfcheck___024root___eval_postponed(Vtb_adder_selfcheck___024root* vlSelf);
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_final(Vtb_adder_selfcheck___024root* vlSelf);
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_dump_triggers__stl(Vtb_adder_selfcheck___024root* vlSelf);
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_dump_triggers__ico(Vtb_adder_selfcheck___024root* vlSelf);
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_dump_triggers__act(Vtb_adder_selfcheck___024root* vlSelf);
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_dump_triggers__nba(Vtb_adder_selfcheck___024root* vlSelf);
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_dump_triggers__obs(Vtb_adder_selfcheck___024root* vlSelf);
VL_ATTR_COLD void Vtb_adder_selfcheck___024root___eval_dump_triggers__react(Vtb_adder_selfcheck___024root* vlSelf);

void Vtb_adder_selfcheck::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_adder_selfcheck::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_adder_selfcheck::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_adder_selfcheck___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_adder_selfcheck::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vtb_adder_selfcheck::evalStatic() {
    Vtb_adder_selfcheck___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vtb_adder_selfcheck::evalInitial() {
    Vtb_adder_selfcheck___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vtb_adder_selfcheck::evalStl(bool firstIteration) {
    return Vtb_adder_selfcheck___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vtb_adder_selfcheck::evalSample() {
    Vtb_adder_selfcheck___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vtb_adder_selfcheck::evalIco(bool firstIteration) {
    return Vtb_adder_selfcheck___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vtb_adder_selfcheck::evalAct() {
    return Vtb_adder_selfcheck___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vtb_adder_selfcheck::evalInact() {
    return Vtb_adder_selfcheck___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vtb_adder_selfcheck::evalNba() {
    return Vtb_adder_selfcheck___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vtb_adder_selfcheck::evalObs() {
    return Vtb_adder_selfcheck___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vtb_adder_selfcheck::evalReact() {
    return Vtb_adder_selfcheck___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vtb_adder_selfcheck::evalPostponed() {
    Vtb_adder_selfcheck___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vtb_adder_selfcheck::evalFinal() {
    Vtb_adder_selfcheck___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_adder_selfcheck::dumpTriggersStl() {
    Vtb_adder_selfcheck___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_adder_selfcheck::dumpTriggersIco() {
    Vtb_adder_selfcheck___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_adder_selfcheck::dumpTriggersAct() {
    Vtb_adder_selfcheck___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_adder_selfcheck::dumpTriggersNba() {
    Vtb_adder_selfcheck___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_adder_selfcheck::dumpTriggersObs() {
    Vtb_adder_selfcheck___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_adder_selfcheck::dumpTriggersReact() {
    Vtb_adder_selfcheck___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

//============================================================
// Events and timing
bool Vtb_adder_selfcheck::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_adder_selfcheck::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_adder_selfcheck::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_adder_selfcheck::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_adder_selfcheck::hierName() const { return vlSymsp->name(); }
const char* Vtb_adder_selfcheck::modelName() const { return "Vtb_adder_selfcheck"; }
unsigned Vtb_adder_selfcheck::threads() const { return 1; }
void Vtb_adder_selfcheck::prepareClone() const { contextp()->prepareClone(); }
void Vtb_adder_selfcheck::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_adder_selfcheck::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vtb_adder_selfcheck___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_adder_selfcheck___024root__trace_init_top(Vtb_adder_selfcheck___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_adder_selfcheck___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_adder_selfcheck___024root*>(voidSelf);
    Vtb_adder_selfcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_adder_selfcheck___024root__trace_decl_types(tracep);
    Vtb_adder_selfcheck___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_adder_selfcheck___024root__trace_register(Vtb_adder_selfcheck___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_adder_selfcheck::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_adder_selfcheck::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 10);
    Vtb_adder_selfcheck___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
