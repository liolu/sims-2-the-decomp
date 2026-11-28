/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0208af00();                            /* extern */
extern M2C_UNK data_021330ec;
extern M2C_UNK data_02133638;
extern M2C_UNK data_02133660;

void *func_0208f594(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133638;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_02133660;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_021330ec;
    func_0208af00(arg0);
    return arg0;
}
