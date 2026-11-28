/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc();                            /* extern */
extern M2C_UNK data_0212f884;
extern M2C_UNK data_02136a3c;
extern M2C_UNK data_02136a5c;

void *func_020cbf98(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02136a3c;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_02136a5c;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0212f884;
    func_020467cc(arg0);
    return arg0;
}
