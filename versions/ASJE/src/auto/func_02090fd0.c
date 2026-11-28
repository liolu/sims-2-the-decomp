/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0208af58(s32);
void func_0208bb24(void *, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02133494;
extern M2C_UNK data_021334c0;
extern M2C_UNK data_02133cec;
extern M2C_UNK data_02133d18;

void *func_02090fd0(void *arg0, M2C_UNK arg1, s32 arg2) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;

    func_0208bb24(arg0, arg1, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133494;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_021334c0;
    M2C_FIELD(arg0, s32 *, 0x50)      = arg2;
    M2C_FIELD(arg0, s32 *, 0x54)      = (s32) M2C_FIELD(func_0208af58(arg2), s16 *, 0xE);
    M2C_FIELD(arg0, s8 *, 0x58)       = 0;
    M2C_FIELD(arg0, s8 *, 0x59)       = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02133cec;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_02133d18;
    i                                 = M2C_FIELD(arg0, s32 *, 8);
    if (i > (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > (s32) M2C_FIELD(arg0, s32 *, 0xC));
    }
    p[0x10 + M2C_FIELD(arg0, s32 *, 0xC)] = 0xD;
    M2C_FIELD(arg0, s32 *, 0xC)           = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    M2C_FIELD(arg0, s32 *, 8)             = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    return arg0;
}
