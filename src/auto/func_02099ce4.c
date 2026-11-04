/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0208afd0(s32);
void func_0208bb98(void *, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02133600;
extern M2C_UNK data_02134abc;
extern M2C_UNK data_02134ae8;

void *func_02099ce4(void *arg0, M2C_UNK arg1, s32 arg2) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;

    func_0208bb98(arg0, arg1, 0, arg2 >= 9);
    *(void **) (p + 0x4C) = &data_02133600;
    *(s32 *) (p + 0x50)   = arg2;
    *(s32 *) (p + 0x54)   = *(s16 *) (func_0208afd0(arg2) + 0xE);
    *(s8 *) (p + 0x58)    = 0;
    *(s8 *) (p + 0x59)    = 0;
    *(void **) p          = &data_02134abc;
    *(void **) (p + 0x4C) = &data_02134ae8;
    i                     = *(s32 *) (p + 8);
    if (i > *(s32 *) (p + 0xC)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (p + 0xC));
    }
    p[*(s32 *) (p + 0xC) + 0x10] = 0x13;
    *(s32 *) (p + 0xC)           = *(s32 *) (p + 0xC) + 1;
    *(s32 *) (p + 8)             = *(s32 *) (p + 8) + 1;
    return arg0;
}
