#ifndef GBC_COMPONENTS_PROCESSOR_H
#define GBC_COMPONENTS_PROCESSOR_H

#include <stdbool.h>
#include <stdint.h>

#include "gbc_components/memory.h"

typedef struct
{
    uint8_t A, B, C, D, E, F, H, L;
    uint16_t SP, PC;

    bool halted;
    bool stopped;
    bool interrupts_enabled;
    bool last_interrupt_switch;

    // Non-owning
    Memory* memory;
} Processor;

/**
 * @brief Initialize the state of the @p processor to the expected state contained at startup
 * (immediately after switching on the GBC power).
 * @param[in] processor Pointer to the processor
 */
void init(Processor* processor);

/**
 * @brief Dump the state of the @p processor to STDOUT in human-readable format.
 * @param[in] processor Pointer to the processor
 */
void print(Processor* processor);

#endif /* GBC_COMPONENTS_PROCESSOR_H */
