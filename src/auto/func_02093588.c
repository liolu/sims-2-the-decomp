/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020509d4(s32);
M2C_UNK func_02052258(s32);
void func_02093588(s32 arg0, s32 arg1) {
    s32 temp_r2;
    temp_r2 = arg0 + 0x10;
    if (*(u8 *) (temp_r2 + arg1) == 0x4F) {
        func_020509d4(0x5DC);
    }
    func_02052258(*(u8 *) (temp_r2 + arg1) + 0x735);
}
