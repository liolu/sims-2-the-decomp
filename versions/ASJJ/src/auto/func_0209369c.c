#include "m2c.h"

extern void *data_0213e0a8;

s32 func_0209369c(void) {
    if (M2C_FIELD(data_0213e0a8, s32 *, 0xF4) == 0x13) {
        return 1;
    }
    return 0;
}
