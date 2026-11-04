/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020b3b8c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 r4;
    s32 r3;
    s32 lr;
    s32 r1;
    s32 r2;
    s32 r5;
    s32 r6;
    s32 r7;
    u8 ip;
    u8 *r0;

    ip = (u8) * (s32 *) (arg0 + 0x600);
    if (arg1 < arg3) {
        r4 = arg1;
        r3 = arg3;
    } else {
        r4 = arg3;
        r3 = arg1;
    }
    if (arg2 < arg4) {
        lr = arg2;
        r1 = arg4;
    } else {
        lr = arg4;
        r1 = arg2;
    }
    if (arg5 != 0) {
        if (lr > r1) {
            return;
        }
        r0 = arg0 + lr * 0x30;
        do {
            for (r2 = r4; r2 <= r3; r2++) {
                r0[r2] = ip;
            }
            lr++;
            r0 += 0x30;
        } while (lr <= r1);
    } else {
        r7 = lr;
        if (lr <= r1) {
            r6 = lr * 0x30;
            r5 = (s32) (arg0 + r4 + r6);
            r2 = (s32) (arg0 + r3 + r6);
            do {
                *(u8 *) r5 = ip;
                r7++;
                *(u8 *) r2 = ip;
                r5 += 0x30;
                r2 += 0x30;
            } while (r7 <= r1);
        }
        r5 = r4;
        if (r4 <= r3) {
            r0 = arg0 + lr * 0x30 + r4;
            do {
                r5++;
                *r0 = ip;
                r0++;
            } while (r5 <= r3);
        }
        if (r4 > r3) {
            return;
        }
        r0 = arg0 + r1 * 0x30 + r4;
        do {
            r4++;
            *r0 = ip;
            r0++;
        } while (r4 <= r3);
    }
}
