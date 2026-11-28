/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020a8b74();                            /* extern */
M2C_UNK func_020d5d6c(M2C_UNK);                     /* extern */
extern u8 *data_0213d81c;
extern M2C_UNK data_021423b8;

void func_020ab3bc(void *arg0) {
    M2C_FIELD(arg0, volatile u8 *, 0xA6D) = 1U;
    do {

    } while (M2C_FIELD(arg0, volatile u8 *, 0xA6D) != 2);
    func_020a8b74();
    func_020d5d6c(0);
    *data_0213d81c &= ~0x40;
    M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) & ~8);
}
