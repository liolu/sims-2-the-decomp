/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d8d64();                            /* extern */
extern M2C_UNK data_021423b8;

void func_020d6164(void) {
    if (M2C_FIELD(&data_021423b8, u8 *, 0) != 1) {
        return;
    }
    M2C_FIELD(&data_021423b8, u8 *, 0xB) = (u8) (M2C_FIELD(&data_021423b8, u8 *, 0xB) | 0x80);
    func_020d8d64();
    M2C_FIELD(&data_021423b8, u8 *, 0xB) = (u8) (M2C_FIELD(&data_021423b8, u8 *, 0xB) & ~0xC0);
}
