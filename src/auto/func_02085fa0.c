/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02085fa0(s32 *arg0, s32 *arg1) {
    volatile s32 t[4];
    s32 v;

    v       = arg1[0];
    t[0]    = v;
    arg0[0] = v;
    v       = arg1[1];
    t[1]    = v;
    arg0[1] = v;
    v       = arg1[2];
    t[2]    = v;
    arg0[2] = v;
}
