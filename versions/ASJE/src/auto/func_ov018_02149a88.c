/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020105d0(s32);                         /* extern */
M2C_UNK func_02018af8(s32, M2C_UNK, s8 *, M2C_UNK); /* extern */
M2C_UNK func_0203c4c8();                            /* extern */
M2C_UNK func_02045154(s32);                         /* extern */
M2C_UNK func_0204eee8();                            /* extern */
extern s32 data_02139d4c;
extern void *data_0213e440;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_ov018_02149a88(void) {
    s8 sp0;
    s32 temp_r0;

    func_02045154(data_02139d4c);
    sp0 = 0;
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    temp_r0 = M2C_FIELD(data_0213e440, s32 *, 0xF8);
    if (temp_r0 != 0) {
        func_02018af8(temp_r0 + 0x128, 0x11, &sp0, 2);
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_0203c4c8();
    func_020105d0((data_027e0000 * 0x34) + (s32) &data_027e0014);
    func_0204eee8();
}
