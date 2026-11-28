/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov006_0214aa64[];
void func_02046aac(void *, s32, s32, s32, s32);

u8 *func_ov006_0214a8b0(u8 *p, s32 arg1) {
    s32 i;
    s32 z;

    func_02046aac(p, 0xD, arg1, 0, 0);
    *(u8 **) p          = data_ov006_0214aa64;
    *(s32 *) (p + 0x28) = 0;
    *(s32 *) (p + 0x2C) = 0;
    *(s32 *) (p + 0x30) = 0;
    *(s32 *) (p + 0x4C) = -1;
    for (i = 0; i < 6; i++) {
        ((s32 *) (p + 0x34))[i] = 0;
    }
    return p;
}
