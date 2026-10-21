/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020eec00();                            /* extern */
M2C_UNK func_020f8200();                            /* extern */

void func_020f0c68(void) {
    func_020f8200();
    func_020eec00();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
