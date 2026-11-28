/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e1124;

s32 func_020b8dac(u8 *arg0) {
    volatile s32 sp[8];
    s32 *p;
    s32 *q;
    s32 sum;
    s32 n;
    s32 w;

    q = *(s32 **) (arg0 + 0x6C);
    if (q == NULL) {
        return 0;
    }
    n     = *(s32 *) (arg0 + 0xA8);
    sp[0] = n;
    if (((u32) (*(u16 *) (arg0 + 0xAC) << 0x1C) >> 0x1F) == 1) {
        n     = -n;
        sp[1] = n;
        sp[4] = n;
        sp[0] = n;
    }
    sp[5] = sp[0];
    if (q != NULL) {
        p     = (s32 *) &sp[2];
        sp[2] = *q;
    } else {
        p     = (s32 *) &sp[2];
        sp[2] = data_027e1124;
    }
    sum = *p + sp[5];
    if (sum <= data_027e1124 ||
        (w = *(u16 *) (*(u8 **) (*(u8 **) (arg0 + 0x6C) + 8) + 4) << 0xC, sp[3] = w, sp[6] = w, sum >= w)) {
        return 1;
    }
    return 0;
}
