/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ed7a4(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
s32 func_020ed818(s32, u32);                        /* extern */
M2C_UNK func_020ed868(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021431fc;
extern M2C_UNK data_02143200;

void func_020edc1c(void) {
    M2C_FIELD(&data_021431fc, s32 *, 4) =
        func_020ed818(M2C_FIELD(&data_021431fc, s32 *, 0xC), (u32) M2C_FIELD(&data_021431fc, u32 *, 0x10) >> 4);
    func_020ed868(&data_021431fc);
    func_020ed7a4(&data_021431fc, &data_02143200, 0, M2C_FIELD(&data_021431fc, s32 *, 8));
}
