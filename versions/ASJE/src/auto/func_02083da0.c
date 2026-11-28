/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s64 func_020fbea0(void);
typedef struct {
    u8 pad[0x5c];
    s32 a[5];
} TS;

void func_02083da0(u8 *arg0) {
    s32 r2, r1, r2b, r1b;
    u8 *t0, *t1, *t2, *t3;
    volatile s32 f[4];
    s64 t;

    for (r2 = 0; r2 < 4; r2++) {
        arg0[r2 + 0xc] = 0;
    }
    for (r1 = 0; r1 < 5; r1++) {
        arg0[r1 + 0x43] = 0;
        arg0[r1 + 0x48] = 0;
    }
    for (r2b = 0; r2b < 5; r2b++) {
        (arg0 + 0x2000)[r2b + 0x128] = 0;
    }
    t                      = func_020fbea0();
    *(s32 *) (arg0 + 0x1c) = (s32) t;
    *(s32 *) (arg0 + 0x20) = (s32) (t >> 32);
    for (r1b = 0; r1b < 5; r1b++) {
        ((TS *) arg0)->a[r1b] = 0;
    }
    r2                       = 0;
    *(u32 *) (arg0 + 0x28)   = 0x80000000;
    *(u32 *) (arg0 + 0x24)   = 0x80000000;
    *(u32 *) (arg0 + 0x2148) = 0x80000000;
    *(s32 *) (arg0 + 8)      = r2;
    arg0[0x39]               = r2;
    arg0[0x3a]               = r2;
    *(s32 *) (arg0 + 0x54)   = r2;
    *(s32 *) (arg0 + 0x58)   = r2;
    *(s32 *) (arg0 + 0x2144) = r2;
    arg0[0x2141]             = r2;
    arg0[0x2140]             = r2;
    f[0]                     = 0x64000;
    f[2]                     = 0x64000;
    *(s32 *) arg0            = 0x64000;
    f[1]                     = 0x64000;
    f[3]                     = 0x64000;
    *(s32 *) (arg0 + 4)      = 0x64000;
}
