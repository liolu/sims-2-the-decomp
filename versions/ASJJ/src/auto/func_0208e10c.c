/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(void *);                      /* extern */
M2C_UNK func_0208af00();                            /* extern */
extern M2C_UNK data_02133094;
extern M2C_UNK data_021330c0;
extern M2C_UNK data_021330ec;
extern M2C_UNK data_02133384;
extern M2C_UNK data_021333b0;

void *func_0208e10c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133384;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_021333b0;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_021330ec;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021330c0;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133094;
    func_0208af00(arg0);
    func_02046858(arg0);
    return arg0;
}
