#include <iostream>
#include "cpu.hpp"
#include "bus.hpp"
// #include <SDL.h>

using namespace std;

int main(int argc, char* argv[]){    
    Bus bus;
    CPU cpu = CPU(bus);
    // CPU cpu2 = CPU(bus);
    if(!cpu.setup())
        return -1;

    cpu.reset();


    cpu.PC = 0x0C000;
    cpu.run();
    uint8_t lower = cpu.ram[0x2];
    uint8_t upper = cpu.ram[0x3];
    cout << "0x2h: " << hex << uppercase << (int)lower << endl;
    cout << "0x3h: " << hex << uppercase << (int)upper << endl;


    return 0;
}