/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f7cec();                            /* extern */
M2C_UNK func_020ee6ec();                            /* extern */

void func_020f0754(void) {
    func_020f7cec();
    func_020ee6ec();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
