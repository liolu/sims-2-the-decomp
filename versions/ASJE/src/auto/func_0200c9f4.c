/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_01ffc2ec(s32 *, s32 *, s32, s32);

void func_0200c9f4(s32 *out, s32 *a, s32 *b) {
    s32 f[37];
    s32 a3, a2, a1, dx, dy, dz, b6, t, lim;
    s32 v0, v1, v2, x0, x1, x2;
    s32 *rp;

    a3          = a[3];
    f[0x54 / 4] = a3;
    a2          = a[2];
    f[0x58 / 4] = a2;
    a1          = a[1];
    f[0x5c / 4] = a1;
    dx          = b[1] - a1;
    f[0x6c / 4] = dx;
    dy          = b[2] - a2;
    f[0x70 / 4] = dy;
    dz          = b[3] - a3;
    f[0x74 / 4] = dz;
    t           = a[7];
    f[0x14 / 4] = t;
    b6          = b[6];
    f[0x60 / 4] = b6;
    f[0x4c / 4] = b6;
    if (dy - b6 >= t) {
        out[0] = 0;
        out[1] = -0x1000;
        out[2] = 0;
        return;
    }
    t           = -a[7];
    f[0]        = t;
    f[0x18 / 4] = t;
    f[0x50 / 4] = b6;
    if (dy + b6 <= t) {
        out[0] = 0;
        out[1] = 0x1000;
        out[2] = 0;
        return;
    }
    f[0x78 / 4] = 0;
    f[0x7c / 4] = 0;
    f[0x80 / 4] = 0;
    lim         = -a[6];
    f[0x4 / 4]  = lim;
    f[0x1c / 4] = lim;
    if (dx < lim) {
        f[0x8 / 4]  = lim;
        f[0x20 / 4] = lim;
        f[0x78 / 4] = lim;
    } else {
        lim         = a[6];
        f[0x64 / 4] = lim;
        f[0x24 / 4] = lim;
        if (dx > lim) {
            f[0x78 / 4] = lim;
            f[0x28 / 4] = lim;
        } else {
            f[0x2c / 4] = dx;
            f[0x78 / 4] = dx;
        }
    }
    lim         = -a[8];
    dz          = f[0x74 / 4];
    f[0xc / 4]  = lim;
    f[0x30 / 4] = lim;
    if (dz < lim) {
        f[0x10 / 4] = lim;
        f[0x34 / 4] = lim;
        f[0x80 / 4] = lim;
    } else {
        lim         = a[8];
        f[0x68 / 4] = lim;
        f[0x38 / 4] = lim;
        if (dz > lim) {
            f[0x3c / 4] = lim;
            f[0x80 / 4] = lim;
        } else {
            dz          = *(volatile s32 *) &f[0x74 / 4]; // volatile: target reloads the frame word (ldrle) after the compare
            f[0x40 / 4] = dz;
            f[0x80 / 4] = dz;
        }
    }
    v0          = f[0x6c / 4];
    v1          = f[0x78 / 4];
    v2          = f[0x74 / 4];
    t           = f[0x80 / 4];
    f[0x44 / 4] = v0;
    f[0x78 / 4] = v1 - v0;
    f[0x48 / 4] = v2;
    f[0x80 / 4] = t - v2;
    func_01ffc2ec((s32 *) &f[0x84 / 4], (s32 *) &f[0x78 / 4], t - v2, v2);
    rp     = (s32 *) &f[0x84 / 4];
    x0     = rp[0];
    x2     = rp[2];
    x1     = rp[1];
    out[0] = -x0;
    out[1] = -x1;
    out[2] = -x2;
}
