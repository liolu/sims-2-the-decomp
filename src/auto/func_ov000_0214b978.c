/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;

u32 func_0204ca70(u16);
M2C_UNK func_ov000_0214a2a0(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_ov000_0214acdc(void *, s32);
M2C_UNK func_ov000_0214b72c(void *);

void func_ov000_0214b978(u8 *arg0) {
    s32 i;
    s32 flag;
    u8 *p;
    u32 t;

    flag = 0;
    if (*(u8 *) (arg0 + 0xC9F4) <= 2) {
        t = *(u32 *) (arg0 + 0xC9F0);
        if (t > 0x32) {
            *(u32 *) (arg0 + 0xC9F0) = t - 1;
        }
        if (func_0204ca70((u16) * (u32 *) (arg0 + 0xC9F0)) < 0xA) {
            func_ov000_0214b72c(arg0);
        }
    }
    p = arg0;
    i = 0;
    do {
        if (*(s32 *) (p + 0x58) != 0) {
            func_ov000_0214acdc(arg0, i);
            if (*(u8 *) (p + 0x6C) == 1) {
                flag = 1;
            }
        }
        i += 1;
        p += 0x18;
    } while (i < 8);
    if (flag != 0) {
        return;
    }
    if (*(u8 *) (arg0 + 0xC9FA) != 2) {
        return;
    }
    func_ov000_0214a2a0(arg0, 7, 0);
}
