/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_021330c0;
extern u8 data_021330ec;
extern u8 data_021343e0;
extern u8 data_0213440c;
extern void func_0208ba60(u8 *a, s32 b, s32 c, s32 d);
extern u8 *func_0208aebc(s32 a);

u8 *func_020990c0(u8 *arg0, s32 arg1) {
    u8 *o = (u8 *) arg0;
    s32 len;
    u8 *t;
    s32 v;
    u8 *w;

    func_0208ba60(arg0, arg1, 0, 0);
    *(u8 **) o          = &data_021330c0;
    *(u8 **) (o + 0x4c) = &data_021330ec;
    *(s32 *) (o + 0x50) = 0xb4;
    t                   = func_0208aebc(0xb4);
    *(s32 *) (o + 0x54) = *(s16 *) (t + 0xe);
    *(s8 *) (o + 0x58)  = 0;
    *(s8 *) (o + 0x59)  = 1;
    *(u8 **) o          = &data_021343e0;
    *(u8 **) (o + 0x4c) = &data_0213440c;
    len                 = *(s32 *) (o + 0x8);
    if (len > *(s32 *) (o + 0xc)) {
        do {
            w = o + (len - 1);
            v = w[0x10];
            w = o + len;
            len -= 1;
            w[0x10] = v;
        } while (len > *(s32 *) (o + 0xc));
    }
    o[0x10 + *(s32 *) (o + 0xc)] = 0x32;
    *(s32 *) (o + 0xc)           = *(s32 *) (o + 0xc) + 1;
    *(s32 *) (o + 0x8)           = *(s32 *) (o + 0x8) + 1;
    return o;
}
