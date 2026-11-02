/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020da00c(s32 *arg0, s32 *arg1) {
    volatile s32 t[4];
    s32 a;
    a       = arg1[0];
    t[1]    = a;
    arg0[0] = a;
    a       = arg1[1];
    t[2]    = a;
    arg0[1] = a;
    a       = arg1[2];
    t[3]    = a;
    arg0[2] = a;
    a       = arg1[3];
    t[0]    = a;
    arg0[3] = a;
}
