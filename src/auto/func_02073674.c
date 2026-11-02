#include "m2c.h"
s32 func_02073674(void *arg0) {
    s32 n;
    s32 i;
    u8 *base;
    base = (u8 *) arg0 + M2C_FIELD(arg0, s32 *, 0x2E0) * 0x58;
    n    = M2C_FIELD(base, s32 *, 0x54);
    i    = 0;
    if (n > 0) {
        do {
            s32 v = base[i * 4];
            if (v >= 6) {
                if (v <= 8) {
                    return 1;
                }
            }
            i += 1;
        } while (i < n);
    }
    return 0;
}
