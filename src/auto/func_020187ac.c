#include "m2c.h"

void func_020187ac(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x12) = (u8) (M2C_FIELD(arg0, u8 *, 0x12) | arg1);
}
