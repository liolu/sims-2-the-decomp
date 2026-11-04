/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02043230(void **a, void *b, u16 *c);
void *func_0204688c(s32 a, s32 b, s32 c);
void *func_0204319c(void *a, u16 *b);

void func_02042ecc(void *arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *tmp;
    u8 *r4;
    u8 *p8;
    s32 b2;
    s32 b3;
    s32 v;

    func_02043230(&tmp, arg0, &arg1);
    if (tmp != (u8 *) arg0 + 4) {
        return;
    }
    r4                = func_0204688c(0xc, 0, 4);
    b2                = arg2 & 1;
    b3                = arg3 & 1;
    *(u16 *) (r4 + 8) = arg1;
    *(s32 *) (r4 + 8) = (*(s32 *) (r4 + 8) & ~0x800000) | (b2 << 0x17);
    *(s32 *) (r4 + 8) = (*(s32 *) (r4 + 8) & ~0x1000000) | (b3 << 0x18);
    *(s32 *) r4       = arg4;
    p8                = r4 + 8;
    *(s32 *) (r4 + 4) = 0;
    if (arg2 != 0) {
        v           = *(s32 *) p8;
        v           = (v & ~0x7f0000) | 0x10000;
        *(s32 *) p8 = v;
    } else {
        v           = *(s32 *) p8;
        v           = (v & ~0x7f0000) | 0xa0000;
        *(s32 *) p8 = v;
    }
    *(void **) ((u8 *) func_0204319c(arg0, &arg1) + 4) = r4;
}
