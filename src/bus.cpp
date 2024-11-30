//
// Created by shuki on 30/11/24.
///home/shuki/Documents/projet_perso/Nes

#include "bus.h"


Bus::Bus() {
    // Clear RAM contents, just in case
    for (auto &i : ram) i = 0x00;
}

Bus::~Bus() {

}


void Bus::write(uint16_t addr, uint8_t data) {
    if (addr <= 0xFFFF)
        ram[addr] = data;
}

uint8_t Bus::read(uint16_t addr, bool bReadOnly) {
    if (addr <= 0xFFFF)
        return ram[addr];
    return 0x00;
}


