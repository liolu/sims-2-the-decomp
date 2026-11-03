/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0201d124(void *p);
extern void func_02019cdc(void *p);
extern void func_020117e8(s32 a, s32 b, void *c, s32 d);
extern void func_02018acc(void *p);

s32 func_0202167c(u8 *arg0, s32 arg1) {
    u8 buf0[0x3C];
    u8 buf1[0x30];

    func_0201d124(buf0);
    func_02019cdc(buf1);
    *(u16 *) (buf0 + 0x30) = 0x13;
    buf0[0x33]             = 1;
    func_020117e8(arg1, 3, buf0, 0);
    *(u16 *) (buf0 + 0x30) = 0x12;
    func_020117e8(arg1, 3, buf0, 0);
    *(s32 *) (buf1 + 0x28) = *(s32 *) (arg0 + 4);
    *(u16 *) (buf1 + 0x1C) = 0x135;
    func_020117e8(arg1, 0x10, buf1, 0);
    func_02018acc(buf1);
    func_02018acc(buf0);
    return 0;
}
