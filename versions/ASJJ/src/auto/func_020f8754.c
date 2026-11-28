/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020f74f4();                                /* extern */
M2C_UNK func_020fbfe0(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020fc55c(M2C_UNK, s32, u32);           /* extern */
extern s32 data_02138814;

void func_020f8754(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020f74f4();
    if ((data_02138814 != -1) && (arg2 > 0x1CU)) {
        func_020fbfe0(data_02138814, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020fc55c(arg0, temp_ip + arg1, arg2);
}
