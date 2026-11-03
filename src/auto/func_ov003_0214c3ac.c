/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov003_0214a50c(void *, s32, s8 *, s32, s32, s32);
void func_ov003_0214a47c(void *, s32);
void func_ov003_0214d5e4(void *, s32);
void func_020d59bc(s32);

s32 func_ov003_0214c3ac(void *arg0) {
    s8 buf[4];
    u8 *p = (u8 *) arg0;
    s32 res;
    s32 idx;
    u8 *obj8;

    buf[0] = (s8) ((*(s32 *) (*(u8 **) (*(u8 **) (p + 8) + 0x20) + 0x50) >> 12) - 16);
    buf[1] = (s8) ((*(s32 *) (*(u8 **) (*(u8 **) (p + 8) + 0x20) + 0x54) >> 12) - 16);
    buf[2] = (s8) ((*(s32 *) (*(u8 **) (*(u8 **) (p + 8) + 0x24) + 0x50) >> 12) - 16);
    buf[3] = (s8) ((*(s32 *) (*(u8 **) (*(u8 **) (p + 8) + 0x24) + 0x54) >> 12) - 16);
    res    = func_ov003_0214a50c(*(void **) (p + 4), 2, buf, 0x20, 0x20, 0);
    if (res != -1) {
        if (res == 0) {
            func_020d59bc(0x159);
            *(p + 0x48) = 1;
        } else {
            func_020d59bc(0x160);
            *(p + 0x48) = 2;
        }
        idx  = res;
        obj8 = *(u8 **) (p + 8);
        {
            u8 *e = *(u8 **) (obj8 + (idx + 8) * 4);
            *(u32 *) (e + 4) &= ~1;
        }
        {
            u8 *e = *(u8 **) (*(u8 **) (p + 8) + (idx + 10) * 4);
            *(u32 *) (e + 4) |= 1;
        }
    }
    return res;
}
