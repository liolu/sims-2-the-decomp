/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ff8fc(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_020ffc4c();                            /* extern */
M2C_UNK func_020ffc74(M2C_UNK);                     /* extern */
s32 func_020ffd24(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK data_021317ac;
extern M2C_UNK data_02139cb4;
extern M2C_UNK data_027e007c;

void func_0204460c(void) {
    func_020ffc74(3);
    func_020ffd24(&data_02139cb4, func_020ffd24(NULL, 0));
    M2C_FIELD(&data_027e007c, s8 *, 0x45) = 0;
    M2C_FIELD(&data_027e007c, s8 *, 0x44) = 0;
    func_020ffc4c();
    M2C_FIELD(&data_027e007c, s8 *, 0x45) = 1;
    if (func_020ff8fc(&data_027e007c, &data_021317ac) != 0) {
        M2C_FIELD(&data_027e007c, s8 *, 0x44) = 1;
    }
    M2C_FIELD(&data_027e007c, s8 *, 0x45) = 0;
}
