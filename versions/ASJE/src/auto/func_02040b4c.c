/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02052788(s32, u8);                     /* extern */
M2C_UNK func_02083d50(void *, u8);                  /* extern */
extern void *data_0213e2f4;

void func_02040b4c(void *arg0, void *arg1) {
    u8 var_r4;

    var_r4 = M2C_FIELD(arg1, u8 *, 1);
    if ((s32) M2C_FIELD(data_0213e2f4, s32 *, 0x215C) >= 6) {
        var_r4 = M2C_FIELD(arg1, u8 *, 2);
    } else {
        func_02083d50(data_0213e2f4 + 0x18, M2C_FIELD(arg1, u8 *, 0));
    }
    func_02052788(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r4);
}
