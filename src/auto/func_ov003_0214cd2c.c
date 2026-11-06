/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02051a50(s32 a, s32 b, s32 c);
void *func_02052258(s32 a);
void func_02051338(s32 a, s32 b, s32 c, void *d, s32 e);
s32 func_ov003_0214a50c(void *a, s32 b, u8 *c, s32 d, s32 e, s32 f);
s32 func_0200ea1c(s32 a);
void func_ov003_0214a410(u8 *a, s32 b);
void func_ov003_0214a3c0(u8 *a, s32 b);
s32 func_ov003_0214ca6c(u8 *a, s32 b, s32 c);
s32 func_ov003_0214c868(u8 *a);
s32 func_ov003_0214c3ac(u8 *a);
u8 *func_020480c4(s32 a, s32 b);
void func_02048128(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0204818c(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020165bc(s32 a, s32 b);
extern u8 data_ov003_02150ae4;
extern u8 data_02139fa4;

typedef struct {
    u8 b[16];
} B16;

void func_ov003_0214cd2c(u8 *arg0) {
    volatile s32 tmp[4];
    B16 buf;
    u8 *src;
    u8 *dst;
    s32 i;
    s32 r4;
    s32 r5;
    s32 k;
    s32 ka;
    s32 kb;
    u8 *o8;
    u8 *p1;
    u8 *p2;
    u8 *q;
    s32 px;
    s32 py;
    u8 b1;
    u8 b0;

    func_02051a50(3, 0, -1);
    if (*(u16 *) (*(u8 **) (arg0 + 4) + 0x74) == 6) {
        func_02051338(1, 0x96, 0xd, func_02052258(0x272), 1);
    } else {
        func_02051338(1, 0x96, 0xd, func_02052258(0x7e1), 1);
    }
    if (arg0[0x48] == 0) {
        r5  = 0;
        buf = *(B16 *) &data_ov003_02150ae4;
        r4  = func_ov003_0214a50c(*(void **) (arg0 + 4), 8, buf.b, 0x17, 0x17, 1);
        if (r4 != -1) {
            k = func_0200ea1c(*(s32 *) (*(u8 **) (arg0 + 4) + *(u16 *) (*(u8 **) (arg0 + 4) + 0x76) * 4 + 0x48));
            if (r4 != k) {
                func_ov003_0214a410(*(u8 **) (arg0 + 4), (u16) r4);
                r5                                                   = 1;
                px                                                   = buf.b[r4 * 2] << 12;
                tmp[0]                                               = px;
                tmp[2]                                               = px;
                *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0) + 0x50) = px;
                py                                                   = buf.b[r4 * 2 + 1] << 12;
                tmp[1]                                               = py;
                tmp[3]                                               = py;
                *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 8) + 0) + 0x54) = py;
            }
        }
        if (r5 == 0) {
            r5 = func_ov003_0214ca6c(arg0, 0, 0);
        }
        if (r5 == 0) {
            r5 = func_ov003_0214c868(arg0);
        }
        if (r5 == 0) {
            if (*(u16 *) (*(u8 **) (arg0 + 4) + 0x74) == 6) {
                func_ov003_0214c3ac(arg0);
            }
        }
    } else {
        arg0[0x49] = arg0[0x49] - 1;
        if (arg0[0x49] == 0) {
            if (arg0[0x48] == 2) {
                func_ov003_0214a410(*(u8 **) (arg0 + 4), *(u16 *) (arg0 + 0x46));
                func_ov003_0214a3c0(*(u8 **) (arg0 + 4), *(u16 *) (arg0 + 0x44));
            }
            q = func_020480c4(*(s32 *) &data_02139fa4, 0);
            func_02048128(*(s32 *) &data_02139fa4, 2, 0xf, *(s32 *) (q + 8), 0);
            func_0204818c(*(s32 *) &data_02139fa4, 0xc, 0, 0, 0);
        } else if (arg0[0x49] == 0xf) {
            k  = arg0[0x48] >> 1;
            o8 = *(u8 **) (arg0 + 8);
            ka = k + 8;
            p1 = *(u8 **) (o8 + ka * 4);
            kb = k + 10;
            *(u32 *) (p1 + 4) |= 1;
            o8 = *(u8 **) (arg0 + 8);
            p2 = *(u8 **) (o8 + kb * 4);
            *(u32 *) (p2 + 4) &= ~1;
        }
    }
    i  = 0;
    r5 = i;
    for (; i < 2; i++) {
        if (((u16 *) (arg0 + 0x40))[i] != 0) {
            ((u16 *) (arg0 + 0x40))[i] = ((u16 *) (arg0 + 0x40))[i] - 1;
            if (((u16 *) (arg0 + 0x40))[i] == 0) {
                func_020165bc(*(s32 *) (*(u8 **) (arg0 + 8) + (i + 2) * 4), r5);
            }
        }
    }
}
