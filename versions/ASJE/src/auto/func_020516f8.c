/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0205182c(void *);
extern u8 data_027e0000;
extern u8 data_0213db00;
extern u8 data_0213db88;

u8 *func_020516f8(u8 *arg0, s32 arg1) {
    u8 *p;
    u8 *ret;
    s32 total;
    s32 adv;
    u8 *fnt;
    s32 w;
    s32 c;

    ret   = 0;
    p     = arg0;
    total = 0;
    adv   = 0;
    for (; (c = *p) != 0 && total <= arg1; p++) {
        if (c == 0xA) {
            ret = p;
            break;
        }
        if (c == 0x40) {
            p++;
            total += func_0205182c(&data_0213db88 + ((*p - 0x31) << 6));
            continue;
        }
        if (c == 0x20 || c == 0x2D) {
            ret = p;
        }
        fnt = *(u8 **) (&data_0213db00 + *(s32 *) &data_027e0000 * 0x44 + 8);
        adv = 0;
        if (c != 0) {
            w = c - *(u16 *) (fnt + 0xA);
            if (w >= 0 && w <= *(u16 *) (fnt + 0xC) - *(u16 *) (fnt + 0xA)) {
                adv = (*(u8 **) (fnt + 0x14))[w];
            } else {
                adv = (*(u8 **) (fnt + 0x14))[1];
            }
        }
        total += adv;
    }
    if (c == 0) {
        if (total <= arg1) {
            ret = p;
        }
    }
    return ret;
}
