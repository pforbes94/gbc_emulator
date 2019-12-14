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
