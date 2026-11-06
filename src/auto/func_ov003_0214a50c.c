/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void *data_0213d95c;
M2C_UNK func_020d59bc(s32);
s32 func_ov003_0214a50c(void *arg0, s32 arg1, u8 *arg2, s32 arg3, u16 arg4, u8 arg5) {
    u8 *o;
    s32 i;
    u32 lo;
    u32 hi;
    u32 a;
    u32 b;
    u8 *p;
    s32 inside;
    o = (u8 *) data_0213d95c;
    if (((u32) (o[0] << 27)) >> 31) {
        i = 0;
        if (arg1 > 0) {
            lo = *(u16 *) (o + 0x2A);
            hi = *(u16 *) (o + 0x2C);
            do {
                p = arg2 + i * 2;
                b = p[1];
                a = arg2[i * 2];
                if (lo >= a && (s32) lo < (s32) (a + arg3) && hi >= b && (s32) hi < (s32) (b + arg4)) {
                    inside = 1;
                } else {
                    inside = 0;
                }
                if (inside != 0) {
                    if (arg5 != 0) {
                        func_020d59bc(0x161);
                    }
                    return i;
                }
                i++;
            } while (i < arg1);
        }
    }
    return -1;
}
