/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020525f0(s32, u8);                     /* extern */
M2C_UNK func_02052800(s32, u8);                     /* extern */
extern void *data_0213e434;

void func_02040d50(void *arg0, void *arg1) {
    u8 var_r2;
    u8 var_r5;

    var_r2 = M2C_FIELD(arg1, u8 *, 3);
    var_r5 = M2C_FIELD(arg1, u8 *, 4);
    if ((u32) M2C_FIELD(data_0213e434, u8 *, 0x2F9B) >= (u32) M2C_FIELD(arg1, u8 *, 0)) {
        var_r2 = M2C_FIELD(arg1, u8 *, 1);
        var_r5 = M2C_FIELD(arg1, u8 *, 2);
    }
    func_020525f0(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r2);
    func_02052800(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r5);
}
