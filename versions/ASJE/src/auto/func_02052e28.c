/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0211e6a4;

typedef struct {
    void *a;
    u8 *b;
} Ent;
typedef struct {
    Ent *tbl;
    u16 u4;
    u16 cnt;
} Grp;

typedef void *(*Cb)(void *, u16, u16);

void func_02001944(s32);
void func_02001914(void);

static inline void sub(u8 *o) {
    u16 idx;
    Grp *g;
    u16 i;
    u8 *p;
    u8 *r;
    if (*(u16 *) (o + 0x18) == 0) {
        return;
    }
    if (o[0x23] == 1) {
        return;
    }
    idx = 0xFFFF;
    if (o[0x23] == 0) {
        o[0x23] = 1;
        idx     = 0;
    }
    if (idx >= *(u16 *) (o + 0x18)) {
        return;
    }
    g = (Grp *) (*(u8 **) (o + 4)) + idx;
    for (i = 0; i < g->cnt; i++) {
        if (g->tbl[i].a != 0) {
            continue;
        }
        p = g->tbl[i].b;
        if (*(s32 *) (&data_0211e6a4 + p[6] * 4) == 0) {
            continue;
        }
        func_02001944(0);
        g->tbl[i].a = ((Cb) (*(s32 *) (&data_0211e6a4 + p[6] * 4)))(p, g->u4 + 1, i + 1);
        func_02001914();
        r = (u8 *) g->tbl[i].a;
        if (r != NULL) {
            r[8]                    = (u8) g->u4;
            ((u8 *) g->tbl[i].a)[9] = (u8) i;
        }
    }
}

void func_02052e28(u8 *arg0) {
    sub(*(u8 **) (arg0 + 4));
    sub(*(u8 **) (arg0 + 4) + 0x24);
}
