/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;

s32 func_ov003_0214e824(void *, s32);
void func_ov003_0214ea68(void *, s32);

s32 func_ov003_0214eb1c(u8 *arg0) {
    s32 r5;
    s32 r0;
    u32 t;
    u32 h;
    u8 *ip;
    u32 va;
    u32 vb;
    u32 vc;

    r5 = 0;
    r0 = func_ov003_0214e824(arg0, 0);
    if (r0 != -1) {
        if (r0 < 3) {
            r5 = r0 + *(u16 *) (arg0 + 0x16);
        } else {
            t = *(u16 *) (arg0 + 0x14);
            if (t <= 1) {
                h = (u32) * (u16 *) (*(u8 **) (arg0 + 0x10) + t * 8 + 4) >> 1;
            } else {
                h = (u32) * (u16 *) (*(u8 **) (arg0 + 0x10) + (t - 2) * 8 + 0x14) >> 1;
            }
            r5 = h + ((r0 - 3) + *(u16 *) (arg0 + 0x16));
        }
        func_ov003_0214ea68(arg0, r5);
        *(u16 *) (arg0 + 0x18)      = r5;
        ip                          = *(u8 **) (arg0 + 4);
        va                          = *(u16 *) (ip + 0x76);
        vb                          = *(u16 *) (arg0 + 0x14);
        vc                          = *(u16 *) (arg0 + 0x18);
        ip                          = ip + va * 0xC;
        ip[vb * 2 + 0x29]           = vc;
        r5                          = 1;
        (*(u8 **) (arg0 + 4))[0x40] = *(u16 *) (arg0 + 0x14);
    }
    return r5;
}
