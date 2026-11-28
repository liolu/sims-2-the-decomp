/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fcb34(M2C_UNK, s32, s32);           /* extern */
s32 func_0210a638(M2C_UNK);                         /* extern */

void func_020c3f44(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_0210a638(arg1);
    func_020fcb34(arg1, arg0, temp_r0);
    *(s8 *) (arg0 + temp_r0) = 0;
}