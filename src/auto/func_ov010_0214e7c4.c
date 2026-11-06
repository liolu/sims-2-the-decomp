/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov010_0214e7c4(u8 *arg0) {
    s32 lr;
    s32 ip;
    u8 *r3;
    u32 c;
    u32 t;
    u8 *r2;
    s32 r4;
    u8 *r1;

    c  = arg0[0x1E6];
    lr = 0;
    ip = 0;
    r3 = arg0;
    r2 = arg0 + c;
    r1 = arg0 + 0x159 + c * 0x28;
loop:
    if (!(r3[0x58] & 1) && (ip != (((u32) (r1[0] << 28)) >> 28)) && (r2[0x53] == 0)) {
        c = r3[0x56];
        if (c != 0) {
            t = r3[0x48 + (s32) (c - 1)];
            if (((s32) t >= 0x30) && ((s32) t <= 0x31)) {
                r4 = 0;
            } else {
                r4 = ((s32) t % 8) + 1;
            }
            if (r4 >= 4) {
                lr = 1;
            } else {
                goto next;
            }
        } else {
            lr = 1;
        }
    } else {
    next:
        ip += 1;
        r3 += 0x2C;
        r2 += 0x2C;
        if (ip < 6) {
            goto loop;
        }
    }
    if (lr != 0) {
        *(s8 *) (*(u8 **) (arg0 + 0x1B4) + 0x9E) = (s8) ip;
    }
    return lr;
}
