/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02082e28();
M2C_UNK func_02082c78();
M2C_UNK func_020829c4();
M2C_UNK func_0208b35c();
extern u8 data_0213e2f4;

void func_02041dc0(s32 unused0, u8 *arg1) {
    s32 r4;
    s32 ret;
    u8 *obj;
    u8 *b3;
    s32 n;
    u8 *t;
    s32 v;

    r4  = 0;
    ret = func_02082e28((*(u8 **) &data_0213e2f4) + 0x2FA4, arg1[0]);
    if (ret == 0xD8) {
        r4 = 1;
    }
    func_02082c78((*(u8 **) &data_0213e2f4) + 0x2FA4, arg1[0], arg1[1], arg1[2], arg1[3], arg1[4], 0);
    if (func_020829c4((*(u8 **) &data_0213e2f4) + 0x2FA4, arg1[0], 0, 0) != 0) {
        return;
    }
    obj = *(u8 **) ((*(u8 **) &data_0213e2f4) + arg1[0] * 0x2C + 0x2200);
    if (obj == 0) {
        return;
    }
    if (func_02082e28((*(u8 **) &data_0213e2f4) + 0x2FA4, *(u16 *) (obj + 0xA)) == 0xD8) {
        func_0208b35c(*(u8 **) (obj + 0x130), 6);
        return;
    }
    if (r4 == 0) {
        return;
    }
    b3 = *(u8 **) (obj + 0x130);
    n  = *(s32 *) (b3 + 8);
    if (n > 0) {
        do {
            t = b3 + (n - 1);
            v = t[0x10];
            t = b3 + n;
            n -= 1;
            t[0x10] = v;
        } while (n > 0);
    }
    b3[0x10]            = 6;
    *(s32 *) (b3 + 0xC) = *(s32 *) (b3 + 0xC) + 1;
    *(s32 *) (b3 + 8)   = *(s32 *) (b3 + 8) + 1;
}
