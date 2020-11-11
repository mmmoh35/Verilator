// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmotion.h for the primary calling header

#include "Vmotion.h"
#include "Vmotion__Syms.h"

//==========
CData/*4:0*/ Vmotion::__Vtable1_motion__DOT__ap_NS_fsm[128];

VL_CTOR_IMP(Vmotion) {
    Vmotion__Syms* __restrict vlSymsp = __VlSymsp = new Vmotion__Syms(this, name());
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmotion::__Vconfigure(Vmotion__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vmotion::~Vmotion() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmotion::_settle__TOP__2(Vmotion__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::_settle__TOP__2\n"); );
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out1 = vlTOPp->motion__DOT__add6_reg_412;
    vlTOPp->out2 = vlTOPp->motion__DOT__tmp_1_reg_418;
    vlTOPp->out3 = vlTOPp->motion__DOT__tmp_2_reg_424;
    vlTOPp->ap_return = (vlTOPp->motion__DOT__tmp_2_reg_424 
                         + (vlTOPp->motion__DOT__tmp_1_reg_418 
                            + vlTOPp->motion__DOT__add6_reg_412));
}

void Vmotion::_initial__TOP__3(Vmotion__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::_initial__TOP__3\n"); );
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->motion__DOT__ap_CS_fsm = 1U;
}

void Vmotion::_settle__TOP__5(Vmotion__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::_settle__TOP__5\n"); );
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
                             & (IData)(vlTOPp->motion__DOT__ap_CS_fsm)));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->ap_start) 
                             << 6U) | ((0x20U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                                 << 5U)) 
                                       | (IData)(vlTOPp->motion__DOT__ap_CS_fsm)));
    vlTOPp->motion__DOT__ap_NS_fsm = vlTOPp->__Vtable1_motion__DOT__ap_NS_fsm
        [vlTOPp->__Vtableidx1];
}

void Vmotion::_eval_initial(Vmotion__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::_eval_initial\n"); );
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
    vlTOPp->_initial__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vmotion::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::final\n"); );
    // Variables
    Vmotion__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmotion::_eval_settle(Vmotion__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::_eval_settle\n"); );
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
}

void Vmotion::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmotion::_ctor_var_reset\n"); );
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
    in5 = VL_RAND_RESET_I(32);
    in6 = VL_RAND_RESET_I(32);
    in7 = VL_RAND_RESET_I(32);
    in8 = VL_RAND_RESET_I(32);
    in9 = VL_RAND_RESET_I(32);
    in10 = VL_RAND_RESET_I(32);
    out1 = VL_RAND_RESET_I(32);
    out1_ap_vld = VL_RAND_RESET_I(1);
    out2 = VL_RAND_RESET_I(32);
    out2_ap_vld = VL_RAND_RESET_I(1);
    out3 = VL_RAND_RESET_I(32);
    out3_ap_vld = VL_RAND_RESET_I(1);
    ap_return = VL_RAND_RESET_I(32);
    motion__DOT__ap_CS_fsm = VL_RAND_RESET_I(5);
    motion__DOT__mult10_reg_295 = VL_RAND_RESET_I(32);
    motion__DOT__add3_reg_300 = VL_RAND_RESET_I(32);
    motion__DOT__add5_reg_305 = VL_RAND_RESET_I(32);
    motion__DOT__mult2_reg_337 = VL_RAND_RESET_I(32);
    motion__DOT__tmp1_reg_342 = VL_RAND_RESET_I(32);
    motion__DOT__tmp_reg_347 = VL_RAND_RESET_I(32);
    motion__DOT__tmp4_reg_352 = VL_RAND_RESET_I(32);
    motion__DOT__add4_s_reg_357 = VL_RAND_RESET_I(32);
    motion__DOT__tmp6_reg_362 = VL_RAND_RESET_I(32);
    motion__DOT__mult7_reg_367 = VL_RAND_RESET_I(32);
    motion__DOT__mult11_reg_372 = VL_RAND_RESET_I(32);
    motion__DOT__mult13_reg_377 = VL_RAND_RESET_I(32);
    motion__DOT__add2_reg_382 = VL_RAND_RESET_I(32);
    motion__DOT__add1_s_reg_387 = VL_RAND_RESET_I(32);
    motion__DOT__tmp3_reg_392 = VL_RAND_RESET_I(32);
    motion__DOT__tmp5_reg_397 = VL_RAND_RESET_I(32);
    motion__DOT__add13_reg_402 = VL_RAND_RESET_I(32);
    motion__DOT__tmp7_reg_407 = VL_RAND_RESET_I(32);
    motion__DOT__add6_reg_412 = VL_RAND_RESET_I(32);
    motion__DOT__tmp_1_reg_418 = VL_RAND_RESET_I(32);
    motion__DOT__tmp_2_reg_424 = VL_RAND_RESET_I(32);
    motion__DOT__ap_NS_fsm = VL_RAND_RESET_I(5);
    __Vtableidx1 = 0;
    __Vtable1_motion__DOT__ap_NS_fsm[0] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[1] = 1U;
    __Vtable1_motion__DOT__ap_NS_fsm[2] = 4U;
    __Vtable1_motion__DOT__ap_NS_fsm[3] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[4] = 8U;
    __Vtable1_motion__DOT__ap_NS_fsm[5] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[6] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[7] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[8] = 0x10U;
    __Vtable1_motion__DOT__ap_NS_fsm[9] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[10] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[11] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[12] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[13] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[14] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[15] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[16] = 1U;
    __Vtable1_motion__DOT__ap_NS_fsm[17] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[18] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[19] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[20] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[21] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[22] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[23] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[24] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[25] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[26] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[27] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[28] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[29] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[30] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[31] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[32] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[33] = 1U;
    __Vtable1_motion__DOT__ap_NS_fsm[34] = 4U;
    __Vtable1_motion__DOT__ap_NS_fsm[35] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[36] = 8U;
    __Vtable1_motion__DOT__ap_NS_fsm[37] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[38] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[39] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[40] = 0x10U;
    __Vtable1_motion__DOT__ap_NS_fsm[41] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[42] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[43] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[44] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[45] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[46] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[47] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[48] = 1U;
    __Vtable1_motion__DOT__ap_NS_fsm[49] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[50] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[51] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[52] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[53] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[54] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[55] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[56] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[57] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[58] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[59] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[60] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[61] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[62] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[63] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[64] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[65] = 1U;
    __Vtable1_motion__DOT__ap_NS_fsm[66] = 4U;
    __Vtable1_motion__DOT__ap_NS_fsm[67] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[68] = 8U;
    __Vtable1_motion__DOT__ap_NS_fsm[69] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[70] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[71] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[72] = 0x10U;
    __Vtable1_motion__DOT__ap_NS_fsm[73] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[74] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[75] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[76] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[77] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[78] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[79] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[80] = 1U;
    __Vtable1_motion__DOT__ap_NS_fsm[81] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[82] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[83] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[84] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[85] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[86] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[87] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[88] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[89] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[90] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[91] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[92] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[93] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[94] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[95] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[96] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[97] = 2U;
    __Vtable1_motion__DOT__ap_NS_fsm[98] = 4U;
    __Vtable1_motion__DOT__ap_NS_fsm[99] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[100] = 8U;
    __Vtable1_motion__DOT__ap_NS_fsm[101] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[102] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[103] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[104] = 0x10U;
    __Vtable1_motion__DOT__ap_NS_fsm[105] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[106] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[107] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[108] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[109] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[110] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[111] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[112] = 1U;
    __Vtable1_motion__DOT__ap_NS_fsm[113] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[114] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[115] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[116] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[117] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[118] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[119] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[120] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[121] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[122] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[123] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[124] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[125] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[126] = 0U;
    __Vtable1_motion__DOT__ap_NS_fsm[127] = 0U;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
