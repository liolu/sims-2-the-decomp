/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02050970(M2C_UNK);
M2C_UNK func_020524a8(s32);
void func_02097364(s32 arg0, s32 arg1) {
    s32 temp_r2;
    temp_r2 = arg0 + 0x10;
    if (*(u8 *) (temp_r2 + arg1) == 0x5F) {
        func_02050970(0xC8);
    }
    func_020524a8(*(u8 *) (temp_r2 + arg1) + 0x735);
}
