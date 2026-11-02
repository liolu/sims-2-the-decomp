/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02001914();                            /* extern */
M2C_UNK func_02001944(M2C_UNK);                     /* extern */
M2C_UNK func_02071e44(s32, s32, s32);               /* extern */
extern void *data_02139fa4;

void func_02082158(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;
    s32 temp_r5;
    u8 var_r5;
    s32 var_lr;

    var_lr = 0;
    var_r5 = 0;
loop_1:
    temp_ip = (var_r5 * 0x4C) + arg0;
    if ((M2C_FIELD(temp_ip, u8 *, 0xA41) != 0) && (arg1 == M2C_FIELD(temp_ip, s32 *, 0xA38))) {
        M2C_FIELD(temp_ip, u8 *, 0xA41) = 0U;
        var_lr                          = 1;
        M2C_FIELD(arg0, s8 *, 0xD08)    = 1;
    } else {
        var_r5 += 1;
        if ((u32) var_r5 < 0xAU) {
            goto loop_1;
        }
    }
    if (arg2 == -1) {
        return;
    }
    if (var_lr == 0) {
        return;
    }
    temp_r5 = M2C_FIELD(data_02139fa4, s32 *, 0xDA8);
    func_02001944(0);
    func_02071e44(temp_r5 + 0x24, arg2, 0x973);
    func_02001914();
}
