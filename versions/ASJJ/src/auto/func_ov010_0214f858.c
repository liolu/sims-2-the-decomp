/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Sub74 {
    u32 f0;
    u32 flags;
} Sub74;

typedef struct Sub34 {
    u32 f0;
    u32 flags;
    u8 pad8[0x74 - 0x8];
    Sub74 *p74;
} Sub34;

typedef struct Elem {
    Sub34 *p;
    u8 pad4[0x1f - 0x4];
    u8 vals[3];
    u8 b22;
    u8 pad23;
    u8 flags;
    u8 pad25[0x2c - 0x25];
} Elem;

typedef struct Group {
    u8 pad[0x1a];
    u8 total;
    u8 pad1b[0x28 - 0x1b];
} Group;

typedef struct Obj {
    u8 pad0[0x34];
    Elem e[6];
    u8 pad13c[0x140 - 0x13c];
    Group g[3];
} Obj;

void func_ov010_0214f858(Obj *o) {
    s32 i;
    s32 j;
    s32 k;

    for (i = 0; i < 6; i++) {
        o->e[i].b22 = 0;
        o->e[i].p->flags &= ~1;
        o->e[i].p->p74->flags &= ~1;
    }
    for (j = 0; j < 3; j++) {
        o->g[j].total = 0;
        for (k = 0; k < 6; k++) {
            if (!(o->e[k].flags & 1)) {
                o->g[j].total += o->e[k].vals[j];
            } else {
                o->e[k].vals[j] = 0;
            }
        }
    }
}
