/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fd024();                            /* extern */
M2C_UNK func_0210349c(u16);                         /* extern */
extern M2C_UNK data_02146364;

void func_020fcffc(void) {
    func_020fd024();
    func_0210349c(M2C_FIELD(&data_02146364, u16 *, 4));
}
