#if !defined(KY_INTERFACE_H)
#define KY_INTERFACE_H

#include "ky_initializer.h"

#define iky_INITIALIZE(type, ...) ky_initialize((type[]){__VA_ARGS__}, sizeof(type)*((sizeof((type[]){__VA_ARGS__})/sizeof(type))))

#define iky_FREE(ptr) \
    ky_free(&ptr)

#endif // KY_INTERFACE_H
