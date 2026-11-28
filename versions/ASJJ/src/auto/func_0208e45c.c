/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021330c0;
extern u8 data_021330ec;
extern u8 data_02133384;
extern u8 data_021333b0;

void func_0208ba60(u8 *, s32, s32, s32);
void *func_0208aebc(s32);

u8 *func_0208e45c(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    u8 *src;
    u8 tmp;

    func_0208ba60(arg0, arg1, 4, 0);
    *(u8 **) arg0          = &data_021330c0;
    *(u8 **) (arg0 + 0x4C) = &data_021330ec;
    *(s32 *) (arg0 + 0x50) = arg2;
    *(s32 *) (arg0 + 0x54) = *(s16 *) ((u8 *) func_0208aebc(arg2) + 0xE);
    *(u8 *) (arg0 + 0x58)  = 0;
    *(u8 *) (arg0 + 0x59)  = 1;
    *(u8 **) arg0          = &data_02133384;
    *(u8 **) (arg0 + 0x4C) = &data_021333b0;

    i = *(s32 *) (arg0 + 8);
    if (i > *(s32 *) (arg0 + 0xC)) {
        do {
            src = arg0 + (i - 1);
            tmp = src[0x10];
            src = arg0 + i;
            i -= 1;
            src[0x10] = tmp;
        } while (i > *(s32 *) (arg0 + 0xC));
    }
    arg0[0x10 + *(s32 *) (arg0 + 0xC)] = 0xB;
    *(s32 *) (arg0 + 0xC) += 1;
    *(s32 *) (arg0 + 8) += 1;

    if (arg2 >= 0x6A && arg2 <= 0x7F && ((arg2 - 0x6A) & 1)) {
        i = *(s32 *) (arg0 + 8);
        if (i > *(s32 *) (arg0 + 0xC)) {
            do {
                src = arg0 + (i - 1);
                tmp = src[0x10];
                src = arg0 + i;
                i -= 1;
                src[0x10] = tmp;
            } while (i > *(s32 *) (arg0 + 0xC));
        }
        arg0[0x10 + *(s32 *) (arg0 + 0xC)] = 0x12;
        *(s32 *) (arg0 + 0xC) += 1;
        *(s32 *) (arg0 + 8) += 1;
    }
    return arg0;
}
