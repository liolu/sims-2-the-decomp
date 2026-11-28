/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_02138c6c;
extern M2C_UNK data_02138cb8;
extern M2C_UNK data_02149618;
extern M2C_UNK data_02145eb4;
extern M2C_UNK data_021495d0;
extern M2C_UNK data_021495f4;
s32 func_020fab18(u8 *);
void func_020fac4c(u8 *);
void func_020fabdc(u8 *);
s32 func_021078f0(u8 *, s32, s32, s32);

s32 func_02107bc8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 idx;
    s32 res;
    u8 *ent;
    s32 cur;

    if (arg3 == (s32) &data_02138c6c) {
        idx = 3;
    } else {
        idx = (arg3 == (s32) &data_02138cb8) ? 4 : 5;
    }
    ent = (u8 *) &data_02149618 + idx * 0x14;
    if (func_020fab18(ent) == 0) {
        ((s32 *) &data_021495d0)[idx] = *(s32 *) (*(u8 **) ((u8 *) &data_02145eb4 + 0x8) + 0x6C);
        ((s32 *) &data_021495f4)[idx] = 1;
    } else {
        cur = ((s32 *) &data_021495d0)[idx];
        if (cur == *(s32 *) (*(u8 **) ((u8 *) &data_02145eb4 + 0x8) + 0x6C)) {
            ((s32 *) &data_021495f4)[idx] = ((s32 *) &data_021495f4)[idx] + 1;
        } else {
            func_020fac4c(ent);
            ((s32 *) &data_021495d0)[idx] = *(s32 *) (*(u8 **) ((u8 *) &data_02145eb4 + 0x8) + 0x6C);
            ((s32 *) &data_021495f4)[idx] = 1;
        }
    }
    res                           = func_021078f0(arg0, arg1, arg2, arg3);
    ((s32 *) &data_021495f4)[idx] = ((s32 *) &data_021495f4)[idx] - 1;
    if (((s32 *) &data_021495f4)[idx] == 0) {
        func_020fabdc(ent);
    }
    return res;
}
