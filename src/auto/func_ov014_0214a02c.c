/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e434;
extern u8 data_ov014_0214b60c[];
extern u8 data_ov014_0214b610[];
s32 func_020733f0(u8 *);
void func_020509e8(s32, s32);
u8 *func_02052258(s32);
s32 func_02051338(s32, s32, s32, u8 *, s32);
void func_020745c4(s32 *, s32);
void func_02050af0(void *, s32);

void func_ov014_0214a02c(s32 unused, s32 arg1) {
    s32 sp4[4];
    s32 r5;
    s32 zero;
    s32 r4;
    s32 d;
    s32 m;

    func_020509e8(func_020733f0(data_0213e434 + 0x41F8), 0);
    r4 = func_02051338(arg1, 0x5B, 0x21, func_02052258(0x7D6), 0);
    func_020745c4(sp4, *(s32 *) (data_0213e434 + 0x84));
    func_02050af0(sp4, 0);
    r5 = func_02051338(r4, 0x5B, 0x41, func_02052258(0x7D7), 0);
    if (*(s32 *) (data_0213e434 + 0x2000 + 0xF64) == 0xF423F) {
        func_02050af0(func_02052258(0x7DB), 0);
    } else {
        func_020745c4(sp4, *(s32 *) (data_0213e434 + 0x2000 + 0xF64));
        func_02050af0(sp4, 0);
    }
    r5 = func_02051338(r5, 0x5B, 0x61, func_02052258(0x7D8), zero = 0);
    if (*(s32 *) (data_0213e434 + 0x2000 + 0xF68) == 0xF423F) {
        func_02050af0(func_02052258(0x7DB), zero);
    } else {
        func_020745c4(sp4, *(s32 *) (data_0213e434 + 0x2000 + 0xF68));
        func_02050af0(sp4, zero);
    }
    r4 = func_02051338(r5, 0x5B, 0x81, func_02052258(0x7D9), zero);
    d  = *(s32 *) (data_0213e434 + 0x2000 + 0xF64) - *(s32 *) (data_0213e434 + 0x2000 + 0xF68);
    m  = -1;
    if (d < 0) {
        d = d * m;
        func_02050af0(data_ov014_0214b60c, 0);
    } else {
        func_02050af0(data_ov014_0214b610, 0);
    }
    func_020745c4(sp4, d);
    func_02050af0(sp4, 1);
    func_02051338(r4, 0x5B, 0xA1, func_02052258(0x7DA), 0);
}
