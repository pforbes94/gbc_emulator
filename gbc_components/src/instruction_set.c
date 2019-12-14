#include "gbc_components/instruction_set.h"

#include "gbc_components/utils.h"

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
