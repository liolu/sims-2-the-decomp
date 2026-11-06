/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov010_02152ee0;
s32 func_020c48e4(void);
void func_ov010_0214b3a4(void *, void *, s32);

void func_ov010_0214fac4(u8 *arg0, s32 arg1) {
    s32 hi;
    s32 i;
    s32 j;
    s32 k;
    u8 *p;
    s32 lo;
    s32 b;
    s32 need;
    u8 *p2;

    lo = arg1 << 3;
    p  = arg0;
    hi = lo + 7;
    for (i = 0; i < 3; i++, p += 0x28) {
        for (j = 0; j < 5; j++) {
            b = p[j + 0x154];
            if (b < lo || b > hi) {
                continue;
            }
            if (arg0[0x1e4] >= arg0[0x1e5]) {
                p[j + 0x154] = 0xff;
            } else {
                p[j + 0x154] = (*(u8 **) (arg0 + 0x1c4))[arg0[0x1e4]];
                arg0[0x1e4]  = arg0[0x1e4] + 1;
            }
            func_ov010_0214b3a4(arg0, ((void **) p)[0x4f + j], p[j + 0x154]);

            need = 0;
            if (data_ov010_02152ee0 != 0) {
                if (i != func_020c48e4()) {
                    need = 1;
                }
            }
            if (need || (p[0x15b] & 1)) {
                *(s32 *) (((u8 **) p)[0x4f + j] + 4) &= ~1;
                p2 = *(u8 **) (((u8 **) p)[0x4f + j] + 0x74);
                *(s32 *) (p2 + 4) &= ~1;
            }

            if ((arg0[0x1ea] & 1) && !(p[0x15b] & 1)) {
                *(s32 *) (((u8 **) p)[0x4f + j] + 4) &= ~1;
                p2 = *(u8 **) (((u8 **) p)[0x4f + j] + 0x74);
                *(s32 *) (p2 + 4) &= ~1;
            }

            k = 0;
            do {
                if (p[k + 0x154] != 0xff) {
                    break;
                }
                k++;
            } while (k < 5);
            if (k >= 5) {
                p[0x15b] |= 4;
            }
        }
    }
}
