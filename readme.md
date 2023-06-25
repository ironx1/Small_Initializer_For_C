# Small Initializer For C Programming Language
This repository contains a small and lightweight initializer for C programs
# Usage
To use initalizer you must include "ky_interface.h"<br/>
Use iky_INITIALIZE macro to allocate memory and initialize values.<br/>
iky_INITIALIZE macro is variadic macro this is why you need at least c99 standard to compile the code.<br/>
When using the iky_INITIALIZE macro, you must specify as the first parameter for which type memory space will be allocated, then you can enter the values.<br/>
You must use the iky_FREE macro to free the allocated memory.
# Exlampe
See test.c for an example.
