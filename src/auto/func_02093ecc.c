/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02093c8c();                    /* extern */
extern void *data_02139fa4;
extern M2C_UNK data_0213f710;

s32 func_02093ecc(M2C_UNK arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(&data_0213f710, u8 *, 0x20A) & 1;
    if (temp_r1 == 0) {
        return func_02093c8c(arg0, temp_r1);
    }
    if (M2C_FIELD(data_02139fa4, s32 *, 0xC) != 1) {
        return 0;
    }
    return func_02093c8c(arg0);
}
