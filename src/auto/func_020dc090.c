/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_020daf90(s32 a, s32 b, s32 c);
u32 func_020daea8(void);

void func_020dc090(u8 *arg0, s32 arg1, u32 arg2) {
    s32 r4;
    u32 r5;
    u8 *s;
    s32 *acc;
    s32 d;
    u32 t;

    r4   = func_020daf90(arg1, 0x3E8, *(s32 *) (arg0 + 0xBC));
    r5   = func_020daea8();
    s    = arg0 + 0x54;
    acc  = (s32 *) (s + 0x6C);
    *acc = *(s32 *) (s + 0x6C) + (r4 - (s32) (r5 - arg2));
    if (*(s32 *) (arg0 + 0xC0) > 0) {
        do {
            do {
                t = func_020daea8();
                d = t - r5;
            } while (d < *(s32 *) (arg0 + 0xC0));
            r5   = t;
            *acc = *acc - d;
        } while (*(s32 *) (arg0 + 0xC0) > 0);
    }
}
