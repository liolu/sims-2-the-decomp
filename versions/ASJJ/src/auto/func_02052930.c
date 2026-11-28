/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 *name;
    u8 *data;
} Ent;
typedef struct {
    u8 pad0[8];
    Ent *ents;
    u8 padc[0xE];
    u16 cnt;
} Obj;

extern s32 func_02111bfc(s32, s32, s32, s32, void *, void *);
extern void func_020525dc(void);
extern void func_020525d8(void);

void func_02052930(Obj *o, u8 *a1, u8 *a2) {
    u16 *tbl;
    u8 *q;
    u32 i;

    if (o->cnt == 0) {
        return;
    }
    o->ents = (Ent *) func_02111bfc(*(s32 *) (a1 + 0xC), o->cnt, 8, 8, (void *) func_020525dc, (void *) func_020525d8);
    *(s32 *) (a1 + 0xC) = *(s32 *) (a1 + 0xC) + (o->cnt * 8 + 8);
    tbl                 = (u16 *) (a2 + 0x10 + *(u16 *) (a2 + 8));
    i                   = 0;
    q                   = (u8 *) (tbl + o->cnt);
    if (o->cnt <= i) {
        return;
    }
    do {
        u8 *d   = (u8 *) tbl + tbl[i];
        Ent *e  = &o->ents[i];
        e->name = q;
        e->data = d;
        q += *q + 1;
        i++;
    } while (i < o->cnt);
}
