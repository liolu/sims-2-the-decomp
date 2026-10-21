/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020525f0(s32, u8);                     /* extern */
M2C_UNK func_02052800(s32, u8);                     /* extern */
s32 func_02064644(s32, u8);                         /* extern */
extern s32 data_0213e434;

void func_02040e50(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r6;
    s32 var_r0;
    s32 var_r2;
    u8 temp_r1;
    u8 var_r1;
    u8 var_r6;

    temp_r6 = func_02064644(data_0213e434, M2C_FIELD(arg1, u8 *, 0));
    temp_r0 = func_02064644(data_0213e434, M2C_FIELD(arg1, u8 *, 2));
    temp_r1 = M2C_FIELD(arg1, u8 *, 1);
    var_r2  = 0;
    switch (temp_r1) {
        default:
            break;
        case 0:
            var_r2 = temp_r6 & temp_r0;
            break;
        case 1:
            var_r2 = temp_r6 | temp_r0;
            break;
        case 2:
            if (temp_r6 == 0) {
                var_r2 = 1;
            }
            if (temp_r0 == 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            var_r2 &= var_r0;
            break;
        case 3:
            var_r2 = temp_r6 ^ temp_r0;
            break;
    }
    var_r1 = M2C_FIELD(arg1, u8 *, 5);
    var_r6 = M2C_FIELD(arg1, u8 *, 6);
    if (var_r2 == 1) {
        var_r1 = M2C_FIELD(arg1, u8 *, 3);
        var_r6 = M2C_FIELD(arg1, u8 *, 4);
    }
    func_020525f0(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r1);
    func_02052800(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r6);
}
