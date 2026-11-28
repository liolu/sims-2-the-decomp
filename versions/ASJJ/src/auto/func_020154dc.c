/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x, y;
} Vec;

s32 func_020f59a4(s32 a, s32 b);

void func_020154dc(u8 *arg0, Vec p, s32 arg3) {
    volatile s32 fr[10];
    s32 r4;
    s32 a;
    s32 b;
    s32 q;

    if (arg3 == 0) {
        return;
    }
    r4                     = arg3 << 12;
    fr[1]                  = r4;
    fr[7]                  = r4;
    a                      = *(s32 *) (arg0 + 0x30);
    fr[6]                  = a;
    q                      = func_020f59a4(p.x - a, r4);
    fr[0]                  = q;
    fr[4]                  = q;
    *(s32 *) (arg0 + 0x38) = q;
    fr[3]                  = r4;
    fr[9]                  = r4;
    b                      = *(s32 *) (arg0 + 0x34);
    fr[8]                  = b;
    q                      = func_020f59a4(p.y - b, r4);
    fr[2]                  = q;
    fr[5]                  = q;
    *(s32 *) (arg0 + 0x3C) = q;
    *(u16 *) (arg0 + 0x42) = (u16) arg3;
}
