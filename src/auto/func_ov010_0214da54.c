/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov010_02152ee0;
extern u8 data_ov010_02152ee4;

u8 func_ov010_0214da54(u8 *arg0) {
    u8 *bp;
    u8 r4;
    s32 lr;
    s32 ip;
    s32 t;
    u8 *q;
    u8 r6;
    s32 r9;
    s32 i;
    u8 a;
    s32 k;
    u8 b;
    u8 buf[6];
    u8 *p;
    s32 busy;

    r4 = 0;
    lr = 0;
    ip = 0;
    if (*(s32 *) (arg0 + 0xC) == 0) {
        i = 0;
        p = arg0;
        while (1) {
            busy = p[0x58] & 1;
            if (!busy && p[0x56] == 0) {
                break;
            }
            r6 = p[0x56];
            r9 = 0;
            t  = (p + (r6 - 1))[0x48];
            if (r6 != 0) {
                if (t < 0x30 || t > 0x31) {
                    r9 = (t % 8) + 1;
                }
            } else if (busy) {
                r9 = 0xFF;
            }
            buf[i] = r9;
            p += 0x2C;
            i += 1;
            if (i >= 6) {
                break;
            }
        }
        if (i == 6) {
            for (k = 1, bp = buf + 1; k < 6; k++, bp++) {
                a = buf[ip];
                b = *bp;
                if (b < a) {
                    ip = k;
                    lr = 0;
                } else if (b == a) {
                    lr = 1;
                }
            }
            if (lr == 0) {
                *(s32 *) (arg0 + 0x10) = ip;
                r4                     = 1;
            } else if (!(arg0[0x1EA] & 0x80) && data_ov010_02152ee4 == 0 && arg0[0x1E7] == 0 && data_ov010_02152ee0 == 0) {
                *(s32 *) (arg0 + 0x1C) = 2;
                *(s32 *) (arg0 + 8)    = 0xD;
                *(s8 *) (arg0 + 0x1E8) = 6;
                arg0[0x1EA]            = arg0[0x1EA] | 0x80;
            }
        }
    }
    return r4;
}
