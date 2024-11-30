#pragma once
#include <cstdint>
#include "cpu.h"
#include <array>

#ifndef BUS_H
#define BUS_H

class Bus {
public:
    Bus();
    ~Bus();

public: //Devices on bus
    CPU cpu;

    std::array<uint8_t, 64 * 1024> ram;

public: // Bus read and write
    void write(uint16_t addr, uint8_t data);
    uint8_t read(uint16_t addr, bool bReadOnly = false);


};

#endif //BUS_H
