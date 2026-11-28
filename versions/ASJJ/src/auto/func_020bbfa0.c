#include "m2c.h"

s32 func_020bbfa0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) != 0) {
        return 1;
    }
    return 0;
}
