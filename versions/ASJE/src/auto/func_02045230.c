/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK _Z24EnableSpecificInterruptsj(M2C_UNK);                     /* extern */
M2C_UNK func_020f9a04(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fbd50(M2C_UNK, u16);                /* extern */
extern M2C_UNK func_01ffb234;

void func_02045230(void) {
    u16 temp_r1;

    func_020f9a04(1, &func_01ffb234);
    _Z24EnableSpecificInterruptsj(1);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    func_020fbd50(1, temp_r1);
    *(s16 *) 0x04000004 = 8;
}
