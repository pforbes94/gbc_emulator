#include "gbc_components/memory.h"
#include "gbc_components/processor.h"

/**
 * @defgroup 8-Bit Immediate Loads
 * Opcodes that load an immediate value into a specific register.
 */

#define LOAD_IMMEDIATE_8_REGISTER_INSTRUCTION_DEFINITION(OPCODE, REGISTER)  \
    void opcode_##OPCODE(Processor* processor)                              \
    {                                                                       \
        processor->REGISTER = processor->memory->memory[processor->PC + 1]; \
        processor->PC += 0x0002;                                            \
    }

void opcode_0x06(Processor* processor);
void opcode_0x0E(Processor* processor);
void opcode_0x16(Processor* processor);
void opcode_0x1E(Processor* processor);
void opcode_0x26(Processor* processor);
void opcode_0x2E(Processor* processor);

/** @} */ // End of 8-Bit Immediate Loads

#define LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(OPCODE, SOURCE, TARGET) \
    void opcode_##OPCODE(Processor* processor)                                         \
    {                                                                                  \
        processor->TARGET = processor->SOURCE;                                         \
        ++processor->PC;                                                               \
    }

/**
 * @defgroup 8-Bit Register-to-Register Loads
 * Load the contents of one 8-bit register into another
 */

// Load into A

void opcode_0x7F(Processor* processor);
void opcode_0x78(Processor* processor);
void opcode_0x79(Processor* processor);
void opcode_0x7A(Processor* processor);
void opcode_0x7B(Processor* processor);
void opcode_0x7C(Processor* processor);
void opcode_0x7D(Processor* processor);

// Load into B

void opcode_0x40(Processor* processor);
void opcode_0x41(Processor* processor);
void opcode_0x42(Processor* processor);
void opcode_0x43(Processor* processor);
void opcode_0x44(Processor* processor);
void opcode_0x45(Processor* processor);
void opcode_0x46(Processor* processor);

// Load into C

void opcode_0x48(Processor* processor);
void opcode_0x49(Processor* processor);
void opcode_0x4A(Processor* processor);
void opcode_0x4B(Processor* processor);
void opcode_0x4C(Processor* processor);
void opcode_0x4D(Processor* processor);
void opcode_0x4E(Processor* processor);

// Load into D

void opcode_0x50(Processor* processor);
void opcode_0x51(Processor* processor);
void opcode_0x52(Processor* processor);
void opcode_0x53(Processor* processor);
void opcode_0x54(Processor* processor);
void opcode_0x55(Processor* processor);
void opcode_0x56(Processor* processor);

// Load into E

void opcode_0x58(Processor* processor);
void opcode_0x59(Processor* processor);
void opcode_0x5A(Processor* processor);
void opcode_0x5B(Processor* processor);
void opcode_0x5C(Processor* processor);
void opcode_0x5D(Processor* processor);
void opcode_0x5E(Processor* processor);

// Load into H

void opcode_0x60(Processor* processor);
void opcode_0x61(Processor* processor);
void opcode_0x62(Processor* processor);
void opcode_0x63(Processor* processor);
void opcode_0x64(Processor* processor);
void opcode_0x65(Processor* processor);
void opcode_0x66(Processor* processor);

// Load into L

void opcode_0x68(Processor* processor);
void opcode_0x69(Processor* processor);
void opcode_0x6A(Processor* processor);
void opcode_0x6B(Processor* processor);
void opcode_0x6C(Processor* processor);
void opcode_0x6D(Processor* processor);
void opcode_0x6E(Processor* processor);

/** @} */ // End of 8-Bit Register-to-Register Loads
