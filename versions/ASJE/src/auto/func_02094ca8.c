/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(void *);                      /* extern */
M2C_UNK func_0208af9c();                            /* extern */
extern M2C_UNK data_021334c0;
extern M2C_UNK data_021342b8;
extern M2C_UNK data_021342e0;

void *func_02094ca8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021342b8;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_021342e0;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &data_021334c0;
    func_0208af9c(arg0);
    func_020467cc(arg0);
    return arg0;
}
