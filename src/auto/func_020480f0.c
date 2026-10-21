#include "m2c.h"

s32 func_020480f0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xE38) != -1) {
        return 1;
    }
    return 0;
}
