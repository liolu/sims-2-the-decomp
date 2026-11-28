/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fcb10();                            /* extern */
M2C_UNK func_02102f88(u16);                         /* extern */
extern M2C_UNK data_02145e84;

void func_020fcae8(void) {
    func_020fcb10();
    func_02102f88(M2C_FIELD(&data_02145e84, u16 *, 4));
}
