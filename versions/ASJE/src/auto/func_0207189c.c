/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020f64c8(M2C_UNK);                         /* extern */
M2C_UNK _Z24EnableSpecificInterruptsj(M2C_UNK);                     /* extern */
M2C_UNK func_020f9a04(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fbd50(M2C_UNK, u16);                /* extern */
M2C_UNK func_020fbd64();                            /* extern */
extern s32 data_0213e41c;
extern M2C_UNK func_020717e0;

void func_0207189c(s32 arg0) {
    u16 temp_r1;

    data_0213e41c = arg0;
    if (func_020f64c8(1) != 0) {
        return;
    }
    func_020fbd64();
    func_020f9a04(2, &func_020717e0);
    _Z24EnableSpecificInterruptsj(2);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    func_020fbd50(1, temp_r1);
}
