/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206466c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020a3dc4(s32);                         /* extern */
extern s32 data_0213e434;

s32 func_020969b0(void *arg0) {
    func_0206466c(data_0213e434, 0x21, 1);
    func_020a3dc4(data_0213e434 + 0x31C8);
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return 4;
}
