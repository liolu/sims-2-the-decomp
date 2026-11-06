/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov003_02150b24;

s32 func_0200e944(s32);
s32 func_ov003_0214a50c(void *, s32, u8 *, s32, s32, s32);
void func_ov003_0214a448(void *, u16);

typedef struct {
    u8 x;
    u8 y;
} P2;
typedef struct {
    P2 p[4];
} T8;
s32 func_ov003_0214d5e4(u8 *arg0, s32 arg1) {
    s32 r5 = 0;
    T8 loc = *(T8 *) &data_ov003_02150b24;
    volatile s32 sv[8];
    s32 r4;
    s32 e;
    s32 v;
    s32 w;
    u8 *p4;
    u8 *q;

    if (arg1 != 0) {
        p4                  = *(u8 **) (arg0 + 4);
        e                   = func_0200e944(*(s32 *) (p4 + *(u16 *) (p4 + 0x76) * 4 + 0x48));
        v                   = loc.p[e].x << 12;
        sv[0]               = v;
        sv[4]               = v;
        q                   = *(u8 **) (*(u8 **) (arg0 + 8));
        *(s32 *) (q + 0x50) = v;
        p4                  = *(u8 **) (arg0 + 4);
        e                   = func_0200e944(*(s32 *) (p4 + *(u16 *) (p4 + 0x76) * 4 + 0x48));
        w                   = loc.p[e].y << 12;
        sv[1]               = w;
        sv[5]               = w;
        q                   = *(u8 **) (*(u8 **) (arg0 + 8));
        *(s32 *) (q + 0x54) = w;
        return 1;
    }

    r4 = func_ov003_0214a50c(*(u8 **) (arg0 + 4), 4, (u8 *) &loc, 0x12, 0x24, 1);
    if (r4 != -1) {
        p4 = *(u8 **) (arg0 + 4);
        if (r4 != func_0200e944(*(s32 *) (p4 + *(u16 *) (p4 + 0x76) * 4 + 0x48))) {
            func_ov003_0214a448(*(u8 **) (arg0 + 4), (u16) r4);
            r5                  = 1;
            v                   = loc.p[r4].x << 12;
            sv[2]               = v;
            sv[6]               = v;
            q                   = *(u8 **) (*(u8 **) (arg0 + 8));
            *(s32 *) (q + 0x50) = v;
            w                   = loc.p[r4].y << 12;
            sv[3]               = w;
            sv[7]               = w;
            q                   = *(u8 **) (*(u8 **) (arg0 + 8));
            *(s32 *) (q + 0x54) = w;
        }
    }
    return r5;
}
