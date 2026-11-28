/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f9874(M2C_UNK);     /* extern */
M2C_UNK func_020f9a04(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fb70c(M2C_UNK);                     /* extern */
extern u16 data_021461b4;
extern s32 data_021461b8;
extern M2C_UNK data_021461bc;
extern M2C_UNK func_020fb7d8;

void func_020fb860(void) {
    if (data_021461b4 != 0) {
        return;
    }
    data_021461b4 = 1;
    func_020fb70c(0);
    M2C_FIELD(&data_021461bc, s32 *, 0) = 0;
    M2C_FIELD(&data_021461bc, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_020f9a04(8, &func_020fb7d8);
    func_020f9874(8);
    data_021461b8 = 0;
}
