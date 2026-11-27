/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e580;
extern s32 data_027e0000;

s32 func_020187ec(u8 *);
void func_02018af8(u8 *, s32, s32, s32);
void func_0208b394(u8 *);
s32 func_01ffaf60(u8 *, s32, s32);
void func_0208b358(u8 *);
void func_0208b2dc(u8 *);
s32 func_0208b4fc(u8 *, s32);

s32 func_020990f4(u8 *obj, s32 idx) {
    s32 r2;
    s32 v;
    u8 *t;

    v = (obj + idx)[0x10];
    if (v == 0x32) {
        if (func_020187ec(*(u8 **) (data_0213e580 + 0xf8) + 0xe0) != 7) {
            return 0;
        }
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        func_02018af8(*(u8 **) (obj + 4) + 0x128, 0xa, *(s32 *) (data_0213e580 + 0xf8), 2);
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        func_0208b394(obj);
        r2 = *(s32 *) (obj + 8);
        if (r2 > *(s32 *) (obj + 0xc)) {
            do {
                t = obj + (r2 - 1);
                v = t[0x10];
                t = obj + r2;
                r2 -= 1;
                t[0x10] = v;
            } while (r2 > *(s32 *) (obj + 0xc));
        }
        t                    = obj + *(s32 *) (obj + 0xc);
        t[0x10]              = 0x33;
        *(s32 *) (obj + 0xc) = *(s32 *) (obj + 0xc) + 1;
        *(s32 *) (obj + 8)   = *(s32 *) (obj + 8) + 1;
        return 5;
    }
    if (v == 0x33) {
        if (func_01ffaf60(*(u8 **) (data_0213e580 + 0xf8) + 0xe0, 8, 0) == 0) {
            return 0;
        }
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        func_02018af8(*(u8 **) (obj + 4) + 0x128, 0xa, *(s32 *) (data_0213e580 + 0xf8), 2);
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        func_0208b358(obj);
        func_0208b2dc(obj);
        return 6;
    }
    return func_0208b4fc(obj, idx);
}
