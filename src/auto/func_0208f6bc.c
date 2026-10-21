/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208b014();                            /* extern */
extern M2C_UNK data_02133600;
extern M2C_UNK data_02133b4c;
extern M2C_UNK data_02133b74;

void *func_0208f6bc(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133b4c;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_02133b74;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_02133600;
    func_0208b014(arg0);
    return arg0;
}
