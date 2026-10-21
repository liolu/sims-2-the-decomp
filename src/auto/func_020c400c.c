/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fcc70(M2C_UNK, s32, s32);           /* extern */
s32 func_0210a774(M2C_UNK);                         /* extern */

void func_020c400c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_0210a774(arg1);
    func_020fcc70(arg1, arg0, temp_r0);
    *(s8 *) (arg0 + temp_r0) = 0;
}