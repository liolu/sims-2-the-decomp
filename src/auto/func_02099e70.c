/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ffabc8(s32, M2C_UNK, M2C_UNK);
s32 func_01ffaf60(s32, M2C_UNK, M2C_UNK);
M2C_UNK func_02018af8(void *, M2C_UNK, s32, M2C_UNK);
M2C_UNK func_0205871c(s32, s32, M2C_UNK, s32, s32, s32);
M2C_UNK func_0208b2dc(void *);
M2C_UNK func_0208b358(void *);
M2C_UNK func_0208b394(void *);
s32 func_0208b754();
extern s32 data_02139fa4;
extern void *data_0213e580;
extern s32 data_027e0000;

s32 func_02099e70(void *arg0, s32 arg1) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;
    s32 rv;

    switch (*(u8 *) (p + arg1 + 0x10)) {
        case 0x21:
            if (*(s32 *) (*(u8 **) (p + 4) + 0x134) == 0) {
                if (data_027e0000 == 0) {
                    data_027e0000 = 1;
                } else {
                    data_027e0000 = 0;
                }
                func_02018af8(*(u8 **) (p + 4) + 0x128, 0xA, *(s32 *) (*(u8 **) &data_0213e580 + 0xF8), 2);
                if (data_027e0000 == 0) {
                    data_027e0000 = 1;
                } else {
                    data_027e0000 = 0;
                }
                func_0208b394(arg0);
                i = *(s32 *) (p + 8);
                if (i > *(s32 *) (p + 0xC)) {
                    do {
                        t = p + (i - 1);
                        v = t[0x10];
                        t = p + i;
                        i -= 1;
                        t[0x10] = v;
                    } while (i > *(s32 *) (p + 0xC));
                }
                t                  = p + *(s32 *) (p + 0xC);
                t[0x10]            = 0xC;
                *(s32 *) (p + 0xC) = *(s32 *) (p + 0xC) + 1;
                *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
                rv                 = 5;
            } else {
                func_0205871c(data_02139fa4, 0xA1A, -1, 0, 0, 1);
                rv = 0;
            }
            break;
        case 0xC:
            if (func_01ffaf60(*(s32 *) (*(u8 **) &data_0213e580 + 0xF8) + 0xE0, 8, 0) == 0) {
                rv = 0;
                break;
            }
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_01ffabc8(*(s32 *) (*(u8 **) &data_0213e580 + 0xF8) + 0xE0, 8, 0);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_0208b358(arg0);
            func_0208b2dc(arg0);
            rv = 6;
            break;
        default:
            rv = func_0208b754(arg0, arg1);
            break;
    }
    return rv;
}
