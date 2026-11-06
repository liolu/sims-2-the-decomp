/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One;
typedef struct {
    u16 a, b;
} U16Pair;
typedef struct {
    u8 a, b, c, d;
} U8x4;

void func_0203de9c(U16One, u16, s32, s32, s32, s32, s32, U16Pair, U8x4, s32);
void func_0203cdd4(s32);
void func_0203d15c(s32, U16One);
extern u8 data_ov017_0214c4ac[];

void func_ov017_0214b36c(u8 *p) {
    U16Pair pr1;
    U8x4 q1;
    U16Pair pr2;
    U8x4 q2;
    U16Pair pr3;
    U8x4 q3;
    U16Pair pr4;
    U8x4 q4;
    U16Pair pr5;
    U8x4 q5;
    s32 sum;
    s32 d;
    u32 n;
    s8 *b;
    s8 *a;
    s32 m;
    u8 *o;
    u8 *qq;
    u16 *hh;

    a   = *(s8 **) (p + 0x144);
    sum = 0;
    b   = a + 1;
    n   = 1;
    do {
        m = n - 1;
        d = *b - a[m];
        n += 1;
        sum += d * d;
        b += 1;
    } while (n < 0x1F40);
    if (sum >= 0x44AA20) {
        p[0x159] = 1;
    }
    if (p[0x159] != 0 && p[0x158] != 0) {
        if (p[0x15A] == 0) {
            p[0x15A] = p[0x15A] + 1;
        }
    }
    if (p[0x15A] == 0) {
        return;
    }
    switch (p[0x15A]) {
        case 1:
            o                = *(u8 **) (p + 0x14C);
            *(u32 *) (o + 4) = *(u32 *) (o + 4) & ~1;
            qq               = (u8 *) &q1;
            qq[0]            = 0;
            qq[1]            = 0;
            qq[2]            = 0;
            qq[3]            = 0;
            hh               = (u16 *) &pr1;
            hh[0]            = 0;
            hh[1]            = 0;
            func_0203de9c(*(U16One *) (data_ov017_0214c4ac + p[0x15B] * 2), 0x2133, 1, 0, 0x10, 0x10, 0, pr1, q1, 1);
            break;
        case 2:
            qq    = (u8 *) &q2;
            qq[0] = 0;
            qq[1] = 0;
            qq[2] = 0;
            qq[3] = 0;
            hh    = (u16 *) &pr2;
            hh[0] = 0;
            hh[1] = 0;
            func_0203de9c(*(U16One *) (data_ov017_0214c4ac + p[0x15B] * 2), 0x2134, 1, 0, 0x10, 0x10, 0, pr2, q2, 1);
            break;
        case 3:
            qq    = (u8 *) &q3;
            qq[0] = 0;
            qq[1] = 0;
            qq[2] = 0;
            qq[3] = 0;
            hh    = (u16 *) &pr3;
            hh[0] = 0;
            hh[1] = 0;
            func_0203de9c(*(U16One *) (data_ov017_0214c4ac + p[0x15B] * 2), 0x2135, 1, 0, 0x10, 0x10, 0, pr3, q3, 1);
            break;
        case 4:
            qq    = (u8 *) &q4;
            qq[0] = 0;
            qq[1] = 0;
            qq[2] = 0;
            qq[3] = 0;
            hh    = (u16 *) &pr4;
            hh[0] = 0;
            hh[1] = 0;
            func_0203de9c(*(U16One *) (data_ov017_0214c4ac + p[0x15B] * 2), 0x2136, 1, 0, 0x10, 0x10, 0, pr4, q4, 1);
            break;
        case 5:
            qq    = (u8 *) &q5;
            qq[0] = 0;
            qq[1] = 0;
            qq[2] = 0;
            qq[3] = 0;
            hh    = (u16 *) &pr5;
            hh[0] = 0;
            hh[1] = 0;
            func_0203de9c(*(U16One *) (data_ov017_0214c4ac + p[0x15B] * 2), 0x2137, 1, 0, 0x10, 0x10, 0, pr5, q5, 1);
            break;
        case 6:
            func_0203cdd4(0);
            p[0x15A] = 0;
            p[0x158] = 0;
            break;
        default:
            break;
    }
    if (p[0x158] == 0) {
        return;
    }
    func_0203d15c(0, *(U16One *) (data_ov017_0214c4ac + p[0x15B] * 2));
    p[0x15B] = (p[0x15B] == 0);
    p[0x15A] = p[0x15A] + 1;
}
