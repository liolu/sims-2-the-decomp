/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02067104(s32 *, s32 *);
void func_0206e8d4(u8 *, s32);

void func_0206e5b0(u8 *arg0) {
    s32 fr[7];
    u8 *r4;
    s32 ip;
    s32 lim;
    s32 r2;
    s32 r0;
    u8 *p;

    r0  = *(s32 *) (arg0 + 0x514);
    r4  = arg0 + 0x18 + (r0 << 4);
    lim = *(s32 *) (arg0 + 0x518);
    ip  = *(s32 *) (r4 + 4);
    if (ip < lim) {
        func_0206e8d4(arg0, r0);
        r2                      = *(s32 *) (r4 + 4);
        *(s32 *) (arg0 + 0x518) = r2;
        fr[1]                   = r2 << 16;
        func_02067104(&fr[0], &fr[1]);
        fr[4]                   = fr[0];
        *(s32 *) (arg0 + 0x530) = fr[0];
    } else if (ip + *(s32 *) (r4 + 8) >= lim + 7) {
        func_0206e8d4(arg0, r0);
        r2                      = *(s32 *) (r4 + 4) + *(s32 *) (r4 + 8) - 7;
        *(s32 *) (arg0 + 0x518) = r2;
        fr[3]                   = r2 << 16;
        func_02067104(&fr[2], &fr[3]);
        fr[5]                   = fr[2];
        *(s32 *) (arg0 + 0x530) = fr[2];
    }
    r0 = *(s32 *) (arg0 + 0x514);
    if (r0 < 0) {
        p                = *(u8 **) (arg0 + 0x4F8);
        *(s32 *) (p + 4) = *(s32 *) (p + 4) & ~1;
        p                = *(u8 **) (arg0 + 0x4FC);
        *(s32 *) (p + 4) = *(s32 *) (p + 4) & ~1;
        return;
    }
    p = *(u8 **) (arg0 + 0x4F8);
    if (r0 > 0) {
        *(s32 *) (p + 4) = *(s32 *) (p + 4) | 1;
    } else {
        *(s32 *) (p + 4) = *(s32 *) (p + 4) & ~1;
    }
    p = *(u8 **) (arg0 + 0x4FC);
    if (*(s32 *) (arg0 + 0x514) < *(s32 *) (arg0 + 0x50C) - 1) {
        *(s32 *) (p + 4) = *(s32 *) (p + 4) | 1;
        return;
    }
    *(s32 *) (p + 4) = *(s32 *) (p + 4) & ~1;
}
