// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmotion.h for the primary calling header

#include "Vmotion.h"
#include "Vmotion__Syms.h"

//==========

void Vmotion::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmotion::eval\n"); );
    Vmotion__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("motion.v", 12, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmotion::_eval_initial_loop(Vmotion__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("motion.v", 12, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vmotion::_sequent__TOP__1(Vmotion__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::_sequent__TOP__1\n"); );
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((4U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__mult13_reg_377 = VL_MULS_III(32,32,32, vlTOPp->in8, vlTOPp->in7);
    }
    if ((4U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__tmp7_reg_407 = VL_MULS_III(32,32,32, vlTOPp->in9, vlTOPp->motion__DOT__tmp6_reg_362);
    }
    if ((8U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__add6_reg_412 = VL_MULS_III(32,32,32, vlTOPp->in1, vlTOPp->motion__DOT__add1_s_reg_387);
    }
    if ((8U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__tmp_2_reg_424 = (vlTOPp->motion__DOT__mult11_reg_372 
                                              + vlTOPp->motion__DOT__add13_reg_402);
    }
    if ((8U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__tmp_1_reg_418 = (vlTOPp->motion__DOT__add2_reg_382 
                                              + (((vlTOPp->motion__DOT__tmp3_reg_392 
                                                   + vlTOPp->motion__DOT__mult7_reg_367) 
                                                  << 3U) 
                                                 + vlTOPp->motion__DOT__tmp5_reg_397));
    }
    if ((2U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__tmp6_reg_362 = (vlTOPp->in7 
                                             + vlTOPp->motion__DOT__add5_reg_305);
    }
    vlTOPp->out1 = vlTOPp->motion__DOT__add6_reg_412;
    if ((4U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__add1_s_reg_387 = (vlTOPp->in2 
                                               + vlTOPp->motion__DOT__mult2_reg_337);
    }
    vlTOPp->out3 = vlTOPp->motion__DOT__tmp_2_reg_424;
    if ((4U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__mult11_reg_372 = VL_MULS_III(32,32,32, vlTOPp->in8, vlTOPp->in6);
    }
    if ((4U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__add13_reg_402 = VL_MULS_III(32,32,32, vlTOPp->in4, vlTOPp->motion__DOT__add4_s_reg_357);
    }
    vlTOPp->out2 = vlTOPp->motion__DOT__tmp_1_reg_418;
    vlTOPp->ap_return = (vlTOPp->motion__DOT__tmp_2_reg_424 
                         + (vlTOPp->motion__DOT__tmp_1_reg_418 
                            + vlTOPp->motion__DOT__add6_reg_412));
    if ((4U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__mult7_reg_367 = VL_MULS_III(32,32,32, vlTOPp->in6, vlTOPp->in3);
    }
    if ((4U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__add2_reg_382 = VL_MULS_III(32,32,32, vlTOPp->in4, vlTOPp->motion__DOT__tmp1_reg_342);
    }
    if ((4U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__tmp5_reg_397 = VL_MULS_III(32,32,32, vlTOPp->in3, vlTOPp->motion__DOT__tmp4_reg_352);
    }
    if ((4U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__tmp3_reg_392 = VL_MULS_III(32,32,32, vlTOPp->in5, vlTOPp->motion__DOT__tmp_reg_347);
    }
    if (((IData)(vlTOPp->motion__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
        vlTOPp->motion__DOT__add5_reg_305 = VL_MULS_III(32,32,32, vlTOPp->in10, vlTOPp->in10);
    }
    if ((2U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__mult2_reg_337 = VL_MULS_III(32,32,32, vlTOPp->in3, vlTOPp->in1);
    }
    if ((2U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__add4_s_reg_357 = (vlTOPp->in8 
                                               + vlTOPp->motion__DOT__mult10_reg_295);
    }
    if ((2U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__tmp1_reg_342 = VL_MULS_III(32,32,32, vlTOPp->in5, vlTOPp->in4);
    }
    if ((2U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__tmp4_reg_352 = (vlTOPp->in7 
                                             + vlTOPp->in2);
    }
    if ((2U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))) {
        vlTOPp->motion__DOT__tmp_reg_347 = (vlTOPp->in2 
                                            + vlTOPp->motion__DOT__add3_reg_300);
    }
    if (((IData)(vlTOPp->motion__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
        vlTOPp->motion__DOT__mult10_reg_295 = VL_MULS_III(32,32,32, vlTOPp->in9, vlTOPp->in6);
    }
    if (((IData)(vlTOPp->motion__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
        vlTOPp->motion__DOT__add3_reg_300 = VL_MULS_III(32,32,32, vlTOPp->in7, vlTOPp->in4);
    }
    vlTOPp->motion__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
                                       ? 1U : (IData)(vlTOPp->motion__DOT__ap_NS_fsm));
    vlTOPp->ap_done = (1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                             >> 4U));
    vlTOPp->ap_ready = (1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                              >> 4U));
    vlTOPp->out1_ap_vld = (1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                 >> 4U));
    vlTOPp->out2_ap_vld = (1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                 >> 4U));
    vlTOPp->out3_ap_vld = (1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                 >> 4U));
}

VL_INLINE_OPT void Vmotion::_combo__TOP__4(Vmotion__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::_combo__TOP__4\n"); );
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
                             & (IData)(vlTOPp->motion__DOT__ap_CS_fsm)));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->ap_start) 
                             << 6U) | ((0x20U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                                 << 5U)) 
                                       | (IData)(vlTOPp->motion__DOT__ap_CS_fsm)));
    vlTOPp->motion__DOT__ap_NS_fsm = vlTOPp->__Vtable1_motion__DOT__ap_NS_fsm
        [vlTOPp->__Vtableidx1];
}

void Vmotion::_eval(Vmotion__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::_eval\n"); );
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

VL_INLINE_OPT QData Vmotion::_change_request(Vmotion__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::_change_request\n"); );
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vmotion::_change_request_1(Vmotion__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::_change_request_1\n"); );
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmotion::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((ap_clk & 0xfeU))) {
        Verilated::overWidthError("ap_clk");}
    if (VL_UNLIKELY((ap_rst & 0xfeU))) {
        Verilated::overWidthError("ap_rst");}
    if (VL_UNLIKELY((ap_start & 0xfeU))) {
        Verilated::overWidthError("ap_start");}
}
#endif  // VL_DEBUG
