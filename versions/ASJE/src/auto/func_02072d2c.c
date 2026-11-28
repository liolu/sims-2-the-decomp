#include "m2c.h"

u16 func_02072d2c(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + (arg1 * 2)), u16 *, 0x31C);
}
