//
// Created by shuki on 30/11/24.
//olc6502

#ifndef CPU_H
#define CPU_H
#include <cstdint>

class Bus;

class CPU {
public:
    CPU();
    ~CPU();

    void ConnectBus(Bus * n) {bus = n;}

private:
    Bus * bus = nullptr;
    uint8_t read(uint16_t addr);
    void write(uint16_t addr, uint8_t data);
};

#endif //CPU_H
