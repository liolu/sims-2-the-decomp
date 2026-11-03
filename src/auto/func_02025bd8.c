/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0201d124(void *);
extern void func_02019cdc(void *);
extern s32 func_020117e8(void *, s32, void *, s32);
extern void func_02018acc(void *);

s32 func_02025bd8(u8 *arg0, void *arg1) {
    u8 a[0x3C];
    u8 b[0x30];

    func_0201d124(a);
    func_02019cdc(b);
    *(u16 *) (a + 0x30) = 0x13;
    a[0x33]             = 1;
    func_020117e8(arg1, 3, a, 0);
    *(u16 *) (a + 0x30) = 0x12;
    func_020117e8(arg1, 3, a, 0);
    *(s32 *) (b + 0x28) = *(s32 *) (arg0 + 4);
    *(u16 *) (b + 0x1C) = 0x135;
    func_020117e8(arg1, 0x10, b, 0);
    func_02018acc(b);
    func_02018acc(a);
    return 0;
}
