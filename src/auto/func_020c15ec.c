/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c15ec(s32 *arg0, s32 *arg1) {
    volatile s32 t[4];
    s32 x;
    x       = arg1[0];
    t[0]    = x;
    arg0[0] = x;
    x       = arg1[1];
    t[1]    = x;
    arg0[1] = x;
    x       = arg1[2];
    t[2]    = x;
    arg0[2] = x;
}
