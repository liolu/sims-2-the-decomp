/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020519a8(s32);
extern volatile s32 data_02132868;

void func_02083ea4(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 t;
    s32 a;
    s32 v;
    s32 b;
    s32 w;

    *arg2 += 1;
    v = func_020519a8(arg3);
    t = v + arg4;
    v = t / 8;
    if (t & 7) {
        v += 1;
    }
    a = *arg0;
    if (a <= v) {
        a = v;
    }
    *arg0 = a;
    a     = *arg0;
    v     = data_02132868;
    w     = data_02132868;
    if (a >= v) {
        a = w;
    }
    *arg0 = a;
    t     = t - arg4;
    while (t > 0xE2) {
        t -= 0xE2;
        *arg2 += 1;
    }
    *arg0 += 2;
    v     = *arg2 * 12;
    *arg1 = v / 8 + 2;
    if ((*arg2 * 12) & 7) {
        *arg1 += 1;
    }
    b = arg5 / 8;
    if (arg5 & 7) {
        b += 1;
    }
    a = *arg1;
    if (a <= b + 2) {
        a = b + 2;
    }
    *arg1 = a;
}
