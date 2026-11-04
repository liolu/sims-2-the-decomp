/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_02064644(s32, M2C_UNK);
extern M2C_UNK data_0213355c;
extern M2C_UNK data_021345ec;
extern s32 data_0213e434;

void *func_02096a00(void *arg0, s32 arg1) {
    u8 *p = (u8 *) arg0;
    s32 var_r2;
    s32 v;
    u8 *t;

    *(M2C_UNK **) ((u8 *) arg0 + 0) = &data_0213355c;
    *(s32 *) ((u8 *) arg0 + 4)      = arg1;
    *(s32 *) ((u8 *) arg0 + 8)      = 0;
    *(s32 *) ((u8 *) arg0 + 0xC)    = 0;
    *(s32 *) ((u8 *) arg0 + 0x14)   = 0;
    *(s8 *) ((u8 *) arg0 + 0x1C)    = 1;
    *(M2C_UNK **) ((u8 *) arg0 + 0) = &data_021345ec;
    if (func_02064644(data_0213e434, 0x21) == 0) {
        var_r2 = *(s32 *) (p + 8);
        if (var_r2 > *(s32 *) (p + 0xC)) {
            do {
                t = p + (var_r2 - 1);
                v = t[0x10];
                t = p + var_r2;
                var_r2 -= 1;
                t[0x10] = v;
            } while (var_r2 > *(s32 *) (p + 0xC));
        }
        t                  = p + *(s32 *) (p + 0xC);
        t[0x10]            = 0x1C;
        *(s32 *) (p + 0xC) = *(s32 *) (p + 0xC) + 1;
        *(s32 *) (p + 8)   = *(s32 *) (p + 8) + 1;
    }
    return arg0;
}
