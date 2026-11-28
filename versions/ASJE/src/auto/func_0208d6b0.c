#include "m2c.h"

extern s32 data_0213e2f4;

s32 func_0208d6b0(void *arg0) {
    if ((u32) M2C_FIELD((data_0213e2f4 + M2C_FIELD(arg0, s32 *, 0x20)), u8 *, 0x24) < 0xFAU) {
        return 1;
    }
    return 0;
}
