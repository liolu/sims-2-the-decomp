/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020f60f0(M2C_UNK);                         /* extern */
M2C_UNK _Z24EnableSpecificInterruptsj(M2C_UNK);                     /* extern */
M2C_UNK func_020f962c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fb978(M2C_UNK, u16);                /* extern */
M2C_UNK func_020fb98c();                            /* extern */
extern s32 data_0213e084;
extern M2C_UNK func_02071848;

void func_02071904(s32 arg0) {
    u16 temp_r1;

    data_0213e084 = arg0;
    if (func_020f60f0(1) != 0) {
        return;
    }
    func_020fb98c();
    func_020f962c(2, &func_02071848);
    _Z24EnableSpecificInterruptsj(2);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    func_020fb978(1, temp_r1);
}
