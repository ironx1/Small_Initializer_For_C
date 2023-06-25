#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ky_initializer.h"

voidptr_t ky_initialize(voidptr_t value, size_t sizeOfValue)
{
    if (sizeOfValue < 1)
        fprintf(stderr, "Error in file %s function %s line %d: Invalid size\n", __FILE__, __func__, __LINE__), exit(EXIT_FAILURE);
    voidptr_t pv = malloc(sizeOfValue);
    if (!pv)
        fprintf(stderr, "Error in file %s function %s line %d: Out of memory\n", __FILE__, __func__, __LINE__), exit(EXIT_FAILURE);
    return memcpy(pv, value, sizeOfValue);
}

void ky_free(voidptr_t ptr)
{
    if(!ptr)
        fprintf(stderr, "Error in file %s function %s line %d: Null pointer\n", __FILE__, __func__, __LINE__), exit(EXIT_FAILURE), exit(EXIT_FAILURE);
    if(!*(voidptr_t*)ptr) return;
    free(*(voidptr_t*)ptr);
    *(voidptr_t*)ptr = NULL;
    fprintf(stdout, "Message: Memory freed\n");
}