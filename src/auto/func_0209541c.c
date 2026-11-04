/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02082ea0(void *arg0, u16 arg1);
extern u8 data_0213355c[];
extern u8 data_021344b8[];
extern s32 data_0213e434;

void *func_0209541c(void *arg0, void *arg1) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;

    *(u8 **) p          = data_0213355c;
    *(void **) (p + 4)  = arg1;
    *(s32 *) (p + 8)    = 0;
    *(s32 *) (p + 0xC)  = 0;
    *(s32 *) (p + 0x14) = 0;
    *(s8 *) (p + 0x1C)  = 1;
    *(u8 **) p          = data_021344b8;
    if (func_02082ea0((u8 *) data_0213e434 + 0x2FA4, *(u16 *) ((u8 *) arg1 + 0xA)) != 0xD8) {
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
        p[*(s32 *) (p + 0xC) + 0x10] = 6;
        *(s32 *) (p + 0xC)           = *(s32 *) (p + 0xC) + 1;
        *(s32 *) (p + 8)             = *(s32 *) (p + 8) + 1;
    }
    return p;
}
