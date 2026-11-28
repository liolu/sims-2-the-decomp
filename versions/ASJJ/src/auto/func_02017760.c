/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02017164();                            /* extern */
extern M2C_UNK data_0212fa10;

void *func_02017760(void *arg0) {
    func_02017164();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212fa10;
    M2C_FIELD(arg0, s32 *, 0x74)   = 0;
    M2C_FIELD(arg0, s32 *, 0x88)   = 0;
    M2C_FIELD(arg0, s8 *, 0x8C)    = 0;
    return arg0;
}
