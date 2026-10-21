#include "m2c.h"

u16 func_02072da4(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + (arg1 * 2)), u16 *, 0x31C);
}
