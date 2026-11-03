/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213355c;
extern u8 data_02134c1c;

void func_0209ab10(u8 *arg0, s32 arg1) {
    s32 i;
    u8 tmp;
    u8 *src;

    *(u8 **) arg0          = &data_0213355c;
    *(s32 *) (arg0 + 4)    = arg1;
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0xC)  = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    *(u8 *) (arg0 + 0x1C)  = 1;
    *(u8 **) arg0          = &data_02134c1c;
    i                      = *(s32 *) (arg0 + 8);
    if (i > *(s32 *) (arg0 + 0xC)) {
        do {
            src = arg0 + (i - 1);
            tmp = src[0x10];
            src = arg0 + i;
            i -= 1;
            src[0x10] = tmp;
        } while (i > *(s32 *) (arg0 + 0xC));
    }
    arg0[0x10 + *(s32 *) (arg0 + 0xC)] = 1;
    *(s32 *) (arg0 + 0xC) += 1;
    *(s32 *) (arg0 + 8) += 1;
}
