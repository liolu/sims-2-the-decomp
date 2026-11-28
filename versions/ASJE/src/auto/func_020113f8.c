/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139e64;
extern u8 data_027e1ec8;
typedef struct {
    u8 pad[0xfc];
    u32 f;
} G1;
extern G1 data_027e1e0c;

void func_020f0864(u32, const u32 *, u32);
void func_020eea34(void *);
void func_020eea5c(void *);
void func_020f5a58(void *, void *, s32, s32, s32);
void func_020ee974(s32, s32, s32, s32, s32, s32);
void func_020eea84(void);
void func_020f0a60(void);
void func_01ffba84();
void func_020f5678();
void func_020f56a4();

static inline u8 *ylink(u8 *r3) {
    s32 off = *(volatile u16 *) (r3 + 0xe);
    u8 *p   = r3 + off;
    return r3 + *(volatile s32 *) (p + 0xc);
}

void func_020113f8(u8 *arg0) {
    u8 fr[0x28];
    u8 *r3;
    u8 *y;
    u8 *p;
    s32 v;
    s32 r0;
    s32 *q;
    s32 *w;

    r0 = *(s32 *) &data_02139e64;
    r0 = *(s32 *) (r0 + 0xda8);
    if (r0 != 0) {
        r0 = *(s32 *) (r0 + 4);
    } else {
        r0 = 0x32;
    }
    if (r0 != 2) {
        return;
    }
    if (*(u16 *) (arg0 + 0xc) == 3) {
        return;
    }
    if (*(u16 *) (arg0 + 0xc) == 1) {
        return;
    }
    r3                   = *(u8 **) (arg0 + 0x1a8);
    y                    = ylink(r3);
    *(s16 *) (fr + 0x12) = *(s16 *) (y + 0x32);
    y                    = ylink(r3);
    *(s16 *) (fr + 0x14) = *(s16 *) (y + 0x34);
    y                    = ylink(r3);
    *(s16 *) (fr + 0x16) = *(s16 *) (y + 0x36);
    y                    = ylink(r3);
    *(s16 *) (fr + 0xc)  = *(s16 *) (y + 0x2c);
    y                    = ylink(r3);
    *(s16 *) (fr + 0xe)  = *(s16 *) (y + 0x2e);
    y                    = ylink(r3);
    *(s16 *) (fr + 0x10) = *(s16 *) (y + 0x30);
    *(s32 *) (fr)        = 3;
    func_020f0864(0x10, (const u32 *) (fr), 1);
    func_020f0864(0x15, 0, 0);
    *(s32 *) (fr + 0x4) = 2;
    func_020f0864(0x10, (const u32 *) (fr + 0x4), 1);
    p                    = *(u8 **) (arg0 + 0x1a8);
    y                    = ylink(p);
    v                    = *(s32 *) (y + 0x38);
    *(s32 *) (fr + 0x18) = v;
    *(s32 *) (fr + 0x1c) = v;
    *(s32 *) (fr + 0x20) = v;
    func_020eea34(fr + 0x18);
    func_020eea5c(arg0 + 0x78);
    if (*(u8 *) (arg0 + 0xdc) == 1) {
        *(u8 *) (arg0 + 0xdc) = 0;
        func_020f5678(arg0 + 0x9c);
        q = (s32 *) (arg0 + 0x90);
        func_020f5a58(arg0 + 0x9c, arg0 + 0x9c, q[0], q[1], q[2]);
        func_01ffba84(arg0 + 0x9c, arg0 + 0x84);
        w                      = (s32 *) (arg0 + 0x78);
        *(s32 *) (arg0 + 0xcc) = w[0];
        *(s32 *) (arg0 + 0xd0) = w[1];
        *(s32 *) (arg0 + 0xd4) = w[2];
    }
    func_020f56a4(arg0 + 0x9c, &data_027e1ec8);
    data_027e1e0c.f = data_027e1e0c.f & ~0xa4;
    func_020ee974(1, 0, 3, 0, 0, 0x3000);
    *(s32 *) (fr + 0x8) = 0;
    func_020f0864(0x40, (const u32 *) (fr + 0x8), 1);
    func_020f0864(0x41, 0, 0);
    func_020eea84();
    func_020f0a60();
    *(volatile u32 *) 0x040005c0 = *(u32 *) (fr + 0xc);
    *(volatile u32 *) 0x040005c0 = *(u32 *) (fr + 0x10);
    *(volatile u32 *) 0x040005c0 = *(u32 *) (fr + 0x14);
    *(u8 *) (arg0 + 0x20d)       = 1;
    *(u8 *) (arg0 + 0x20e)       = 1;
}
