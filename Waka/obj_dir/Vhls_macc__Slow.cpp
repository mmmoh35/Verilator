// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhls_macc.h for the primary calling header

#include "Vhls_macc.h"
#include "Vhls_macc__Syms.h"

//==========

VL_CTOR_IMP(Vhls_macc) {
    Vhls_macc__Syms* __restrict vlSymsp = __VlSymsp = new Vhls_macc__Syms(this, name());
    Vhls_macc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vhls_macc::__Vconfigure(Vhls_macc__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vhls_macc::~Vhls_macc() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vhls_macc::_settle__TOP__2(Vhls_macc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhls_macc::_settle__TOP__2\n"); );
    Vhls_macc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out13 = (vlTOPp->in14 - vlTOPp->in15);
    vlTOPp->out31 = (vlTOPp->hls_macc__DOT__t8_reg_197 
                     + vlTOPp->in32);
    vlTOPp->out30 = (vlTOPp->hls_macc__DOT__t26_2_reg_378 
                     + vlTOPp->in29);
    vlTOPp->hls_macc__DOT__tmp_fu_230_p2 = (vlTOPp->in2 
                                            == vlTOPp->in1);
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

void Vhls_macc::_eval_initial(Vhls_macc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhls_macc::_eval_initial\n"); );
    Vhls_macc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void Vhls_macc::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhls_macc::final\n"); );
    // Variables
    Vhls_macc__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vhls_macc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vhls_macc::_eval_settle(Vhls_macc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhls_macc::_eval_settle\n"); );
    Vhls_macc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vhls_macc::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhls_macc::_ctor_var_reset\n"); );
    // Body
    ap_clk = VL_RAND_RESET_I(1);
    ap_rst = VL_RAND_RESET_I(1);
    ap_start = VL_RAND_RESET_I(1);
    ap_done = VL_RAND_RESET_I(1);
    ap_idle = VL_RAND_RESET_I(1);
    ap_ready = VL_RAND_RESET_I(1);
    in1 = VL_RAND_RESET_I(32);
    in2 = VL_RAND_RESET_I(32);
    in3 = VL_RAND_RESET_I(32);
    in4 = VL_RAND_RESET_I(32);
    in7 = VL_RAND_RESET_I(32);
    in8 = VL_RAND_RESET_I(32);
    in9 = VL_RAND_RESET_I(32);
    in10 = VL_RAND_RESET_I(32);
    in14 = VL_RAND_RESET_I(32);
    in12 = VL_RAND_RESET_I(32);
    in15 = VL_RAND_RESET_I(32);
    in17 = VL_RAND_RESET_I(32);
    in19 = VL_RAND_RESET_I(32);
    in20 = VL_RAND_RESET_I(32);
    in22 = VL_RAND_RESET_I(32);
    in24 = VL_RAND_RESET_I(32);
    in27 = VL_RAND_RESET_I(32);
    in28 = VL_RAND_RESET_I(32);
    in29 = VL_RAND_RESET_I(32);
    in32 = VL_RAND_RESET_I(32);
    out13 = VL_RAND_RESET_I(32);
    out13_ap_vld = VL_RAND_RESET_I(1);
    out30 = VL_RAND_RESET_I(32);
    out30_ap_vld = VL_RAND_RESET_I(1);
    out31 = VL_RAND_RESET_I(32);
    out31_ap_vld = VL_RAND_RESET_I(1);
    hls_macc__DOT__ap_CS_fsm = VL_RAND_RESET_I(11);
    hls_macc__DOT__t5_reg_293 = VL_RAND_RESET_I(32);
    hls_macc__DOT__tmp1_reg_299 = VL_RAND_RESET_I(32);
    hls_macc__DOT__t11_reg_334 = VL_RAND_RESET_I(32);
    hls_macc__DOT__tmp_2_reg_343 = VL_RAND_RESET_I(1);
    hls_macc__DOT__tmp_fu_230_p2 = VL_RAND_RESET_I(1);
    hls_macc__DOT__tmp2_reg_348 = VL_RAND_RESET_I(32);
    hls_macc__DOT__tmp3_reg_353 = VL_RAND_RESET_I(32);
    hls_macc__DOT__t23_reg_358 = VL_RAND_RESET_I(32);
    hls_macc__DOT__t26_1_reg_363 = VL_RAND_RESET_I(32);
    hls_macc__DOT__t25_reg_368 = VL_RAND_RESET_I(32);
    hls_macc__DOT__t26_reg_373 = VL_RAND_RESET_I(32);
    hls_macc__DOT__t26_2_reg_378 = VL_RAND_RESET_I(32);
    hls_macc__DOT__t16_1_reg_384 = VL_RAND_RESET_I(32);
    hls_macc__DOT__t16_reg_389 = VL_RAND_RESET_I(32);
    hls_macc__DOT__t8_reg_197 = VL_RAND_RESET_I(32);
    hls_macc__DOT__ap_NS_fsm = VL_RAND_RESET_I(11);
}
