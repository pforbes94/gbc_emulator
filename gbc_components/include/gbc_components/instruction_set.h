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

/**
 * @defgroup Load Memory Address into 8-Bit Register
 * Load the contents of some address in memory (addressed by HL) into an 8-bit register
 */

#define LOAD_HL_PTR_INTO_REGISTER_INSTRUCTION_DEFINITION(OPCODE, REGISTER)             \
    void opcode_##OPCODE(Processor* processor)                                         \
    {                                                                                  \
        uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);      \
        processor->REGISTER = processor->memory->memory[addr];                         \
        ++processor->PC;                                                               \
    }

void opcode_0x3E(Processor* processor);
void opcode_0x46(Processor* processor);
void opcode_0x4E(Processor* processor);
void opcode_0x56(Processor* processor);
void opcode_0x5E(Processor* processor);
void opcode_0x66(Processor* processor);
void opcode_0x6E(Processor* processor);

/** @} */ // End of Load Memory Address into 8-Bit Register

/**
 * @defgroup Load 8-bit Register Content Into Memory
 * Load the contents of some register into the memory address pointed to by (HL)
 */

#define LOAD_REGISTER_INTO_HL_PTR_INSTRUCTION_DEFINITION(OPCODE, REGISTER)             \
    void opcode_##OPCODE(Processor* processor)                                         \
    {                                                                                  \
        uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);      \
        processor->memory->memory[addr] = processor->REGISTER;                         \
        ++processor->PC;                                                               \
    }

void opcode_0x77(Processor* processor);
void opcode_0x70(Processor* processor);
void opcode_0x71(Processor* processor);
void opcode_0x72(Processor* processor);
void opcode_0x73(Processor* processor);
void opcode_0x74(Processor* processor);
void opcode_0x75(Processor* processor);

/** @} */ // End of Load 8-bit Register Content Into Memory

/**
 * @defgroup 16-Bit Immediate Loads
 * Opcodes that load an immediate value into a specific register.
 */

#define LOAD_IMMEDIATE_16_REGISTER_INSTRUCTION_DEFINITION(OPCODE, HIGH_REGISTER, LOW_REGISTER) \
    void opcode_##OPCODE(Processor* processor)                                                 \
    {                                                                                          \
        processor->HIGH_REGISTER = processor->memory->memory[processor->PC + 1];               \
        processor->LOW_REGISTER = processor->memory->memory[processor->PC + 2];                \
        processor->PC += 3;                                                                    \
    }

void opcode_0x01(Processor* processor);
void opcode_0x11(Processor* processor);
void opcode_0x21(Processor* processor);
void opcode_0x31(Processor* processor);

/** @} */ // End of 16-Bit Immediate Loads
