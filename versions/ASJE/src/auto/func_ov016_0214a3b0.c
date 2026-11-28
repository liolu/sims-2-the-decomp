/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203d000(M2C_UNK);                     /* extern */
M2C_UNK func_0203d054(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020d5880(s32);                         /* extern */
extern u8 *data_0213d81c;
extern s32 data_027e0000;

void func_ov016_0214a3b0(void *arg0) {
    if (((u32) (*data_0213d81c << 0x1D) >> 0x1F) != 0) {
        M2C_FIELD(arg0, u8 *, 0x24) = (u8) (M2C_FIELD(arg0, u8 *, 0x24) + 1);
        func_020d5880(0x159);
        M2C_FIELD(arg0, u8 *, 0x24) = 0U;
        M2C_FIELD(arg0, u8 *, 0x25) = (u8) (M2C_FIELD(arg0, u8 *, 0x25) + 1);
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        func_0203d000(2);
        func_0203d054(1, 1);
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x24) = 0U;
}
