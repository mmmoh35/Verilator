// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VHLS_MACC_H_
#define _VHLS_MACC_H_  // guard

#include "verilated.h"

//==========

class Vhls_macc__Syms;

//----------

VL_MODULE(Vhls_macc) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(ap_clk,0,0);
    VL_IN8(ap_rst,0,0);
    VL_IN8(ap_start,0,0);
    VL_OUT8(ap_done,0,0);
    VL_OUT8(ap_idle,0,0);
    VL_OUT8(ap_ready,0,0);
    VL_OUT8(out13_ap_vld,0,0);
    VL_OUT8(out30_ap_vld,0,0);
    VL_OUT8(out31_ap_vld,0,0);
    VL_IN(in1,31,0);
    VL_IN(in2,31,0);
    VL_IN(in3,31,0);
    VL_IN(in4,31,0);
    VL_IN(in7,31,0);
    VL_IN(in8,31,0);
    VL_IN(in9,31,0);
    VL_IN(in10,31,0);
    VL_IN(in14,31,0);
    VL_IN(in12,31,0);
    VL_IN(in15,31,0);
    VL_IN(in17,31,0);
    VL_IN(in19,31,0);
    VL_IN(in20,31,0);
    VL_IN(in22,31,0);
    VL_IN(in24,31,0);
    VL_IN(in27,31,0);
    VL_IN(in28,31,0);
    VL_IN(in29,31,0);
    VL_IN(in32,31,0);
    VL_OUT(out13,31,0);
    VL_OUT(out30,31,0);
    VL_OUT(out31,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ hls_macc__DOT__tmp_2_reg_343;
    CData/*0:0*/ hls_macc__DOT__tmp_fu_230_p2;
    SData/*10:0*/ hls_macc__DOT__ap_CS_fsm;
    SData/*10:0*/ hls_macc__DOT__ap_NS_fsm;
    IData/*31:0*/ hls_macc__DOT__t5_reg_293;
    IData/*31:0*/ hls_macc__DOT__tmp1_reg_299;
    IData/*31:0*/ hls_macc__DOT__t11_reg_334;
    IData/*31:0*/ hls_macc__DOT__tmp2_reg_348;
    IData/*31:0*/ hls_macc__DOT__tmp3_reg_353;
    IData/*31:0*/ hls_macc__DOT__t23_reg_358;
    IData/*31:0*/ hls_macc__DOT__t26_1_reg_363;
    IData/*31:0*/ hls_macc__DOT__t25_reg_368;
    IData/*31:0*/ hls_macc__DOT__t26_reg_373;
    IData/*31:0*/ hls_macc__DOT__t26_2_reg_378;
    IData/*31:0*/ hls_macc__DOT__t16_1_reg_384;
    IData/*31:0*/ hls_macc__DOT__t16_reg_389;
    IData/*31:0*/ hls_macc__DOT__t8_reg_197;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__ap_clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vhls_macc__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vhls_macc);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vhls_macc(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vhls_macc();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vhls_macc__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vhls_macc__Syms* symsp, bool first);
  private:
    static QData _change_request(Vhls_macc__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vhls_macc__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vhls_macc__Syms* __restrict vlSymsp);
    static void _combo__TOP__4(Vhls_macc__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vhls_macc__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vhls_macc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vhls_macc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vhls_macc__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vhls_macc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
