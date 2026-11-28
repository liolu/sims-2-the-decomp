/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02050970(s32);
M2C_UNK func_020524a8(s32);
void func_02093384(s32 arg0, s32 arg1) {
    s32 temp_r2;
    temp_r2 = arg0 + 0x10;
    if (*(u8 *) (temp_r2 + arg1) == 0x4F) {
        func_02050970(0x5DC);
    }
    func_020524a8(*(u8 *) (temp_r2 + arg1) + 0x735);
}
