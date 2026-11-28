/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e2f4;
extern u8 data_ov014_0214b4cc[];
extern u8 data_ov014_0214b4d0[];
s32 func_02073378(u8 *);
void func_02050970(s32, s32);
u8 *func_020521e0(s32);
s32 func_020512c0(s32, s32, s32, u8 *, s32);
void func_0207454c(s32 *, s32);
void func_02050a78(void *, s32);

void func_ov014_02149eec(s32 unused, s32 arg1) {
    s32 sp4[4];
    s32 r5;
    s32 zero;
    s32 r4;
    s32 d;
    s32 m;

    func_02050970(func_02073378(data_0213e2f4 + 0x41F8), 0);
    r4 = func_020512c0(arg1, 0x5B, 0x21, func_020521e0(0x7D6), 0);
    func_0207454c(sp4, *(s32 *) (data_0213e2f4 + 0x84));
    func_02050a78(sp4, 0);
    r5 = func_020512c0(r4, 0x5B, 0x41, func_020521e0(0x7D7), 0);
    if (*(s32 *) (data_0213e2f4 + 0x2000 + 0xF64) == 0xF423F) {
        func_02050a78(func_020521e0(0x7DB), 0);
    } else {
        func_0207454c(sp4, *(s32 *) (data_0213e2f4 + 0x2000 + 0xF64));
        func_02050a78(sp4, 0);
    }
    r5 = func_020512c0(r5, 0x5B, 0x61, func_020521e0(0x7D8), zero = 0);
    if (*(s32 *) (data_0213e2f4 + 0x2000 + 0xF68) == 0xF423F) {
        func_02050a78(func_020521e0(0x7DB), zero);
    } else {
        func_0207454c(sp4, *(s32 *) (data_0213e2f4 + 0x2000 + 0xF68));
        func_02050a78(sp4, zero);
    }
    r4 = func_020512c0(r5, 0x5B, 0x81, func_020521e0(0x7D9), zero);
    d  = *(s32 *) (data_0213e2f4 + 0x2000 + 0xF64) - *(s32 *) (data_0213e2f4 + 0x2000 + 0xF68);
    m  = -1;
    if (d < 0) {
        d = d * m;
        func_02050a78(data_ov014_0214b4cc, 0);
    } else {
        func_02050a78(data_ov014_0214b4d0, 0);
    }
    func_0207454c(sp4, d);
    func_02050a78(sp4, 1);
    func_020512c0(r4, 0x5B, 0xA1, func_020521e0(0x7DA), 0);
}
