/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020ae088(s32 *arg0, s32 *arg1) {
    volatile s32 fr[6];
    s32 s;
    s32 x;
    s32 y;

    s       = *arg1;
    fr[5]   = s;
    fr[3]   = s;
    fr[4]   = s;
    x       = (s32) (((long long) arg0[0] * s + 0x800) >> 12);
    fr[0]   = x;
    y       = (s32) (((long long) arg0[1] * s + 0x800) >> 12);
    fr[1]   = y;
    arg0[0] = x;
    y       = fr[1];
    fr[2]   = y;
    arg0[1] = y;
}
