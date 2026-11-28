/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02052578(s32, u8);
M2C_UNK func_02052788(s32, u8);
s32 func_020779b4(s32, u8);
extern s32 data_0213e2f4;

void func_02040f28(void *arg0, void *arg1) {
    u8 var_r5;
    u8 var_r4;

    var_r5 = M2C_FIELD(arg1, u8 *, 3);
    var_r4 = M2C_FIELD(arg1, u8 *, 4);
    if (func_020779b4(data_0213e2f4 + 0x2F78, M2C_FIELD(arg1, u8 *, 0)) != 0) {
        var_r5 = M2C_FIELD(arg1, u8 *, 1);
        var_r4 = M2C_FIELD(arg1, u8 *, 2);
    }
    func_02052578(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r5);
    func_02052788(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r4);
}
