/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0208af58();
M2C_UNK func_0208bb24();
extern M2C_UNK data_021334c0;
extern M2C_UNK data_0213411c;
extern M2C_UNK data_02134148;

void *func_020944b0(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;

    func_0208bb24(arg0, arg1, 2, 0);
    *(M2C_UNK **) (p + 0x4C) = &data_021334c0;
    *(s32 *) (p + 0x50)      = arg2;
    *(s32 *) (p + 0x54)      = (s32) * (s16 *) ((u8 *) func_0208af58(arg2) + 0xE);
    p[0x58]                  = 0;
    p[0x59]                  = 1;
    *(M2C_UNK **) p          = &data_0213411c;
    *(M2C_UNK **) (p + 0x4C) = &data_02134148;
    i                        = *(s32 *) (p + 8);
    if (i > *(s32 *) (p + 0xC)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (p + 0xC));
    }
    p[0x10 + *(s32 *) (p + 0xC)] = 9;
    *(s32 *) (p + 0xC) += 1;
    *(s32 *) (p + 8) += 1;
    if ((arg2 == 0x3A) || (arg2 == 0x46) || ((arg2 >= 0x80) && (arg2 <= 0x8F))) {
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
        p[0x10 + *(s32 *) (p + 0xC)] = 11;
        *(s32 *) (p + 0xC) += 1;
        *(s32 *) (p + 8) += 1;
    }
    return arg0;
}
