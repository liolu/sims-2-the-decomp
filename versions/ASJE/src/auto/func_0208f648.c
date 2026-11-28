/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0208af9c();                            /* extern */
extern M2C_UNK data_021334c0;
extern M2C_UNK data_02133a0c;
extern M2C_UNK data_02133a34;

void *func_0208f648(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133a0c;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_02133a34;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_021334c0;
    func_0208af9c(arg0);
    return arg0;
}
