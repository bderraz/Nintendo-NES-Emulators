#include "bus.hpp"

Bus::Bus() {
  ram.resize(0x10000);
  for(uint8_t& num : ram) 
    num = 0x00;
}

uint8_t Bus::read(uint16_t addr) {

  return ram[addr];
}

void Bus::write(uint16_t addr, uint8_t data) {

  
  ram[addr] = data;
}