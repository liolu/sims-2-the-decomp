/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02018af8(u8 *, s32, s32, s32);
extern void func_0208b394(u8 *);
extern void func_0208b358(u8 *);
extern void func_0208b2dc(u8 *);
extern s32 func_01ffaf60(u8 *, s32, s32);
extern void func_01ffabc8(u8 *, s32, s32);
extern s32 func_0205871c(s32, s32, s32, s32, s32, s32);
extern u8 data_027e0000;
extern u8 data_0213e580;
extern u8 data_02139fa4;

s32 func_0209472c(u8 *arg0, s32 arg1) {
    u8 *p;
    s32 m;
    s32 k;
    s32 v;
    u8 *pt;

    if (arg0[arg1 + 0x10] == 0x64) {
        if (*(s32 *) (*(u8 **) (arg0 + 4) + 0x134) == 0) {
            if (*(s32 *) &data_027e0000 == 0) {
                *(s32 *) &data_027e0000 = 1;
            } else {
                *(s32 *) &data_027e0000 = 0;
            }
            p                                      = *(u8 **) &data_0213e580;
            *(s32 *) (*(u8 **) (p + 0xF8) + 0x134) = *(s32 *) (arg0 + 4);
            *(s32 *) (*(u8 **) (arg0 + 4) + 0x134) = *(s32 *) (*(u8 **) &data_0213e580 + 0xF8);
            func_02018af8(*(u8 **) (arg0 + 4) + 0x128, 0xA, *(s32 *) (*(u8 **) &data_0213e580 + 0xF8), 2);
            if (*(s32 *) &data_027e0000 == 0) {
                *(s32 *) &data_027e0000 = 1;
            } else {
                *(s32 *) &data_027e0000 = 0;
            }
            func_0208b394(arg0);
            k = *(s32 *) (arg0 + 8);
            if (k > *(s32 *) (arg0 + 0xC)) {
                do {
                    pt = arg0 + (k - 1);
                    v  = pt[0x10];
                    pt = arg0 + k;
                    k -= 1;
                    pt[0x10] = v;
                } while (k > *(s32 *) (arg0 + 0xC));
            }
            m                     = *(s32 *) (arg0 + 0xC);
            arg0[m + 0x10]        = 0xA;
            *(s32 *) (arg0 + 0xC) = *(s32 *) (arg0 + 0xC) + 1;
            *(s32 *) (arg0 + 8)   = *(s32 *) (arg0 + 8) + 1;
            return 5;
        } else {
            func_0205871c(*(s32 *) &data_02139fa4, 0xA1A, -1, 0, 0, 1);
            return 0;
        }
    }
    if (arg0[arg1 + 0x10] == 0xA) {
        p = *(u8 **) &data_0213e580;
        if (func_01ffaf60(*(u8 **) (p + 0xF8) + 0xE0, 8, 0) == 0) {
            return 0;
        }
        if (*(s32 *) &data_027e0000 == 0) {
            *(s32 *) &data_027e0000 = 1;
        } else {
            *(s32 *) &data_027e0000 = 0;
        }
        func_01ffabc8(*(u8 **) (*(u8 **) &data_0213e580 + 0xF8) + 0xE0, 8, 0);
        if (*(s32 *) &data_027e0000 == 0) {
            *(s32 *) &data_027e0000 = 1;
        } else {
            *(s32 *) &data_027e0000 = 0;
        }
        func_0208b358(arg0);
        func_0208b2dc(arg0);
        return 6;
    }
    return 0;
}
