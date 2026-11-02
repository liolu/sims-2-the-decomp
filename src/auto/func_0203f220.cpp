/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" s32 func_0204456c(void *);
extern "C" void func_020fca70(s32, s32, s32);
extern "C" void func_0204625c(s32, s32, s32, s32, s32);
extern u8 data_02139810;
extern s32 data_027e0000;
extern "C" void func_0203f220(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 t;
    u8 *r8;
    s32 r7;
    s32 r6;
    t  = func_0204456c(arg0);
    r6 = arg3 * 2;
    r8 = (u8 *) &data_02139810 + data_027e0000 * 0x10;
    r7 = *(s32 *) r8 + arg2 * 2;
    func_020fca70(t + arg1, r7, r6);
    func_0204625c(3, r7, *(s32 *) (r8 + 4) + arg2 * 2, r6, 0x10);
}
