/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0213e440;
u8 *func_02052364(u8 *a, u8 b);
u8 *func_020871f0(u8 *a, s32 b, s32 c);
void func_02011090(u8 *a, s32 b, s32 c, s32 d, s32 e);

void func_0203fbe0(u8 *arg0, u8 *arg1) {
    volatile s32 tmp[12];
    u8 *obj;
    u8 *p;
    u8 *q;
    u8 *q2;
    s32 b0;
    u8 b1;
    s32 v;
    s32 f1;
    s32 f2;
    s32 f3;

    b0 = arg1[0];
    b1 = arg1[1];
    if (b0 == 0xff) {
        obj = *(u8 **) (*(u8 **) &data_0213e440 + 0xf8);
    } else {
        obj = func_02052364(*(u8 **) (*(u8 **) (arg0 + 4) + 0x28) + b0 * 8, b1);
    }
    p = func_020871f0(*(u8 **) &data_0213e440, 0xb, 0x24);
    if (obj == 0) {
        return;
    }
    if (p == 0) {
        return;
    }
    q = p + 0x78;
    if ((v = *(s32 *) (obj + 0x78), tmp[0] = v, *(s32 *) (p + 0x78) != v) ||
        (v = *(s32 *) (obj + 0x7c), tmp[1] = v, *(s32 *) (q + 4) != v) ||
        (v = *(s32 *) (obj + 0x80), tmp[2] = v, *(s32 *) (q + 8) != v)) {
        f1 = 1;
    } else {
        f1 = 0;
    }
    if (f1 != 0) {
        v                     = *(s32 *) q;
        tmp[3]                = v;
        *(s32 *) (obj + 0x78) = v;
        v                     = *(s32 *) (q + 4);
        tmp[4]                = v;
        *(s32 *) (obj + 0x7c) = v;
        v                     = *(s32 *) (q + 8);
        tmp[5]                = v;
        *(s32 *) (obj + 0x80) = v;
        *(u8 *) (obj + 0xdc)  = 1;
    }
    f3 = f2 = 0;
    q2      = p + 0x84;
    v       = *(s32 *) (obj + 0x84);
    tmp[6]  = v;
    if (*(s32 *) (p + 0x84) == v) {
        v      = *(s32 *) (obj + 0x88);
        tmp[7] = v;
        if (*(s32 *) (q2 + 4) == v) {
            f3 = 1;
        }
    }
    if (f3 != 0) {
        v      = *(s32 *) (obj + 0x8c);
        tmp[8] = v;
        if (*(s32 *) (q2 + 8) == v) {
            f2 = 1;
        }
    }
    if (f2 == 0) {
        v                     = *(s32 *) q2;
        tmp[9]                = v;
        *(s32 *) (obj + 0x84) = v;
        v                     = *(s32 *) (q2 + 4);
        tmp[10]               = v;
        *(s32 *) (obj + 0x88) = v;
        v                     = *(s32 *) (q2 + 8);
        tmp[11]               = v;
        *(s32 *) (obj + 0x8c) = v;
        *(u8 *) (obj + 0xdc)  = 1;
    }
    func_02011090(p, 0x28, 0, 1, 0);
}
