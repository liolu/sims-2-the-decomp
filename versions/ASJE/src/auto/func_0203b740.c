/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_027e0004;
extern s32 data_021392d4;
s32 func_020d6164();
s32 func_020d61b4();
s32 func_020f9ab4();
void func_020f9b0c(u16);
void func_02103320(u16);
void func_02103330(u16);
s32 func_02103b54(s32, s32, s32, s32, s32, s32);

u8 func_0203b740(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 z;
    s32 r4;
    s32 ok;

    func_020d61b4();
    data_027e0004 |= 0x400;
    data_021392d4 = func_020f9ab4();
    if (data_021392d4 == -3) {
        ok = 0;
    } else {
        func_02103330((u16) data_021392d4);
        ok = 1;
    }
    if (ok == 0) {
        return 0;
    }
    i = 0;
    z = 0;
    do {
        r4 = func_02103b54(arg0, arg2, arg1, z, z, z);
        if (r4 != 0) {
            break;
        }
    } while (i-- > 0);
    func_02103320((u16) data_021392d4);
    func_020f9b0c((u16) data_021392d4);
    func_020d6164();
    data_027e0004 &= ~0x400;
    if (r4 == 0) {
        return 0;
    }
    return (u8) r4;
}
