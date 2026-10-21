/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046384(s32, M2C_UNK, s32);           /* extern */
s32 func_02046880(s32, M2C_UNK, M2C_UNK);           /* extern */

void *func_02046acc(void *arg0, u16 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, u16 *, 4) = arg1;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s32 *, 0) = func_02046880(M2C_FIELD(arg0, u16 *, 4) * 4, 3, 4);
    func_02046384(M2C_FIELD(arg0, s32 *, 0), 0, M2C_FIELD(arg0, u16 *, 4) * 4);
    return arg0;
}
