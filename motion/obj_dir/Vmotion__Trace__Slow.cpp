// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmotion__Syms.h"


//======================

void Vmotion::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmotion::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmotion__Syms* __restrict vlSymsp = static_cast<Vmotion__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmotion::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmotion::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmotion__Syms* __restrict vlSymsp = static_cast<Vmotion__Syms*>(userp);
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmotion::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmotion__Syms* __restrict vlSymsp = static_cast<Vmotion__Syms*>(userp);
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+36,"ap_clk", false,-1);
        tracep->declBit(c+37,"ap_rst", false,-1);
        tracep->declBit(c+38,"ap_start", false,-1);
        tracep->declBit(c+39,"ap_done", false,-1);
        tracep->declBit(c+40,"ap_idle", false,-1);
        tracep->declBit(c+41,"ap_ready", false,-1);
        tracep->declBus(c+42,"in1", false,-1, 31,0);
        tracep->declBus(c+43,"in2", false,-1, 31,0);
        tracep->declBus(c+44,"in3", false,-1, 31,0);
        tracep->declBus(c+45,"in4", false,-1, 31,0);
        tracep->declBus(c+46,"in5", false,-1, 31,0);
        tracep->declBus(c+47,"in6", false,-1, 31,0);
        tracep->declBus(c+48,"in7", false,-1, 31,0);
        tracep->declBus(c+49,"in8", false,-1, 31,0);
        tracep->declBus(c+50,"in9", false,-1, 31,0);
        tracep->declBus(c+51,"in10", false,-1, 31,0);
        tracep->declBus(c+52,"out1", false,-1, 31,0);
        tracep->declBit(c+53,"out1_ap_vld", false,-1);
        tracep->declBus(c+54,"out2", false,-1, 31,0);
        tracep->declBit(c+55,"out2_ap_vld", false,-1);
        tracep->declBus(c+56,"out3", false,-1, 31,0);
        tracep->declBit(c+57,"out3_ap_vld", false,-1);
        tracep->declBus(c+58,"ap_return", false,-1, 31,0);
        tracep->declBus(c+79,"motion ap_ST_fsm_state1", false,-1, 4,0);
        tracep->declBus(c+80,"motion ap_ST_fsm_state2", false,-1, 4,0);
        tracep->declBus(c+81,"motion ap_ST_fsm_state3", false,-1, 4,0);
        tracep->declBus(c+82,"motion ap_ST_fsm_state4", false,-1, 4,0);
        tracep->declBus(c+83,"motion ap_ST_fsm_state5", false,-1, 4,0);
        tracep->declBit(c+36,"motion ap_clk", false,-1);
        tracep->declBit(c+37,"motion ap_rst", false,-1);
        tracep->declBit(c+38,"motion ap_start", false,-1);
        tracep->declBit(c+39,"motion ap_done", false,-1);
        tracep->declBit(c+40,"motion ap_idle", false,-1);
        tracep->declBit(c+41,"motion ap_ready", false,-1);
        tracep->declBus(c+42,"motion in1", false,-1, 31,0);
        tracep->declBus(c+43,"motion in2", false,-1, 31,0);
        tracep->declBus(c+44,"motion in3", false,-1, 31,0);
        tracep->declBus(c+45,"motion in4", false,-1, 31,0);
        tracep->declBus(c+46,"motion in5", false,-1, 31,0);
        tracep->declBus(c+47,"motion in6", false,-1, 31,0);
        tracep->declBus(c+48,"motion in7", false,-1, 31,0);
        tracep->declBus(c+49,"motion in8", false,-1, 31,0);
        tracep->declBus(c+50,"motion in9", false,-1, 31,0);
        tracep->declBus(c+51,"motion in10", false,-1, 31,0);
        tracep->declBus(c+52,"motion out1", false,-1, 31,0);
        tracep->declBit(c+53,"motion out1_ap_vld", false,-1);
        tracep->declBus(c+54,"motion out2", false,-1, 31,0);
        tracep->declBit(c+55,"motion out2_ap_vld", false,-1);
        tracep->declBus(c+56,"motion out3", false,-1, 31,0);
        tracep->declBit(c+57,"motion out3_ap_vld", false,-1);
        tracep->declBus(c+58,"motion ap_return", false,-1, 31,0);
        tracep->declBus(c+1,"motion ap_CS_fsm", false,-1, 4,0);
        tracep->declBit(c+2,"motion ap_CS_fsm_state1", false,-1);
        tracep->declBus(c+59,"motion mult10_fu_125_p2", false,-1, 31,0);
        tracep->declBus(c+3,"motion mult10_reg_295", false,-1, 31,0);
        tracep->declBus(c+60,"motion add3_fu_131_p2", false,-1, 31,0);
        tracep->declBus(c+4,"motion add3_reg_300", false,-1, 31,0);
        tracep->declBus(c+61,"motion add5_fu_137_p2", false,-1, 31,0);
        tracep->declBus(c+5,"motion add5_reg_305", false,-1, 31,0);
        tracep->declBit(c+6,"motion ap_CS_fsm_state2", false,-1);
        tracep->declBus(c+62,"motion mult2_fu_143_p2", false,-1, 31,0);
        tracep->declBus(c+7,"motion mult2_reg_337", false,-1, 31,0);
        tracep->declBus(c+63,"motion tmp1_fu_149_p2", false,-1, 31,0);
        tracep->declBus(c+8,"motion tmp1_reg_342", false,-1, 31,0);
        tracep->declBus(c+64,"motion tmp_fu_154_p2", false,-1, 31,0);
        tracep->declBus(c+9,"motion tmp_reg_347", false,-1, 31,0);
        tracep->declBus(c+65,"motion tmp4_fu_159_p2", false,-1, 31,0);
        tracep->declBus(c+10,"motion tmp4_reg_352", false,-1, 31,0);
        tracep->declBus(c+66,"motion add4_s_fu_164_p2", false,-1, 31,0);
        tracep->declBus(c+11,"motion add4_s_reg_357", false,-1, 31,0);
        tracep->declBus(c+67,"motion tmp6_fu_169_p2", false,-1, 31,0);
        tracep->declBus(c+12,"motion tmp6_reg_362", false,-1, 31,0);
        tracep->declBus(c+68,"motion mult7_fu_173_p2", false,-1, 31,0);
        tracep->declBus(c+13,"motion mult7_reg_367", false,-1, 31,0);
        tracep->declBit(c+14,"motion ap_CS_fsm_state3", false,-1);
        tracep->declBus(c+69,"motion mult11_fu_177_p2", false,-1, 31,0);
        tracep->declBus(c+15,"motion mult11_reg_372", false,-1, 31,0);
        tracep->declBus(c+70,"motion mult13_fu_181_p2", false,-1, 31,0);
        tracep->declBus(c+16,"motion mult13_reg_377", false,-1, 31,0);
        tracep->declBus(c+71,"motion add2_fu_185_p2", false,-1, 31,0);
        tracep->declBus(c+17,"motion add2_reg_382", false,-1, 31,0);
        tracep->declBus(c+72,"motion add1_s_fu_189_p2", false,-1, 31,0);
        tracep->declBus(c+18,"motion add1_s_reg_387", false,-1, 31,0);
        tracep->declBus(c+73,"motion tmp3_fu_193_p2", false,-1, 31,0);
        tracep->declBus(c+19,"motion tmp3_reg_392", false,-1, 31,0);
        tracep->declBus(c+74,"motion tmp5_fu_197_p2", false,-1, 31,0);
        tracep->declBus(c+20,"motion tmp5_reg_397", false,-1, 31,0);
        tracep->declBus(c+75,"motion add13_fu_201_p2", false,-1, 31,0);
        tracep->declBus(c+21,"motion add13_reg_402", false,-1, 31,0);
        tracep->declBus(c+76,"motion tmp7_fu_205_p2", false,-1, 31,0);
        tracep->declBus(c+22,"motion tmp7_reg_407", false,-1, 31,0);
        tracep->declBus(c+77,"motion add6_fu_209_p2", false,-1, 31,0);
        tracep->declBus(c+23,"motion add6_reg_412", false,-1, 31,0);
        tracep->declBit(c+24,"motion ap_CS_fsm_state4", false,-1);
        tracep->declBus(c+25,"motion tmp_1_fu_228_p2", false,-1, 31,0);
        tracep->declBus(c+26,"motion tmp_1_reg_418", false,-1, 31,0);
        tracep->declBus(c+27,"motion tmp_2_fu_256_p2", false,-1, 31,0);
        tracep->declBus(c+28,"motion tmp_2_reg_424", false,-1, 31,0);
        tracep->declBit(c+29,"motion ap_CS_fsm_state5", false,-1);
        tracep->declBus(c+50,"motion mult10_fu_125_p0", false,-1, 31,0);
        tracep->declBus(c+47,"motion mult10_fu_125_p1", false,-1, 31,0);
        tracep->declBus(c+48,"motion add3_fu_131_p0", false,-1, 31,0);
        tracep->declBus(c+45,"motion add3_fu_131_p1", false,-1, 31,0);
        tracep->declBus(c+51,"motion add5_fu_137_p0", false,-1, 31,0);
        tracep->declBus(c+51,"motion add5_fu_137_p1", false,-1, 31,0);
        tracep->declBus(c+44,"motion mult2_fu_143_p0", false,-1, 31,0);
        tracep->declBus(c+42,"motion mult2_fu_143_p1", false,-1, 31,0);
        tracep->declBus(c+46,"motion tmp1_fu_149_p0", false,-1, 31,0);
        tracep->declBus(c+45,"motion tmp1_fu_149_p1", false,-1, 31,0);
        tracep->declBus(c+48,"motion tmp4_fu_159_p0", false,-1, 31,0);
        tracep->declBus(c+49,"motion add4_s_fu_164_p0", false,-1, 31,0);
        tracep->declBus(c+48,"motion tmp6_fu_169_p0", false,-1, 31,0);
        tracep->declBus(c+47,"motion mult7_fu_173_p0", false,-1, 31,0);
        tracep->declBus(c+44,"motion mult7_fu_173_p1", false,-1, 31,0);
        tracep->declBus(c+49,"motion mult11_fu_177_p0", false,-1, 31,0);
        tracep->declBus(c+47,"motion mult11_fu_177_p1", false,-1, 31,0);
        tracep->declBus(c+49,"motion mult13_fu_181_p0", false,-1, 31,0);
        tracep->declBus(c+48,"motion mult13_fu_181_p1", false,-1, 31,0);
        tracep->declBus(c+45,"motion add2_fu_185_p0", false,-1, 31,0);
        tracep->declBus(c+46,"motion tmp3_fu_193_p0", false,-1, 31,0);
        tracep->declBus(c+44,"motion tmp5_fu_197_p0", false,-1, 31,0);
        tracep->declBus(c+45,"motion add13_fu_201_p0", false,-1, 31,0);
        tracep->declBus(c+50,"motion tmp7_fu_205_p0", false,-1, 31,0);
        tracep->declBus(c+42,"motion add6_fu_209_p0", false,-1, 31,0);
        tracep->declBus(c+30,"motion add9_fu_213_p2", false,-1, 31,0);
        tracep->declBus(c+31,"motion shf1_fu_217_p2", false,-1, 31,0);
        tracep->declBus(c+32,"motion tmp2_fu_223_p2", false,-1, 31,0);
        tracep->declBus(c+33,"motion add14_fu_233_p2", false,-1, 31,0);
        tracep->declBus(c+84,"motion tmp_6_fu_237_p4", false,-1, 28,0);
        tracep->declBus(c+85,"motion shf2_fu_247_p1", false,-1, 31,0);
        tracep->declBus(c+34,"motion tmp8_fu_251_p2", false,-1, 31,0);
        tracep->declBus(c+35,"motion tmp9_fu_261_p2", false,-1, 31,0);
        tracep->declBus(c+78,"motion ap_NS_fsm", false,-1, 4,0);
        tracep->declBit(c+86,"motion add14_fu_233_p2_temp11", false,-1);
    }
}

void Vmotion::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmotion::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmotion__Syms* __restrict vlSymsp = static_cast<Vmotion__Syms*>(userp);
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmotion::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmotion__Syms* __restrict vlSymsp = static_cast<Vmotion__Syms*>(userp);
    Vmotion* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->motion__DOT__ap_CS_fsm),5);
        tracep->fullBit(oldp+2,((1U & (IData)(vlTOPp->motion__DOT__ap_CS_fsm))));
        tracep->fullIData(oldp+3,(vlTOPp->motion__DOT__mult10_reg_295),32);
        tracep->fullIData(oldp+4,(vlTOPp->motion__DOT__add3_reg_300),32);
        tracep->fullIData(oldp+5,(vlTOPp->motion__DOT__add5_reg_305),32);
        tracep->fullBit(oldp+6,((1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                       >> 1U))));
        tracep->fullIData(oldp+7,(vlTOPp->motion__DOT__mult2_reg_337),32);
        tracep->fullIData(oldp+8,(vlTOPp->motion__DOT__tmp1_reg_342),32);
        tracep->fullIData(oldp+9,(vlTOPp->motion__DOT__tmp_reg_347),32);
        tracep->fullIData(oldp+10,(vlTOPp->motion__DOT__tmp4_reg_352),32);
        tracep->fullIData(oldp+11,(vlTOPp->motion__DOT__add4_s_reg_357),32);
        tracep->fullIData(oldp+12,(vlTOPp->motion__DOT__tmp6_reg_362),32);
        tracep->fullIData(oldp+13,(vlTOPp->motion__DOT__mult7_reg_367),32);
        tracep->fullBit(oldp+14,((1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                        >> 2U))));
        tracep->fullIData(oldp+15,(vlTOPp->motion__DOT__mult11_reg_372),32);
        tracep->fullIData(oldp+16,(vlTOPp->motion__DOT__mult13_reg_377),32);
        tracep->fullIData(oldp+17,(vlTOPp->motion__DOT__add2_reg_382),32);
        tracep->fullIData(oldp+18,(vlTOPp->motion__DOT__add1_s_reg_387),32);
        tracep->fullIData(oldp+19,(vlTOPp->motion__DOT__tmp3_reg_392),32);
        tracep->fullIData(oldp+20,(vlTOPp->motion__DOT__tmp5_reg_397),32);
        tracep->fullIData(oldp+21,(vlTOPp->motion__DOT__add13_reg_402),32);
        tracep->fullIData(oldp+22,(vlTOPp->motion__DOT__tmp7_reg_407),32);
        tracep->fullIData(oldp+23,(vlTOPp->motion__DOT__add6_reg_412),32);
        tracep->fullBit(oldp+24,((1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                        >> 3U))));
        tracep->fullIData(oldp+25,((vlTOPp->motion__DOT__add2_reg_382 
                                    + (((vlTOPp->motion__DOT__tmp3_reg_392 
                                         + vlTOPp->motion__DOT__mult7_reg_367) 
                                        << 3U) + vlTOPp->motion__DOT__tmp5_reg_397))),32);
        tracep->fullIData(oldp+26,(vlTOPp->motion__DOT__tmp_1_reg_418),32);
        tracep->fullIData(oldp+27,((vlTOPp->motion__DOT__mult11_reg_372 
                                    + vlTOPp->motion__DOT__add13_reg_402)),32);
        tracep->fullIData(oldp+28,(vlTOPp->motion__DOT__tmp_2_reg_424),32);
        tracep->fullBit(oldp+29,((1U & ((IData)(vlTOPp->motion__DOT__ap_CS_fsm) 
                                        >> 4U))));
        tracep->fullIData(oldp+30,((vlTOPp->motion__DOT__tmp3_reg_392 
                                    + vlTOPp->motion__DOT__mult7_reg_367)),32);
        tracep->fullIData(oldp+31,(((vlTOPp->motion__DOT__tmp3_reg_392 
                                     + vlTOPp->motion__DOT__mult7_reg_367) 
                                    << 3U)),32);
        tracep->fullIData(oldp+32,((((vlTOPp->motion__DOT__tmp3_reg_392 
                                      + vlTOPp->motion__DOT__mult7_reg_367) 
                                     << 3U) + vlTOPp->motion__DOT__tmp5_reg_397)),32);
        tracep->fullIData(oldp+33,((vlTOPp->motion__DOT__tmp7_reg_407 
                                    + vlTOPp->motion__DOT__mult13_reg_377)),32);
        tracep->fullIData(oldp+34,(vlTOPp->motion__DOT__add13_reg_402),32);
        tracep->fullIData(oldp+35,((vlTOPp->motion__DOT__tmp_1_reg_418 
                                    + vlTOPp->motion__DOT__add6_reg_412)),32);
        tracep->fullBit(oldp+36,(vlTOPp->ap_clk));
        tracep->fullBit(oldp+37,(vlTOPp->ap_rst));
        tracep->fullBit(oldp+38,(vlTOPp->ap_start));
        tracep->fullBit(oldp+39,(vlTOPp->ap_done));
        tracep->fullBit(oldp+40,(vlTOPp->ap_idle));
        tracep->fullBit(oldp+41,(vlTOPp->ap_ready));
        tracep->fullIData(oldp+42,(vlTOPp->in1),32);
        tracep->fullIData(oldp+43,(vlTOPp->in2),32);
        tracep->fullIData(oldp+44,(vlTOPp->in3),32);
        tracep->fullIData(oldp+45,(vlTOPp->in4),32);
        tracep->fullIData(oldp+46,(vlTOPp->in5),32);
        tracep->fullIData(oldp+47,(vlTOPp->in6),32);
        tracep->fullIData(oldp+48,(vlTOPp->in7),32);
        tracep->fullIData(oldp+49,(vlTOPp->in8),32);
        tracep->fullIData(oldp+50,(vlTOPp->in9),32);
        tracep->fullIData(oldp+51,(vlTOPp->in10),32);
        tracep->fullIData(oldp+52,(vlTOPp->out1),32);
        tracep->fullBit(oldp+53,(vlTOPp->out1_ap_vld));
        tracep->fullIData(oldp+54,(vlTOPp->out2),32);
        tracep->fullBit(oldp+55,(vlTOPp->out2_ap_vld));
        tracep->fullIData(oldp+56,(vlTOPp->out3),32);
        tracep->fullBit(oldp+57,(vlTOPp->out3_ap_vld));
        tracep->fullIData(oldp+58,(vlTOPp->ap_return),32);
        tracep->fullIData(oldp+59,(VL_MULS_III(32,32,32, vlTOPp->in9, vlTOPp->in6)),32);
        tracep->fullIData(oldp+60,(VL_MULS_III(32,32,32, vlTOPp->in7, vlTOPp->in4)),32);
        tracep->fullIData(oldp+61,(VL_MULS_III(32,32,32, vlTOPp->in10, vlTOPp->in10)),32);
        tracep->fullIData(oldp+62,(VL_MULS_III(32,32,32, vlTOPp->in3, vlTOPp->in1)),32);
        tracep->fullIData(oldp+63,(VL_MULS_III(32,32,32, vlTOPp->in5, vlTOPp->in4)),32);
        tracep->fullIData(oldp+64,((vlTOPp->in2 + vlTOPp->motion__DOT__add3_reg_300)),32);
        tracep->fullIData(oldp+65,((vlTOPp->in7 + vlTOPp->in2)),32);
        tracep->fullIData(oldp+66,((vlTOPp->in8 + vlTOPp->motion__DOT__mult10_reg_295)),32);
        tracep->fullIData(oldp+67,((vlTOPp->in7 + vlTOPp->motion__DOT__add5_reg_305)),32);
        tracep->fullIData(oldp+68,(VL_MULS_III(32,32,32, vlTOPp->in6, vlTOPp->in3)),32);
        tracep->fullIData(oldp+69,(VL_MULS_III(32,32,32, vlTOPp->in8, vlTOPp->in6)),32);
        tracep->fullIData(oldp+70,(VL_MULS_III(32,32,32, vlTOPp->in8, vlTOPp->in7)),32);
        tracep->fullIData(oldp+71,(VL_MULS_III(32,32,32, vlTOPp->in4, vlTOPp->motion__DOT__tmp1_reg_342)),32);
        tracep->fullIData(oldp+72,((vlTOPp->in2 + vlTOPp->motion__DOT__mult2_reg_337)),32);
        tracep->fullIData(oldp+73,(VL_MULS_III(32,32,32, vlTOPp->in5, vlTOPp->motion__DOT__tmp_reg_347)),32);
        tracep->fullIData(oldp+74,(VL_MULS_III(32,32,32, vlTOPp->in3, vlTOPp->motion__DOT__tmp4_reg_352)),32);
        tracep->fullIData(oldp+75,(VL_MULS_III(32,32,32, vlTOPp->in4, vlTOPp->motion__DOT__add4_s_reg_357)),32);
        tracep->fullIData(oldp+76,(VL_MULS_III(32,32,32, vlTOPp->in9, vlTOPp->motion__DOT__tmp6_reg_362)),32);
        tracep->fullIData(oldp+77,(VL_MULS_III(32,32,32, vlTOPp->in1, vlTOPp->motion__DOT__add1_s_reg_387)),32);
        tracep->fullCData(oldp+78,(vlTOPp->motion__DOT__ap_NS_fsm),5);
        tracep->fullCData(oldp+79,(1U),5);
        tracep->fullCData(oldp+80,(2U),5);
        tracep->fullCData(oldp+81,(4U),5);
        tracep->fullCData(oldp+82,(8U),5);
        tracep->fullCData(oldp+83,(0x10U),5);
        tracep->fullIData(oldp+84,(0U),29);
        tracep->fullIData(oldp+85,(0U),32);
        tracep->fullBit(oldp+86,(0U));
    }
}
