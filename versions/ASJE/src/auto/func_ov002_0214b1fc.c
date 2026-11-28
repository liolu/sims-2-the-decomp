/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;
typedef struct {
    s32 a;
    s32 b;
} V;

extern u8 data_ov002_0214bfa8[];
extern u8 data_ov002_0214bfaa[];
extern u8 data_ov002_0214bfac[];
extern u8 data_ov002_0214bfae[];
extern u8 data_ov002_0214bfb0[];
extern u8 data_ov002_0214bfb2[];
extern u8 data_ov002_0214bfb4[];
extern u8 data_ov002_0214bfb6[];
extern u8 data_ov002_0214bfb8[];
extern u8 data_ov002_0214bfba[];
extern u8 data_ov002_0214bfbc[];

s32 func_0208af88(s32);
void func_02016f40(u8 *, s32, s32, W, s32, s32);

void func_ov002_0214b1fc(u8 *arg0) {
    V v1;
    V v2;
    V v3;
    V v4;
    V v5;
    V v6;
    s32 off;

    arg0[0x26C] = 1;
    switch (*(s32 *) (arg0 + 0x260)) {
        case 0x30:
            *(s32 *) (arg0 + 0x3C) = 0x16D;
            *(s32 *) (arg0 + 0x40) = 0x16E;
            *(s32 *) (arg0 + 0x44) = 0x16F;
            *(s32 *) (arg0 + 0x48) = 0x170;
            *(s32 *) (arg0 + 0x4C) = 0x171;
            *(s32 *) (arg0 + 0x50) = 0x172;
            break;
        case 0x29:
            *(s32 *) (arg0 + 0x3C) = 0x171;
            *(s32 *) (arg0 + 0x40) = 0x172;
            *(s32 *) (arg0 + 0x44) = 0x179;
            *(s32 *) (arg0 + 0x48) = 0x17A;
            *(s32 *) (arg0 + 0x4C) = 0x17B;
            *(s32 *) (arg0 + 0x50) = 0x17C;
            break;
        case 0x2F:
            *(s32 *) (arg0 + 0x3C) = 0x173;
            *(s32 *) (arg0 + 0x40) = 0x174;
            *(s32 *) (arg0 + 0x44) = 0x175;
            *(s32 *) (arg0 + 0x48) = 0x177;
            *(s32 *) (arg0 + 0x4C) = 0x176;
            *(s32 *) (arg0 + 0x50) = 0x178;
            break;
        case 0x2E:
            *(s32 *) (arg0 + 0x3C) = 0x171;
            *(s32 *) (arg0 + 0x40) = 0x172;
            *(s32 *) (arg0 + 0x44) = 0x179;
            *(s32 *) (arg0 + 0x48) = 0x17D;
            *(s32 *) (arg0 + 0x4C) = 0x17E;
            *(s32 *) (arg0 + 0x50) = 0x17F;
            break;
    }
    off  = arg0[0x26C] * 0x18;
    v1.b = *(s16 *) (data_ov002_0214bfaa + off) << 12;
    v1.a = *(s16 *) (data_ov002_0214bfa8 + off) << 12;
    func_02016f40(arg0 + 0x24, 1, func_0208af88(*(s32 *) (arg0 + 0x3C)), *(W *) &v1, v1.b, 0);
    off  = arg0[0x26C] * 0x18;
    v2.b = *(s16 *) (data_ov002_0214bfae + off) << 12;
    v2.a = *(s16 *) (data_ov002_0214bfac + off) << 12;
    func_02016f40(arg0 + 0x28, 2, func_0208af88(*(s32 *) (arg0 + 0x40)), *(W *) &v2, v2.b, 0);
    off  = arg0[0x26C] * 0x18;
    v3.b = *(s16 *) (data_ov002_0214bfb2 + off) << 12;
    v3.a = *(s16 *) (data_ov002_0214bfb0 + off) << 12;
    func_02016f40(arg0 + 0x2C, 3, func_0208af88(*(s32 *) (arg0 + 0x44)), *(W *) &v3, v3.b, 0);
    off  = arg0[0x26C] * 0x18;
    v4.b = *(s16 *) (data_ov002_0214bfb6 + off) << 12;
    v4.a = *(s16 *) (data_ov002_0214bfb4 + off) << 12;
    func_02016f40(arg0 + 0x30, 4, func_0208af88(*(s32 *) (arg0 + 0x48)), *(W *) &v4, v4.b, 0);
    off  = arg0[0x26C] * 0x18;
    v5.b = *(s16 *) (data_ov002_0214bfba + off) << 12;
    v5.a = *(s16 *) (data_ov002_0214bfb8 + off) << 12;
    func_02016f40(arg0 + 0x34, 5, func_0208af88(*(s32 *) (arg0 + 0x4C)), *(W *) &v5, v5.b, 0);
    off  = arg0[0x26C] * 0x18;
    v6.b = *(s16 *) (&data_ov002_0214bfbc[2] + off) << 12;
    v6.a = *(s16 *) (data_ov002_0214bfbc + off) << 12;
    func_02016f40(arg0 + 0x38, 6, func_0208af88(*(s32 *) (arg0 + 0x50)), *(W *) &v6, v6.b, 0);
    arg0[0x264] = 6;
}
