/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e434;

void func_02027770(u8 *arg0) {
    u8 *r4;
    u8 *r3;
    s32 lr;
    u8 *r2;
    s32 r1;
    s32 v;

    r4                             = data_0213e434;
    r1                             = *(s32 *) (arg0 + 0x28);
    lr                             = *(s32 *) (r4 + 0x2000 + 0xf60);
    lr                             = lr + r1;
    *(s32 *) (r4 + 0x2000 + 0xf60) = lr;
    r3                             = r4 + 0x2000;
    v                              = *(volatile s32 *) (r3 + 0xf60);
    r2                             = r4 + 0x2f60;
    if (v > 0xf423f) {
        *(s32 *) r2 = 0xf423f;
    } else if (v < 0) {
        *(s32 *) r2 = 0;
    }
    if (r1 > 0) {
        *(u8 *) (r2 + 0xc) = 1;
        *(s32 *) (r2 + 4)  = *(s32 *) (r2 + 4) + r1;
        v                  = *(volatile s32 *) (r2 + 4);
        if (v > 0xf423f || v < 0) {
            *(s32 *) (r2 + 4) = 0xf423f;
        }
    } else {
        *(s32 *) (r2 + 8) = *(s32 *) (r2 + 8) - r1;
        v                 = *(volatile s32 *) (r2 + 8);
        if (v > 0xf423f || v < 0) {
            *(s32 *) (r2 + 8) = 0xf423f;
        }
    }
    arg0[0x13] = 1;
}
