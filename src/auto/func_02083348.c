#include "m2c.h"
u32 func_02083348(s32 *arg0, s32 arg1) {
    u8 i;
    s32 *p;
    for (i = 0; i < 2; i++) {
        p = ((s32 **) arg0)[i];
        if (p != NULL && arg1 == p[0x1C8 / 4]) {
            return i;
        }
    }
    return 2;
}
