/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02133048;
extern u8 data_0213e238;
extern u8 data_02133ce8;

void func_02093f00(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *p = arg0;
    s32 r3;
    s32 v;
    u8 *t;

    *(u8 **) arg0          = &data_02133048;
    *(s32 *) (arg0 + 4)    = arg1;
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0xC)  = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    *(u8 *) (arg0 + 0x1C)  = 1;
    *(u8 **) arg0          = &data_02133ce8;
    *(s32 *) (arg0 + 0x20) = arg2;
    *(u8 **) (arg0 + 0x24) = (u8 *) &data_0213e238 + arg2 * 0x302;
    if ((*(u8 **) (arg0 + 0x24))[0x300] & 1) {
        r3 = *(s32 *) (arg0 + 8);
        if (r3 > *(s32 *) (arg0 + 0xC)) {
            do {
                t = p + (r3 - 1);
                v = t[0x10];
                t = p + r3;
                r3 -= 1;
                t[0x10] = v;
            } while (r3 > *(s32 *) (arg0 + 0xC));
        }
        *(u8 *) (arg0 + 0x10 + *(s32 *) (arg0 + 0xC)) = 0x26;
        *(s32 *) (arg0 + 0xC)                         = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 8)                           = *(s32 *) (arg0 + 8) + 1;
        r3                                            = *(s32 *) (arg0 + 8);
        if (r3 > *(s32 *) (arg0 + 0xC)) {
            do {
                t = p + (r3 - 1);
                v = t[0x10];
                t = p + r3;
                r3 -= 1;
                t[0x10] = v;
            } while (r3 > *(s32 *) (arg0 + 0xC));
        }
        *(u8 *) (arg0 + 0x10 + *(s32 *) (arg0 + 0xC)) = 0x27;
        *(s32 *) (arg0 + 0xC)                         = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 8)                           = *(s32 *) (arg0 + 8) + 1;
        return;
    }
    r3 = *(s32 *) (arg0 + 8);
    if (r3 > *(s32 *) (arg0 + 0xC)) {
        do {
            t = p + (r3 - 1);
            v = t[0x10];
            t = p + r3;
            r3 -= 1;
            t[0x10] = v;
        } while (r3 > *(s32 *) (arg0 + 0xC));
    }
    *(u8 *) (arg0 + 0x10 + *(s32 *) (arg0 + 0xC)) = 0x25;
    *(s32 *) (arg0 + 0xC)                         = *(s32 *) (arg0 + 0xC) + 1;
    *(s32 *) (arg0 + 8)                           = *(s32 *) (arg0 + 8) + 1;
}
