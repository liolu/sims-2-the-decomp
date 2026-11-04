/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02011090(void *, s32, s32, s32, s32);
M2C_UNK func_02011080(void *, s32, s32);
M2C_UNK func_020117e8(void *, s32, void *, void *);
M2C_UNK func_02088610(void *, void *, s32, s32, s32);
M2C_UNK func_0204ca70(s32);
M2C_UNK func_0201d124(void *);
s32 func_020827a4(void *, s32);
M2C_UNK func_020d5680(s32, void *);
M2C_UNK func_02018acc(void *);
extern u8 data_021309ec;
extern u8 data_0213e434;

void func_02027964(u8 *arg0) {
    u8 fr[0x3C];
    u8 *p;
    u8 r5;

    p = *(u8 **) (arg0 + 4);
    if (*(u16 *) (p + 0x1FE) != 0) {
        func_02011090(p, 0, 1, 1, 0);
    }
    if (*(s32 *) (arg0 + 0x28) != 0) {
        func_02011080(*(u8 **) (arg0 + 4), *(s32 *) (arg0 + 0x28), 0);
    }
    p = *(u8 **) (arg0 + 4);
    if (((u32) (*(u16 *) (p + 0x218) << 31) >> 31) == 1) {
        return;
    }
    func_02088610(p + 0x214, p, 2, 0x44, 0x3C);
    r5 = (u8) func_0204ca70(4);
    func_0201d124(fr);
    if (*(u8 *) &data_021309ec != 0) {
        p = *(u8 **) (arg0 + 4);
        func_020d5680(func_020827a4((u8 *) *(u8 **) &data_0213e434 + 0x21DC + *(u16 *) (p + 0xA) * 0x2C, 2), p + 0x78);
        *(u8 *) &data_021309ec = (*(u8 *) &data_021309ec == 0);
    } else {
        *(u8 *) &data_021309ec = (*(u8 *) &data_021309ec == 0);
    }
    switch (r5) {
        case 0:
            *(u16 *) (fr + 0x30) = 0xFF;
            fr[0x35]             = 1;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr, arg0);
            fr[0x35]             = 0;
            *(u16 *) (fr + 0x30) = 0xFE;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr, arg0);
            *(u16 *) (fr + 0x30) = 0xFD;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr, arg0);
            break;
        case 1:
            *(u16 *) (fr + 0x30) = 0x10F;
            fr[0x35]             = 1;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr, arg0);
            fr[0x35]             = 0;
            *(u16 *) (fr + 0x30) = 0x10E;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr, arg0);
            *(u16 *) (fr + 0x30) = 0x10D;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr, arg0);
            break;
        case 2:
            *(u16 *) (fr + 0x30) = 0x127;
            fr[0x35]             = 1;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr, arg0);
            fr[0x35]             = 0;
            *(u16 *) (fr + 0x30) = 0x126;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr, arg0);
            *(u16 *) (fr + 0x30) = 0x125;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr, arg0);
            break;
        case 3:
            *(u16 *) (fr + 0x30) = 0x103;
            fr[0x35]             = 1;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr, arg0);
            fr[0x35]             = 0;
            *(u16 *) (fr + 0x30) = 0x102;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr, arg0);
            *(u16 *) (fr + 0x30) = 0x101;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr, arg0);
            break;
    }
    func_02018acc(fr);
}
