/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(void *);                      /* extern */
M2C_UNK func_0208af00();                            /* extern */
extern M2C_UNK data_0212f864;
extern M2C_UNK data_0212f88c;
extern M2C_UNK data_0212f8f8;
extern M2C_UNK data_021330ec;

void *func_02014d88(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0212f864;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_0212f88c;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_021330ec;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0212f8f8;
    func_0208af00(arg0);
    func_02046858(arg0);
    return arg0;
}
