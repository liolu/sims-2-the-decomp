/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02016708();
extern u8 data_02127624[];
extern s32 data_02127648[];
extern u8 data_021276e4[];
extern u8 data_02127708[];
extern M2C_UNK data_02127740;

void func_020be6d8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    u8 *p;
    s32 lr;
    s32 ip;
    s32 a;
    u32 w;
    s32 d0;
    s32 d1;

    *(s32 *) (arg0 + 0x78) = arg1 + 1;
    *(s32 *) (arg0 + 0x7C) = arg2 + 1;
    arg0[0x49] |= 1;
    arg0[0x4A] = 3;
    func_02016708(arg0, &data_02127740);
    p  = arg0;
    lr = arg1 - 1;
    ip = arg2 - 1;
    i  = 0;
    do {
        a = data_02127708[lr * 8 + i * 2];
        w = *(u32 *) (data_021276e4 + a * 12 + data_02127708[ip * 8 + i * 2 + 1] * 4);
        i++;
        *(u16 *) (p + 0x80) = (u16) w;
        *(u16 *) (p + 0x82) = (u16) (w >> 16);
        *(u16 *) (p + 0x84) = (u16) (((u32 *) data_02127624)[a] | 0xC00);
        p += 6;
    } while (i < 4);
    d0 = data_02127648[lr];
    *(u16 *) (arg0 + 0x88) += d0;
    *(u16 *) (arg0 + 0x88) |= 0x1000;
    d1 = data_02127648[ip];
    *(u16 *) (arg0 + 0x8C) += d1;
    *(u16 *) (arg0 + 0x8E) |= 0x2000;
    *(u16 *) (arg0 + 0x92) += d1;
    *(u16 *) (arg0 + 0x94) += d0;
    *(u16 *) (arg0 + 0x94) |= 0x3000;
}
