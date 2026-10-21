/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208b014();                            /* extern */
extern M2C_UNK data_021335a8;
extern M2C_UNK data_02133600;
extern M2C_UNK data_0213425c;
extern M2C_UNK data_02134288;

void *func_020942e4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0213425c;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02134288;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02133600;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021335a8;
    func_0208b014(arg0);
    return arg0;
}
