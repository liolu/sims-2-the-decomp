/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021335d4;
extern u8 data_02133600;
extern u8 data_02133898;
extern u8 data_021338c4;

void func_0208bb98(u8 *, s32, s32, s32);
void *func_0208afd0(s32);

u8 *func_0208e584(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    u8 *src;
    u8 tmp;

    func_0208bb98(arg0, arg1, 4, 0);
    *(u8 **) arg0          = &data_021335d4;
    *(u8 **) (arg0 + 0x4C) = &data_02133600;
    *(s32 *) (arg0 + 0x50) = arg2;
    *(s32 *) (arg0 + 0x54) = *(s16 *) ((u8 *) func_0208afd0(arg2) + 0xE);
    *(u8 *) (arg0 + 0x58)  = 0;
    *(u8 *) (arg0 + 0x59)  = 1;
    *(u8 **) arg0          = &data_02133898;
    *(u8 **) (arg0 + 0x4C) = &data_021338c4;

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
