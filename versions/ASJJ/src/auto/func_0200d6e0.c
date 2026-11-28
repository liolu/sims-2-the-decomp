/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200d6e0(s32 *arg0, s32 *arg1) {
    volatile s32 sp[29];
    s32 r0;
    s32 r1;
    s32 r2;
    s32 r3;
    s32 r4;
    s32 r5;
    s32 lr;
    s32 ip;

    r5     = arg1[6];
    sp[24] = r5;
    sp[12] = r5;
    r4     = arg1[1];
    r3     = r4 - r5;
    sp[0]  = r3;
    sp[6]  = r3;
    lr     = arg0[6];
    sp[25] = lr;
    sp[13] = lr;
    ip     = arg0[1];
    r2     = ip + lr;
    if (r2 < r3) {
        goto fail;
    }
    r3     = r4 + r5;
    r2     = ip - lr;
    sp[14] = r5;
    sp[1]  = r3;
    sp[7]  = r3;
    sp[15] = lr;
    if (r2 > r3) {
        goto fail;
    }
    r3     = arg1[7];
    sp[16] = r3;
    r2     = arg1[2];
    lr     = r2 - r3;
    sp[2]  = lr;
    sp[8]  = lr;
    ip     = arg0[7];
    sp[26] = ip;
    sp[17] = ip;
    r2     = arg0[2];
    r3     = r2 + ip;
    if (r3 < lr) {
        goto fail;
    }
    r2     = r2 - ip;
    sp[18] = ip;
    sp[3]  = r3;
    sp[9]  = r3;
    sp[19] = ip;
    if (r2 > r3) {
        goto fail;
    }
    r2     = arg1[8];
    sp[20] = r2;
    r1     = arg1[3];
    r3     = r1 - r2;
    sp[4]  = r3;
    sp[10] = r3;
    r2     = arg0[8];
    sp[27] = r2;
    sp[21] = r2;
    r0     = arg0[3];
    r1     = r0 + r2;
    if (r1 < r3) {
        goto fail;
    }
    r0     = r0 - r2;
    sp[22] = r2;
    sp[5]  = r1;
    sp[11] = r1;
    sp[23] = r2;
    if (r0 <= r1) {
        goto ok;
    }
fail:
    return 0;
ok:
    return 1;
}
