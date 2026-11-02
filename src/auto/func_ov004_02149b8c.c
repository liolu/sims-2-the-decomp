/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ffabc8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0200fb30(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020105d0(s32);                         /* extern */
M2C_UNK func_0203c540();                            /* extern */
s32 func_020480dc(s32, M2C_UNK);                    /* extern */
extern s32 data_02139fa4;
extern void *data_0213e580;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_ov004_02149b8c(void *arg0) {
    func_0203c540();
    func_020105d0((data_027e0000 * 0x34) + (s32) &data_027e0014);
    if (func_020480dc(data_02139fa4, 1) != 0x2C) {
        func_0200fb30(M2C_FIELD(data_0213e580, s32 *, 0xF8), 0, 0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x26) != 0) {
        return;
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_01ffabc8(M2C_FIELD(arg0, s32 *, 0x28) + 0xE0, 8, 1);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
        return;
    }
    data_027e0000 = 0;
}
