/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020a8a8c();                            /* extern */
M2C_UNK func_020d5994(M2C_UNK);                     /* extern */
extern u8 *data_0213d43c;
extern M2C_UNK data_02142018;

void func_020ab2d4(void *arg0) {
    M2C_FIELD(arg0, volatile u8 *, 0xA6D) = 1U;
    do {

    } while (M2C_FIELD(arg0, volatile u8 *, 0xA6D) != 2);
    func_020a8a8c();
    func_020d5994(0);
    *data_0213d43c &= ~0x40;
    M2C_FIELD(&data_02142018, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) & ~8);
}
