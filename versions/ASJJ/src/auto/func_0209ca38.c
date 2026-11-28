/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0205355c(void *);                      /* extern */
extern M2C_UNK data_0212f4c4;
extern M2C_UNK data_0213485c;
extern M2C_UNK data_0213487c;

void *func_0209ca38(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0213485c;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_0213487c;
    func_0205355c(arg0 + 0x24);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212f4c4;
    return arg0;
}
