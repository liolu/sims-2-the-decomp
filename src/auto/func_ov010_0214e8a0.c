/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov010_0214e8a0(u8 *arg0, s32 arg1) {
    s32 ip = 0;
    s32 r3 = 1;
    u8 sel = arg0[0x1E6];
    s32 m;
    s32 base;
    s32 f;
    u8 *e;
    u8 *q;
    u8 b;
    s32 c;
    s32 m2;

    if (arg1 >= 0x30 && arg1 <= 0x31) {
        m = 0;
    } else {
        m = arg1 % 8 + 1;
    }
    if (m < 4) {
        r3 = 0;
    }
    base = (arg1 / 8) * 0x2C;
    f    = arg0[base + sel + 0x53];
    if ((f > 0 && r3 != 0) || (f == 0 && r3 == 0)) {
        e = arg0 + base;
        b = e[0x56];
        if (b != 0) {
            q = e + (b - 1);
            c = q[0x48];
            if (c >= 0x30 && c <= 0x31) {
                m2 = 0;
            } else {
                m2 = c % 8 + 1;
            }
            if ((m2 < 4 && r3 != 0) || (m2 >= 4 && r3 == 0)) {
                ip = 1;
            }
        } else {
            ip = 1;
        }
    }
    return ip;
}
