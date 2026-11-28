/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f80c4();                            /* extern */
M2C_UNK func_020eeac4();                            /* extern */

void func_020f0b2c(void) {
    func_020f80c4();
    func_020eeac4();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
