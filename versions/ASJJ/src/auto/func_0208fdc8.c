/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02133048;
extern u8 data_0213371c;
extern s32 data_0213df5c;

s32 func_02082d58(s32, u16);

void *func_0208fdc8(u8 *arg0, void *arg1) {
    u8 *p = arg0;
    s32 i;
    s32 v;
    u8 *t;
    volatile s32 fr[1];
    s32 n;

    *(void **) arg0        = &data_02133048;
    *(void **) (arg0 + 4)  = arg1;
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0xC)  = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    *(u8 *) (arg0 + 0x1C)  = 1;
    *(void **) arg0        = &data_0213371c;
    i                      = *(s32 *) (arg0 + 8);
    if (i > *(s32 *) (arg0 + 0xC)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (arg0 + 0xC));
    }
    p[0x10 + *(s32 *) (arg0 + 0xC)] = 0x47;
    *(s32 *) (arg0 + 0xC)           = *(s32 *) (arg0 + 0xC) + 1;
    *(s32 *) (arg0 + 8)             = *(s32 *) (arg0 + 8) + 1;
    i                               = *(s32 *) (arg0 + 8);
    if (i > *(s32 *) (arg0 + 0xC)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (arg0 + 0xC));
    }
    p[0x10 + *(s32 *) (arg0 + 0xC)] = 4;
    *(s32 *) (arg0 + 0xC)           = *(s32 *) (arg0 + 0xC) + 1;
    *(s32 *) (arg0 + 8)             = *(s32 *) (arg0 + 8) + 1;
    if (func_02082d58(data_0213df5c + 0x2FAC, *(u16 *) (arg1 + 0xA)) != 0xD8) {
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
        p[0x10 + *(s32 *) (arg0 + 0xC)] = 6;
        *(s32 *) (arg0 + 0xC)           = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 8)             = *(s32 *) (arg0 + 8) + 1;
    }
    return arg0;
}
