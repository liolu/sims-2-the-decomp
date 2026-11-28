/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(void *);                      /* extern */
M2C_UNK func_0208af9c();                            /* extern */
extern M2C_UNK data_02133468;
extern M2C_UNK data_02133494;
extern M2C_UNK data_021334c0;
extern M2C_UNK data_021341e8;
extern M2C_UNK data_02134214;

void *func_02094908(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021341e8;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02134214;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_021334c0;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133494;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133468;
    func_0208af9c(arg0);
    func_020467cc(arg0);
    return arg0;
}
