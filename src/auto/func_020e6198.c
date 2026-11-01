/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_020e4cb8(s32, s32);                    /* extern */
M2C_UNK func_020e4fac(s32, s32);                    /* extern */
M2C_UNK func_020e519c(s32, s32);                    /* extern */
M2C_UNK func_020e5b00(s32, s32);                    /* extern */

void func_020e6198(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r5;
    s32 temp_r5_2;

    if (arg0 == 0x80) {
        temp_r5 = arg3 + ((arg2 - 8) * 4);
        func_020e5b00(arg1, temp_r5);
        func_020e519c(arg1 + 0x80, arg3 + ((arg2 - 0x20) * 4));
        func_020e5b00(arg1 + 0x100, temp_r5);
        func_020e5b00(arg1 + 0x180, temp_r5);
        return;
    }
    temp_r5_2 = arg3 + ((arg2 - 0x10) * 4);
    func_020e4fac(arg1, temp_r5_2);
    func_020e4cb8(arg1 + 0x40, temp_r5_2);
    func_020e4fac(arg1 + 0x80, temp_r5_2);
    func_020e4fac(arg1 + 0xC0, temp_r5_2);
}
