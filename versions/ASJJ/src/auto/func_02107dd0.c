/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fa740(M2C_UNK *);
M2C_UNK func_020fa804(M2C_UNK *);
M2C_UNK func_020fa874(M2C_UNK *);
s32 func_02107f6c(M2C_UNK *, M2C_UNK *, s32, s32);
s32 func_0210a27c(M2C_UNK *, M2C_UNK);
extern M2C_UNK data_02138898;
extern M2C_UNK data_02145b14;
extern M2C_UNK data_02149230;
extern M2C_UNK data_02149254;
extern M2C_UNK data_021492b4;
extern M2C_UNK func_02107f34;

s32 func_02107dd0(volatile s32 sp8, volatile s32 a1, volatile s32 a2, volatile s32 a3) {
    s32 temp_r0;
    s32 temp_r4;

    if (func_0210a27c(&data_02138898, -1) >= 0) {
        return -1;
    }
    if (func_020fa740(&data_021492b4) == 0) {
        M2C_FIELD(&data_02149230, s32 *, 0xC) = (s32) M2C_FIELD(M2C_FIELD(&data_02145b14, void **, 8), s32 *, 0x6C);
        M2C_FIELD(&data_02149254, s32 *, 0xC) = 1;
    } else if (M2C_FIELD(&data_02149230, s32 *, 0xC) == M2C_FIELD(M2C_FIELD(&data_02145b14, void **, 8), s32 *, 0x6C)) {
        M2C_FIELD(&data_02149254, s32 *, 0xC) = (s32) (M2C_FIELD(&data_02149254, s32 *, 0xC) + 1);
    } else {
        func_020fa874(&data_021492b4);
        M2C_FIELD(&data_02149230, s32 *, 0xC) = (s32) M2C_FIELD(M2C_FIELD(&data_02145b14, void **, 8), s32 *, 0x6C);
        M2C_FIELD(&data_02149254, s32 *, 0xC) = 1;
    }
    temp_r4                               = func_02107f6c(&func_02107f34, &data_02138898, sp8, ((s32) &sp8 & ~3) + 4);
    temp_r0                               = M2C_FIELD(&data_02149254, s32 *, 0xC) - 1;
    M2C_FIELD(&data_02149254, s32 *, 0xC) = temp_r0;
    if (temp_r0 == 0) {
        func_020fa804(&data_021492b4);
    }
    return temp_r4;
}
