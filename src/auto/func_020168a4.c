/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020168a4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) & ~0xC00) | ((arg1 & 3) << 0xA));
}
