/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fec74(void *, M2C_UNK);                 /* extern */

s32 func_020ff3a0(void *arg0) {
    if (func_020fec74(arg0, 8) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0xE;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~0x30);
    return 1;
}
