/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;

s32 func_ov003_0214a50c(s32 a, s32 b, u8 *c, s32 d, s32 e, s32 f);
void func_020d59bc(s32);

s32 func_ov003_0214dff4(u8 *arg0) {
    u8 buf[4];
    s32 r4;
    u8 *tbl;
    s32 k;
    u8 *o;

    buf[0] = (*(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x3c) + 0x50) >> 12) - 16;
    buf[1] = (*(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x3c) + 0x54) >> 12) - 16;
    buf[2] = (*(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x40) + 0x50) >> 12) - 16;
    buf[3] = (*(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0x40) + 0x54) >> 12) - 16;
    r4     = func_ov003_0214a50c(*(s32 *) (arg0 + 4), 2, buf, 32, 32, 0);
    if (r4 != -1) {
        if (r4 == 0) {
            func_020d59bc(0x159);
            arg0[31] = 1;
        } else {
            func_020d59bc(0x160);
            arg0[31] = 2;
        }
        {
            tbl = *(u8 **) (arg0 + 8);
            k   = r4 + 15;
            o   = ((u8 **) tbl)[k];
            *(s32 *) (o + 4) &= ~1;
            tbl = *(u8 **) (arg0 + 8);
            k   = r4 + 17;
            o   = ((u8 **) tbl)[k];
            *(s32 *) (o + 4) |= 1;
        }
    }
    return r4;
}
