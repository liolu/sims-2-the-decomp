/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0208af9c();                            /* extern */
extern M2C_UNK data_0212fc24;
extern M2C_UNK data_0212fc4c;
extern M2C_UNK data_0212fcb8;
extern M2C_UNK data_021334c0;

void *func_02014de0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0212fc24;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_0212fc4c;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_021334c0;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0212fcb8;
    func_0208af9c(arg0);
    return arg0;
}
