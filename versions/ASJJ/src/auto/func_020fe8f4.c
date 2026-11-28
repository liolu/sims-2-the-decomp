/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f9d8c(void *);                      /* extern */
s32 func_020fb98c();                                /* extern */
M2C_UNK func_020fb9a0(s32);                         /* extern */
M2C_UNK func_020ff7e4(void *);                      /* extern */

void func_020fe8f4(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_020fb98c();
    func_020ff7e4(arg0);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~0x4F);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    func_020f9d8c(arg0 + 0x18);
    func_020fb9a0(temp_r4);
}
