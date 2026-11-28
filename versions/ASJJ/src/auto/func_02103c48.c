/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020fb98c();
M2C_UNK func_020f9e00(void *);
M2C_UNK func_020fb9a0(s32);
s32 func_02103cb8();
M2C_UNK func_021040dc();
extern M2C_UNK data_02147d80;

s32 func_02103c48(void) {
    u8 *base = (u8 *) &data_02147d80;
    s32 saved;
    s32 ret;
    saved = func_020fb98c();
    while (*(s32 *) (base + 0x34) & 4) {
        func_020f9e00(base + 0xD4);
    }
    *(s32 *) (base + 0x34) |= 4;
    func_020fb9a0(saved);
    *(s32 *) (base + 0x28) = 0;
    *(s32 *) (base + 0x2C) = 0;
    ret                    = func_02103cb8();
    func_021040dc();
    return ret;
}
