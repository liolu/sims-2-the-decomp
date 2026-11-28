/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
} Vec2;
typedef struct {
    s16 a;
    s16 b;
    u16 c;
} Ent;
typedef struct {
    Ent e[(0x132c) / 6];
} Scr;

typedef struct {
    u32 pad0 : 8;
    u32 mode : 2;
    u32 pad1 : 22;
} Bits;

typedef struct {
    u8 pad[0x10];
    Bits bits;
    u8 pad2[0x30 - 0x14];
    Vec2 size;
    u8 pad3[0x40 - 0x38];
    u16 c;
} Obj;

extern s32 data_027e0000;
extern Scr data_0213c158[];

u16 func_02049488(void *);
s32 func_020493d8(void);
void func_0204946c(void *, s32);

void func_02015578(Obj *o, Vec2 v, u16 c) {
    volatile Vec2 t;
    s16 a;
    s32 idx;
    s16 b;

    t.x       = v.x;
    o->size.x = v.x;
    t.y       = v.y;
    o->size.y = v.y;
    o->c      = c;
    if (o->bits.mode == 1 || o->bits.mode == 3) {
        idx = func_02049488(&o->bits);
    } else {
        idx = func_020493d8();
        func_0204946c(&o->bits, idx);
    }
    a = 0x100000 / ((s32 *) &v)[0];
    b = 0x100000 / ((s32 *) &v)[1];
    if (a == 0) {
        a = 1;
    }
    if (b == 0) {
        b = 1;
    }
    data_0213c158[data_027e0000].e[idx].a = a;
    data_0213c158[data_027e0000].e[idx].b = b;
    data_0213c158[data_027e0000].e[idx].c = c;
    if (o->bits.mode != 1 && o->bits.mode != 3) {
        o->bits.mode = 1;
    }
}
