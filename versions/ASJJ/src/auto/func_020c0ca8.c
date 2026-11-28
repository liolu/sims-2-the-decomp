/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *func_02045630(void *);
extern s32 data_027e0000;
extern u8 data_027e0014[];
extern u8 *data_0213e0a8;

void func_020c0ca8(u8 *arg0) {
    volatile s32 tmp[4];
    s32 r4;
    s32 x;
    enum {
        KK = 0x20000
    } k;
    u8 *ent;

    k      = KK;
    tmp[0] = k;
    tmp[2] = k;
    r4     = *(s32 *) (arg0 + 0x68);
    tmp[1] = r4;
    x      = (s32) (((long long) (0x1000 - r4) * k + 0x800) >> 12);
    r4     = x >> 12;
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    ent = (u8 *) func_02045630(data_027e0014 + data_027e0000 * 0x34);
    if (ent != 0) {
        do {
            u8 *e3 = *(u8 **) ent;
            if (*(u16 *) (e3 + 0xC) == 2) {
                e3[0x210] = (u8) r4;
            }
            ent = *(u8 **) (ent + 4);
        } while (ent != 0);
    }
    (*(u8 **) (data_0213e0a8 + 0xF8))[0x210] = (u8) r4;
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
}
