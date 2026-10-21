/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018af0();              /* extern */
M2C_UNK func_02018bd8();                         /* extern */
M2C_UNK func_020461c4();                            /* extern */
extern M2C_UNK data_02130118;

void *func_02018a60(void *arg0) {
    func_020461c4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02130118;
    func_02018bd8(arg0 + 0x48);
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    func_02018af0(arg0 + 0x48, arg0);
    return arg0;
}
