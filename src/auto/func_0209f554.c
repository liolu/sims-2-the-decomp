/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffabc8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020105d0(s32);                         /* extern */
M2C_UNK func_0203c540();                            /* extern */
M2C_UNK func_0204ef60();                            /* extern */
extern void *data_0213e580;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_0209f554(void) {
    s32 temp_r0;

    func_0203c540();
    func_020105d0((data_027e0000 * 0x34) + (s32) &data_027e0014);
    func_0204ef60();
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    temp_r0 = M2C_FIELD(data_0213e580, s32 *, 0xF8);
    if (temp_r0 != 0) {
        func_01ffabc8(temp_r0 + 0xE0, 0x32, 1);
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
        return;
    }
    data_027e0000 = 0;
}
