#include "m2c.h"

s32 func_020daea8();                                /* extern */

void func_020de414(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x268) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x268) = func_020daea8();
    M2C_FIELD(arg0, s32 *, 0x26C) = (s32) (M2C_FIELD(arg0, s32 *, 0x258) - 1);
    M2C_FIELD(arg0, s32 *, 0x330) = 0;
}
