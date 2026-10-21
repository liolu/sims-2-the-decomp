/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208b014();                            /* extern */
extern M2C_UNK data_021335a8;
extern M2C_UNK data_02133600;
extern M2C_UNK data_02133a50;
extern M2C_UNK data_02133a7c;

void *func_0208f158(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133a50;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02133a7c;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02133600;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021335a8;
    func_0208b014(arg0);
    return arg0;
}
