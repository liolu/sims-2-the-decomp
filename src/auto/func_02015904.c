#include "m2c.h"

void func_02015904(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s8 *, 0x18)  = 1;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg1;
}
