/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c159c(s32 *arg0, s32 *arg1, s32 *arg2) {
    volatile s32 tmp[3];
    s32 z;
    s32 y;
    s32 x;

    tmp[2]  = arg2[2];
    z       = arg1[2] - arg2[2];
    tmp[1]  = arg2[1];
    y       = arg1[1] - arg2[1];
    tmp[0]  = arg2[0];
    x       = arg1[0] - arg2[0];
    arg0[0] = x;
    arg0[1] = y;
    arg0[2] = z;
}
