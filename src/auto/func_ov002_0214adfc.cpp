/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 v;
} W;
typedef struct {
    u16 v[68];
} T68;
extern "C" {
extern s32 data_0213e434;
extern u8 data_ov002_0214c0e8;
extern u8 data_ov002_0214c0ea;
extern u8 data_ov002_0214c0ec;
extern u8 data_ov002_0214c0ee;
extern u8 data_ov002_0214c0f0;
extern u8 data_ov002_0214c0f2;
extern u8 data_ov002_0214c0f4;
extern u8 data_ov002_0214c0f6;
extern u8 data_ov002_0214c0f8;
extern u8 data_ov002_0214c0fa;
extern u8 data_ov002_0214c0fc;
extern u8 data_ov002_0214c1a8;

s32 func_0204cbb4(s32, s32);
void func_0204cc68(s32);
void func_02103110(s32 *, s32 *);
s32 func_02081f88(s32, s32, s32);
u8 *func_02081f00(s32, s32, s32);
s32 func_02064644(s32, s32);
s32 func_0208b000(s32);
void func_02016f40(u8 *, s32, s32, W, s32, s32);

void func_ov002_0214adfc(u8 *arg0) {
    s32 a38[4];
    s32 b48[3];
    T68 t;
    s32 x8[2];
    s32 x10[2];
    s32 x18[2];
    s32 x20[2];
    s32 x28[2];
    s32 x30[2];
    s32 sum;
    s32 v;
    u8 i;
    u32 z;
    u32 m;
    u8 k;
    u32 n;
    s32 j;
    s32 *gp;
    s32 off;
    u8 *q;

    arg0[0x26c] = 0;
    sum         = func_0204cbb4(0, 100000);
    sum += func_0204cbb4(0, 100000);
    sum += func_0204cbb4(0, 100000);
    sum += func_0204cbb4(0, 100000);
    func_02103110(a38, b48);
    func_0204cc68(a38[1] + (a38[2] + a38[0]));
    v = func_0204cbb4(0, 9);
    if (v % 2 != 0) {
        v -= 1;
    }
    *(s32 *) (arg0 + 0x3c) = v + 0xa5;
    *(s32 *) (arg0 + 0x40) = func_0204cbb4(0, 7) + 0xbb;
    v                      = func_0204cbb4(0, 11);
    if (v % 2 != 0) {
        v -= 1;
    }
    *(s32 *) (arg0 + 0x44) = v + 0xf4;
    v                      = func_0204cbb4(0, 11);
    if (v % 2 != 0) {
        v -= 1;
    }
    *(s32 *) (arg0 + 0x48) = v + 0x10c;
    *(s32 *) (arg0 + 0x4c) = func_0204cbb4(0, 5) + 0x124;
    *(s32 *) (arg0 + 0x50) = func_0204cbb4(0, 5) + 0x8e;
    t                      = *(T68 *) &data_ov002_0214c1a8;
    n                      = 0;
    if (t.v[0] != 0x1a1) {
        do {
            n = (u16) (n + 1);
        } while (t.v[n] != 0x1a1);
    }
    m = (u16) (n - 1);
    i = 6;
    z = 0;
    do {
        v                   = t.v[func_0204cbb4(z, m)];
        q                   = arg0 + i * 4;
        *(s32 *) (q + 0x3c) = v;
        k                   = z;
        if (i > z) {
            do {
                if (*(s32 *) (q + 0x3c) == *(s32 *) (arg0 + k * 4 + 0x3c)) {
                    i = (u8) (i - 1);
                    break;
                }
                k = (u8) (k + 1);
            } while (k < i);
        }
        i = (u8) (i + 1);
    } while (i < 12);
    if (func_02081f88(data_0213e434 + 0x21dc, 0x86d, -1) != 0) {
        *(s32 *) (arg0 + 0x54) = *(u16 *) (func_02081f00(data_0213e434 + 0x21dc, 0x86d, -1) + 0x3c) + 0x3b;
    }

    j = 0;
    do {
        if (((u16 *) data_0213e434)[j + 0x23d0] != 0) {
            if (func_02064644(data_0213e434, 0x20) != 0 || ((u16 *) data_0213e434)[j + 0x23d0] != 0x8d) {
                ((s32 *) (arg0 + 0x20c))[j] = ((s32 *) (arg0 + 0x3c))[j];
                ((s32 *) (arg0 + 0x3c))[j]  = ((u16 *) data_0213e434)[j + 0x23d0];
            }
        }
        j += 1;
    } while (j < 2);

    off   = arg0[0x26c] * 0x18;
    x8[1] = *(s16 *) (&data_ov002_0214c0ea + off) << 12;
    x8[0] = *(s16 *) (&data_ov002_0214c0e8 + off) << 12;
    func_02016f40(arg0 + 0x24, 1, func_0208b000(*(s32 *) (arg0 + 0x3c)), *(W *) x8, x8[1], 0);
    off    = arg0[0x26c] * 0x18;
    x10[1] = *(s16 *) (&data_ov002_0214c0ee + off) << 12;
    x10[0] = *(s16 *) (&data_ov002_0214c0ec + off) << 12;
    func_02016f40(arg0 + 0x28, 2, func_0208b000(*(s32 *) (arg0 + 0x40)), *(W *) x10, x10[1], 0);
    off    = arg0[0x26c] * 0x18;
    x18[1] = *(s16 *) (&data_ov002_0214c0f2 + off) << 12;
    x18[0] = *(s16 *) (&data_ov002_0214c0f0 + off) << 12;
    func_02016f40(arg0 + 0x2c, 3, func_0208b000(*(s32 *) (arg0 + 0x44)), *(W *) x18, x18[1], 0);
    off    = arg0[0x26c] * 0x18;
    x20[1] = *(s16 *) (&data_ov002_0214c0f6 + off) << 12;
    x20[0] = *(s16 *) (&data_ov002_0214c0f4 + off) << 12;
    func_02016f40(arg0 + 0x30, 4, func_0208b000(*(s32 *) (arg0 + 0x48)), *(W *) x20, x20[1], 0);
    off    = arg0[0x26c] * 0x18;
    x28[1] = *(s16 *) (&data_ov002_0214c0fa + off) << 12;
    x28[0] = *(s16 *) (&data_ov002_0214c0f8 + off) << 12;
    func_02016f40(arg0 + 0x34, 5, func_0208b000(*(s32 *) (arg0 + 0x4c)), *(W *) x28, x28[1], 0);
    off    = arg0[0x26c] * 0x18;
    x30[1] = *(s16 *) (&data_ov002_0214c0fc + 2 + off) << 12;
    x30[0] = *(s16 *) (&data_ov002_0214c0fc + off) << 12;
    func_02016f40(arg0 + 0x38, 6, func_0208b000(*(s32 *) (arg0 + 0x50)), *(W *) x30, x30[1], 0);
    arg0[0x264] = 12;
    func_0204cc68(sum);
}
}
