#include <bits/wordsize.h>

#if __WORDSIZE == 32
#include "config_types-32.h"
#elif __WORDSIZE == 64
#include "config_types-64.h"
#else
#error "Unknown word size"
#endif
