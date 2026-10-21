/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208b014();                            /* extern */
extern M2C_UNK data_021335a8;
extern M2C_UNK data_02133600;
extern M2C_UNK data_02134a40;
extern M2C_UNK data_02134a6c;

void *func_02099740(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02134a40;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02134a6c;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02133600;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021335a8;
    func_0208b014(arg0);
    return arg0;
}
