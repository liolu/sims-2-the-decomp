/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fa164(void *);                      /* extern */
s32 func_020fbd64();                                /* extern */
M2C_UNK func_020fbd78(s32);                         /* extern */
M2C_UNK func_020ffbbc(void *);                      /* extern */

void func_020feccc(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_020fbd64();
    func_020ffbbc(arg0);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~0x4F);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    func_020fa164(arg0 + 0x18);
    func_020fbd78(temp_r4);
}
