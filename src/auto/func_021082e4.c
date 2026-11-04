/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fac54(M2C_UNK *);
M2C_UNK func_020fad18(M2C_UNK *);
M2C_UNK func_020fad88(M2C_UNK *);
s32 func_02108480(M2C_UNK *, M2C_UNK *, s32, s32);
s32 func_0210a790(M2C_UNK *, M2C_UNK);
extern M2C_UNK data_02138dac;
extern M2C_UNK data_02145ff4;
extern M2C_UNK data_02149710;
extern M2C_UNK data_02149734;
extern M2C_UNK data_02149794;
extern M2C_UNK func_02108448;

s32 func_021082e4(volatile s32 sp8, volatile s32 a1, volatile s32 a2, volatile s32 a3) {
    s32 temp_r0;
    s32 temp_r4;

    if (func_0210a790(&data_02138dac, -1) >= 0) {
        return -1;
    }
    if (func_020fac54(&data_02149794) == 0) {
        M2C_FIELD(&data_02149710, s32 *, 0xC) = (s32) M2C_FIELD(M2C_FIELD(&data_02145ff4, void **, 8), s32 *, 0x6C);
        M2C_FIELD(&data_02149734, s32 *, 0xC) = 1;
    } else if (M2C_FIELD(&data_02149710, s32 *, 0xC) == M2C_FIELD(M2C_FIELD(&data_02145ff4, void **, 8), s32 *, 0x6C)) {
        M2C_FIELD(&data_02149734, s32 *, 0xC) = (s32) (M2C_FIELD(&data_02149734, s32 *, 0xC) + 1);
    } else {
        func_020fad88(&data_02149794);
        M2C_FIELD(&data_02149710, s32 *, 0xC) = (s32) M2C_FIELD(M2C_FIELD(&data_02145ff4, void **, 8), s32 *, 0x6C);
        M2C_FIELD(&data_02149734, s32 *, 0xC) = 1;
    }
    temp_r4                               = func_02108480(&func_02108448, &data_02138dac, sp8, ((s32) &sp8 & ~3) + 4);
    temp_r0                               = M2C_FIELD(&data_02149734, s32 *, 0xC) - 1;
    M2C_FIELD(&data_02149734, s32 *, 0xC) = temp_r0;
    if (temp_r0 == 0) {
        func_020fad18(&data_02149794);
    }
    return temp_r4;
}
