/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;

s32 func_ov003_0214a50c(void *, s32, s8 *, s32, s32, s32);
void func_020d59bc(s32);

s32 func_ov003_0214dad0(u8 *arg0) {
    s8 buf[4];
    s32 idx;

    buf[0] = (s8) ((*(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8)) + 0x50) >> 12) - 16);
    buf[1] = (s8) ((*(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8)) + 0x54) >> 12) - 16);
    buf[2] = (s8) ((*(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 4) + 0x50) >> 12) - 16);
    buf[3] = (s8) ((*(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 4) + 0x54) >> 12) - 16);
    idx    = func_ov003_0214a50c(*(void **) (arg0 + 4), 2, buf, 32, 32, 0);
    if (idx != -1) {
        if (idx == 0) {
            func_020d59bc(0x159);
            arg0[18] = 1;
        } else {
            func_020d59bc(0x160);
            arg0[18] = 2;
        }
        {
            *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + idx * 4) + 4) &= ~1;
            *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + (idx + 2) * 4) + 4) |= 1;
        }
    }
    return idx;
}
