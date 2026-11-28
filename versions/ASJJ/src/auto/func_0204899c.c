/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0204899c(s32 *arg0, volatile s32 a, volatile s32 b, ...) {
    volatile s32 tmp[8];
    s32 o0;
    s32 o1;
    s32 d;
    s32 x;
    o0      = arg0[0];
    d       = a - o0;
    tmp[6]  = o0;
    tmp[0]  = d;
    tmp[2]  = d;
    arg0[2] = arg0[2] + d;
    o1      = arg0[1];
    d       = b - o1;
    tmp[7]  = o1;
    tmp[1]  = d;
    tmp[3]  = d;
    arg0[3] = arg0[3] + d;
    x       = a;
    tmp[4]  = x;
    arg0[0] = x;
    x       = b;
    tmp[5]  = x;
    arg0[1] = x;
}
