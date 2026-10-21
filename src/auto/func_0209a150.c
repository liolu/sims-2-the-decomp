/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844(void *);                      /* extern */
M2C_UNK func_0208b014();                            /* extern */
extern M2C_UNK data_021335a8;
extern M2C_UNK data_02133600;
extern M2C_UNK data_02134bb4;
extern M2C_UNK data_02134be0;

void *func_0209a150(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02134bb4;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02134be0;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02133600;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021335a8;
    func_0208b014(arg0);
    func_02046844(arg0);
    return arg0;
}
