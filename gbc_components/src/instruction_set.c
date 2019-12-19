#include "gbc_components/instruction_set.h"

/// 8-Bit Immediate Loads

LOAD_IMMEDIATE_8_REGISTER_INSTRUCTION_DEFINITION(0x06, B)
LOAD_IMMEDIATE_8_REGISTER_INSTRUCTION_DEFINITION(0x0E, C)
LOAD_IMMEDIATE_8_REGISTER_INSTRUCTION_DEFINITION(0x16, D)
LOAD_IMMEDIATE_8_REGISTER_INSTRUCTION_DEFINITION(0x1E, E)
LOAD_IMMEDIATE_8_REGISTER_INSTRUCTION_DEFINITION(0x26, H)
LOAD_IMMEDIATE_8_REGISTER_INSTRUCTION_DEFINITION(0x2E, L)

/// 8-Bit Register-to-Register Loads

LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x7F, A, A)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x78, B, A)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x79, C, A)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x7A, D, A)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x7B, E, A)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x7C, H, A)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x7D, L, A)

LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x47, A, B)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x40, B, B)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x41, C, B)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x42, D, B)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x43, E, B)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x44, H, B)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x45, L, B)

LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x4F, A, C)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x48, B, C)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x49, C, C)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x4A, D, C)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x4B, E, C)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x4C, H, C)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x4D, L, C)

LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x57, A, D)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x50, B, D)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x51, C, D)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x52, D, D)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x53, E, D)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x54, H, D)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x55, L, D)

LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x5F, A, E)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x58, B, E)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x59, C, E)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x5A, D, E)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x5B, E, E)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x5C, H, E)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x5D, L, E)

LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x67, A, H)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x60, B, H)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x61, C, H)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x62, D, H)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x63, E, H)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x64, H, H)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x65, L, H)

LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x6F, A, L)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x68, B, L)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x69, C, L)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x6A, D, L)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x6B, E, L)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x6C, H, L)
LOAD_REGISTER_8_INTO_REGISTER_8_INSTRUCTION_DEFINITION(0x6D, L, L)

/// Load Memory Address into 8-Bit Register

LOAD_HL_PTR_INTO_REGISTER_INSTRUCTION_DEFINITION(0x3E, A)
LOAD_HL_PTR_INTO_REGISTER_INSTRUCTION_DEFINITION(0x46, B)
LOAD_HL_PTR_INTO_REGISTER_INSTRUCTION_DEFINITION(0x4E, C)
LOAD_HL_PTR_INTO_REGISTER_INSTRUCTION_DEFINITION(0x56, D)
LOAD_HL_PTR_INTO_REGISTER_INSTRUCTION_DEFINITION(0x5E, E)
LOAD_HL_PTR_INTO_REGISTER_INSTRUCTION_DEFINITION(0x66, H)
LOAD_HL_PTR_INTO_REGISTER_INSTRUCTION_DEFINITION(0x6E, L)

/// Load 8-bit Register Content Into Memory

LOAD_REGISTER_INTO_HL_PTR_INSTRUCTION_DEFINITION(0x77, A)
LOAD_REGISTER_INTO_HL_PTR_INSTRUCTION_DEFINITION(0x70, B)
LOAD_REGISTER_INTO_HL_PTR_INSTRUCTION_DEFINITION(0x71, C)
LOAD_REGISTER_INTO_HL_PTR_INSTRUCTION_DEFINITION(0x72, D)
LOAD_REGISTER_INTO_HL_PTR_INSTRUCTION_DEFINITION(0x73, E)
LOAD_REGISTER_INTO_HL_PTR_INSTRUCTION_DEFINITION(0x74, H)
LOAD_REGISTER_INTO_HL_PTR_INSTRUCTION_DEFINITION(0x75, L)

/// 16-Bit Immediate Loads

LOAD_IMMEDIATE_16_REGISTER_INSTRUCTION_DEFINITION(0x01, B, C)
LOAD_IMMEDIATE_16_REGISTER_INSTRUCTION_DEFINITION(0x11, D, E)
LOAD_IMMEDIATE_16_REGISTER_INSTRUCTION_DEFINITION(0x21, H, L)

void opcode_0x31(Processor* processor)
{
    uint16_t highByte = (uint16_t)(processor->memory->memory[processor->PC + 1]);
    uint16_t lowByte = (uint16_t)(processor->memory->memory[processor->PC + 2]);
    uint16_t immediate = (uint16_t)(highByte << 8) + lowByte;
    processor->SP = immediate;
    processor->PC += 3;
}

/// Add Value to Accumulator (A)

ADD_REGISTER_8_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x87, A)
ADD_REGISTER_8_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x80, B)
ADD_REGISTER_8_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x81, C)
ADD_REGISTER_8_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x82, D)
ADD_REGISTER_8_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x83, E)
ADD_REGISTER_8_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x84, H)
ADD_REGISTER_8_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x85, L)

void opcode_0x86(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    processor->A += processor->memory->memory[addr];
    ++processor->PC;
}

void opcode_0xC6(Processor* processor)
{
    processor->A += processor->memory->memory[processor->PC + 1];
    processor->PC += 2;
}

/// Add Value and Carry to Accumulator (A)

ADD_REGISTER_8_AND_CARRY_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x8F, A)
ADD_REGISTER_8_AND_CARRY_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x88, B)
ADD_REGISTER_8_AND_CARRY_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x89, C)
ADD_REGISTER_8_AND_CARRY_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x8A, D)
ADD_REGISTER_8_AND_CARRY_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x8B, E)
ADD_REGISTER_8_AND_CARRY_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x8C, H)
ADD_REGISTER_8_AND_CARRY_TO_ACCUMULATOR_INSTRUCTION_DEFINITION(0x8D, L)

void opcode_0x8E(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    processor->A += processor->memory->memory[addr] + ((processor->F & 0x10) >> 4);
    ++processor->PC;
}

void opcode_0xCE(Processor* processor)
{
    processor->A += processor->memory->memory[processor->PC + 1] + ((processor->F & 0x10) >> 4);
    processor->PC += 2;
}

/// Subtract Value from Accumulator (A)

SUB_REGISTER_8_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x97, A)
SUB_REGISTER_8_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x90, B)
SUB_REGISTER_8_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x91, C)
SUB_REGISTER_8_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x92, D)
SUB_REGISTER_8_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x93, E)
SUB_REGISTER_8_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x94, H)
SUB_REGISTER_8_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x95, L)

void opcode_0x96(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    processor->A -= processor->memory->memory[addr];
    ++processor->PC;
}

void opcode_0xD6(Processor* processor)
{
    processor->A -= processor->memory->memory[processor->PC + 1];
    processor->PC += 2;
}

/// Subtract Value and Carry from Accumulator (A)

SUB_REGISTER_8_AND_CARRY_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x9F, A)
SUB_REGISTER_8_AND_CARRY_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x98, B)
SUB_REGISTER_8_AND_CARRY_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x99, C)
SUB_REGISTER_8_AND_CARRY_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x9A, D)
SUB_REGISTER_8_AND_CARRY_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x9B, E)
SUB_REGISTER_8_AND_CARRY_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x9C, H)
SUB_REGISTER_8_AND_CARRY_FROM_ACCUMULATOR_INSTRUCTION_DEFINITION(0x9D, L)

void opcode_0x9E(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    processor->A -= processor->memory->memory[addr] + ((processor->F & 0x10) >> 4);
    ++processor->PC;
}

/// Logical AND Value with Accumulator (A)

LOGICAL_AND_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xA7, A)
LOGICAL_AND_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xA0, B)
LOGICAL_AND_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xA1, C)
LOGICAL_AND_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xA2, D)
LOGICAL_AND_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xA3, E)
LOGICAL_AND_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xA4, H)
LOGICAL_AND_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xA5, L)

void opcode_0xA6(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    processor->A &= processor->memory->memory[addr];
    ++processor->PC;
}

void opcode_0xE6(Processor* processor)
{
    processor->A &= processor->memory->memory[processor->PC + 1];
    processor->PC += 2;
}

/// Logical OR Value with Accumulator (A)

LOGICAL_OR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xB7, A)
LOGICAL_OR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xB0, B)
LOGICAL_OR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xB1, C)
LOGICAL_OR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xB2, D)
LOGICAL_OR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xB3, E)
LOGICAL_OR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xB4, H)
LOGICAL_OR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xB5, L)

void opcode_0xB6(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    processor->A |= processor->memory->memory[addr];
    ++processor->PC;
}

void opcode_0xF6(Processor* processor)
{
    processor->A |= processor->memory->memory[processor->PC + 1];
    processor->PC += 2;
}

/// Logical XOR Value with Accumulator (A)

LOGICAL_XOR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xAF, A)
LOGICAL_XOR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xA8, B)
LOGICAL_XOR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xA9, C)
LOGICAL_XOR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xAA, D)
LOGICAL_XOR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xAB, E)
LOGICAL_XOR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xAC, H)
LOGICAL_XOR_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xAD, L)

void opcode_0xAE(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    processor->A ^= processor->memory->memory[addr];
    ++processor->PC;
}

void opcode_0xEE(Processor* processor)
{
    processor->A ^= processor->memory->memory[processor->PC + 1];
    processor->PC += 2;
}

/// Compare Value with Accumulator (A)

COMPARE_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xBF, A)
COMPARE_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xB8, B)
COMPARE_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xB9, C)
COMPARE_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xBA, D)
COMPARE_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xBB, E)
COMPARE_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xBC, H)
COMPARE_REGISTER_8_WITH_ACCUMULATOR_INSTRUCTION_DEFINITION(0xBD, L)

void opcode_0xBE(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint8_t UNUSED(result) = processor->A - processor->memory->memory[addr];
    ++processor->PC;
}

void opcode_0xFE(Processor* processor)
{
    uint8_t UNUSED(result) = processor->A - processor->memory->memory[processor->PC + 1];
    processor->PC += 2;
}

/// Increment Value

INCREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x3C, A)
INCREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x04, B)
INCREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x0C, C)
INCREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x14, D)
INCREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x1C, E)
INCREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x24, H)
INCREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x2C, L)

void opcode_0x34(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    ++processor->memory->memory[addr];
    ++processor->PC;
}

/// Decrement Value

DECREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x3D, A)
DECREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x05, B)
DECREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x0D, C)
DECREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x15, D)
DECREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x1D, E)
DECREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x25, H)
DECREMENT_REGISTER_8_INSTRUCTION_DEFINITION(0x2D, L)

void opcode_0x35(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    --processor->memory->memory[addr];
    ++processor->PC;
}

/// Add Value to Memory Location Addressed by HL

void opcode_0x09(Processor* processor)
{
    uint16_t hl = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint16_t bc = (uint16_t)(((uint16_t)processor->B << 8) + processor->C);
    uint16_t result = hl + bc;
    processor->H = (uint8_t)(result >> 8);
    processor->L = (uint8_t)(result);
    ++processor->PC;
}

void opcode_0x19(Processor* processor)
{
    uint16_t hl = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint16_t de = (uint16_t)(((uint16_t)processor->D << 8) + processor->E);
    uint16_t result = hl + de;
    processor->H = (uint8_t)(result >> 8);
    processor->L = (uint8_t)(result);
    ++processor->PC;
}

void opcode_0x29(Processor* processor)
{
    uint16_t hl = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint16_t result = hl + hl;
    processor->H = (uint8_t)(result >> 8);
    processor->L = (uint8_t)(result);
    ++processor->PC;
}

void opcode_0x39(Processor* processor)
{
    uint16_t hl = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint16_t result = hl + processor->SP;
    processor->H = (uint8_t)(result >> 8);
    processor->L = (uint8_t)(result);
    ++processor->PC;
}

/// Add Value to Stack Pointer (SP)

void opcode_0xE8(Processor* processor)
{
    processor->SP += (uint16_t)(processor->memory->memory[processor->PC + 1]);
    processor->PC += 2;
}

/// Increment 16-Bit Registers

void opcode_0x03(Processor* processor)
{
    uint16_t bc = (uint16_t)(((uint16_t)processor->B << 8) + processor->C);
    ++bc;
    processor->B = (uint8_t)(bc >> 8);
    processor->C = (uint8_t)(bc);
    ++processor->PC;
}

void opcode_0x13(Processor* processor)
{
    uint16_t de = (uint16_t)(((uint16_t)processor->D << 8) + processor->E);
    ++de;
    processor->D = (uint8_t)(de >> 8);
    processor->E = (uint8_t)(de);
    ++processor->PC;
}

void opcode_0x23(Processor* processor)
{
    uint16_t hl = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    ++hl;
    processor->H = (uint8_t)(hl >> 8);
    processor->L = (uint8_t)(hl);
    ++processor->PC;
}

void opcode_0x33(Processor* processor)
{
    ++processor->SP;
    ++processor->PC;
}

/// Decrement 16-Bit Registers

void opcode_0x0B(Processor* processor)
{
    uint16_t bc = (uint16_t)(((uint16_t)processor->B << 8) + processor->C);
    --bc;
    processor->B = (uint8_t)(bc >> 8);
    processor->C = (uint8_t)(bc);
    ++processor->PC;
}

void opcode_0x1B(Processor* processor)
{
    uint16_t de = (uint16_t)(((uint16_t)processor->D << 8) + processor->E);
    --de;
    processor->D = (uint8_t)(de >> 8);
    processor->E = (uint8_t)(de);
    ++processor->PC;
}

void opcode_0x2B(Processor* processor)
{
    uint16_t hl = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    --hl;
    processor->H = (uint8_t)(hl >> 8);
    processor->L = (uint8_t)(hl);
    ++processor->PC;
}

void opcode_0x3B(Processor* processor)
{
    --processor->SP;
    ++processor->PC;
}

/// Swap Higher and Lower Nibbles of Value

void opcode_0xCB_0x37(Processor* processor)
{
    uint8_t upper_A = processor->A & 0xF0;
    uint8_t lower_A = processor->A & 0x0F;
    processor->A = (uint8_t)(upper_A >> 4) | (uint8_t)(lower_A << 4);
    ++processor->PC;
}

void opcode_0xCB_0x30(Processor* processor)
{
    uint8_t upper_B = processor->B & 0xF0;
    uint8_t lower_B = processor->B & 0x0F;
    processor->B = (uint8_t)(upper_B >> 4) | (uint8_t)(lower_B << 4);
    ++processor->PC;
}

void opcode_0xCB_0x31(Processor* processor)
{
    uint8_t upper_C = processor->C & 0xF0;
    uint8_t lower_C = processor->C & 0x0F;
    processor->C = (uint8_t)(upper_C >> 4) | (uint8_t)(lower_C << 4);
    ++processor->PC;
}

void opcode_0xCB_0x32(Processor* processor)
{
    uint8_t upper_D = processor->D & 0xF0;
    uint8_t lower_D = processor->D & 0x0F;
    processor->D = (uint8_t)(upper_D >> 4) | (uint8_t)(lower_D << 4);
    ++processor->PC;
}

void opcode_0xCB_0x33(Processor* processor)
{
    uint8_t upper_E = processor->E & 0xF0;
    uint8_t lower_E = processor->E & 0x0F;
    processor->E = (uint8_t)(upper_E >> 4) | (uint8_t)(lower_E << 4);
    ++processor->PC;
}

void opcode_0xCB_0x34(Processor* processor)
{
    uint8_t upper_H = processor->H & 0xF0;
    uint8_t lower_H = processor->H & 0x0F;
    processor->H = (uint8_t)(upper_H >> 4) | (uint8_t)(lower_H << 4);
    ++processor->PC;
}

void opcode_0xCB_0x35(Processor* processor)
{
    uint8_t upper_L = processor->L & 0xF0;
    uint8_t lower_L = processor->L & 0x0F;
    processor->L = (uint8_t)(upper_L >> 4) | (uint8_t)(lower_L << 4);
    ++processor->PC;
}

void opcode_0xCB_0x36(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint8_t val = processor->memory->memory[addr];
    uint8_t upper_val = val & 0xF0;
    uint8_t lower_val = val & 0x0F;
    processor->memory->memory[addr] = (uint8_t)(upper_val >> 4) | (uint8_t)(lower_val << 4);
    ++processor->PC;
}

/// Adjust for Binary Coded Decimal

void opcode_0x27(Processor* UNUSED(processor))
{
    // Add this later
}

/// Complement Accumulator (A)

void opcode_0x2F(Processor* processor)
{
    processor->A = ~processor->A;
    ++processor->PC;
}

/// Carry Flag Operations

void opcode_0x3F(Processor* processor)
{
    processor->F ^= 0x10;
    ++processor->PC;
}

void opcode_0x37(Processor* processor)
{
    processor->F |= 0x10;
    ++processor->PC;
}

/// High-Level Process Control & Interrupts

void opcode_0x00(Processor* UNUSED(processor))
{
    // No-op
}

void opcode_0x76(Processor* processor)
{
    processor->halted = true;
    ++processor->PC;
}

void opcode_0x10(Processor* processor)
{
    processor->stopped = true;
    // Some manuals require 0x00 to be present in the byte after 0x10. If this is the case, skip
    // over it, otherwise, assume the next byte is the next instruction.
    uint8_t following_inst = processor->memory->memory[processor->PC + 1];
    if(following_inst == 0x00) {
        processor->PC += 2;
    } else {
        ++processor->PC;
    }
}

void opcode_0xF3(Processor* processor)
{
    processor->interrupts_enabled = false;
    ++processor->PC;
}

void opcode_0xFB(Processor* processor)
{
    processor->interrupts_enabled = true;
    ++processor->PC;
}

/// Shifts in Standard ISA

void opcode_0x07(Processor* processor)
{
    uint8_t msb = processor->A & 0x80;
    processor->A <<= 1;
    processor->A |= msb >> 7;
    processor->F |= msb >> 3;
    ++processor->PC;
}

void opcode_0x17(Processor* processor)
{
    uint8_t msb = processor->A & 0x80;
    uint8_t shifted_carry = (processor->F & 0x10) >> 4;
    processor->A <<= 1;
    processor->A |= shifted_carry;
    processor->F |= msb >> 3;
    ++processor->PC;
}

void opcode_0x0F(Processor* processor)
{
    uint8_t lsb = processor->A & 0x01;
    processor->A >>= 1;
    processor->A |= lsb << 7;
    processor->F |= lsb << 4;
    ++processor->PC;
}

void opcode_0x1F(Processor* processor)
{
    uint8_t lsb = processor->A & 0x01;
    uint8_t shifted_carry = (uint8_t)((processor->F & 0x10) << 3);
    processor->A >>= 1;
    processor->A |= shifted_carry;
    processor->F |= lsb << 4;
    ++processor->PC;
}

/// Left-Rotate Value

ROTATE_REGISTER_8_LEFT_INSTRUCTION_DEFINITION(0x07, A)
ROTATE_REGISTER_8_LEFT_INSTRUCTION_DEFINITION(0x00, B)
ROTATE_REGISTER_8_LEFT_INSTRUCTION_DEFINITION(0x01, C)
ROTATE_REGISTER_8_LEFT_INSTRUCTION_DEFINITION(0x02, D)
ROTATE_REGISTER_8_LEFT_INSTRUCTION_DEFINITION(0x03, E)
ROTATE_REGISTER_8_LEFT_INSTRUCTION_DEFINITION(0x04, H)
ROTATE_REGISTER_8_LEFT_INSTRUCTION_DEFINITION(0x05, L)

void opcode_0xCB_0x06(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint8_t msb = processor->memory->memory[addr] & 0x80;
    processor->memory->memory[addr] <<= 1;
    processor->memory->memory[addr] |= msb >> 7;
    processor->F |= msb >> 3;
    ++processor->PC;
}

/// Left-Rotate Value through Carry

ROTATE_REGISTER_8_LEFT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x17, A)
ROTATE_REGISTER_8_LEFT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x10, B)
ROTATE_REGISTER_8_LEFT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x11, C)
ROTATE_REGISTER_8_LEFT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x12, D)
ROTATE_REGISTER_8_LEFT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x13, E)
ROTATE_REGISTER_8_LEFT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x14, H)
ROTATE_REGISTER_8_LEFT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x15, L)

void opcode_0xCB_0x16(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint8_t msb = processor->memory->memory[addr] & 0x80;
    uint8_t shifted_carry = (processor->F & 0x10) >> 4;
    processor->memory->memory[addr] <<= 1;
    processor->memory->memory[addr] |= shifted_carry;
    processor->F |= msb >> 3;
    ++processor->PC;
}

/// Right-Rotate Value

ROTATE_REGISTER_8_RIGHT_INSTRUCTION_DEFINITION(0x0F, A)
ROTATE_REGISTER_8_RIGHT_INSTRUCTION_DEFINITION(0x08, B)
ROTATE_REGISTER_8_RIGHT_INSTRUCTION_DEFINITION(0x09, C)
ROTATE_REGISTER_8_RIGHT_INSTRUCTION_DEFINITION(0x0A, D)
ROTATE_REGISTER_8_RIGHT_INSTRUCTION_DEFINITION(0x0B, E)
ROTATE_REGISTER_8_RIGHT_INSTRUCTION_DEFINITION(0x0C, H)
ROTATE_REGISTER_8_RIGHT_INSTRUCTION_DEFINITION(0x0D, L)

void opcode_0xCB_0x0E(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint8_t lsb = processor->memory->memory[addr] & 0x01;
    processor->memory->memory[addr] >>= 1;
    processor->memory->memory[addr] |= lsb << 7;
    processor->F |= lsb << 4;
    ++processor->PC;
}

/// Right-Rotate Value through Carry

ROTATE_REGISTER_8_RIGHT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x1F, A)
ROTATE_REGISTER_8_RIGHT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x18, B)
ROTATE_REGISTER_8_RIGHT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x19, C)
ROTATE_REGISTER_8_RIGHT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x1A, D)
ROTATE_REGISTER_8_RIGHT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x1B, E)
ROTATE_REGISTER_8_RIGHT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x1C, H)
ROTATE_REGISTER_8_RIGHT_THROUGH_CARRY_INSTRUCTION_DEFINITION(0x1D, L)

void opcode_0xCB_0x1E(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint8_t lsb = processor->memory->memory[addr] & 0x01;
    uint8_t shifted_carry = (uint8_t)((processor->F & 0x10) << 3);
    processor->memory->memory[addr] >>= 1;
    processor->memory->memory[addr] |= shifted_carry;
    processor->F |= lsb << 4;
    ++processor->PC;
}

/// Left-Shift Value into Carry

SHIFT_REGISTER_8_LEFT_INTO_CARRY_INSTRUCTION_DEFINITION(0x27, A)
SHIFT_REGISTER_8_LEFT_INTO_CARRY_INSTRUCTION_DEFINITION(0x20, B)
SHIFT_REGISTER_8_LEFT_INTO_CARRY_INSTRUCTION_DEFINITION(0x21, C)
SHIFT_REGISTER_8_LEFT_INTO_CARRY_INSTRUCTION_DEFINITION(0x22, D)
SHIFT_REGISTER_8_LEFT_INTO_CARRY_INSTRUCTION_DEFINITION(0x23, E)
SHIFT_REGISTER_8_LEFT_INTO_CARRY_INSTRUCTION_DEFINITION(0x24, H)
SHIFT_REGISTER_8_LEFT_INTO_CARRY_INSTRUCTION_DEFINITION(0x25, L)

void opcode_0xCB_0x26(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint8_t msb = processor->memory->memory[addr] & 0x80;
    processor->memory->memory[addr] <<= 1;
    processor->F |= msb >> 3;
    ++processor->PC;
}

/// Right-Shift Value into Carry with MSB Pad

SHIFT_REGISTER_8_RIGHT_INTO_CARRY_MSB_PAD_INSTRUCTION_DEFINITION(0x2F, A)
SHIFT_REGISTER_8_RIGHT_INTO_CARRY_MSB_PAD_INSTRUCTION_DEFINITION(0x28, B)
SHIFT_REGISTER_8_RIGHT_INTO_CARRY_MSB_PAD_INSTRUCTION_DEFINITION(0x29, C)
SHIFT_REGISTER_8_RIGHT_INTO_CARRY_MSB_PAD_INSTRUCTION_DEFINITION(0x2A, D)
SHIFT_REGISTER_8_RIGHT_INTO_CARRY_MSB_PAD_INSTRUCTION_DEFINITION(0x2B, E)
SHIFT_REGISTER_8_RIGHT_INTO_CARRY_MSB_PAD_INSTRUCTION_DEFINITION(0x2C, H)
SHIFT_REGISTER_8_RIGHT_INTO_CARRY_MSB_PAD_INSTRUCTION_DEFINITION(0x2D, L)

void opcode_0xCB_0x2E(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint8_t lsb = processor->memory->memory[addr] & 0x01;
    uint8_t msb = processor->memory->memory[addr] & 0x80;
    processor->memory->memory[addr] >>= 1;
    processor->memory->memory[addr] |= msb;
    processor->F |= lsb << 4;
    ++processor->PC;
}

/// Right-Shift Value into Carry with Zero Pad

SHIFT_REGISTER_8_RIGHT_INTO_CARRY_ZERO_PAD_INSTRUCTION_DEFINITION(0x3F, A)
SHIFT_REGISTER_8_RIGHT_INTO_CARRY_ZERO_PAD_INSTRUCTION_DEFINITION(0x38, B)
SHIFT_REGISTER_8_RIGHT_INTO_CARRY_ZERO_PAD_INSTRUCTION_DEFINITION(0x39, C)
SHIFT_REGISTER_8_RIGHT_INTO_CARRY_ZERO_PAD_INSTRUCTION_DEFINITION(0x3A, D)
SHIFT_REGISTER_8_RIGHT_INTO_CARRY_ZERO_PAD_INSTRUCTION_DEFINITION(0x3B, E)
SHIFT_REGISTER_8_RIGHT_INTO_CARRY_ZERO_PAD_INSTRUCTION_DEFINITION(0x3C, H)
SHIFT_REGISTER_8_RIGHT_INTO_CARRY_ZERO_PAD_INSTRUCTION_DEFINITION(0x3D, L)

void opcode_0xCB_0x3E(Processor* processor)
{
    uint16_t addr = (uint16_t)(((uint16_t)processor->H << 8) + processor->L);
    uint8_t lsb = processor->memory->memory[addr] & 0x01;
    processor->memory->memory[addr] >>= 1;
    processor->F |= lsb << 4;
    ++processor->PC;
}
