/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206af80(s32);                         /* extern */

void func_020679c0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x64) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x6C) != 1) {
        return;
    }
    func_0206af80(M2C_FIELD(arg0, s32 *, 0x34));
}
