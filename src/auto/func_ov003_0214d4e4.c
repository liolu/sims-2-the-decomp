/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov003_0214a50c(void *, s32, s8 *, s32, s32, s32);
void func_ov003_0214a47c(void *, s32);
void func_ov003_0214d5e4(void *, s32);

s32 func_ov003_0214d4e4(void *arg0) {
    s8 buf[4];
    s32 var_r4 = 0;
    s32 res;
    s32 idx;
    u8 *p = (u8 *) arg0;

    buf[0] = (s8) (*(s32 *) (*(u8 **) (*(u8 **) (p + 8) + 0x10) + 0x50) >> 12);
    buf[1] = (s8) (*(s32 *) (*(u8 **) (*(u8 **) (p + 8) + 0x10) + 0x54) >> 12);
    buf[2] = (s8) (*(s32 *) (*(u8 **) (*(u8 **) (p + 8) + 0x14) + 0x50) >> 12);
    buf[3] = (s8) (*(s32 *) (*(u8 **) (*(u8 **) (p + 8) + 0x14) + 0x54) >> 12);
    res    = func_ov003_0214a50c(*(void **) (p + 4), 2, buf, 0x24, 0x24, 1);
    if (res != -1) {
        idx = *(u16 *) (*(u8 **) (p + 4) + 0x76);
        if (res != idx) {
            u8 *e = *(u8 **) (*(u8 **) (p + 8) + (idx + 4) * 4);
            *(u32 *) (e + 4) &= ~1;
            func_ov003_0214a47c(*(void **) (p + 4), res);
            idx = *(u16 *) (*(u8 **) (p + 4) + 0x76);
            e   = *(u8 **) (*(u8 **) (p + 8) + (idx + 4) * 4);
            *(u32 *) (e + 4) |= 1;
            func_ov003_0214d5e4(arg0, 1);
            var_r4 = 1;
        }
    }
    return var_r4;
}
