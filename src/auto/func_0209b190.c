/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s64 func_0204cbb4(s32, s32);
double _dflt(s64);

void func_0209b190(s32 *arg0, s32 *arg1) {
    volatile s32 loc[7];
    s32 q;
    s32 t;
    s32 v0;
    s32 v1;
    s32 v2;

    v0      = arg0[0];
    loc[4]  = v0;
    arg1[0] = v0;
    v1      = arg0[1];
    loc[5]  = v1;
    arg1[1] = v1;
    v2      = arg0[2];
    loc[6]  = v2;
    arg1[2] = v2;
    q       = arg0[3] >> 12;
    t       = (s32) (4096.0 * (0.01 * _dflt(func_0204cbb4((-q) * 100, q * 100))));
    loc[0]  = t;
    loc[2]  = t;
    arg1[0] += t;
    q      = arg0[5] >> 12;
    t      = (s32) (4096.0 * (0.01 * _dflt(func_0204cbb4((-q) * 100, q * 100))));
    loc[1] = t;
    loc[3] = t;
    arg1[2] += t;
}
