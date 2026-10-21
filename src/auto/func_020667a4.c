/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205334c(void *);                      /* extern */
extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_0213203c;
extern M2C_UNK data_0213205c;

void *func_020667a4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0213203c;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_0213205c;
    func_0205334c(arg0 + 0x24);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212f9c4;
    return arg0;
}
