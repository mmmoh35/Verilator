// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmotion__Syms.h"


void Vmotion::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmotion__Syms* __restrict vlSymsp = static_cast<Vmotion__Syms*>(userp);
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmotion::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmotion__Syms* __restrict vlSymsp = static_cast<Vmotion__Syms*>(userp);
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->motion__DOT__ap_CS_fsm),5);
            tracep->chgBit(oldp+1,((1U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))));
            tracep->chgIData(oldp+2,(vlTOPp->motion__DOT__mult10_reg_295),32);
            tracep->chgIData(oldp+3,(vlTOPp->motion__DOT__add3_reg_300),32);
            tracep->chgIData(oldp+4,(vlTOPp->motion__DOT__add5_reg_305),32);
            tracep->chgBit(oldp+5,((1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                          >> 1U))));
            tracep->chgIData(oldp+6,(vlTOPp->motion__DOT__mult2_reg_337),32);
            tracep->chgIData(oldp+7,(vlTOPp->motion__DOT__tmp1_reg_342),32);
            tracep->chgIData(oldp+8,(vlTOPp->motion__DOT__tmp_reg_347),32);
            tracep->chgIData(oldp+9,(vlTOPp->motion__DOT__tmp4_reg_352),32);
            tracep->chgIData(oldp+10,(vlTOPp->motion__DOT__add4_s_reg_357),32);
            tracep->chgIData(oldp+11,(vlTOPp->motion__DOT__tmp6_reg_362),32);
            tracep->chgIData(oldp+12,(vlTOPp->motion__DOT__mult7_reg_367),32);
            tracep->chgBit(oldp+13,((1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                           >> 2U))));
            tracep->chgIData(oldp+14,(vlTOPp->motion__DOT__mult11_reg_372),32);
            tracep->chgIData(oldp+15,(vlTOPp->motion__DOT__mult13_reg_377),32);
            tracep->chgIData(oldp+16,(vlTOPp->motion__DOT__add2_reg_382),32);
            tracep->chgIData(oldp+17,(vlTOPp->motion__DOT__add1_s_reg_387),32);
            tracep->chgIData(oldp+18,(vlTOPp->motion__DOT__tmp3_reg_392),32);
            tracep->chgIData(oldp+19,(vlTOPp->motion__DOT__tmp5_reg_397),32);
            tracep->chgIData(oldp+20,(vlTOPp->motion__DOT__add13_reg_402),32);
            tracep->chgIData(oldp+21,(vlTOPp->motion__DOT__tmp7_reg_407),32);
            tracep->chgIData(oldp+22,(vlTOPp->motion__DOT__add6_reg_412),32);
            tracep->chgBit(oldp+23,((1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                           >> 3U))));
            tracep->chgIData(oldp+24,((vlTOPp->motion__DOT__add2_reg_382 
                                       + (((vlTOPp->motion__DOT__tmp3_reg_392 
                                            + vlTOPp->motion__DOT__mult7_reg_367) 
                                           << 3U) + vlTOPp->motion__DOT__tmp5_reg_397))),32);
            tracep->chgIData(oldp+25,(vlTOPp->motion__DOT__tmp_1_reg_418),32);
            tracep->chgIData(oldp+26,((vlTOPp->motion__DOT__mult11_reg_372 
                                       + vlTOPp->motion__DOT__add13_reg_402)),32);
            tracep->chgIData(oldp+27,(vlTOPp->motion__DOT__tmp_2_reg_424),32);
            tracep->chgBit(oldp+28,((1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                           >> 4U))));
            tracep->chgIData(oldp+29,((vlTOPp->motion__DOT__tmp3_reg_392 
                                       + vlTOPp->motion__DOT__mult7_reg_367)),32);
            tracep->chgIData(oldp+30,(((vlTOPp->motion__DOT__tmp3_reg_392 
                                        + vlTOPp->motion__DOT__mult7_reg_367) 
                                       << 3U)),32);
            tracep->chgIData(oldp+31,((((vlTOPp->motion__DOT__tmp3_reg_392 
                                         + vlTOPp->motion__DOT__mult7_reg_367) 
                                        << 3U) + vlTOPp->motion__DOT__tmp5_reg_397)),32);
            tracep->chgIData(oldp+32,((vlTOPp->motion__DOT__tmp7_reg_407 
                                       + vlTOPp->motion__DOT__mult13_reg_377)),32);
            tracep->chgIData(oldp+33,(vlTOPp->motion__DOT__add13_reg_402),32);
            tracep->chgIData(oldp+34,((vlTOPp->motion__DOT__tmp_1_reg_418 
                                       + vlTOPp->motion__DOT__add6_reg_412)),32);
        }
        tracep->chgBit(oldp+35,(vlTOPp->ap_clk));
        tracep->chgBit(oldp+36,(vlTOPp->ap_rst));
        tracep->chgBit(oldp+37,(vlTOPp->ap_start));
        tracep->chgBit(oldp+38,(vlTOPp->ap_done));
        tracep->chgBit(oldp+39,(vlTOPp->ap_idle));
        tracep->chgBit(oldp+40,(vlTOPp->ap_ready));
        tracep->chgIData(oldp+41,(vlTOPp->in1),32);
        tracep->chgIData(oldp+42,(vlTOPp->in2),32);
        tracep->chgIData(oldp+43,(vlTOPp->in3),32);
        tracep->chgIData(oldp+44,(vlTOPp->in4),32);
        tracep->chgIData(oldp+45,(vlTOPp->in5),32);
        tracep->chgIData(oldp+46,(vlTOPp->in6),32);
        tracep->chgIData(oldp+47,(vlTOPp->in7),32);
        tracep->chgIData(oldp+48,(vlTOPp->in8),32);
        tracep->chgIData(oldp+49,(vlTOPp->in9),32);
        tracep->chgIData(oldp+50,(vlTOPp->in10),32);
        tracep->chgIData(oldp+51,(vlTOPp->out1),32);
        tracep->chgBit(oldp+52,(vlTOPp->out1_ap_vld));
        tracep->chgIData(oldp+53,(vlTOPp->out2),32);
        tracep->chgBit(oldp+54,(vlTOPp->out2_ap_vld));
        tracep->chgIData(oldp+55,(vlTOPp->out3),32);
        tracep->chgBit(oldp+56,(vlTOPp->out3_ap_vld));
        tracep->chgIData(oldp+57,(vlTOPp->ap_return),32);
        tracep->chgIData(oldp+58,(VL_MULS_III(32,32,32, vlTOPp->in9, vlTOPp->in6)),32);
        tracep->chgIData(oldp+59,(VL_MULS_III(32,32,32, vlTOPp->in7, vlTOPp->in4)),32);
        tracep->chgIData(oldp+60,(VL_MULS_III(32,32,32, vlTOPp->in10, vlTOPp->in10)),32);
        tracep->chgIData(oldp+61,(VL_MULS_III(32,32,32, vlTOPp->in3, vlTOPp->in1)),32);
        tracep->chgIData(oldp+62,(VL_MULS_III(32,32,32, vlTOPp->in5, vlTOPp->in4)),32);
        tracep->chgIData(oldp+63,((vlTOPp->in2 + vlTOPp->motion__DOT__add3_reg_300)),32);
        tracep->chgIData(oldp+64,((vlTOPp->in7 + vlTOPp->in2)),32);
        tracep->chgIData(oldp+65,((vlTOPp->in8 + vlTOPp->motion__DOT__mult10_reg_295)),32);
        tracep->chgIData(oldp+66,((vlTOPp->in7 + vlTOPp->motion__DOT__add5_reg_305)),32);
        tracep->chgIData(oldp+67,(VL_MULS_III(32,32,32, vlTOPp->in6, vlTOPp->in3)),32);
        tracep->chgIData(oldp+68,(VL_MULS_III(32,32,32, vlTOPp->in8, vlTOPp->in6)),32);
        tracep->chgIData(oldp+69,(VL_MULS_III(32,32,32, vlTOPp->in8, vlTOPp->in7)),32);
        tracep->chgIData(oldp+70,(VL_MULS_III(32,32,32, vlTOPp->in4, vlTOPp->motion__DOT__tmp1_reg_342)),32);
        tracep->chgIData(oldp+71,((vlTOPp->in2 + vlTOPp->motion__DOT__mult2_reg_337)),32);
        tracep->chgIData(oldp+72,(VL_MULS_III(32,32,32, vlTOPp->in5, vlTOPp->motion__DOT__tmp_reg_347)),32);
        tracep->chgIData(oldp+73,(VL_MULS_III(32,32,32, vlTOPp->in3, vlTOPp->motion__DOT__tmp4_reg_352)),32);
        tracep->chgIData(oldp+74,(VL_MULS_III(32,32,32, vlTOPp->in4, vlTOPp->motion__DOT__add4_s_reg_357)),32);
        tracep->chgIData(oldp+75,(VL_MULS_III(32,32,32, vlTOPp->in9, vlTOPp->motion__DOT__tmp6_reg_362)),32);
        tracep->chgIData(oldp+76,(VL_MULS_III(32,32,32, vlTOPp->in1, vlTOPp->motion__DOT__add1_s_reg_387)),32);
        tracep->chgCData(oldp+77,(vlTOPp->motion__DOT__ap_NS_fsm),5);
    }
}

void Vmotion::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmotion__Syms* __restrict vlSymsp = static_cast<Vmotion__Syms*>(userp);
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
