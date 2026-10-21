/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208b014();                            /* extern */
extern M2C_UNK data_021335a8;
extern M2C_UNK data_021335d4;
extern M2C_UNK data_02133600;
extern M2C_UNK data_02134328;
extern M2C_UNK data_02134354;

void *func_02094a2c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02134328;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02134354;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02133600;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021335d4;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021335a8;
    func_0208b014(arg0);
    return arg0;
}
