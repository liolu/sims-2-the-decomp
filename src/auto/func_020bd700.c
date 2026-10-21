/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bc1a8();                         /* extern */
M2C_UNK func_020ee810();              /* extern */

void func_020bd700(void *arg0) {
    void *temp_r2;

    func_020bc1a8(arg0 + 0x58);
    temp_r2 = M2C_FIELD(arg0, void **, 0x5C);
    func_020ee810(arg0 + 4, temp_r2 + M2C_FIELD((temp_r2 + M2C_FIELD(temp_r2, u16 *, 0xE)), s32 *, 0xC));
    M2C_FIELD(arg0, s8 *, 0) = 1;
}
