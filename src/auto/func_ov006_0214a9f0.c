/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov006_0214aba4[];
void func_02046b24(void *, s32, s32, s32, s32);

u8 *func_ov006_0214a9f0(u8 *p, s32 arg1) {
    s32 i;
    s32 z;

    func_02046b24(p, 0xD, arg1, 0, 0);
    *(u8 **) p          = data_ov006_0214aba4;
    *(s32 *) (p + 0x28) = 0;
    *(s32 *) (p + 0x2C) = 0;
    *(s32 *) (p + 0x30) = 0;
    *(s32 *) (p + 0x4C) = -1;
    for (i = 0; i < 6; i++) {
        ((s32 *) (p + 0x34))[i] = 0;
    }
    return p;
}
