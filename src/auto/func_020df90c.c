/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_020dfc24(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_0210816c(void *, s32, s32, s32);

void func_020df90c(u8 *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 *arg4) {
    s32 r11;
    u32 i;
    u32 n;
    s16 *ta;
    s16 *tb;

    r11 = func_020dfc24(*(s32 *) (arg0 + 0x0), *(s32 *) (arg0 + 0x4), *(s32 *) (arg0 + 0x10), *(s32 *) (arg0 + 0x30),
                        *(s32 *) (arg0 + 0x24), *(s32 *) (arg0 + 0x28), *(s32 *) (arg0 + 0x14), arg3, *(s32 *) (arg0 + 0x1c),
                        *(s32 *) (arg0 + 0x20));
    if (*(s32 *) (arg0 + 0x18) != 0) {
        *(s32 *) (arg0 + 0x18) = 0;
    } else {
        n = *(u32 *) (arg0 + 0xc) >> 1;
        for (i = 0; i < n; i++) {
            ta    = *(s16 **) (arg0 + 0x2c);
            tb    = *(s16 **) (arg0 + 0x14);
            tb[i] = (s16) ((u32) (ta[i] * (n - i) + tb[i] * i) / n);
        }
    }
    func_0210816c(*(void **) (arg0 + 0x2c), *(s32 *) (arg0 + 0x14) + (*(s32 *) (arg0 + 0x8) - *(s32 *) (arg0 + 0xc)),
                  *(s32 *) (arg0 + 0xc), *(s32 *) (arg0 + 0x14));
    if (arg2 != 0) {
        *arg2 = *(s32 *) (arg0 + 0x8) - *(s32 *) (arg0 + 0xc);
    }
    if (arg1 != 0) {
        *arg1 = *(s32 *) (arg0 + 0x14);
    }
    if (arg4 != 0) {
        *arg4 = arg3 + r11;
    }
}
