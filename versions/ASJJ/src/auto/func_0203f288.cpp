/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" s32 func_02044580(void *);
extern "C" void func_020fc55c(s32, s32, s32);
extern "C" void func_02046270(s32, s32, s32, s32, s32);
extern u8 data_021392f0;
extern s32 data_027e0000;
extern "C" void func_0203f288(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 t;
    u8 *r8;
    s32 r7;
    s32 r6;
    t  = func_02044580(arg0);
    r6 = arg3 * 2;
    r8 = (u8 *) &data_021392f0 + data_027e0000 * 0x10;
    r7 = *(s32 *) r8 + arg2 * 2;
    func_020fc55c(t + arg1, r7, r6);
    func_02046270(3, r7, *(s32 *) (r8 + 4) + arg2 * 2, r6, 0x10);
}
