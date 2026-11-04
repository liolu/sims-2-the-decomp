/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213355c;
extern M2C_UNK data_02134090;

void func_02093200(void *arg0, s32 arg1) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213355c;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s8 *, 0x1C)    = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02134090;
    i                              = M2C_FIELD(arg0, s32 *, 8);
    if (i > M2C_FIELD(arg0, s32 *, 0xC)) {
        do {
            t = arg0 + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > M2C_FIELD(arg0, s32 *, 0xC));
    }
    p[0x10 + M2C_FIELD(arg0, s32 *, 0xC)] = 0x53;
    M2C_FIELD(arg0, s32 *, 0xC)           = M2C_FIELD(arg0, s32 *, 0xC) + 1;
    M2C_FIELD(arg0, s32 *, 8)             = M2C_FIELD(arg0, s32 *, 8) + 1;
}
