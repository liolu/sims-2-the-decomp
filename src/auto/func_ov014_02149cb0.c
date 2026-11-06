/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02050af0(void *, s32);
s32 func_02051338(s32, s32, s32, void *, s32);
void *func_02052258(s32);
void func_020745c4(void *);
extern u8 *data_0213e434;

void func_ov014_02149cb0(s32 arg0, s32 arg1) {
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
        v = *(s32 *) ((u32) data_0213e434 + (u32) i * 4 + 0x74);
        if (v > 0x77359400 || v < 0) {
            func_02050af0(func_02052258(0x7DB), 0);
        } else {
            func_020745c4(sp4);
            func_02050af0(sp4, 0);
        }
        acc = func_02051338(acc, 0x36, r8, func_02052258(i + 0x7DC), 0);
        r8 += 0x28;
        i += 1;
    } while (i < 4);
}
