/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0201d0ac(void *);
void func_02026b70(void *);
void func_02027650(void *);
void func_0202693c(void *);
void func_02019cdc(void *);
void func_0201c990(void *);
void func_020286c4(void *);
void func_02018acc(void *);
void func_020117e8(void *, s32, void *, void *);
void func_02018888(void *, s32, void *, s32);
u8 *func_02014eac(void *, void *);
s32 func_0204c9f8(s32);
s32 func_0204cb3c(s32, s32);
s32 func_02081f10(void *, s32, s32);
s32 func_020d5544(s32, void *);
extern u8 *data_0213e2f4;
extern u8 *data_0213e440;

s32 func_0202f63c(u8 *arg0, s32 arg1, u8 *arg2) {
    u8 fr[0x1f4];
    s32 r4;
    s32 r5;
    s32 v;
    u8 *q;
    u8 *a;
    u8 *g;
    s32 *p;

    switch (arg1) {
        case 10:
            *(u8 **) (arg0 + 0x28) = arg2;
            func_0201d0ac(fr + 0x2c);
            func_02026b70(fr + 0x68);
            func_02027650(fr + 0x84);
            func_0202693c(fr + 0x1ac);
            func_02019cdc(fr + 0xa0);
            func_0201c990(fr + 0xd0);
            func_020286c4(fr + 0x104);
            if (arg2 == *(u8 **) (data_0213e440 + 0xf8)) {
                r5 = 1;
            } else {
                r5 = 0;
            }
            r4 = func_0204c9f8(2);
            if (r5 != 0) {
                *(s32 *) (fr + 0x78) = 0;
                func_020117e8(arg2, 0x26, fr + 0x68, arg0);
                if (r4 == 0) {
                    *(s32 *) (fr + 0x94) = *(s32 *) (arg0 + 4);
                    *(u16 *) (fr + 0x98) = 0x31;
                    func_02018888(arg2 + 0xe0, 0x21, fr + 0x84, 0);
                }
            }
            *(u8 **) (fr + 0x128) = arg0 + 0x2c;
            *(u16 *) (fr + 0x116) = 0x2a0;
            func_020117e8(arg2, 0x2d, fr + 0x104, 0);
            *(u16 *) (fr + 0x1c8) = 0;
            *(u16 *) (fr + 0x1dc) = 0;
            *(s32 *) (fr + 0x1d8) = 0;
            func_02018888(arg2 + 0xe0, 8, fr + 0x1ac, 0);
            *(s32 *) (fr + 0x94) = *(s32 *) (arg0 + 4);
            *(u16 *) (fr + 0x98) = 0x30;
            *(s32 *) (fr + 0x9c) = r4;
            func_02018888(arg2 + 0xe0, 0x21, fr + 0x84, 0);
            if (r5 != 0) {
                *(s32 *) (fr + 0x94) = *(s32 *) (arg0 + 4);
                *(u16 *) (fr + 0x98) = 0x2f;
                func_02018888(arg2 + 0xe0, 0x21, fr + 0x84, 0);
            }
            *(u16 *) (fr + 0x5c) = 0x52;
            *(s32 *) (fr + 0x48) = *(s32 *) (arg0 + 4);
            func_02018888(arg2 + 0xe0, 3, fr + 0x2c, 0);
            q                    = *(u8 **) (arg0 + 4);
            *(s32 *) (fr + 0xb0) = *(s32 *) (fr + 8) = *(s32 *) (q + 0x78);
            p                                        = (s32 *) (q + 0x78);
            *(s32 *) (fr + 0xb4) = *(s32 *) (fr + 0xc) = p[1];
            *(s32 *) (fr + 0xb8) = *(s32 *) (fr + 0x10) = p[2];
            func_020117e8(arg2, 0x10, fr + 0xa0, 0);
            q                    = func_02014eac(*(u8 **) (arg0 + 4), arg2 + 0x78);
            *(s32 *) (fr + 0xe0) = *(s32 *) (fr + 0x14) = *(s32 *) (q + 4);
            *(s32 *) (fr + 0xe4) = *(s32 *) (fr + 0x18) = *(s32 *) (q + 8);
            *(s32 *) (fr + 0xe8) = *(s32 *) (fr + 0x1c) = *(s32 *) (q + 0xc);
            *(s32 *) (fr + 0x0)                         = 0x1000;
            *(u8 *) (fr + 0xfe)                         = 1;
            *(s32 *) (fr + 0x4)                         = 0x1000;
            *(s32 *) (fr + 0xf4)                        = 0x1000;
            func_020117e8(arg2, 0x1b, fr + 0xd0, 0);
            func_02018acc(fr + 0x104);
            func_02018acc(fr + 0xd0);
            func_02018acc(fr + 0xa0);
            func_02018acc(fr + 0x1ac);
            func_02018acc(fr + 0x84);
            func_02018acc(fr + 0x68);
            func_02018acc(fr + 0x2c);
            return 0;
        case 0x2f:
            g                             = data_0213e2f4;
            q                             = g + 0x2f60;
            v                             = *(s32 *) (g + 0x2000 + 0xf60) - 1;
            *(s32 *) (g + 0x2000 + 0xf60) = v;
            v                             = *(s32 *) (g + 0x2000 + 0xf60);
            if (v > 0xf423f) {
                *(s32 *) q = 0xf423f;
            } else if (v < 0) {
                *(s32 *) q = 0;
            }
            *(s32 *) (q + 8) = *(s32 *) (q + 8) + 1;
            v                = *(s32 *) (q + 8);
            if (v > 0xf423f || v < 0) {
                *(s32 *) (q + 8) = 0xf423f;
            }
            return 0;
        case 0x30:
            func_02027650(fr + 0x12c);
            func_0201d0ac(fr + 0x148);
            arg0[0x30]            = (u8) (s32) arg2;
            *(s32 *) (fr + 0x13c) = *(s32 *) (arg0 + 0x28);
            *(u16 *) (fr + 0x140) = 2;
            func_020117e8(*(u8 **) (arg0 + 4), 0x21, fr + 0x12c, 0);
            func_020286c4(fr + 0x184);
            *(u16 *) (fr + 0x196) = 0x100;
            q                     = *(u8 **) (arg0 + 4);
            p                     = (s32 *) (q + 0x78);
            *(s32 *) (fr + 0x19c) = *(s32 *) (fr + 0x20) = *(s32 *) (q + 0x78);
            *(s32 *) (fr + 0x1a0) = *(s32 *) (fr + 0x24) = p[1];
            *(s32 *) (fr + 0x1a4) = *(s32 *) (fr + 0x28) = p[2];
            func_020117e8(*(u8 **) (arg0 + 4), 0x2d, fr + 0x184, 0);
            *(u16 *) (fr + 0x178) = arg0[0x30] + 0x8b;
            *(u8 *) (fr + 0x17c)  = 1;
            func_020117e8(*(u8 **) (arg0 + 4), 3, fr + 0x148, 0);
            *(s32 *) (arg0 + 0x2c) = func_020d5544(0xff, *(u8 **) (arg0 + 4) + 0x78);
            func_020d5544(0xfd, *(u8 **) (arg0 + 4) + 0x78);
            func_020d5544(0x15c, *(u8 **) (arg0 + 4) + 0x78);
            func_02018acc(fr + 0x184);
            func_02018acc(fr + 0x148);
            func_02018acc(fr + 0x12c);
            return 0;
        case 0x31:
            if (arg0[0x30] == 0) {
                r4 = func_0204cb3c(1, 0x14);
                if (func_02081f10(data_0213e2f4 + 0x21dc, 0x866, -1) != 0) {
                    r4 = r4 << 1;
                }
                g                             = data_0213e2f4;
                *(s32 *) (g + 0x2000 + 0xf60) = *(s32 *) (g + 0x2000 + 0xf60) + r4;
                v                             = *(s32 *) (g + 0x2000 + 0xf60);
                q                             = g + 0x2f60;
                if (v > 0xf423f) {
                    *(s32 *) q = 0xf423f;
                } else if (v < 0) {
                    *(s32 *) q = 0;
                }
                if (r4 > 0) {
                    q[0xc]           = 1;
                    *(s32 *) (q + 4) = *(s32 *) (q + 4) + r4;
                    v                = *(s32 *) (q + 4);
                    if (v > 0xf423f || v < 0) {
                        *(s32 *) (q + 4) = 0xf423f;
                    }
                } else {
                    *(s32 *) (q + 8) = *(s32 *) (q + 8) - r4;
                    v                = *(s32 *) (q + 8);
                    if (v > 0xf423f || v < 0) {
                        *(s32 *) (q + 8) = 0xf423f;
                    }
                }
                func_020d5544(0x172, *(u8 **) (arg0 + 4) + 0x78);
            }
            return 0;
        default:
            return 0;
    }
}
