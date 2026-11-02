/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020105d0(s32);                         /* extern */
M2C_UNK func_02018af8(s32, M2C_UNK, s8 *, M2C_UNK); /* extern */
M2C_UNK func_0203c540();                            /* extern */
M2C_UNK func_020451cc(s32);                         /* extern */
M2C_UNK func_0204ef60();                            /* extern */
extern s32 data_02139e8c;
extern void *data_0213e580;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_ov018_02149bc8(void) {
    s8 sp0;
    s32 temp_r0;

    func_020451cc(data_02139e8c);
    sp0 = 0;
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    temp_r0 = M2C_FIELD(data_0213e580, s32 *, 0xF8);
    if (temp_r0 != 0) {
        func_02018af8(temp_r0 + 0x128, 0x11, &sp0, 2);
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_0203c540();
    func_020105d0((data_027e0000 * 0x34) + (s32) &data_027e0014);
    func_0204ef60();
}
