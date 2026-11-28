/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fab18(M2C_UNK *);
M2C_UNK func_020fabdc(M2C_UNK *);
M2C_UNK func_020fac4c(M2C_UNK *);
s32 func_02108344(M2C_UNK *, M2C_UNK *, s32, s32);
s32 func_0210a654(M2C_UNK *, M2C_UNK);
extern M2C_UNK data_02138c6c;
extern M2C_UNK data_02145eb4;
extern M2C_UNK data_021495d0;
extern M2C_UNK data_021495f4;
extern M2C_UNK data_02149654;
extern M2C_UNK func_0210830c;

s32 func_021081a8(volatile s32 sp8, volatile s32 a1, volatile s32 a2, volatile s32 a3) {
    s32 temp_r0;
    s32 temp_r4;

    if (func_0210a654(&data_02138c6c, -1) >= 0) {
        return -1;
    }
    if (func_020fab18(&data_02149654) == 0) {
        M2C_FIELD(&data_021495d0, s32 *, 0xC) = (s32) M2C_FIELD(M2C_FIELD(&data_02145eb4, void **, 8), s32 *, 0x6C);
        M2C_FIELD(&data_021495f4, s32 *, 0xC) = 1;
    } else if (M2C_FIELD(&data_021495d0, s32 *, 0xC) == M2C_FIELD(M2C_FIELD(&data_02145eb4, void **, 8), s32 *, 0x6C)) {
        M2C_FIELD(&data_021495f4, s32 *, 0xC) = (s32) (M2C_FIELD(&data_021495f4, s32 *, 0xC) + 1);
    } else {
        func_020fac4c(&data_02149654);
        M2C_FIELD(&data_021495d0, s32 *, 0xC) = (s32) M2C_FIELD(M2C_FIELD(&data_02145eb4, void **, 8), s32 *, 0x6C);
        M2C_FIELD(&data_021495f4, s32 *, 0xC) = 1;
    }
    temp_r4                               = func_02108344(&func_0210830c, &data_02138c6c, sp8, ((s32) &sp8 & ~3) + 4);
    temp_r0                               = M2C_FIELD(&data_021495f4, s32 *, 0xC) - 1;
    M2C_FIELD(&data_021495f4, s32 *, 0xC) = temp_r0;
    if (temp_r0 == 0) {
        func_020fabdc(&data_02149654);
    }
    return temp_r4;
}
