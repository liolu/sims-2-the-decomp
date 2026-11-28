/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02093bc4();                    /* extern */
extern void *data_02139e64;
extern M2C_UNK data_0213f5d0;

s32 func_02093e04(M2C_UNK arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(&data_0213f5d0, u8 *, 0x20A) & 1;
    if (temp_r1 == 0) {
        return func_02093bc4(arg0, temp_r1);
    }
    if (M2C_FIELD(data_02139e64, s32 *, 0xC) != 1) {
        return 0;
    }
    return func_02093bc4(arg0);
}
