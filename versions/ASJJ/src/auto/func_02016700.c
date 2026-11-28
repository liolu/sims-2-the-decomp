/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0203f054(u16, s32, s32);
void func_0203f1ac(u16, s32, s32);
extern s32 data_027e0000;
extern s32 data_027e0004;
typedef struct Q {
    u8 pad[4];
    u16 x4;
    u8 x6;
} Q;
typedef struct Sub {
    u8 a;
    u8 b;
    u8 c;
    u8 d;
} Sub;
typedef struct P {
    u8 pad0[4];
    u32 flags;
    u8 pad8[8];
    u32 pad10 : 13;
    u32 bit13 : 1;
    u32 pad10b : 18;
    u32 pad14 : 12;
    u32 pal : 4;
    u32 pad14b : 16;
    Sub sub;
    u8 pad1c[4];
    Q *q;
} P;
void func_02016700(P *p, Q *q) {
    p->sub.b = q->x6;
    if (p->q != q) {
        p->q = q;
        p->flags |= 0x80;
    }

    if (p->sub.d != 0 || (p->flags & 0x80)) {
        Sub *s;
        p->sub.d = 0;
        p->sub.a = p->sub.b;
        s        = &p->sub;
        if (s->c != s->d || (p->flags & 0x80)) {
            p->flags |= 0x80;
        }
    }

    p->flags &= ~0x400000;
    if (q->x4 == 0xFFFF) {
        return;
    }
    if (data_027e0004 & (0x20 << data_027e0000)) {
        if (p->bit13 == 1) {
            func_0203f1ac(q->x4, 0, 0x100);
            return;
        }
        func_0203f1ac(q->x4, p->pal << 4, 0x10);
        return;
    }
    if (p->bit13 == 1) {
        func_0203f054(q->x4, 0, 0x100);
        return;
    }
    func_0203f054(q->x4, p->pal << 4, 0x10);
}
