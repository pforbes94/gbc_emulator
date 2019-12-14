#include "gbc_components/processor.h"

#include <stdio.h>

void init(Processor* processor)
{
    processor->PC = 0x100;
}

void print(Processor* processor)
{
    puts("PROCESSOR STATE\n");
    printf("8-Bit Registers\n"
    "\tRegister A: %d\n"
    "\tRegister B: %d\n"
    "\tRegister C: %d\n"
    "\tRegister D: %d\n"
    "\tRegister E: %d\n"
    "\tRegister H: %d\n"
    "\tRegister L: %d\n",
    (int)processor->A, (int)processor->B, (int)processor->C, (int)processor->D,
    (int)processor->E, (int)processor->H, (int)processor->L);
    printf("16-bit Registers\n"
    "\tStack Pointer (SP): %d\n"
    "\tProgram Counter (PC): %d\n",
    processor->SP, processor->PC);
    printf("Internal State\n"
    "\tHalted: %d\n"
    "\tStopped: %d\n"
    "\tInterrupts Enabled: %d\n"
    "\tLast Interrupt Switch: %d\n",
    processor->halted, processor->stopped, processor->interrupts_enabled,
    processor->last_interrupt_switch);
}
