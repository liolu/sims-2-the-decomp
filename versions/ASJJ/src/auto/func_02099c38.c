/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0208af00();                            /* extern */
extern M2C_UNK data_02133094;
extern M2C_UNK data_021330ec;
extern M2C_UNK data_02134628;
extern M2C_UNK data_02134654;

void *func_02099c38(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02134628;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02134654;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_021330ec;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133094;
    func_0208af00(arg0);
    return arg0;
}
