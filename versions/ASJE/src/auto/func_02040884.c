/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02052578(s32, u8);                     /* extern */
M2C_UNK func_02052788(s32, u8);                     /* extern */
extern s32 data_0213e2f4;

void func_02040884(void *arg0, void *arg1) {
    u8 var_ip;
    u8 var_r4;

    var_ip = M2C_FIELD(arg1, u8 *, 4);
    var_r4 = M2C_FIELD(arg1, u8 *, 5);
    if ((u32) M2C_FIELD((data_0213e2f4 + M2C_FIELD(arg1, u8 *, 0)), u8 *, 0x24) >= (u32) M2C_FIELD(arg1, u8 *, 1)) {
        var_ip = M2C_FIELD(arg1, u8 *, 2);
        var_r4 = M2C_FIELD(arg1, u8 *, 3);
    }
    func_02052578(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_ip);
    func_02052788(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r4);
}
