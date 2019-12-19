#include "gbc_components/memory.h"
#include "gbc_components/processor.h"
#include "gbc_components/utils.h"

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

/**
 * @defgroup 8-Bit ALU Operations
 * 8-bit arithmetic operations.
 */

// Add value to accumulator (A)

#define ADD_REGISTER_8_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(OPCODE, REGISTER) \
    void opcode_##OPCODE(Processor* processor)                                 \
    {                                                                          \
        processor->A += processor->REGISTER;                                   \
        ++processor->PC;                                                       \
    }

void opcode_0x87(Processor* processor);
void opcode_0x80(Processor* processor);
void opcode_0x81(Processor* processor);
void opcode_0x82(Processor* processor);
void opcode_0x83(Processor* processor);
void opcode_0x84(Processor* processor);
void opcode_0x85(Processor* processor);
void opcode_0x86(Processor* processor);
void opcode_0xC6(Processor* processor);

// Add value + carry flag to accumulator (A)

#define ADD_REGISTER_8_AND_CARRY_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(OPCODE, REGISTER) \
    void opcode_##OPCODE(Processor* processor)                                           \
    {                                                                                    \
        processor->A += processor->REGISTER + ((processor->F & 0x10) >> 4);              \
        ++processor->PC;                                                                 \
    }

void opcode_0x8F(Processor* processor);
void opcode_0x88(Processor* processor);
void opcode_0x89(Processor* processor);
void opcode_0x8A(Processor* processor);
void opcode_0x8B(Processor* processor);
void opcode_0x8C(Processor* processor);
void opcode_0x8D(Processor* processor);
void opcode_0x8E(Processor* processor);
void opcode_0xCE(Processor* processor);

// Subtract value from accumulator (A)

#define SUB_REGISTER_8_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(OPCODE, REGISTER)  \
    void opcode_##OPCODE(Processor* processor)                                    \
    {                                                                             \
        processor->A -= processor->REGISTER;                                      \
        ++processor->PC;                                                          \
    }

void opcode_0x97(Processor* processor);
void opcode_0x90(Processor* processor);
void opcode_0x91(Processor* processor);
void opcode_0x92(Processor* processor);
void opcode_0x93(Processor* processor);
void opcode_0x94(Processor* processor);
void opcode_0x95(Processor* processor);
void opcode_0x96(Processor* processor);
void opcode_0xD6(Processor* processor);

// Subtract value + carry flag from accumulator (A)

#define SUB_REGISTER_8_AND_CARRY_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(OPCODE, REGISTER) \
    void opcode_##OPCODE(Processor* processor)                                             \
    {                                                                                      \
        processor->A -= processor->REGISTER + ((processor->F & 0x10) >> 4);                \
        ++processor->PC;                                                                   \
    }

void opcode_0x9F(Processor* processor);
void opcode_0x98(Processor* processor);
void opcode_0x99(Processor* processor);
void opcode_0x9A(Processor* processor);
void opcode_0x9B(Processor* processor);
void opcode_0x9C(Processor* processor);
void opcode_0x9D(Processor* processor);
void opcode_0x9E(Processor* processor);

// Logical AND value with accumulator (A)

#define LOGICAL_AND_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(OPCODE, REGISTER) \
    void opcode_##OPCODE(Processor* processor)                                           \
    {                                                                                    \
        processor->A &= processor->REGISTER;                                             \
        ++processor->PC;                                                                 \
    }

void opcode_0xA7(Processor* processor);
void opcode_0xA0(Processor* processor);
void opcode_0xA1(Processor* processor);
void opcode_0xA2(Processor* processor);
void opcode_0xA3(Processor* processor);
void opcode_0xA4(Processor* processor);
void opcode_0xA5(Processor* processor);
void opcode_0xA6(Processor* processor);
void opcode_0xE6(Processor* processor);

// Logical OR value with accumulator (A)

#define LOGICAL_OR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(OPCODE, REGISTER) \
    void opcode_##OPCODE(Processor* processor)                                          \
    {                                                                                   \
        processor->A |= processor->REGISTER;                                            \
        ++processor->PC;                                                                \
    }

void opcode_0xB7(Processor* processor);
void opcode_0xB0(Processor* processor);
void opcode_0xB1(Processor* processor);
void opcode_0xB2(Processor* processor);
void opcode_0xB3(Processor* processor);
void opcode_0xB4(Processor* processor);
void opcode_0xB5(Processor* processor);
void opcode_0xB6(Processor* processor);
void opcode_0xF6(Processor* processor);

// Logical XOR value with accumulator (A)

#define LOGICAL_XOR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(OPCODE, REGISTER) \
    void opcode_##OPCODE(Processor* processor)                                           \
    {                                                                                    \
        processor->A ^= processor->REGISTER;                                             \
        ++processor->PC;                                                                 \
    }

void opcode_0xAF(Processor* processor);
void opcode_0xA8(Processor* processor);
void opcode_0xA9(Processor* processor);
void opcode_0xAA(Processor* processor);
void opcode_0xAB(Processor* processor);
void opcode_0xAC(Processor* processor);
void opcode_0xAD(Processor* processor);
void opcode_0xAE(Processor* processor);
void opcode_0xEE(Processor* processor);

// Compare value with accumulator (A)

#define COMPARE_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(OPCODE, REGISTER) \
    void opcode_##OPCODE(Processor* processor)                                       \
    {                                                                                \
        uint8_t UNUSED(result) = processor->A - processor->REGISTER;                 \
        ++processor->PC;                                                             \
    }

void opcode_0xBF(Processor* processor);
void opcode_0xB8(Processor* processor);
void opcode_0xB9(Processor* processor);
void opcode_0xBA(Processor* processor);
void opcode_0xBB(Processor* processor);
void opcode_0xBC(Processor* processor);
void opcode_0xBD(Processor* processor);
void opcode_0xBE(Processor* processor);
void opcode_0xFE(Processor* processor);

// Increment value in location

#define INCREMENT_REGISTER_8_INSTRUCTION_DEFINITION(OPCODE, REGISTER)  \
    void opcode_##OPCODE(Processor* processor)                         \
    {                                                                  \
        ++processor->REGISTER;                                         \
        ++processor->PC;                                               \
    }

void opcode_0x3C(Processor* processor);
void opcode_0x04(Processor* processor);
void opcode_0x0C(Processor* processor);
void opcode_0x14(Processor* processor);
void opcode_0x1C(Processor* processor);
void opcode_0x24(Processor* processor);
void opcode_0x2C(Processor* processor);
void opcode_0x34(Processor* processor);

// Decrement value in location

#define DECREMENT_REGISTER_8_INSTRUCTION_DEFINITION(OPCODE, REGISTER)  \
    void opcode_##OPCODE(Processor* processor)                         \
    {                                                                  \
        --processor->REGISTER;                                         \
        ++processor->PC;                                               \
    }

void opcode_0x3D(Processor* processor);
void opcode_0x05(Processor* processor);
void opcode_0x0D(Processor* processor);
void opcode_0x15(Processor* processor);
void opcode_0x1D(Processor* processor);
void opcode_0x25(Processor* processor);
void opcode_0x2D(Processor* processor);
void opcode_0x35(Processor* processor);

/** @} */ // End of 8-Bit ALU Operations

/**
 * @defgroup 16-Bit ALU Operations
 * 16-bit arithmetic operations.
 */

// Add value to HL

void opcode_0x09(Processor* processor);
void opcode_0x19(Processor* processor);
void opcode_0x29(Processor* processor);
void opcode_0x39(Processor* processor);

// Add value to stack pointer (SP)

void opcode_0xE8(Processor* processor);

// Increment 16-bit registers

void opcode_0x03(Processor* processor);
void opcode_0x13(Processor* processor);
void opcode_0x23(Processor* processor);
void opcode_0x33(Processor* processor);

// Decrement 16-bit registers

void opcode_0x0B(Processor* processor);
void opcode_0x1B(Processor* processor);
void opcode_0x2B(Processor* processor);
void opcode_0x3B(Processor* processor);

/** @} */ // End of 16-Bit ALU Operations
