/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020fbd64();
M2C_UNK func_020fa1d8(void *);
M2C_UNK func_020fbd78(s32);
s32 func_02104090();
M2C_UNK func_021044b4();
extern M2C_UNK data_02148120;

s32 func_02104020(void) {
    u8 *base = (u8 *) &data_02148120;
    s32 saved;
    s32 ret;
    saved = func_020fbd64();
    while (*(s32 *) (base + 0x34) & 4) {
        func_020fa1d8(base + 0xD4);
    }
    *(s32 *) (base + 0x34) |= 4;
    func_020fbd78(saved);
    *(s32 *) (base + 0x28) = 0;
    *(s32 *) (base + 0x2C) = 0;
    ret                    = func_02104090();
    func_021044b4();
    return ret;
}
