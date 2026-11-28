/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fcee8();                            /* extern */
M2C_UNK func_02103360(u16);                         /* extern */
extern M2C_UNK data_02146224;

void func_020fcec0(void) {
    func_020fcee8();
    func_02103360(M2C_FIELD(&data_02146224, u16 *, 4));
}
