/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020165bc(void *, u8);                  /* extern */
M2C_UNK func_02016708(void *, s32);                 /* extern */

void func_020179bc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) =
        (s32) ((M2C_FIELD(arg0, s32 *, 0x14) & ~0xF000) | (((M2C_FIELD(arg0, s32 *, 0x94) + arg1) & 0xF) << 0xC));
    func_02016708(arg0, M2C_FIELD(arg0, s32 *, 0x90) + (arg1 * 8));
    func_020165bc(arg0, (u8) M2C_FIELD(arg0, s32 *, 0x98));
}
