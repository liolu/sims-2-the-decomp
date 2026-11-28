/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    volatile s32 a0, a1;
    volatile s32 v1[3];
    volatile s32 v2[3];
    u8 A[0x34];
    u8 B[0x3c];
    u8 C[0x34];
} Fr;

extern s32 data_0213e2f4;
void func_0201c990(u8 *a);
s32 func_0204c8b0(s32 a);
void func_02082834(u8 *a, u8 b, s32 c);
void *func_0201d0ac(u8 *a);
void *func_02019cdc(u8 *a);
void func_020117e8(s32 a, s32 b, u8 *c, u8 *d);
s32 func_0200aac4(s32 a, s32 b);
void func_02011090(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02018acc(u8 *a);

void func_0201e7a8(u8 *arg0) {
    Fr f;
    u8 *s;
    u32 *v;
    u32 t;

    func_0201c990(f.A);
    if (func_0204c8b0(0x19) != 0) {
        func_02082834((u8 *) data_0213e2f4 + 0x21DC + *(u16 *) (*(u8 **) (arg0 + 4) + 0xA) * 0x2C, 1, 0);
    }
    s                              = *(u8 **) (arg0 + 0x44);
    v                              = (u32 *) (s + 0x78);
    t                              = v[0];
    f.v1[0]                        = t;
    *(volatile s32 *) (f.A + 0x10) = t;
    t                              = v[1];
    f.v1[1]                        = t;
    *(volatile s32 *) (f.A + 0x14) = t;
    t                              = v[2];
    f.v1[2]                        = t;
    *(volatile s32 *) (f.A + 0x18) = t;
    f.a0                           = 0xA000;
    f.a1                           = 0xA000;
    *(volatile s32 *) (f.A + 0x24) = 0xA000;
    func_0201d0ac(f.B);
    func_02019cdc(f.C);
    s                              = *(u8 **) (arg0 + 0x44);
    v                              = (u32 *) (s + 0x78);
    t                              = v[0];
    f.v2[0]                        = t;
    *(volatile s32 *) (f.C + 0x10) = t;
    t                              = v[1];
    f.v2[1]                        = t;
    *(volatile s32 *) (f.C + 0x14) = t;
    t                              = v[2];
    f.v2[2]                        = t;
    *(volatile s32 *) (f.C + 0x18) = t;
    *(volatile u16 *) (f.B + 0x30) = 0x128;
    func_020117e8(*(s32 *) (arg0 + 4), 3, f.B, arg0);
    func_020117e8(*(s32 *) (arg0 + 4), 0x10, f.C, arg0);
    func_020117e8(*(s32 *) (arg0 + 4), 0x1B, f.A, arg0);
    func_02011090(*(s32 *) (arg0 + 4), func_0200aac4(*(s32 *) (arg0 + 4), 0), 0, 1, 0);
    func_02018acc(f.C);
    func_02018acc(f.B);
    func_02018acc(f.A);
}
