#include "m2c.h"

s32 func_020480d0(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + (arg1 << 5)), s32 *, 0xDB0);
}
