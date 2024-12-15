// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystem_verilog.h for the primary calling header

#include "Vsystem_verilog.h"
#include "Vsystem_verilog__Syms.h"

//==========

VL_CTOR_IMP(Vsystem_verilog) {
    Vsystem_verilog__Syms* __restrict vlSymsp = __VlSymsp = new Vsystem_verilog__Syms(this, name());
    Vsystem_verilog* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsystem_verilog::__Vconfigure(Vsystem_verilog__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vsystem_verilog::~Vsystem_verilog() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vsystem_verilog::_initial__TOP__1(Vsystem_verilog__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_verilog::_initial__TOP__1\n"); );
    Vsystem_verilog* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_WRITEF("Hello, Verilator!\n");
    VL_FINISH_MT("/media/ryanfeng/HardDisk/Study/Git_Repos/system_verilog/system_verilog.sv", 4, "");
}

void Vsystem_verilog::_eval_initial(Vsystem_verilog__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_verilog::_eval_initial\n"); );
    Vsystem_verilog* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vsystem_verilog::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_verilog::final\n"); );
    // Variables
    Vsystem_verilog__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsystem_verilog* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsystem_verilog::_eval_settle(Vsystem_verilog__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_verilog::_eval_settle\n"); );
    Vsystem_verilog* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsystem_verilog::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystem_verilog::_ctor_var_reset\n"); );
}
