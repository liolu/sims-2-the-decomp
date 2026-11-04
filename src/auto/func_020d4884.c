/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void *data_021424d4;
extern u8 data_021424e0;
extern u8 data_02142548;
extern u8 data_02142848;

void func_020d4884(s32 arg0) {
    s32 ip;
    s32 r3;
    u8 *obj;
    u8 *p2;
    u8 *r2p;
    u8 *r1p;
    u8 *cur;

    obj = ((u8 **) &data_021424e0)[arg0];
    if (obj == NULL) {
        return;
    }
    data_021424d4 = obj;
    if (obj[0x28] != 1) {
        return;
    }
    p2 = &data_02142848;
    ip = p2[0x10] - 1;
    if (ip >= 0) {
        r3  = ip * 0x18;
        r2p = p2 + ip;
        r1p = &data_02142548 + r3;
        do {
            *(s32 *) ((u8 *) data_021424d4 + r3 + 0xd3c) = 0;
            cur                                          = (u8 *) data_021424d4;
            if (cur[0x3b] == r2p[0x634]) {
                if (*(s32 *) r1p != 0) {
                    u8 *dst               = cur + 0xd3c + r3;
                    *(s32 *) dst          = *(s32 *) r1p;
                    *(s32 *) (dst + 4)    = *(s32 *) (r1p + 4);
                    *(s32 *) (dst + 8)    = *(s32 *) (r1p + 8);
                    *(s32 *) (dst + 0xc)  = *(s32 *) (r1p + 0xc);
                    *(s32 *) (dst + 0x10) = *(s32 *) (r1p + 0x10);
                    *(s32 *) (dst + 0x14) = *(s32 *) (r1p + 0x14);
                    *(s32 *) r1p          = 0;
                }
                r2p[0x634] = 3;
            }
            r3 -= 0x18;
            r2p -= 1;
            r1p -= 0x18;
            ip -= 1;
        } while (ip >= 0);
    }
    ((u8 *) data_021424d4)[0x28] = 2;
}
