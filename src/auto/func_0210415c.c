/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020fbea0();
M2C_UNK func_020fa314(void *);
M2C_UNK func_020fbeb4(s32);
s32 func_021041cc();
M2C_UNK func_021045f0();
extern M2C_UNK data_02148260;

s32 func_0210415c(void) {
    u8 *base = (u8 *) &data_02148260;
    s32 saved;
    s32 ret;
    saved = func_020fbea0();
    while (*(s32 *) (base + 0x34) & 4) {
        func_020fa314(base + 0xD4);
    }
    *(s32 *) (base + 0x34) |= 4;
    func_020fbeb4(saved);
    *(s32 *) (base + 0x28) = 0;
    *(s32 *) (base + 0x2C) = 0;
    ret                    = func_021041cc();
    func_021045f0();
    return ret;
}
