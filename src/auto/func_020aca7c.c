/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046a58(void *);                      /* extern */
M2C_UNK func_02089d54(void *);                      /* extern */
extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_02134fa0;
extern M2C_UNK data_02134fc0;

void *func_020aca7c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02134fa0;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_02134fc0;
    func_02046a58(arg0 + 0xF4);
    func_02089d54(arg0 + 0x2C);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212f9c4;
    return arg0;
}
