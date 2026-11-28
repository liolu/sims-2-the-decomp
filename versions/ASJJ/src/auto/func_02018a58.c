/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018ae8();              /* extern */
M2C_UNK func_02018bd0();                         /* extern */
M2C_UNK func_020461d8();                            /* extern */
extern M2C_UNK data_0212fc18;

void *func_02018a58(void *arg0) {
    func_020461d8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212fc18;
    func_02018bd0(arg0 + 0x48);
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    func_02018ae8(arg0 + 0x48, arg0);
    return arg0;
}
