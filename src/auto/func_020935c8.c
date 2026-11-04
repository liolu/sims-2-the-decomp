/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213355c;
extern u8 data_021340d8;
extern u8 data_0213e434;
extern u8 data_0213e580;

s32 func_02081f88(void *a, s32 b, s32 c);

void *func_020935c8(void *arg0, void *arg1) {
    u8 *p;
    u8 *base;
    s32 i;
    s32 v;
    u8 *t;

    p                   = (u8 *) arg0;
    *(void **) p        = (void *) &data_0213355c;
    *(void **) (p + 4)  = arg1;
    *(s32 *) (p + 8)    = 0;
    *(s32 *) (p + 0xC)  = 0;
    *(s32 *) (p + 0x14) = 0;
    p[0x1C]             = 1;
    *(void **) p        = (void *) &data_021340d8;
    base                = *(u8 **) &data_0213e434;
    if ((*(u32 *) base & 0x20) == 0) {
        if (func_02081f88(base + 0x21DC, 0x87C, -1) != 0) {
            if (*(s32 *) (*(u8 **) &data_0213e580 + 0xF4) == 0xB) {
                if (*(s32 *) (*(u8 **) &data_0213e434 + 0x2000 + 0xF60) >= 0x5DC) {
                    i = *(s32 *) (p + 8);
                    if (i > *(s32 *) (p + 0xC)) {
                        do {
                            t = p + (i - 1);
                            v = t[0x10];
                            t = p + i;
                            i -= 1;
                            t[0x10] = v;
                        } while (i > *(s32 *) (p + 0xC));
                    }
                    p[0x10 + *(s32 *) (p + 0xC)] = 0x4F;
                    *(s32 *) (p + 0xC) += 1;
                    *(s32 *) (p + 8) += 1;
                }
            }
        }
    }
    return arg0;
}
