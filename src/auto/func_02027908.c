/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02088470(void *);                      /* extern */

s32 func_02027908(void *arg0, s32 arg1) {
    void *temp_r1;

    if (arg1 == 4) {
        M2C_FIELD(arg0, s8 *, 0x13) = 1;
        temp_r1                     = M2C_FIELD(arg0, void **, 4);
        if (((u32) (M2C_FIELD(temp_r1, u16 *, 0x218) << 0x1F) >> 0x1F) == 1) {
            func_02088470(temp_r1 + 0x214);
        }
        return 0;
    }
    return 0;
}
