/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_020e3698(s32);                         /* extern */
s32 func_020e3738();                                /* extern */

void func_020de348(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x290) = (s32) (M2C_FIELD(arg0, s32 *, 0x290) + (arg1 + func_020e3738()));
    func_020e3698(arg1);
}
