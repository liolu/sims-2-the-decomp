/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020b2a78(s32 *arg0, s32 *arg1, s32 *arg2) {
    volatile s32 tmp[3];
    s32 c2;
    s32 c1;
    s32 c0;
    s32 o2;
    s32 o1;
    s32 o0;

    c2      = arg2[2];
    tmp[2]  = c2;
    o2      = arg1[2] + c2;
    c1      = arg2[1];
    tmp[1]  = c1;
    o1      = arg1[1] + c1;
    c0      = arg2[0];
    tmp[0]  = c0;
    o0      = arg1[0] + c0;
    arg0[0] = o0;
    arg0[1] = o1;
    arg0[2] = o2;
}
