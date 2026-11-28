/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d898c();                            /* extern */
extern M2C_UNK data_02142018;

void func_020d5d8c(void) {
    if (M2C_FIELD(&data_02142018, u8 *, 0) != 1) {
        return;
    }
    M2C_FIELD(&data_02142018, u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, u8 *, 0xB) | 0x80);
    func_020d898c();
    M2C_FIELD(&data_02142018, u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, u8 *, 0xB) & ~0xC0);
}
