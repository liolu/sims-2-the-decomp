/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0201180c(void *, s32, u16, void *);
s32 func_02011c20(void *);
s32 func_02011dfc(void *, s32);
s32 func_02045618(void *, s32);
s32 func_020f0918(void *, s32, s32);
extern u8 data_0211c818;
extern u8 data_0212f844;

void *func_02014c28(u8 *arg0, s32 arg1) {
    u8 *t;
    u32 *p;

    func_02011c20(arg0);
    *(u8 **) arg0 = &data_0212f844;
    func_02045618(arg0 + 0xE0, 5);
    func_0201180c(arg0, 0xB, (u16) arg1, &data_0211c818 + arg1 * 8);
    if (arg1 == 0x100) {
        t = *(u8 **) (arg0 + 0x1A8);
        func_020f0918(t + *(s32 *) (t + *(u16 *) (t + 0xE) + 0xC), 1, 0x40);
        t = *(u8 **) (arg0 + 0x1A8);
        func_020f0918(t + *(s32 *) (t + *(u16 *) (t + 0xE) + 0xC), 1, 0x80);
    }
    *(u32 *) (arg0 + 4) |= 0x20000;
    p = (u32 *) (arg0 + 4);
    if (((u16 *) (&data_0211c818 + 6))[arg1 * 4] == 0) {
        *p |= 0x40;
    }
    func_02011dfc(arg0, 1);
    return arg0;
}
