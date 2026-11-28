/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203c4c8();                            /* extern */
M2C_UNK func_0203d000(M2C_UNK);                     /* extern */
M2C_UNK func_02048280(M2C_UNK *);                   /* extern */
M2C_UNK func_02050318();                            /* extern */
M2C_UNK func_02050488();                            /* extern */
extern M2C_UNK data_0213a138;

void func_02054ae8(void) {
    func_02048280(&data_0213a138);
    *(s32 *) 0x04001000 &= ~0x2000;
    func_0203d000(3);
    func_02050488();
    func_02050318();
    func_0203c4c8();
}
