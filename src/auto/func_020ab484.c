/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a8c3c();                            /* extern */
M2C_UNK func_020d5ea8(M2C_UNK);                     /* extern */
extern u8 *data_0213d95c;
extern M2C_UNK data_021424f8;

void func_020ab484(void *arg0) {
    M2C_FIELD(arg0, volatile u8 *, 0xA6D) = 1U;
    do {

    } while (M2C_FIELD(arg0, volatile u8 *, 0xA6D) != 2);
    func_020a8c3c();
    func_020d5ea8(0);
    *data_0213d95c &= ~0x40;
    M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) & ~8);
}
