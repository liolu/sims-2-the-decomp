/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b8fa4(s32, u8, M2C_UNK);            /* extern */

void func_0200fae4(s32 arg0, s32 arg1, s8 arg2) {
    s32 temp_r4;

    temp_r4 = arg0 + 0x23C;
    func_020b8fa4(arg0 + 0x14C, *(s8 *) (temp_r4 + arg1), 0);
    M2C_FIELD((arg0 + arg1), s8 *, 0x23C) = arg2;
    func_020b8fa4(arg0 + 0x14C, *(s8 *) (temp_r4 + arg1), 1);
}