/* compiler: 1.2/sp2p3 -O2 */
#include "m2c.h"

M2C_UNK func_02018aa8();                         /* extern */

void func_0201d450(void *arg0, void *arg1) {
    s32 temp_r1;
    s32 var_r3;
    void *temp_r0;

    func_02018aa8(arg0 + 0x18);
    var_r3 = 0;
    do {
        M2C_FIELD((arg0 + (var_r3 * 2)), u16 *, 0x28) = (u16) M2C_FIELD((arg1 + (var_r3 * 2)), u16 *, 0x10);
        temp_r1                                       = M2C_FIELD((arg1 + (var_r3 * 4)), s32 *, 0x14);
        temp_r0                                       = arg0 + (var_r3 * 4);
        var_r3 += 1;
        M2C_FIELD(temp_r0, s32 *, 0x2C) = temp_r1;
    } while (var_r3 < 2);
    M2C_FIELD(arg0, u16 *, 0x34) = (u16) M2C_FIELD(arg1, u16 *, 0x1C);
    M2C_FIELD(arg0, u8 *, 0x36)  = (u8) M2C_FIELD(arg1, u8 *, 0x1E);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
}
