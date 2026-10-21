/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206466c(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *data_0213e434;

void func_02083cb4(void *arg0) {
    if (M2C_FIELD(data_0213e434, u8 *, 0x2F78) != 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x39) = (u8) (M2C_FIELD(arg0, u8 *, 0x39) + 1);
    if (M2C_FIELD(arg0, u8 *, 0x39) != 5) {
        return;
    }
    func_0206466c(data_0213e434, 5, 1);
}
