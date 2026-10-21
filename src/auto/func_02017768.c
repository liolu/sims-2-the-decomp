/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201716c();                            /* extern */
extern M2C_UNK data_0212ff10;

void *func_02017768(void *arg0) {
    func_0201716c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212ff10;
    M2C_FIELD(arg0, s32 *, 0x74)   = 0;
    M2C_FIELD(arg0, s32 *, 0x88)   = 0;
    M2C_FIELD(arg0, s8 *, 0x8C)    = 0;
    return arg0;
}
