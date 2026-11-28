/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One;
typedef struct {
    u16 a, b;
} H4;
typedef struct {
    u8 a, b, c, d;
} B4;
typedef struct {
    s32 v18;
    s32 v1c;
    s32 v20;
    s32 v24;
    H4 h28;
    B4 b2c;
    H4 h30;
    B4 b34;
} Fr;
extern s32 data_027e0000;
void func_0203d190(s32 a, U16One b);
void func_0203c32c(s32 a, s32 b, s32 c);
void func_0203ce4c(s32 a);
void func_0203cb90(s32 a, s32 b);
void func_0203cc88(u16 *p);
void func_0203de24(U16One a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, H4 h, B4 i, s32 j);
void func_0203e1c4(s32 a, s32 b, s32 c, s32 d, s32 e, s32 e2, H4 f, B4 g, s32 h);
void func_0203dda8(s32 a, s32 b, s32 c, s32 d);

void func_02067620(u8 *arg0, u16 arg1, u16 arg2) {
    Fr f;
    u16 *r5;
    s32 r4;
    s32 dc;
    s32 e0;
    u8 *q;
    u16 *w;

    *(u16 *) (arg0 + 0xD0) = arg1;
    *(u16 *) (arg0 + 0xD2) = arg2;
    switch (*(s32 *) (arg0 + 0xC4)) {
        case 0:
            func_0203d190(3, *(U16One *) (arg0 + 0xC0 + (*(u8 *) (arg0 + 0xE4)) * 2));
            func_0203c32c(3, (-*(s32 *) (arg0 + 0xD4)) << 16, (-*(s32 *) (arg0 + 0xD8)) << 16);
            func_0203ce4c(0x2000);
            *(volatile u16 *) 0x04001048 = 0x3f;
            *(volatile u16 *) 0x0400104a = 0x37;
            dc                           = *(s32 *) (arg0 + 0xDC);
            *(volatile u16 *) 0x04001040 = (u16) ((dc + 0x48) | (dc << 8));
            e0                           = *(s32 *) (arg0 + 0xE0);
            *(volatile u16 *) 0x04001044 = (u16) ((e0 + 0x58) | (e0 << 8));
            *(s32 *) (arg0 + 0xC4)       = 2;
            func_0203cb90(3, 1);
            *(u8 *) (arg0 + 0x108) = 0;
            if (*(u16 *) (arg0 + 0xD0) == 0xffff) {
                f.v18                  = 0;
                f.v20                  = 0;
                *(s32 *) (arg0 + 0xE8) = 0;
                f.v1c                  = 0x80;
                f.v24                  = 0x80;
                *(s32 *) (arg0 + 0xEC) = 0x80;
                r4                     = 1;
                *(u8 *) (arg0 + 0x108) = 1;
                *(s32 *) (arg0 + 0xF0) = 0;
                if (*(u8 *) (arg0 + 0xE4) == 0) {
                    r5 = (u16 *) (arg0 + 0xC2);
                    r4 = 0x79;
                } else {
                    r5 = (u16 *) (arg0 + 0xC0);
                }
                func_0203cc88(r5);
                q    = (u8 *) &f.b2c;
                q[0] = 0;
                q[1] = 0;
                q[2] = 0;
                q[3] = 0;
                w    = (u16 *) &f.h28;
                w[0] = 0;
                w[1] = 0;
                func_0203de24(*(U16One *) r5, 0x1a5a, r4, 0, 0, 0, 0, f.h28, f.b2c, 5);
                *(u16 *) (arg0 + 0xD0) = 0x1a5a;
                *(u16 *) (arg0 + 0xD2) = 0x1a5a;
            }
            func_0203cb90(3, 0);
            q    = (u8 *) &f.b34;
            q[0] = 0;
            q[1] = 0;
            q[2] = 0;
            q[3] = 0;
            w    = (u16 *) &f.h30;
            w[0] = 0;
            w[1] = 0;
            func_0203e1c4(3, *(u16 *) (arg0 + 0xD0), 1, 0x50, 0x50, 0xb0, f.h30, f.b34, 0);
            func_0203dda8((s32) ((u8 *) 0x5000000 + (*(s32 *) &data_027e0000 << 10)) + 0xa0, *(u16 *) (arg0 + 0xD2), 0x50,
                          0xb0);
            return;
        case 2:
            *(s32 *) (arg0 + 0xC4) = 3;
            *(s32 *) (arg0 + 0xC8) = 0;
            *(s32 *) (arg0 + 0xCC) = 4;
            return;
        case 1:
            *(s32 *) (arg0 + 0xC4) = 3;
            *(s32 *) (arg0 + 0xC8) = 0;
            *(s32 *) (arg0 + 0xCC) = 1;
        case 3:
        default:
            return;
    }
}
