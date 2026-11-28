/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK _Z24EnableSpecificInterruptsj(M2C_UNK);     /* extern */
M2C_UNK func_020f962c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fb334(M2C_UNK);                     /* extern */
extern u16 data_02145e14;
extern s32 data_02145e18;
extern M2C_UNK data_02145e1c;
extern M2C_UNK func_020fb400;

void func_020fb488(void) {
    if (data_02145e14 != 0) {
        return;
    }
    data_02145e14 = 1;
    func_020fb334(0);
    M2C_FIELD(&data_02145e1c, s32 *, 0) = 0;
    M2C_FIELD(&data_02145e1c, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_020f962c(8, &func_020fb400);
    _Z24EnableSpecificInterruptsj(8);
    data_02145e18 = 0;
}
