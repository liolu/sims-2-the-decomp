/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020f77e0();                                /* extern */
M2C_UNK func_020fc5fc(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020fcaa0(M2C_UNK, s32, u32);           /* extern */
extern s32 data_02138d28;

void func_020f8928(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020f77e0();
    if ((data_02138d28 != -1) && (arg2 > 0x30U)) {
        func_020fc5fc(data_02138d28, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020fcaa0(arg0, temp_ip + arg1, arg2);
}
