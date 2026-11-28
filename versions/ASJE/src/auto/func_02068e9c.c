/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020679bc(void *, u16);                 /* extern */
M2C_UNK func_020d5880(s32);                         /* extern */

void func_02068e9c(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x90), s32 *, 0x6C) != 2) {
        func_020d5880(0x16A);
    }
    func_020679bc(M2C_FIELD(arg0, void **, 0x90), M2C_FIELD(arg0, u16 *, 0xA));
}
