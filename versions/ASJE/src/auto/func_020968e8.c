/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020645f4(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020a3cfc(s32);                         /* extern */
extern s32 data_0213e2f4;

s32 func_020968e8(void *arg0) {
    func_020645f4(data_0213e2f4, 0x21, 1);
    func_020a3cfc(data_0213e2f4 + 0x31C8);
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return 4;
}
