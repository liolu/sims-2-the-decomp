/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02133600;
extern u8 data_02133acc;
extern u8 data_02133af8;
void func_0208bb98(u8 *p, s32 a, s32 b, s32 c);
u8 *func_0208afd0(s32 p);

u8 *func_0208f5d0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 v;
    u8 *t;
    u8 *p = (u8 *) arg0;
    u8 *ret;
    u8 tmp;
    u8 *dst;
    u8 *src;
    s32 j;
    s32 i;

    func_0208bb98(arg0, arg1, 0, 0);
    *(u8 **) (arg0 + 0x4c) = &data_02133600;
    *(s32 *) (arg0 + 0x50) = arg2;
    ret                    = func_0208afd0(arg2);
    *(s32 *) (arg0 + 0x54) = *(s16 *) (ret + 0xe);
    arg0[0x58]             = 0;
    arg0[0x59]             = 1;
    *(u8 **) arg0          = &data_02133acc;
    *(u8 **) (arg0 + 0x4c) = &data_02133af8;
    i                      = *(s32 *) (arg0 + 8);
    if (i > *(s32 *) (arg0 + 0xc)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (arg0 + 0xc));
    }
    arg0[*(s32 *) (arg0 + 0xc) + 0x10] = 0;
    *(s32 *) (arg0 + 0xc) += 1;
    *(s32 *) (arg0 + 8) += 1;
    return arg0;
}
