/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_02133494;
extern u8 data_021334c0;
extern u8 data_021347b4;
extern u8 data_021347e0;
extern void func_0208bb24(u8 *a, s32 b, s32 c, s32 d);
extern u8 *func_0208af58(s32 a);

u8 *func_020991e8(u8 *arg0, s32 arg1) {
    u8 *o = (u8 *) arg0;
    s32 len;
    u8 *t;
    s32 v;
    u8 *w;

    func_0208bb24(arg0, arg1, 0, 0);
    *(u8 **) o          = &data_02133494;
    *(u8 **) (o + 0x4c) = &data_021334c0;
    *(s32 *) (o + 0x50) = 0xb4;
    t                   = func_0208af58(0xb4);
    *(s32 *) (o + 0x54) = *(s16 *) (t + 0xe);
    *(s8 *) (o + 0x58)  = 0;
    *(s8 *) (o + 0x59)  = 1;
    *(u8 **) o          = &data_021347b4;
    *(u8 **) (o + 0x4c) = &data_021347e0;
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
