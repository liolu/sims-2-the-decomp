/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0204ca70(s32);
M2C_UNK func_0204560c(void *);
M2C_UNK func_02045614(void *);
M2C_UNK func_02008ca0(void *, void *, void *, s32, s32);
M2C_UNK func_02008a58(void *);

void func_02005834(void *arg0) {
    u8 *a;
    s32 found;
    u8 i;
    s32 stride;
    u16 *p;
    u16 *q;

    a     = (u8 *) arg0;
    found = func_0204ca70(1);
    if (func_0204560c(a + 0x58) != 0) {
        p      = *(u16 **) func_02045614(a + 0x58);
        stride = 0x14;
        for (i = 0; i < 10; i++) {
            q = *(u16 **) (a + i * stride + 0x188);
            if (q != 0 && *p == *q) {
                found = 1;
                break;
            }
        }
    }
    if (found == 0) {
        found = 1;
        if (func_02008ca0(a, a + 0x24, a + 0x188, 0, 1) != 0) {
            *(u8 *) (a + 0x2F0) = found;
        }
    } else {
        if (func_02008ca0(a, a + 0x58, a + 0x188, 0, 0) != 0) {
            func_02008a58(a);
        }
    }
}
