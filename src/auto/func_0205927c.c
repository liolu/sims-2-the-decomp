/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200fb30(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020105d0(s32);                         /* extern */
M2C_UNK func_02011090(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0203c540();                            /* extern */
M2C_UNK func_0204ef60();                            /* extern */
M2C_UNK func_020d59bc(M2C_UNK);                     /* extern */
extern void *data_0213e434;
extern void *data_0213e580;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_0205927c(void) {
    func_020105d0((data_027e0000 * 0x34) + (s32) &data_027e0014);
    func_0204ef60();
    M2C_FIELD(data_0213e434, s8 *, 0x3034) = 0;
    func_020d59bc(0xE6);
    func_0203c540();
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_02011090(M2C_FIELD(data_0213e580, s32 *, 0xF8), 0xC7, 0, 1, 0);
    func_0200fb30(M2C_FIELD(data_0213e580, s32 *, 0xF8), 0, 0);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
        return;
    }
    data_027e0000 = 0;
}
