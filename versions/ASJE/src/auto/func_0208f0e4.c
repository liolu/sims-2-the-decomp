/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0208af9c();                            /* extern */
extern M2C_UNK data_02133468;
extern M2C_UNK data_021334c0;
extern M2C_UNK data_02133910;
extern M2C_UNK data_0213393c;

void *func_0208f0e4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133910;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_0213393c;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_021334c0;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133468;
    func_0208af9c(arg0);
    return arg0;
}
