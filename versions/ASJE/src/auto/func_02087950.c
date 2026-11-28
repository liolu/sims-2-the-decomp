/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_0213e2f4;
extern u32 data_027e1124;

M2C_UNK func_02046814();
M2C_UNK func_0200fbbc();
M2C_UNK func_0200ea74();
M2C_UNK func_0200eb18();
M2C_UNK func_0200aac4();
M2C_UNK func_02011090();

u8 *func_02087950(void) {
    volatile s32 sp[8];
    u32 r3v;
    u8 *r4;
    u32 r5;
    u32 t;
    s32 flag;
    enum {
        K4 = 0x4000
    } k4;
    enum {
        K5 = -0x14000
    } k5;

    r5 = *(u16 *) ((u8 *) data_0213e2f4 + 0x47D0);
    r4 = (u8 *) func_02046814(0x244, 3, 4, (u8 *) data_0213e2f4 + 0x4700);
    if (r4 != 0) {
        r4 = (u8 *) func_0200fbbc(r4, r5);
    }
    if (*(u32 *) data_0213e2f4 & 1) {
        func_0200ea74(r4, (u8 *) data_0213e2f4 + 0x47AC);
    } else {
        func_0200eb18(r4);
    }
    func_02011090(r4, func_0200aac4(r4, 1), 1, 1, 0);
    *(u32 *) (r4 + 4) = *(u32 *) (r4 + 4) | 4;
    r3v               = data_027e1124;
    sp[5]             = r3v;
    k4                = K4;
    k5                = K5;
    sp[6]             = k4;
    sp[7]             = k5;
    if (r3v != (t = *(u32 *) (r4 + 0x78), sp[0] = t, t) || k4 != (t = *(u32 *) (r4 + 0x7C), sp[1] = t, t) ||
        k5 != (t = *(u32 *) (r4 + 0x80), sp[2] = t, t)) {
        flag = 1;
    } else {
        flag = 0;
    }
    if (flag != 0) {
        *(u32 *) (r4 + 0x78) = sp[5];
        t                    = sp[6];
        sp[3]                = t;
        *(u32 *) (r4 + 0x7C) = t;
        t                    = sp[7];
        sp[4]                = t;
        *(u32 *) (r4 + 0x80) = t;
        r4[0xDC]             = 1;
    }
    return r4;
}
