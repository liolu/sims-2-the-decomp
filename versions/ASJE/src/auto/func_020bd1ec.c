/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020ee220(s32);                         /* extern */
M2C_UNK func_020ee2c0(s32, void *, void *);         /* extern */
extern M2C_UNK (*data_0213892c)(s32);
extern M2C_UNK (*data_02138934)(s32);

s32 func_020bd1ec(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 != 0) {
        func_020ee2c0(temp_r0, arg0 + 4, arg0 + 8);
        func_020ee220(M2C_FIELD(arg0, s32 *, 0x14));
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            data_0213892c(M2C_FIELD(arg0, s32 *, 4));
        }
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            data_0213892c(M2C_FIELD(arg0, s32 *, 8));
        }
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            data_02138934(M2C_FIELD(arg0, s32 *, 0xC));
        }
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 4)    = 0;
        M2C_FIELD(arg0, s32 *, 8)    = 0;
        M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    return 1;
}
