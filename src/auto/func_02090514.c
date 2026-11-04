/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02064644(s32, s32);
s32 func_02083d1c(u8 *, u32);
extern u8 data_0213355c;
extern u8 data_02133c78;
extern s32 data_0213e434;

u8 *func_02090514(u8 *arg0, u8 *arg1) {
    u8 *p = arg0;
    s32 i;
    s32 v;
    u8 *t;

    *(u8 **) arg0          = &data_0213355c;
    *(u8 **) (arg0 + 4)    = arg1;
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0xC)  = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    *(u8 *) (arg0 + 0x1C)  = 1;
    *(u8 **) arg0          = &data_02133c78;
    if (*(u16 *) (arg1 + 0xA) == 0x35) {
        i = *(s32 *) (arg0 + 8);
        if (i > *(s32 *) (arg0 + 0xC)) {
            do {
                t = p + (i - 1);
                v = t[0x10];
                t = p + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (arg0 + 0xC));
        }
        p[0x10 + *(s32 *) (arg0 + 0xC)] = 0x59;
        *(s32 *) (arg0 + 0xC)           = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 8)             = *(s32 *) (arg0 + 8) + 1;

        i = *(s32 *) (arg0 + 8);
        if (i > *(s32 *) (arg0 + 0xC)) {
            do {
                t = p + (i - 1);
                v = t[0x10];
                t = p + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (arg0 + 0xC));
        }
        p[0x10 + *(s32 *) (arg0 + 0xC)] = 0x5A;
        *(s32 *) (arg0 + 0xC)           = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 8)             = *(s32 *) (arg0 + 8) + 1;

        i = *(s32 *) (arg0 + 8);
        if (i > *(s32 *) (arg0 + 0xC)) {
            do {
                t = p + (i - 1);
                v = t[0x10];
                t = p + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (arg0 + 0xC));
        }
        p[0x10 + *(s32 *) (arg0 + 0xC)] = 0x5;
        *(s32 *) (arg0 + 0xC)           = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 8)             = *(s32 *) (arg0 + 8) + 1;
    }
    if (*(u16 *) (arg1 + 0xA) == 0x35) {
        if (func_02064644(data_0213e434, 0x25) != 0) {
            if (func_02083d1c((u8 *) data_0213e434 + 0x18, 0x4D) == 6) {
                i = *(s32 *) (arg0 + 8);
                if (i > *(s32 *) (arg0 + 0xC)) {
                    do {
                        t = p + (i - 1);
                        v = t[0x10];
                        t = p + i;
                        i -= 1;
                        t[0x10] = v;
                    } while (i > *(s32 *) (arg0 + 0xC));
                }
                p[0x10 + *(s32 *) (arg0 + 0xC)] = 0x1D;
                *(s32 *) (arg0 + 0xC)           = *(s32 *) (arg0 + 0xC) + 1;
                *(s32 *) (arg0 + 8)             = *(s32 *) (arg0 + 8) + 1;
            }
        }
    }
    arg0[0x1D] = 0;
    arg0[0x1E] = 0;
    return arg0;
}
