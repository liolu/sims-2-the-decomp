/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0209aefc(u8 *arg0, u8 *arg1) {
    volatile s32 t[15];
    s32 lr, ip, r2, r3, r0, r1;

    lr    = *(s32 *) (arg0 + 0xC);
    t[12] = lr;
    t[8]  = lr;
    ip    = *(s32 *) arg0;
    r2    = ip - lr;
    t[0]  = r2;
    t[4]  = r2;
    r3    = *(s32 *) arg1;
    if (r3 >= r2) {
        r2   = ip + lr;
        t[9] = lr;
        t[1] = r2;
        t[5] = r2;
        if (r3 <= r2) {
            r3    = *(s32 *) (arg0 + 0x14);
            t[13] = r3;
            t[10] = r3;
            r2    = *(s32 *) (arg0 + 8);
            r0    = r2 - r3;
            t[2]  = r0;
            t[6]  = r0;
            r1    = *(s32 *) (arg1 + 8);
            if (r1 >= r0) {
                r0    = r2 + r3;
                t[11] = r3;
                t[3]  = r0;
                t[7]  = r0;
                if (r1 <= r0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
