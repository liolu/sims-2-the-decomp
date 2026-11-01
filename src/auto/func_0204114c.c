/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020525f0(s32, u8);
M2C_UNK func_02052800(s32, u8);
s32 func_020733f0(s32);
extern s32 data_0213e434;
void func_0204114c(void *arg0, void *arg1) {
    u8 var_r7;
    u8 var_r6;
    var_r7 = M2C_FIELD(arg1, u8 *, 4);
    var_r6 = M2C_FIELD(arg1, u8 *, 5);
    if (func_020733f0(data_0213e434 + 0x41F8) >= (s32) M2C_FIELD(arg1, u16 *, 0)) {
        var_r7 = M2C_FIELD(arg1, u8 *, 2);
        var_r6 = M2C_FIELD(arg1, u8 *, 3);
    }
    func_020525f0(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r7);
    func_02052800(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r6);
}
