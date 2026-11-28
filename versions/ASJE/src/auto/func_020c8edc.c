/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020c8fb8(void);

u32 func_020c8edc(u32 *arg0, u32 arg1, u32 a2, u32 a3) {
    u32 sp0;
    u32 sp4;
    u32 *p;
    u32 r4 = arg0[2];
    u32 t;
    u32 x;

    if (arg1 > 0x014E5E0AU - r4) {
        func_020c8fb8();
    }
    if (r4 < 0x006F74AEU) {
        x   = (r4 + 1) * 3;
        t   = x / 5;
        sp0 = t;
        p   = (t < arg1) ? &arg1 : &sp0;
        return r4 + *p;
    }
    if (r4 < 0x00DEE95CU) {
        t   = (r4 + 1) >> 1;
        sp4 = t;
        p   = (t < arg1) ? &arg1 : &sp4;
        return r4 + *p;
    }
    return 0x014E5E0AU;
}
