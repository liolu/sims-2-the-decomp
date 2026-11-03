/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0200c334(void *arg0, void *arg1) {
    volatile s32 t[10];
    s32 *src = (s32 *) arg0;
    s32 *dst = (s32 *) arg1;
    s32 x;

    x      = 0 - src[6];
    t[0]   = x;
    t[3]   = x;
    dst[0] = x;
    x      = src[6];
    t[4]   = x;
    dst[1] = x;
    x      = 0 - src[7];
    t[1]   = x;
    t[5]   = x;
    dst[2] = x;
    x      = src[7];
    t[6]   = x;
    dst[3] = x;
    x      = 0 - src[8];
    t[2]   = x;
    t[7]   = x;
    dst[4] = x;
    x      = src[8];
    t[8]   = x;
    dst[5] = x;
}
