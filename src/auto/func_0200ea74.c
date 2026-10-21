/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200eb18();                            /* extern */

void func_0200ea74(void *arg0, void *arg1) {
    s32 var_ip;
    u8 temp_r3;
    void *temp_r2;

    var_ip = 0;
    do {
        temp_r3 = M2C_FIELD((arg1 + var_ip), u8 *, 0x1C);
        temp_r2 = arg0 + var_ip;
        var_ip += 1;
        M2C_FIELD(temp_r2, u8 *, 0x23C) = temp_r3;
    } while (var_ip < 3);
    M2C_FIELD(arg0, u16 *, 0x220) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, u16 *, 0x222) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 0x224) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 0x226) = (u16) M2C_FIELD(arg1, u16 *, 6);
    M2C_FIELD(arg0, u16 *, 0x228) = (u16) M2C_FIELD(arg1, u16 *, 8);
    M2C_FIELD(arg0, u16 *, 0x22A) = (u16) M2C_FIELD(arg1, u16 *, 0xA);
    M2C_FIELD(arg0, u16 *, 0x22C) = (u16) M2C_FIELD(arg1, u16 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0x22E) = (u16) M2C_FIELD(arg1, u16 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0x232) = (u16) M2C_FIELD(arg1, u16 *, 0x12);
    M2C_FIELD(arg0, u16 *, 0x234) = (u16) M2C_FIELD(arg1, u16 *, 0x14);
    M2C_FIELD(arg0, u16 *, 0x236) = (u16) M2C_FIELD(arg1, u16 *, 0x16);
    M2C_FIELD(arg0, u16 *, 0x230) = (u16) M2C_FIELD(arg1, u16 *, 0x10);
    M2C_FIELD(arg0, u8 *, 0x240)  = (u8) M2C_FIELD(arg1, u8 *, 0x20);
    func_0200eb18();
}
