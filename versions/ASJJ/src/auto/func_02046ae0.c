/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046398(s32, M2C_UNK, s32);           /* extern */
s32 func_02046894(s32, M2C_UNK, M2C_UNK);           /* extern */

void *func_02046ae0(void *arg0, u16 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, u16 *, 4) = arg1;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s32 *, 0) = func_02046894(M2C_FIELD(arg0, u16 *, 4) * 4, 3, 4);
    func_02046398(M2C_FIELD(arg0, s32 *, 0), 0, M2C_FIELD(arg0, u16 *, 4) * 4);
    return arg0;
}
