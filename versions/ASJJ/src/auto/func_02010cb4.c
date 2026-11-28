/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020117d0(void *, s32);
void func_0201180c(void *, s32, u16, void *);
void func_02014d08();
void func_020f08a8(void *, s32, s32);
extern u8 data_0211c728[];
extern u8 data_0212f790[];

u8 *func_02010cb4(u8 *arg0, s32 arg1, s32 arg2) {
    volatile s32 fr[2];
    u8 *t;

    func_02014d08();
    *(u8 **) arg0 = data_0212f790;
    arg0[0x211]   = 0;
    arg0[0x212]   = 0;
    arg0[0x213]   = 0xff;
    arg0[0x214]   = arg2;
    func_0201180c(arg0, 0xf, (u16) arg1, data_0211c728 + (arg1 << 3));
    *(s32 *) (arg0 + 4) |= 0x20000;
    if (arg1 != 0x1d) {
        t = *(u8 **) (arg0 + 0x1a8);
        func_020f08a8(t + *(s32 *) (t + *(u16 *) (t + 0xe) + 0xc), 0, 0x1f0000);
    }
    func_020117d0(arg0, 0);
    *(u16 *) (arg0 + 0x1f8) &= ~0x40;
    fr[0]                   = 0x2000;
    fr[1]                   = 0x2000;
    *(s32 *) (arg0 + 0x1f4) = 0x2000;
    *(s32 *) (arg0 + 4) |= 0x20000;
    return arg0;
}
