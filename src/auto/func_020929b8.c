/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0208bb98(void *, void *, s32, s32);
s32 func_0208afd0(s32);
extern u8 data_02133600;
extern u8 data_02133fcc;
extern u8 data_02133ff8;

void *func_020929b8(void *arg0, void *arg1, s32 arg2) {
    u8 *o = (u8 *) arg0;
    s32 i;
    s32 e;
    s32 v;
    u8 *t;
    u8 *q;

    func_0208bb98(arg0, arg1, 3, 1);
    *(void **) (o + 0x4C) = &data_02133600;
    *(s32 *) (o + 0x50)   = arg2;
    q                     = (u8 *) func_0208afd0(arg2);
    *(s32 *) (o + 0x54)   = (s32) * (s16 *) (q + 0xE);
    *(u8 *) (o + 0x58)    = 0;
    *(u8 *) (o + 0x59)    = 1;
    *(void **) o          = &data_02133fcc;
    *(void **) (o + 0x4C) = &data_02133ff8;
    i                     = *(s32 *) (o + 8);
    e                     = *(s32 *) (o + 0xC);
    if (i > e) {
        do {
            t = o + (i - 1);
            v = t[0x10];
            t = o + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (o + 0xC));
    }
    o[0x10 + *(s32 *) (o + 0xC)] = 0xF;
    *(s32 *) (o + 0xC) += 1;
    *(s32 *) (o + 8) += 1;
    i = *(s32 *) (o + 8);
    e = *(s32 *) (o + 0xC);
    if (i > e) {
        do {
            t = o + (i - 1);
            v = t[0x10];
            t = o + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (o + 0xC));
    }
    o[0x10 + *(s32 *) (o + 0xC)] = 0x10;
    *(s32 *) (o + 0xC) += 1;
    *(s32 *) (o + 8) += 1;
    return arg0;
}
