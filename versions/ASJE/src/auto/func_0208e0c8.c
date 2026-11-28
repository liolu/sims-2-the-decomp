/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_02133494;
extern u8 data_021334c0;
extern u8 data_021336e0;
extern u8 data_0213370c;
void func_0208bb24(u8 *a, s32 b, s32 c, s32 d);
void *func_0208af58(s32 a);

u8 *func_0208e0c8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 v;
    u8 *t;
    u8 *p = (u8 *) arg0;
    s32 n;
    func_0208bb24(arg0, arg1, 2, 0);
    *(void **) arg0          = &data_02133494;
    *(void **) (arg0 + 0x4c) = &data_021334c0;
    *(s32 *) (arg0 + 0x50)   = arg2;
    *(s32 *) (arg0 + 0x54)   = *(s16 *) ((u8 *) func_0208af58(arg2) + 0xe);
    arg0[0x58]               = 0;
    arg0[0x59]               = 1;
    *(void **) arg0          = &data_021336e0;
    *(void **) (arg0 + 0x4c) = &data_0213370c;
    n                        = *(s32 *) (arg0 + 8);
    if (n > *(s32 *) (arg0 + 0xc)) {
        do {
            t = p + (n - 1);
            v = t[0x10];
            t = p + n;
            n -= 1;
            t[0x10] = v;
        } while (n > *(s32 *) (arg0 + 0xc));
    }
    arg0[0x10 + *(s32 *) (arg0 + 0xc)] = 0x18;
    *(s32 *) (arg0 + 0xc)              = *(s32 *) (arg0 + 0xc) + 1;
    *(s32 *) (arg0 + 8)                = *(s32 *) (arg0 + 8) + 1;
    return arg0;
}
