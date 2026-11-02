/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_02045ee8(void *arg0, s32 arg1) {
    u8 *temp_ip;
    s32 *temp_r6;
    s32 *var_r5;
    s32 temp_r3;
    u16 var_r2;
    void *temp_r4;
    temp_r4                       = (u8 *) arg0 + (arg1 * 4);
    var_r5                        = M2C_FIELD(temp_r4, s32 **, 0x34);
    M2C_FIELD(arg0, s32 **, 0x20) = var_r5;
    *var_r5                       = 0;
    var_r2                        = 1;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x32) > 1) {
        do {
            temp_r3                       = var_r2 * 0x14;
            temp_ip                       = (u8 *) M2C_FIELD(temp_r4, s32 **, 0x34);
            temp_r6                       = var_r5;
            *(s32 *) (temp_ip + temp_r3)  = 0;
            var_r5                        = (s32 *) (temp_ip + temp_r3);
            M2C_FIELD(temp_r6, s32 **, 4) = var_r5;
            var_r2 += 1;
        } while ((s32) var_r2 < (s32) M2C_FIELD(arg0, u8 *, 0x32));
    }
    M2C_FIELD(arg0, s32 **, 0x24) = var_r5;
    M2C_FIELD(arg0, u16 *, 0x28)  = (u16) (M2C_FIELD(arg0, u16 *, 0x28) + M2C_FIELD(arg0, u8 *, 0x32));
    return 1;
}
