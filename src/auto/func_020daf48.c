/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"
void func_020daf48(s32 *arg0, s32 arg1, u32 arg2) {
    s32 v;
    u32 n;
    u32 i;
    n = arg2 >> 1;
    v = arg1 | (arg1 << 0x10);
    i = n - 1;
    if (n != 0) {
        do {
            *arg0 = v;
            arg0++;
        } while (i-- != 0);
    }
    if (arg2 & 1) {
        *(s16 *) arg0 = (s16) v;
    }
}
