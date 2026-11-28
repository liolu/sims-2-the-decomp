/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020ede48(s32);                         /* extern */
M2C_UNK func_020edee8(s32, void *, void *);         /* extern */
extern M2C_UNK (*data_02138558)(s32);
extern M2C_UNK (*data_02138560)(s32);

s32 func_020bcde8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 != 0) {
        func_020edee8(temp_r0, arg0 + 4, arg0 + 8);
        func_020ede48(M2C_FIELD(arg0, s32 *, 0x14));
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            data_02138558(M2C_FIELD(arg0, s32 *, 4));
        }
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            data_02138558(M2C_FIELD(arg0, s32 *, 8));
        }
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            data_02138560(M2C_FIELD(arg0, s32 *, 0xC));
        }
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 4)    = 0;
        M2C_FIELD(arg0, s32 *, 8)    = 0;
        M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    return 1;
}
