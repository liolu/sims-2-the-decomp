/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_020f5c04(s32, s32);

void func_02010f18(u8 *arg0, s32 *arg1, s32 arg2) {
    volatile s32 fr[30];
    s32 *q = (s32 *) arg0;
    s32 *p = q + 0x1e;
    s32 x, y, z, r, r2, r3, ip, ix, iy, iz, t;
    s32 res, ra, rb;

    z      = arg1[2];
    fr[3]  = z;
    y      = arg1[1];
    fr[4]  = y;
    x      = arg1[0];
    fr[5]  = x;
    fr[21] = p[0] - x;
    fr[22] = p[1] - y;
    fr[23] = p[2] - z;
    if (arg2 == 0) {
        iz     = *(volatile s32 *) (p + 2);
        fr[8]  = iz;
        iy     = *(volatile s32 *) (p + 1);
        fr[9]  = iy;
        ix     = *(volatile s32 *) (p + 0);
        fr[10] = ix;
        r3     = *(volatile s32 *) (arg1 + 0) - ix;
        fr[24] = r3;
        r2     = *(volatile s32 *) (arg1 + 1) - iy;
        fr[25] = r2;
        t      = *(volatile s32 *) (arg1 + 2) - iz;
        fr[26] = t;
        fr[21] = r3;
        fr[1]  = r2;
        fr[22] = r2;
        fr[2]  = t;
        fr[23] = t;
    }
    t      = fr[23];
    ra     = fr[21];
    fr[7]  = t;
    fr[6]  = ra;
    res    = func_020f5c04(ra, t);
    fr[0]  = res;
    r2     = q[0x21];
    ip     = 0;
    fr[20] = r2;
    fr[11] = r2;
    fr[27] = r2;
    fr[12] = res;
    fr[28] = res;
    r      = q[0x23];
    r3     = 0;
    fr[13] = r;
    fr[29] = r;
    fr[14] = r2;
    if (r2 == (s32) (u32) r2) {
        t      = *(volatile s32 *) (q + 0x22);
        fr[15] = t;
        if (res == t) {
            r3 = 1;
        }
    }
    if (r3 != 0) {
        t      = *(volatile s32 *) (q + 0x23);
        ra     = fr[29];
        fr[16] = t;
        if (ra == t) {
            ip = 1;
        }
    }
    if (ip != 0) {
        return;
    }
    t                     = fr[27];
    fr[17]                = t;
    q[0x21]               = t;
    t                     = fr[28];
    fr[18]                = t;
    q[0x22]               = t;
    t                     = fr[29];
    fr[19]                = t;
    q[0x23]               = t;
    *(u8 *) (arg0 + 0xdc) = 1;
}
