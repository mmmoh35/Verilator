// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhls_macc.h for the primary calling header

#include "Vhls_macc.h"
#include "Vhls_macc__Syms.h"

//==========

void Vhls_macc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhls_macc::eval\n"); );
    Vhls_macc__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vhls_macc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("hls_macc.v", 12, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vhls_macc::_eval_initial_loop(Vhls_macc__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
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
            VL_FATAL_MT("hls_macc.v", 12, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vhls_macc::_combo__TOP__1(Vhls_macc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhls_macc::_combo__TOP__1\n"); );
    Vhls_macc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out13 = (vlTOPp->in14 - vlTOPp->in15);
}

VL_INLINE_OPT void Vhls_macc::_sequent__TOP__3(Vhls_macc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhls_macc::_sequent__TOP__3\n"); );
    Vhls_macc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x80U & (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) {
        vlTOPp->hls_macc__DOT__t8_reg_197 = vlTOPp->hls_macc__DOT__t16_1_reg_384;
    } else {
        if ((0x200U & (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) {
            vlTOPp->hls_macc__DOT__t8_reg_197 = vlTOPp->hls_macc__DOT__t16_reg_389;
        }
    }
    if ((0x100U & (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) {
        vlTOPp->hls_macc__DOT__t16_reg_389 = (vlTOPp->hls_macc__DOT__t11_reg_334 
                                              - vlTOPp->in17);
    }
    if ((0x40U & (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) {
        vlTOPp->hls_macc__DOT__t16_1_reg_384 = (vlTOPp->hls_macc__DOT__t26_2_reg_378 
                                                - vlTOPp->in28);
    }
    if ((0x20U & (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) {
        vlTOPp->hls_macc__DOT__t26_2_reg_378 = ((IData)(vlTOPp->hls_macc__DOT__tmp_2_reg_343)
                                                 ? vlTOPp->hls_macc__DOT__t26_reg_373
                                                 : vlTOPp->hls_macc__DOT__t26_1_reg_363);
    }
    if ((1U & (((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
                >> 2U) & (~ (IData)(vlTOPp->hls_macc__DOT__tmp_2_reg_343))))) {
        vlTOPp->hls_macc__DOT__t26_1_reg_363 = (vlTOPp->hls_macc__DOT__tmp3_reg_353 
                                                + vlTOPp->hls_macc__DOT__t5_reg_293);
    }
    if (((IData)(vlTOPp->hls_macc__DOT__tmp_2_reg_343) 
         & ((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
            >> 4U))) {
        vlTOPp->hls_macc__DOT__t26_reg_373 = (vlTOPp->hls_macc__DOT__t25_reg_368 
                                              + vlTOPp->in27);
    }
    if ((1U & (((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
                >> 1U) & (~ (IData)(vlTOPp->hls_macc__DOT__tmp_fu_230_p2))))) {
        vlTOPp->hls_macc__DOT__tmp3_reg_353 = (vlTOPp->in19 
                                               + vlTOPp->in20);
    }
    if (((IData)(vlTOPp->hls_macc__DOT__tmp_2_reg_343) 
         & ((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
            >> 3U))) {
        vlTOPp->hls_macc__DOT__t25_reg_368 = (vlTOPp->hls_macc__DOT__t23_reg_358 
                                              - vlTOPp->in24);
    }
    if ((((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
          >> 2U) & (IData)(vlTOPp->hls_macc__DOT__tmp_2_reg_343))) {
        vlTOPp->hls_macc__DOT__t23_reg_358 = (vlTOPp->hls_macc__DOT__tmp2_reg_348 
                                              + vlTOPp->hls_macc__DOT__t11_reg_334);
    }
    if ((1U & (((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
                >> 1U) & (~ (IData)(vlTOPp->hls_macc__DOT__tmp_fu_230_p2))))) {
        vlTOPp->hls_macc__DOT__tmp_2_reg_343 = VL_LTS_III(1,32,32, vlTOPp->in9, vlTOPp->in10);
    }
    if ((2U & (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) {
        vlTOPp->hls_macc__DOT__t11_reg_334 = (vlTOPp->hls_macc__DOT__tmp1_reg_299 
                                              + vlTOPp->in8);
    }
    if ((1U & (((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
                >> 1U) & (~ (IData)(vlTOPp->hls_macc__DOT__tmp_fu_230_p2))))) {
        vlTOPp->hls_macc__DOT__tmp2_reg_348 = (vlTOPp->hls_macc__DOT__t5_reg_293 
                                               + vlTOPp->in22);
    }
    if (((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
         & (IData)(vlTOPp->ap_start))) {
        vlTOPp->hls_macc__DOT__tmp1_reg_299 = (vlTOPp->in7 
                                               + vlTOPp->in12);
    }
    if (((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
         & (IData)(vlTOPp->ap_start))) {
        vlTOPp->hls_macc__DOT__t5_reg_293 = (vlTOPp->in3 
                                             - vlTOPp->in4);
    }
    vlTOPp->hls_macc__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
                                         ? 1U : (IData)(vlTOPp->hls_macc__DOT__ap_NS_fsm));
    vlTOPp->ap_done = (1U & ((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
                             >> 0xaU));
    vlTOPp->ap_ready = (1U & ((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
                              >> 0xaU));
    vlTOPp->out13_ap_vld = (1U & ((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
                                  >> 1U));
    vlTOPp->out30_ap_vld = (1U & ((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
                                  >> 6U));
    vlTOPp->out31_ap_vld = (1U & ((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
                                  >> 0xaU));
}

VL_INLINE_OPT void Vhls_macc::_combo__TOP__4(Vhls_macc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhls_macc::_combo__TOP__4\n"); );
    Vhls_macc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out31 = (vlTOPp->hls_macc__DOT__t8_reg_197 
                     + vlTOPp->in32);
    vlTOPp->out30 = (vlTOPp->hls_macc__DOT__t26_2_reg_378 
                     + vlTOPp->in29);
    vlTOPp->hls_macc__DOT__tmp_fu_230_p2 = (vlTOPp->in2 
                                            == vlTOPp->in1);
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
                             & (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm)));
    if (((((((((1U == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm)) 
               | (2U == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) 
              | (4U == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) 
             | (8U == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) 
            | (0x10U == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) 
           | (0x20U == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) 
          | (0x40U == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) 
         | (0x80U == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm)))) {
        vlTOPp->hls_macc__DOT__ap_NS_fsm = ((1U == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))
                                             ? (((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
                                                 & (IData)(vlTOPp->ap_start))
                                                 ? 2U
                                                 : 1U)
                                             : ((2U 
                                                 == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))
                                                 ? 
                                                ((((IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm) 
                                                   >> 1U) 
                                                  & (IData)(vlTOPp->hls_macc__DOT__tmp_fu_230_p2))
                                                  ? 0x100U
                                                  : 4U)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))
                                                  ? 8U
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))
                                                   ? 0x10U
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))
                                                    ? 0x20U
                                                    : 
                                                   ((0x20U 
                                                     == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))
                                                     ? 0x40U
                                                     : 
                                                    ((0x40U 
                                                      == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))
                                                      ? 0x80U
                                                      : 0x400U)))))));
    } else {
        if ((0x100U == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) {
            vlTOPp->hls_macc__DOT__ap_NS_fsm = 0x200U;
        } else {
            if ((0x200U == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) {
                vlTOPp->hls_macc__DOT__ap_NS_fsm = 0x400U;
            } else {
                if ((0x400U == (IData)(vlTOPp->hls_macc__DOT__ap_CS_fsm))) {
                    vlTOPp->hls_macc__DOT__ap_NS_fsm = 1U;
                }
            }
        }
    }
}

void Vhls_macc::_eval(Vhls_macc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhls_macc::_eval\n"); );
    Vhls_macc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

VL_INLINE_OPT QData Vhls_macc::_change_request(Vhls_macc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhls_macc::_change_request\n"); );
    Vhls_macc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vhls_macc::_change_request_1(Vhls_macc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhls_macc::_change_request_1\n"); );
    Vhls_macc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vhls_macc::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhls_macc::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((ap_clk & 0xfeU))) {
        Verilated::overWidthError("ap_clk");}
    if (VL_UNLIKELY((ap_rst & 0xfeU))) {
        Verilated::overWidthError("ap_rst");}
    if (VL_UNLIKELY((ap_start & 0xfeU))) {
        Verilated::overWidthError("ap_start");}
}
#endif  // VL_DEBUG
