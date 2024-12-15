// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSYSTEM_VERILOG__SYMS_H_
#define _VSYSTEM_VERILOG__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vsystem_verilog.h"

// SYMS CLASS
class Vsystem_verilog__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vsystem_verilog*               TOPp;
    
    // CREATORS
    Vsystem_verilog__Syms(Vsystem_verilog* topp, const char* namep);
    ~Vsystem_verilog__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
