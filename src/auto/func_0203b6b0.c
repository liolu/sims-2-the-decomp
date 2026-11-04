/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0004;
extern s32 data_02139414;

void func_020d62f0(void);
void func_020d62a0(void);
s32 func_020f9bf0(void);
void func_0210346c(u16 v);
void func_0210345c(u16 v);
void func_020f9c48(u16 v);
s32 func_02103bc0(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);

u8 func_0203b6b0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r8;
    s32 var_r9;
    s32 temp_r0_2;

    func_020d62f0();
    data_027e0004 |= 0x400;
    temp_r0_2     = func_020f9bf0();
    data_02139414 = temp_r0_2;
    if (temp_r0_2 == -3) {
        var_r0 = 0;
    } else {
        func_0210346c((u16) temp_r0_2);
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        return 0;
    }
    var_r8 = var_r9 = 0;
    do {
        temp_r0 = func_02103bc0(arg0, arg2, arg1, var_r8, var_r8, var_r8);
    } while (temp_r0 == 0 && var_r9-- > 0);
    if (temp_r0 == 0) {
        return 0;
    }
    func_0210345c((u16) data_02139414);
    func_020f9c48((u16) data_02139414);
    func_020d62a0();
    data_027e0004 &= ~0x400;
    return (u8) temp_r0;
}
