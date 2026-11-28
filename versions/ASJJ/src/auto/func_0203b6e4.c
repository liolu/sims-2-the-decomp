/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0004;
extern s32 data_02138ef4;

void func_020d5ddc(void);
void func_020d5d8c(void);
s32 func_020f96dc(void);
void func_02102f58(u16 v);
void func_02102f48(u16 v);
void func_020f9734(u16 v);
s32 func_021036ac(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);

u8 func_0203b6e4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r8;
    s32 var_r9;
    s32 temp_r0_2;

    func_020d5ddc();
    data_027e0004 |= 0x400;
    temp_r0_2     = func_020f96dc();
    data_02138ef4 = temp_r0_2;
    if (temp_r0_2 == -3) {
        var_r0 = 0;
    } else {
        func_02102f58((u16) temp_r0_2);
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        return 0;
    }
    var_r8 = var_r9 = 0;
    do {
        temp_r0 = func_021036ac(arg0, arg2, arg1, var_r8, var_r8, var_r8);
    } while (temp_r0 == 0 && var_r9-- > 0);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02102f48((u16) data_02138ef4);
    func_020f9734((u16) data_02138ef4);
    func_020d5d8c();
    data_027e0004 &= ~0x400;
    return (u8) temp_r0;
}
