/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ed094(s32, M2C_UNK);                /* extern */
M2C_UNK func_020f9968(M2C_UNK);                     /* extern */
M2C_UNK _Z24EnableSpecificInterruptsj(M2C_UNK);                     /* extern */

void func_020bc9cc(s32 arg0) {
    func_020f9968(1);
    func_020ed094(arg0 + 0x600, 0x18);
    _Z24EnableSpecificInterruptsj(1);
}
