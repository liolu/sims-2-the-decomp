/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207c134(s32);                         /* extern */
extern void *data_0213e580;

void func_0207d100(s32 arg0) {
    s32 temp_r1;
    u16 temp_r1_2;
    u8 var_r4;

    var_r4 = 0;
    do {
        temp_r1 = (var_r4 * 0x4C) + arg0;
        if ((M2C_FIELD(temp_r1, u8 *, 0xA41) != 0) && (M2C_FIELD(temp_r1, s32 *, 0xA44) == 3) &&
            (M2C_FIELD(temp_r1, u16 *, 0xA3E) == M2C_FIELD(data_0213e580, s32 *, 0xF4))) {
            temp_r1_2 = M2C_FIELD(temp_r1, u16 *, 0xA48);
            if (temp_r1_2 != 0) {
                M2C_FIELD(temp_r1, u16 *, 0xA48) = (u16) (temp_r1_2 - 1);
                if (M2C_FIELD(temp_r1, u16 *, 0xA48) == 0) {
                    func_0207c134(arg0);
                }
            }
        }
        var_r4 += 1;
    } while ((u32) var_r4 < 0xAU);
}
