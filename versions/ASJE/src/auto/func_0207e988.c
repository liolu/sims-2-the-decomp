/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0207e57c(void *arg0, s32 arg1);
extern void *data_0213e2f4;

void func_0207e988(u8 *arg0) {
    s32 r4;
    s32 found;
    s32 k;
    s32 i;
    u8 *p;
    s32 cnt;
    s32 flag;
    s32 t;
    u8 j;
    s32 zero;
    s32 one;
    s32 c13;
    s32 sz;
    u8 *r10;
    u8 *p2;

    found = 0;
    p     = (u8 *) data_0213e2f4 + 0x41F8;
    for (k = 0; k < 6; k++) {
        cnt = *(s32 *) (p + 0x54);
        for (i = 0; i < cnt; i++) {
            if (p[i * 4] == 0x5E) {
                found = 1;
                goto found_it;
            }
        }
        p += 0x58;
    }
    found = 0;
found_it:
    if (found != 0) {
        *(s32 *) (arg0 + 0x984) = 3;
    } else {
        *(s32 *) (arg0 + 0x984) = 8;
    }
    r4   = 0;
    r10  = arg0;
    zero = 0;
    one  = 1;
    c13  = 0xD;
    sz   = 0x4C;
    do {
        t = *(s32 *) (r10 + 0x10);
        if ((t == 3) || (t == 5) || (t == 0xA)) {
            flag = zero;
            j    = (u8) zero;
            do {
                p2 = arg0 + j * sz;
                if ((p2[0xA41] != 0) && (p2[0xA40] != 0)) {
                    if (r4 == (s32) * (u16 *) (p2 + 0xA00 + 0x3C)) {
                        *(s32 *) (r10 + 4) = (s32) * (u16 *) (p2 + 0xA00 + 0x3E);
                        flag               = one;
                        break;
                    }
                }
                j = j + 1;
            } while (j < 0xA);
            if (flag == 0) {
                func_0207e57c(arg0, r4);
            }
        } else {
            if ((u32) (t - 1) <= 1U) {
                *(s32 *) (r10 + 4) = c13;
            }
        }
        r4 += 1;
        r10 += 0x2C;
    } while (r4 < 0x39);
}
