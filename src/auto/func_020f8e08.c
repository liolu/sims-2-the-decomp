/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020f7bc0();                                /* extern */
M2C_UNK func_020fc4f4(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020fca70(M2C_UNK, s32, u32);           /* extern */
extern s32 data_02138d28;

void func_020f8e08(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020f7bc0();
    if ((data_02138d28 != -1) && (arg2 > 0x1CU)) {
        func_020fc4f4(data_02138d28, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020fca70(arg0, temp_ip + arg1, arg2);
}
