/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020532d4(void *);                      /* extern */
extern M2C_UNK data_0212f884;
extern M2C_UNK data_02131efc;
extern M2C_UNK data_02131f1c;

void *func_0206672c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02131efc;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_02131f1c;
    func_020532d4(arg0 + 0x24);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212f884;
    return arg0;
}
