// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux__pch.h"
#include "Vmux___024root.h"

VlCoroutine Vmux___024root___eval_initial__TOP__Vtiming__0(Vmux___024root* vlSelf);

void Vmux___024root___eval_initial(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_initial\n"); );
    // Body
    Vmux___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vmux___024root___eval_initial__TOP__Vtiming__0(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF("a b sel | y\n");
    vlSelf->mux_tb__DOT__a = 0U;
    vlSelf->mux_tb__DOT__b = 0U;
    vlSelf->mux_tb__DOT__sel = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_tb.v", 
                                       17);
    VL_WRITEF("%b %b  %b  | %b\n",1,vlSelf->mux_tb__DOT__a,
              1,(IData)(vlSelf->mux_tb__DOT__b),1,vlSelf->mux_tb__DOT__sel,
              1,(IData)(vlSelf->mux_tb__DOT__y));
    vlSelf->mux_tb__DOT__a = 0U;
    vlSelf->mux_tb__DOT__b = 1U;
    vlSelf->mux_tb__DOT__sel = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_tb.v", 
                                       20);
    VL_WRITEF("%b %b  %b  | %b\n",1,vlSelf->mux_tb__DOT__a,
              1,(IData)(vlSelf->mux_tb__DOT__b),1,vlSelf->mux_tb__DOT__sel,
              1,(IData)(vlSelf->mux_tb__DOT__y));
    vlSelf->mux_tb__DOT__a = 1U;
    vlSelf->mux_tb__DOT__b = 0U;
    vlSelf->mux_tb__DOT__sel = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_tb.v", 
                                       23);
    VL_WRITEF("%b %b  %b  | %b\n",1,vlSelf->mux_tb__DOT__a,
              1,(IData)(vlSelf->mux_tb__DOT__b),1,vlSelf->mux_tb__DOT__sel,
              1,(IData)(vlSelf->mux_tb__DOT__y));
    vlSelf->mux_tb__DOT__a = 1U;
    vlSelf->mux_tb__DOT__b = 1U;
    vlSelf->mux_tb__DOT__sel = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_tb.v", 
                                       26);
    VL_WRITEF("%b %b  %b  | %b\n",1,vlSelf->mux_tb__DOT__a,
              1,(IData)(vlSelf->mux_tb__DOT__b),1,vlSelf->mux_tb__DOT__sel,
              1,(IData)(vlSelf->mux_tb__DOT__y));
    VL_FINISH_MT("mux_tb.v", 29, "");
}

VL_INLINE_OPT void Vmux___024root___act_sequent__TOP__0(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->mux_tb__DOT__y = ((IData)(vlSelf->mux_tb__DOT__sel)
                               ? (IData)(vlSelf->mux_tb__DOT__b)
                               : (IData)(vlSelf->mux_tb__DOT__a));
}

void Vmux___024root___eval_act(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmux___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vmux___024root___eval_nba(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmux___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vmux___024root___timing_resume(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vmux___024root___eval_triggers__act(Vmux___024root* vlSelf);

bool Vmux___024root___eval_phase__act(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmux___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmux___024root___timing_resume(vlSelf);
        Vmux___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmux___024root___eval_phase__nba(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmux___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux___024root___dump_triggers__nba(Vmux___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux___024root___dump_triggers__act(Vmux___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux___024root___eval(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmux___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mux_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmux___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mux_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmux___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmux___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmux___024root___eval_debug_assertions(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
