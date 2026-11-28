/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Rec {
    u8 a;
    u8 b;
    u8 c;
    u8 d;
} Rec;

typedef struct List {
    u16 n;
    Rec r[1];
} List;

typedef struct Ent {
    u8 f0;
    u8 f1;
    u8 f2;
    u8 f3;
    u8 f4;
    u8 f5;
    u8 f6;
    u8 f7;
} Ent;

extern s32 data_027e0000;
extern Ent data_021396f0[][12];
extern s32 data_021396b8[];
extern u32 data_021396c8[];

void func_0203e970(List *l) {
    s32 i;
    for (i = 0; i < l->n; i++) {
        Rec *r = &l->r[i];
        s32 d  = r->d;
        s32 c  = r->c;
        s32 b  = r->b;
        s32 a  = r->a;
        Ent *e = &data_021396f0[data_027e0000][data_021396b8[data_027e0000]++];
        e->f0  = d;
        e->f1  = c;
        e->f2  = 0;
        e->f3  = (u8) a;
        e->f4  = (u8) a;
        e->f5  = a + b - 1;
        e->f6  = (u8) b;
        e->f7  = (u8) b;
        data_021396c8[data_027e0000] |= 1 << i;
    }
}
