/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200d474(u8 *arg0, u8 *arg1) {
    volatile s32 sp[17];
    s32 t5;
    s32 t4;
    s32 t3;
    s32 t3b;
    s32 lr;
    s32 ip;
    s32 r0;
    s32 r1;
    s32 r2;
    s32 r3;

    t5     = *(s32 *) (arg1 + 0x18);
    sp[15] = t5;
    sp[10] = t5;
    t4     = *(s32 *) (arg1 + 8);
    t3     = t4 - t5;
    sp[0]  = t3;
    sp[4]  = t3;
    lr     = *(s32 *) (arg0 + 0x18);
    sp[16] = lr;
    sp[11] = lr;
    ip     = *(s32 *) (arg0 + 8);
    if ((ip + lr) <= t3) {
        goto done;
    }
    t3b    = t4 + t5;
    sp[12] = t5;
    sp[1]  = t3b;
    sp[5]  = t3b;
    sp[13] = lr;
    if ((ip - lr) < t3b) {
        goto main;
    }
done:
    return 0;
main:
    r2     = *(s32 *) (arg1 + 4);
    sp[6]  = r2;
    lr     = *(s32 *) (arg1 + 0xC);
    sp[7]  = lr;
    r3     = *(s32 *) (arg1 + 0x1C);
    sp[8]  = r3;
    r1     = *(s32 *) (arg0 + 0x1C);
    ip     = r1 + r3;
    r1     = (s32) (((s64) ip * ip) >> 13);
    sp[3]  = r1;
    sp[9]  = r1;
    r3     = *(s32 *) (arg0 + 0xC);
    lr     = r3 - lr;
    ip     = (s32) (((s64) lr * lr) >> 13);
    sp[2]  = ip;
    sp[14] = ip;
    r0     = *(s32 *) (arg0 + 4);
    r3     = r0 - r2;
    r2     = (s32) (((s64) r3 * r3) >> 13);
    r0     = r2 + ip;
    return (r0 < r1);
}
