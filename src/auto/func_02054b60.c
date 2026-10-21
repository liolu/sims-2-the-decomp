/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203c540();                            /* extern */
M2C_UNK func_0203d078(M2C_UNK);                     /* extern */
M2C_UNK func_020482f8(M2C_UNK *);                   /* extern */
M2C_UNK func_02050390();                            /* extern */
M2C_UNK func_02050500();                            /* extern */
extern M2C_UNK data_0213a278;

void func_02054b60(void) {
    func_020482f8(&data_0213a278);
    *(s32 *) 0x04001000 &= ~0x2000;
    func_0203d078(3);
    func_02050500();
    func_02050390();
    func_0203c540();
}
