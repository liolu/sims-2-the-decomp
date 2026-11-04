/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0213355c;
extern M2C_UNK data_021342c8;

void func_02094940(void *arg0, s32 arg1) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;

    *(M2C_UNK **) p     = &data_0213355c;
    *(s32 *) (p + 4)    = arg1;
    *(s32 *) (p + 8)    = 0;
    *(s32 *) (p + 0xC)  = 0;
    *(s32 *) (p + 0x14) = 0;
    p[0x1C]             = 1;
    *(M2C_UNK **) p     = &data_021342c8;
    i                   = *(s32 *) (p + 8);
    if (i > *(s32 *) (p + 0xC)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (p + 0xC));
    }
    p[0x10 + *(s32 *) (p + 0xC)] = 0x64;
    *(s32 *) (p + 0xC) += 1;
    *(s32 *) (p + 8) += 1;
}
