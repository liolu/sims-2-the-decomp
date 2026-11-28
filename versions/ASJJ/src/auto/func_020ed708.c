/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020ed290(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
s32 func_020ed304(s32, u32);                        /* extern */
M2C_UNK func_020ed354(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02142d1c;
extern M2C_UNK data_02142d20;

void func_020ed708(void) {
    M2C_FIELD(&data_02142d1c, s32 *, 4) =
        func_020ed304(M2C_FIELD(&data_02142d1c, s32 *, 0xC), (u32) M2C_FIELD(&data_02142d1c, u32 *, 0x10) >> 4);
    func_020ed354(&data_02142d1c);
    func_020ed290(&data_02142d1c, &data_02142d20, 0, M2C_FIELD(&data_02142d1c, s32 *, 8));
}
