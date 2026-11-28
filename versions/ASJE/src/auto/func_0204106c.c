/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02052578(s32, u8);                     /* extern */
M2C_UNK func_02052788(s32, u8);                     /* extern */
extern s32 data_0213e2f4;

void func_0204106c(void *arg0, void *arg1) {
    u8 var_ip;
    u8 var_r4;

    var_ip = M2C_FIELD(arg1, u8 *, 5);
    var_r4 = M2C_FIELD(arg1, u8 *, 6);
    if ((s32) M2C_FIELD((data_0213e2f4 + M2C_FIELD(arg1, u8 *, 2)), u8 *, 0x5B) >= (s32) M2C_FIELD(arg1, u16 *, 0)) {
        var_ip = M2C_FIELD(arg1, u8 *, 3);
        var_r4 = M2C_FIELD(arg1, u8 *, 4);
    }
    func_02052578(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_ip);
    func_02052788(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r4);
}
