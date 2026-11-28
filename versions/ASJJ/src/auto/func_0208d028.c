/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046858(void *);                      /* extern */
M2C_UNK func_0208af00();                            /* extern */
extern M2C_UNK data_021330ec;
extern M2C_UNK data_021331bc;
extern M2C_UNK data_021331e4;

void *func_0208d028(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021331bc;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_021331e4;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_021330ec;
    func_0208af00(arg0);
    func_02046858(arg0);
    return arg0;
}
