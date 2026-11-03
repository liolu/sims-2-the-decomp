/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_02138dac;
extern M2C_UNK data_02138df8;
extern M2C_UNK data_02149758;
extern M2C_UNK data_02145ff4;
extern M2C_UNK data_02149710;
extern M2C_UNK data_02149734;
s32 func_020fac54(u8 *);
void func_020fad88(u8 *);
void func_020fad18(u8 *);
s32 func_02107a2c(u8 *, s32, s32, s32);

s32 func_02107d04(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 idx;
    s32 res;
    u8 *ent;
    s32 cur;

    if (arg3 == (s32) &data_02138dac) {
        idx = 3;
    } else {
        idx = (arg3 == (s32) &data_02138df8) ? 4 : 5;
    }
    ent = (u8 *) &data_02149758 + idx * 0x14;
    if (func_020fac54(ent) == 0) {
        ((s32 *) &data_02149710)[idx] = *(s32 *) (*(u8 **) ((u8 *) &data_02145ff4 + 0x8) + 0x6C);
        ((s32 *) &data_02149734)[idx] = 1;
    } else {
        cur = ((s32 *) &data_02149710)[idx];
        if (cur == *(s32 *) (*(u8 **) ((u8 *) &data_02145ff4 + 0x8) + 0x6C)) {
            ((s32 *) &data_02149734)[idx] = ((s32 *) &data_02149734)[idx] + 1;
        } else {
            func_020fad88(ent);
            ((s32 *) &data_02149710)[idx] = *(s32 *) (*(u8 **) ((u8 *) &data_02145ff4 + 0x8) + 0x6C);
            ((s32 *) &data_02149734)[idx] = 1;
        }
    }
    res                           = func_02107a2c(arg0, arg1, arg2, arg3);
    ((s32 *) &data_02149734)[idx] = ((s32 *) &data_02149734)[idx] - 1;
    if (((s32 *) &data_02149734)[idx] == 0) {
        func_020fad18(ent);
    }
    return res;
}
