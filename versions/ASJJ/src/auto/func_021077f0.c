/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_02138898;
extern M2C_UNK data_021388e4;
extern M2C_UNK data_02149278;
extern M2C_UNK data_02145b14;
extern M2C_UNK data_02149230;
extern M2C_UNK data_02149254;
s32 func_020fa740(u8 *);
void func_020fa874(u8 *);
void func_020fa804(u8 *);
s32 func_02107518(u8 *, s32, s32, s32);

s32 func_021077f0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 idx;
    s32 res;
    u8 *ent;
    s32 cur;

    if (arg3 == (s32) &data_02138898) {
        idx = 3;
    } else {
        idx = (arg3 == (s32) &data_021388e4) ? 4 : 5;
    }
    ent = (u8 *) &data_02149278 + idx * 0x14;
    if (func_020fa740(ent) == 0) {
        ((s32 *) &data_02149230)[idx] = *(s32 *) (*(u8 **) ((u8 *) &data_02145b14 + 0x8) + 0x6C);
        ((s32 *) &data_02149254)[idx] = 1;
    } else {
        cur = ((s32 *) &data_02149230)[idx];
        if (cur == *(s32 *) (*(u8 **) ((u8 *) &data_02145b14 + 0x8) + 0x6C)) {
            ((s32 *) &data_02149254)[idx] = ((s32 *) &data_02149254)[idx] + 1;
        } else {
            func_020fa874(ent);
            ((s32 *) &data_02149230)[idx] = *(s32 *) (*(u8 **) ((u8 *) &data_02145b14 + 0x8) + 0x6C);
            ((s32 *) &data_02149254)[idx] = 1;
        }
    }
    res                           = func_02107518(arg0, arg1, arg2, arg3);
    ((s32 *) &data_02149254)[idx] = ((s32 *) &data_02149254)[idx] - 1;
    if (((s32 *) &data_02149254)[idx] == 0) {
        func_020fa804(ent);
    }
    return res;
}
