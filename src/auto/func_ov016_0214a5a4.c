/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020105d0(s32);                         /* extern */
M2C_UNK func_0203c540();                            /* extern */
M2C_UNK func_0204ef60();                            /* extern */
M2C_UNK func_02051a50(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_ov016_0214a5a4(void) {
    func_0203c540();
    func_0204ef60();
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_0203c540();
    func_0204ef60();
    func_020105d0((data_027e0000 * 0x34) + (s32) &data_027e0014);
    func_02051a50(3, 0, 0);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
        return;
    }
    data_027e0000 = 0;
}
