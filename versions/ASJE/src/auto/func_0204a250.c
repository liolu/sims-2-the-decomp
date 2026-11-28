/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;
void func_0204aac0(s32 *, s32 *, s32 *, W, s32, s32, u8 *, s32);
u8 func_0204ca90(s32, s32, s32);
extern u8 data_02139e74[];

void func_0204a250(u8 *arg0) {
    volatile s32 fr[33];
    s32 *p;
    s32 c, r0, r1, r2, idx;
    p = *(s32 **) (arg0 + 0x1d0);
    if (p != 0) {
        s32 *q              = p + 0x78 / 4;
        r0                  = p[0x78 / 4];
        q                   = p + 0x78 / 4;
        fr[14]              = r0;
        *(s32 *) (arg0 + 0) = r0;
        r0                  = q[1];
        fr[15]              = r0;
        *(s32 *) (arg0 + 4) = r0;
        r0                  = q[2];
        fr[16]              = r0;
        *(s32 *) (arg0 + 8) = r0;
    }
    fr[0]                  = 0xa000;
    fr[4]                  = 0xa000;
    *(s32 *) (arg0 + 4)    = *(s32 *) (arg0 + 4) + 0xa000;
    fr[1]                  = 0x1000;
    fr[5]                  = 0x1000;
    *(s32 *) (arg0 + 0x18) = *(s32 *) (arg0 + 0x18) + 0x1000;
    c                      = *(s32 *) (arg0 + 0x1c);
    fr[13]                 = c;
    if (*(s32 *) (arg0 + 0x18) < c) {
        return;
    }
    do {
        fr[23]     = 0;
        fr[24]     = 0;
        fr[25]     = 0;
        fr[20 + 0] = 0;
        fr[20 + 1] = 0;
        fr[20 + 2] = 0;
        fr[29]     = 0x199;
        fr[30]     = 0x199;
        fr[31]     = 0x199;
        fr[23]     = 0x199;
        fr[17]     = 0x199;
        fr[24]     = 0x199;
        fr[18]     = 0x199;
        fr[25]     = 0x199;
        r0         = *(s32 *) (arg0 + 0);
        fr[6]      = r0;
        fr[20]     = r0;
        r1         = *(s32 *) (arg0 + 4);
        fr[7]      = r1;
        fr[21]     = r1;
        r2         = *(s32 *) (arg0 + 8);
        fr[26]     = 0;
        fr[27]     = 0;
        fr[28]     = 0;
        fr[8]      = r2;
        fr[22]     = r2;
        fr[2]      = 0;
        fr[9]      = 0;
        fr[26]     = 0;
        fr[3]      = 0;
        fr[10]     = 0;
        fr[28]     = 0;
        r1         = *(s32 *) (data_02139e74 + 0x10);
        fr[11]     = r1;
        fr[27]     = r1;
        idx        = func_0204ca90(0, arg0[0x1cc], r2);
        idx        = idx & 0xff;
        func_0204aac0((s32 *) &fr[20], (s32 *) &fr[26], (s32 *) &fr[23], *(W *) (arg0 + 0x20), *(s32 *) (arg0 + 0x28),
                      *(u16 *) (arg0 + idx * 2 + 0x24), arg0, idx);
        c                      = *(s32 *) (arg0 + 0x1c);
        fr[12]                 = c;
        *(s32 *) (arg0 + 0x18) = *(s32 *) (arg0 + 0x18) - c;
        c                      = *(s32 *) (arg0 + 0x1c);
        fr[19 + 0]             = c;
    } while (*(s32 *) (arg0 + 0x18) >= c);
}
