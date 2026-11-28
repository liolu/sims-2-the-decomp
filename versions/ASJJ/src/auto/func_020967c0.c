/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02064720(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020a3bd4(s32);                         /* extern */
extern s32 data_0213df5c;

s32 func_020967c0(void *arg0) {
    func_02064720(data_0213df5c, 0x21, 1);
    func_020a3bd4(data_0213df5c + 0x31D0);
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return 4;
}
