/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020b9b5c(void *arg0, s16 *arg1, s8 arg2, volatile s32 arg3) {
    volatile s32 fr[9];
    s32 nx;
    s32 ny;
    s32 nz;
    s32 changed;
    s32 a;
    u8 *p = (u8 *) arg0;

    *(s32 *) (p + 0x264)  = 7;
    *(s16 **) (p + 0x2B4) = arg1;
    *(s8 *) (p + 0x2BD)   = arg2;
    *(s32 *) (p + 0x2A4)  = arg3;
    changed               = 0;
    *(u8 *) (p + 0x2BE)   = 0;
    nx                    = arg1[0] << 12;
    fr[5]                 = nx;
    ny                    = arg1[1] << 12;
    fr[6]                 = ny;
    nz                    = arg1[2] << 12;
    fr[7]                 = nz;
    if ((a = *(s32 *) p, fr[0] = a, nx != a) || (a = *(s32 *) (p + 4), fr[1] = a, ny != a) ||
        (a = *(s32 *) (p + 8), fr[2] = a, nz != a)) {
        changed = 1;
    }
    if (changed != 0) {
        *(s32 *) p         = fr[5];
        a                  = fr[6];
        fr[3]              = a;
        *(s32 *) (p + 4)   = a;
        a                  = fr[7];
        fr[4]              = a;
        *(s32 *) (p + 8)   = a;
        *(u8 *) (p + 0x64) = 1;
    }
    *(u8 *) (p + 0x2BE) = (u8) (*(u8 *) (p + 0x2BE) + 1);
}
