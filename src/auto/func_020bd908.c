/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020bc4a8(s32 *, s32, M2C_UNK);
M2C_UNK func_020bd960(s32 *, M2C_UNK, s32, M2C_UNK, s32, s32);
s32 func_020bd908(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    func_020bd960(arg0, arg1, 0xFFFF, arg2, arg3, arg4);
    func_020bc4a8((s32 *) ((u8 *) arg0 + 4), *arg0, 0x200);
    *arg0 += 0x200;
    return 1;
}
