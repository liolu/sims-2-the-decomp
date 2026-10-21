#include "m2c.h"

s32 func_02077a48(s32 arg0, s32 arg1) {
    if ((M2C_FIELD((arg0 + arg1), u8 *, 1) & 1) == 1) {
        return 1;
    }
    return 0;
}
