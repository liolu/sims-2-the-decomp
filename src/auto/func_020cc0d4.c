/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844();                            /* extern */
extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_02136b7c;
extern M2C_UNK data_02136b9c;

void *func_020cc0d4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02136b7c;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_02136b9c;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0212f9c4;
    func_02046844(arg0);
    return arg0;
}
