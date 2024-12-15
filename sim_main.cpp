#include "verilated.h"
#include "/media/ryanfeng/HardDisk/Study/Git_Repos/system_verilog/obj_dir/Vsystem_verilog.h"


int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vsystem_verilog* top = new Vsystem_verilog;

    while (!Verilated::gotFinish()) {
        top->eval();
    }

    delete top;
    return 0;
}