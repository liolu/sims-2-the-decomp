/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(void *);                      /* extern */
M2C_UNK func_020532d4(void *);                      /* extern */
extern M2C_UNK data_0212f884;
extern M2C_UNK data_02134c30;
extern M2C_UNK data_02134c50;

void *func_0209cb18(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02134c30;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_02134c50;
    func_020532d4(arg0 + 0x24);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212f884;
    func_020467cc(arg0);
    return arg0;
}
