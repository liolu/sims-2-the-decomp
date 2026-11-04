/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0208afd0();
M2C_UNK func_0208bb98(void *, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02133600;
extern M2C_UNK data_02133bc4;
extern M2C_UNK data_02133bf0;

void *func_0208faf0(void *arg0, M2C_UNK arg1) {
    s32 v;
    u8 *t;
    u8 *p = (u8 *) arg0;
    s32 var_r2;
    u8 temp_r1;
    u8 *temp_r0;

    func_0208bb98(arg0, arg1, 0, 0);
    *(M2C_UNK **) ((u8 *) arg0 + 0x4C) = &data_02133600;
    *(s32 *) ((u8 *) arg0 + 0x50)      = 0x67;
    *(s32 *) ((u8 *) arg0 + 0x54)      = *(s16 *) ((u8 *) func_0208afd0() + 0xE);
    *(s8 *) ((u8 *) arg0 + 0x58)       = 0;
    *(s8 *) ((u8 *) arg0 + 0x59)       = 1;
    *(M2C_UNK **) arg0                 = &data_02133bc4;
    *(M2C_UNK **) ((u8 *) arg0 + 0x4C) = &data_02133bf0;
    var_r2                             = *(s32 *) ((u8 *) arg0 + 8);
    if (var_r2 > *(s32 *) ((u8 *) arg0 + 0xC)) {
        do {
            t = p + (var_r2 - 1);
            v = t[0x10];
            t = p + var_r2;
            var_r2 -= 1;
            t[0x10] = v;
        } while (var_r2 > *(s32 *) ((u8 *) arg0 + 0xC));
    }
    t                            = p + *(s32 *) ((u8 *) arg0 + 0xC);
    t[0x10]                      = 0x52;
    *(s32 *) ((u8 *) arg0 + 0xC) = *(s32 *) ((u8 *) arg0 + 0xC) + 1;
    *(s32 *) ((u8 *) arg0 + 8)   = *(s32 *) ((u8 *) arg0 + 8) + 1;
    return arg0;
}
