/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020525f0(s32, u8);
M2C_UNK func_02052800(s32, u8);
s32 func_0206462c(s32, u8);
extern s32 data_0213e434;
void func_02041080(void *arg0, void *arg1) {
    u8 var_r5;
    u8 var_r4;
    var_r4 = M2C_FIELD(arg1, u8 *, 4);
    var_r5 = M2C_FIELD(arg1, u8 *, 3);
    if (func_0206462c(data_0213e434, M2C_FIELD(arg1, u8 *, 0)) != 0) {
        var_r5 = M2C_FIELD(arg1, u8 *, 1);
        var_r4 = M2C_FIELD(arg1, u8 *, 2);
    }
    func_020525f0(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r5);
    func_02052800(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r4);
}
