/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0000;
extern u8 data_0213af10;
void func_020494a0(s32 idx, u16 *v);

s32 func_020be6d8(u8 *arg0) {
    s32 i = 0;
    u8 *p = arg0;
    u16 v[3];

    do {
        u16 a  = *(u16 *) (p + 0x80);
        s32 t0 = *(s32 *) (arg0 + 0x5c);
        s32 hw = data_027e0000;
        u16 b;
        s32 t1;
        u8 *g;
        s32 t2;
        u16 c;
        u16 w;
        u8 byte;

        v[0] = (u16) ((a & 0xff00) | ((a + (t0 >> 12)) & 0xff));
        b    = *(u16 *) (p + 0x82);
        t1   = *(s32 *) (arg0 + 0x58);
        g    = (u8 *) &data_0213af10 + hw * 0x132c + 0x1000;
        v[1] = (u16) ((b & 0xfe00) | ((b + (t1 >> 12)) & 0x1ff));
        t2   = *(s32 *) (arg0 + 0x14);
        c    = *(u16 *) (p + 0x84);
        w    = *(u16 *) (arg0 + 0x46);
        byte = g[0x329];
        v[2] = (u16) (w + (c | ((((u32) (t2 << 16)) >> 28) << 12)));
        func_020494a0(byte, v);
        i++;
        p += 6;
    } while (i < 4);
    return 1;
}
