/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02053cac(u8 *arg0, u32 arg1, s32 *arg2) {
    volatile s32 tmp[3];
    s32 *e;
    s32 v;

    if (arg1 >= *(arg0 + 0x80)) {
        return;
    }
    e       = ((s32 **) arg0)[arg1];
    v       = e[0];
    tmp[0]  = v;
    arg2[0] = v;
    v       = e[1];
    tmp[1]  = v;
    arg2[1] = v;
    v       = e[2];
    tmp[2]  = v;
    arg2[2] = v;
}
