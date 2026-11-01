/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020d9a4c(s32 *arg0, s32 *arg1, s32 *arg2) {
    volatile s32 st[18];
    s32 a;
    s32 s;
    a       = arg1[0];
    st[12]  = a;
    s       = arg0[0] + a;
    st[0]   = s;
    st[6]   = s;
    arg2[0] = s;
    a       = arg1[0];
    st[13]  = a;
    s       = arg0[1] + a;
    st[1]   = s;
    st[7]   = s;
    arg2[1] = s;
    a       = arg1[1];
    st[14]  = a;
    s       = arg0[2] + a;
    st[2]   = s;
    st[8]   = s;
    arg2[2] = s;
    a       = arg1[1];
    st[15]  = a;
    s       = arg0[3] + a;
    st[3]   = s;
    st[9]   = s;
    arg2[3] = s;
    a       = arg1[2];
    st[16]  = a;
    s       = arg0[4] + a;
    st[4]   = s;
    st[10]  = s;
    arg2[4] = s;
    a       = arg1[2];
    st[17]  = a;
    s       = arg0[5] + a;
    st[5]   = s;
    st[11]  = s;
    arg2[5] = s;
}
