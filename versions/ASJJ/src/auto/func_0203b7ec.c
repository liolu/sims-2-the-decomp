/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_027e0004;
extern s32 data_02138ef4;
s32 func_020d5d8c();
s32 func_020d5ddc();
s32 func_020f96dc();
void func_020f9734(u16);
void func_02102f48(u16);
void func_02102f58(u16);
s32 func_0210377c(s32, s32, s32, s32, s32, s32);

u8 func_0203b7ec(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 z;
    s32 r4;
    s32 ok;

    func_020d5ddc();
    data_027e0004 |= 0x400;
    data_02138ef4 = func_020f96dc();
    if (data_02138ef4 == -3) {
        ok = 0;
    } else {
        func_02102f58((u16) data_02138ef4);
        ok = 1;
    }
    if (ok == 0) {
        return 0;
    }
    i = 0;
    z = 0;
    do {
        r4 = func_0210377c(arg0, arg2, arg1, z, z, z);
        if (r4 != 0) {
            break;
        }
    } while (i-- > 0);
    func_02102f48((u16) data_02138ef4);
    func_020f9734((u16) data_02138ef4);
    func_020d5d8c();
    data_027e0004 &= ~0x400;
    if (r4 == 0) {
        return 0;
    }
    return (u8) r4;
}
