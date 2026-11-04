/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213355c[];
extern u8 data_02133950[];

void func_0208eb30(u8 *arg0, s32 arg1) {
    s32 v;
    u8 *t;
    u8 *p = (u8 *) arg0;
    s32 i;

    *(u32 *) (arg0 + 0x0)  = (u32) data_0213355c;
    *(s32 *) (arg0 + 0x4)  = arg1;
    *(s32 *) (arg0 + 0x8)  = 0;
    *(s32 *) (arg0 + 0xC)  = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    arg0[0x1C]             = 1;
    *(u32 *) (arg0 + 0x0)  = (u32) data_02133950;
    i                      = *(s32 *) (arg0 + 0x8);
    if (i > *(s32 *) (arg0 + 0xC)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (arg0 + 0xC));
    }
    arg0[0x10 + *(s32 *) (arg0 + 0xC)] = 1;
    *(s32 *) (arg0 + 0xC)              = *(s32 *) (arg0 + 0xC) + 1;
    *(s32 *) (arg0 + 0x8)              = *(s32 *) (arg0 + 0x8) + 1;
}
