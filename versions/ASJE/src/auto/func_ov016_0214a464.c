/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020105d0(s32);                         /* extern */
M2C_UNK func_0203c4c8();                            /* extern */
M2C_UNK func_0204eee8();                            /* extern */
M2C_UNK func_020519d8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_ov016_0214a464(void) {
    func_0203c4c8();
    func_0204eee8();
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_0203c4c8();
    func_0204eee8();
    func_020105d0((data_027e0000 * 0x34) + (s32) &data_027e0014);
    func_020519d8(3, 0, 0);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
        return;
    }
    data_027e0000 = 0;
}
