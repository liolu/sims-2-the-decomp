#include "m2c.h"

void func_020158f4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s8 *, 0x18)  = 2;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg1;
}
