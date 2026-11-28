/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Slot {
    u16 a;
    u16 b;
    u8 ref;
    u8 flags;
    u8 pad[2];
    void *ptr;
} Slot;

typedef struct Pal {
    s32 base;
    Slot slots[16];
} Pal;

typedef struct Obj {
    u8 pad0[4];
    u32 f4;
    u8 pad8[2];
    u16 fa;
    u16 fc;
    u8 pade[6];
    u32 c0 : 12;
    u32 pal : 4;
    u32 c16 : 16;
} Obj;

extern s32 data_027e0000;
extern Pal data_0213d568[];

s32 func_020497b0(u16 *p);
void func_0203f144(u16 c, s32 off, s32 n);

static inline void Release(Obj *o) {
    u32 i;

    if (o->f4 & 0x8000000) {
        o->f4 &= ~0x8000000;
        i = o->pal;
        if (data_0213d568[data_027e0000].slots[i].ref != 0) {
            data_0213d568[data_027e0000].slots[i].ref--;
            if (data_0213d568[data_027e0000].slots[i].ref == 0 && !(data_0213d568[data_027e0000].slots[i].flags & 2)) {
                data_0213d568[data_027e0000].slots[i].a = 0xff;
            }
        }
    }
}

void func_020499a8(Obj *o, u16 *p) {
    s32 r;

    if (o->f4 & 0x8000000) {
        Release(o);
    }
    r                                       = func_020497b0(p);
    o->pal                                  = r;
    data_0213d568[data_027e0000].slots[r].a = o->fa;
    data_0213d568[data_027e0000].slots[r].b = o->fc;
    data_0213d568[data_027e0000].slots[r].ref++;
    data_0213d568[data_027e0000].slots[r].ptr = p;
    func_0203f144(p[data_0213d568[data_027e0000].base], r << 4, 0x10);
    o->f4 |= 0x8000000;
}
