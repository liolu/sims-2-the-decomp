/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844(void *);                      /* extern */
M2C_UNK func_0205334c(void *);                      /* extern */
extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_02134d70;
extern M2C_UNK data_02134d90;

void *func_0209cbe0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02134d70;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_02134d90;
    func_0205334c(arg0 + 0x24);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212f9c4;
    func_02046844(arg0);
    return arg0;
}
