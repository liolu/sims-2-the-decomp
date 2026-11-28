/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020ff3e8(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_020ff738();                            /* extern */
M2C_UNK func_020ff760(M2C_UNK);                     /* extern */
s32 func_020ff810(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK data_021312ac;
extern M2C_UNK data_02139794;
extern M2C_UNK data_027e007c;

void func_02044620(void) {
    func_020ff760(3);
    func_020ff810(&data_02139794, func_020ff810(NULL, 0));
    M2C_FIELD(&data_027e007c, s8 *, 0x45) = 0;
    M2C_FIELD(&data_027e007c, s8 *, 0x44) = 0;
    func_020ff738();
    M2C_FIELD(&data_027e007c, s8 *, 0x45) = 1;
    if (func_020ff3e8(&data_027e007c, &data_021312ac) != 0) {
        M2C_FIELD(&data_027e007c, s8 *, 0x44) = 1;
    }
    M2C_FIELD(&data_027e007c, s8 *, 0x45) = 0;
}
