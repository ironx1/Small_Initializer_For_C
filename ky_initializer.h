#if !defined(KY_INITIALIZER_H)
#define KY_INITIALIZER_H

#include <stddef.h>

typedef void* voidptr_t;

extern voidptr_t ky_initialize(voidptr_t value, size_t sizeOfValue);
extern void ky_free(voidptr_t ptr);

#endif // KY_INITIALIZER_H
