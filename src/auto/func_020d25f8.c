/* compiler: 1.2/sp2p3 -thumb */
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef int s32;

extern u8 *data_021424d4;
extern u32 *data_02136bac;
extern u8 data_02142548[];

void func_020d25f8(s32 arg0) {
    u8 *e, *o, *q, *b, *a2, *A, *base, *sp8, *t, *r1;
    u8 idx;
    s32 f, k4, kc;
    u8 *g = data_021424d4;

    base              = g;
    e                 = base + 0x3c + arg0 * 0x24;
    o                 = base + 0x93c;
    k4                = e[8] << 5;
    q                 = o + k4;
    sp8               = *(u8 **) (g + 4);
    kc                = e[1] << 5;
    b                 = sp8 + kc;
    idx               = e[0];
    A                 = *(u8 **) g;
    a2                = A + (*(u8 **) (b + 0x10))[idx] * 0x24;
    q[4]              = idx;
    q[5]              = e[1];
    q[6]              = e[5];
    q[7]              = e[7];
    q[8]              = (*(u8 **) (b + 0xc))[e[0]];
    q[9]              = (*(u8 **) (b + 0x10))[e[0]];
    *(s8 *) (q + 0xa) = arg0;
    q[0x11]           = (q[0x11] & ~0xc) | ((sp8[kc] & 3) << 2);
    q[0x11]           = (q[0x11] & ~3) | 3;
    *(u32 *) (o + k4) = (*(u32 *) (a2 + 0x14) >> 1) * (data_02136bac[q[8]] >> 5) >> 10;
    t                 = *(u8 **) data_021424d4 + q[9] * 0x24;
    r1                = data_02142548 + e[8] * 0x18;
    *(u32 *) r1       = *(u32 *) (*(u8 **) data_021424d4 + q[9] * 0x24);
    *(s32 *) (r1 + 4) = 0;
    f                 = t[5];
    if (f & 0x20) {
        *(s32 *) (r1 + 0x10) = *(s32 *) t + *(s32 *) (t + 0x1c);
        *(s32 *) (r1 + 0x14) = *(s32 *) (t + 0x1c) - *(s32 *) (t + 0x18);
        return;
    }
    if (f & 0x10) {
        *(s32 *) (r1 + 0x10) = *(s32 *) t + *(s32 *) (t + 0x10);
        *(s32 *) (r1 + 0x14) = *(s32 *) (t + 0x10) - *(s32 *) (t + 0xc);
        return;
    }
    *(s32 *) (r1 + 0x10) = *(s32 *) t + *(s32 *) (t + 8);
    *(s32 *) (r1 + 0x14) = 0;
}
