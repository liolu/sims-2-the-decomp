/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02050a78(void *, s32);
s32 func_020512c0(s32, s32, s32, void *, s32);
void *func_020521e0(s32);
void func_0207454c(void *);
extern u8 *data_0213e2f4;

void func_ov014_02149b70(s32 arg0, s32 arg1) {
    s32 sp4[4];
    s32 i;
    s32 r8;
    s32 v;
    s32 acc;
    s32 *p;

    acc = arg1;
    i   = 0;
    r8  = 0x23;
    do {
        v = *(s32 *) ((u32) data_0213e2f4 + (u32) i * 4 + 0x74);
        if (v > 0x77359400 || v < 0) {
            func_02050a78(func_020521e0(0x7DB), 0);
        } else {
            func_0207454c(sp4);
            func_02050a78(sp4, 0);
        }
        acc = func_020512c0(acc, 0x36, r8, func_020521e0(i + 0x7DC), 0);
        r8 += 0x28;
        i += 1;
    } while (i < 4);
}
