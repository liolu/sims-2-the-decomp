/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0204625c(M2C_UNK, M2C_UNK, s32, s32, s32);
extern M2C_UNK data_02139438;
extern s32 data_027e0000;
void func_0203c8cc(s32 arg0, u16 arg1, u16 arg2, M2C_UNK arg3) {
    s32 temp_r4;
    s32 temp_r5;
    u16 var_ip;
    u16 var_r0;
    temp_r4 = arg0 * 0x74;
    temp_r5 = (data_027e0000 * 0x1D8) + (s32) &data_02139438 + 8;
    var_r0  = arg2;
    var_ip  = arg1;
    if (((u32) (*(u16 *) (temp_r5 + temp_r4) << 0x18) >> 0x1F) == 1) {
        var_ip *= 2;
        var_r0 *= 2;
    }
    func_0204625c(3, arg3, M2C_FIELD((temp_r5 + temp_r4), s32 *, 0x10) + (var_ip << 5), var_r0 << 5, 0x10);
}
