//
// Created by shuki on 30/11/24.
//

#include "cpu.h"

#include "bus.h"

CPU::CPU() {

}

CPU::~CPU() {

}

uint8_t CPU::read(uint16_t addr) {
    return bus->read(addr, false);
}

void CPU::write(uint16_t addr, uint8_t data) {
    bus->write(addr, data);
}

