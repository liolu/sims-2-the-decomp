/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858();                            /* extern */
extern M2C_UNK data_0212f4c4;
extern M2C_UNK data_02136668;
extern M2C_UNK data_02136688;

void *func_020cbbc0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02136668;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_02136688;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0212f4c4;
    func_02046858(arg0);
    return arg0;
}
