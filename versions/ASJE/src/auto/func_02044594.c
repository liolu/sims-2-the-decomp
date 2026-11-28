/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020ff7c0(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_020ffb10();                            /* extern */
M2C_UNK func_020ffb38(M2C_UNK);                     /* extern */
s32 func_020ffbe8(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK data_0213166c;
extern M2C_UNK data_02139b74;
extern M2C_UNK data_027e007c;

void func_02044594(void) {
    func_020ffb38(3);
    func_020ffbe8(&data_02139b74, func_020ffbe8(NULL, 0));
    M2C_FIELD(&data_027e007c, s8 *, 0x45) = 0;
    M2C_FIELD(&data_027e007c, s8 *, 0x44) = 0;
    func_020ffb10();
    M2C_FIELD(&data_027e007c, s8 *, 0x45) = 1;
    if (func_020ff7c0(&data_027e007c, &data_0213166c) != 0) {
        M2C_FIELD(&data_027e007c, s8 *, 0x44) = 1;
    }
    M2C_FIELD(&data_027e007c, s8 *, 0x45) = 0;
}
