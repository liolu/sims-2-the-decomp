/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0211787c;
u16 func_0200e1ac(u8 *arg0, s32 arg1) {
    s32 r3 = 0x39;
    u16 v  = *(u16 *) (arg0 + 0xA);
    if (v == 0x3A || v == 0x3C) {
        r3 = 0x3A;
    }
    return *(u16 *) ((u8 *) &data_0211787c + (r3 - 0x39) * 0x2C + arg1 * 2);
}
