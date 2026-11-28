/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020105d0(s32);                         /* extern */
M2C_UNK func_02018af0(s32, M2C_UNK, s8 *, M2C_UNK); /* extern */
M2C_UNK func_0203c574();                            /* extern */
M2C_UNK func_020451e0(s32);                         /* extern */
M2C_UNK func_0204eefc();                            /* extern */
extern s32 data_0213996c;
extern void *data_0213e0a8;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_ov018_021496e8(void) {
    s8 sp0;
    s32 temp_r0;

    func_020451e0(data_0213996c);
    sp0 = 0;
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    temp_r0 = M2C_FIELD(data_0213e0a8, s32 *, 0xF8);
    if (temp_r0 != 0) {
        func_02018af0(temp_r0 + 0x128, 0x11, &sp0, 2);
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_0203c574();
    func_020105d0((data_027e0000 * 0x34) + (s32) &data_027e0014);
    func_0204eefc();
}
