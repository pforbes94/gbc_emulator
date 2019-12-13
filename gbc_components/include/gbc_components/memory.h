#include <stdint.h>
#include <stdlib.h>

/**
 * Abstraction for the address space available to the @c Processor on the GBC device.
 */
typedef struct {
    size_t len;
    uint8_t* memory;
} Memory;

/**
 * @brief Allocate @c Memory used by the GBC system.
 * @param[in] memory Pointer to the @c Memory abstraction to initialize
 */
inline void create_memory(Memory* memory)
{
    memory->len = 0xFFFF;
    memory->memory = (uint8_t*)(malloc(memory->len));
}

/**
 * @brief Free resources used by @p memory
 * @param[in] memory Pointer to @c Memory, which is guaranteed to own no resources following
 * this call.
 */
inline void release_memory(Memory* memory)
{
    free(memory->memory);
}
