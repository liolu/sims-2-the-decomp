/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct V {
    virtual void f0();
    virtual void f1();
};

struct Obj {
    u8 pad0[0xa];
    u16 page;
    u8 padc[0x130 - 0xc];
    V *p130;
};

struct Ent {
    u8 v;
    u8 pad[3];
};

struct Grp {
    Ent e[21];
    s32 count;
};

struct Mgr {
    Grp grp[8];
    u8 pad2c0[0x20];
    s32 cur;
    Obj *list[1];
    s32 Find(Obj *o) {
        s32 i;
        for (i = 0; i < grp[cur].count; i++) {
            if (list[i] == o) {
                return i;
            }
        }
        return -1;
    }
};

struct Game {
    u8 pad[0x41f8];
    Mgr mgr;
};

extern "C" {
extern Game *data_0213e434;
void func_02011e04(Obj *, s32);

void func_02011cdc(Obj *o, u16 page, s32 mode) {
    s32 i;
    Mgr *m;
    if (mode == 1) {
        if (((o->page - page) & 1) == 0) {
            if (o->p130 != 0) {
                o->p130->f1();
            }
            o->p130 = 0;
            o->page++;
            func_02011e04(o, 0);
        }
    } else {
        if (((o->page - page) & 1) != 0) {
            if (o->p130 != 0) {
                o->p130->f1();
            }
            o->p130 = 0;
            o->page--;
            func_02011e04(o, 0);
        }
    }
    if (data_0213e434->mgr.cur == -1) {
        return;
    }
    m = &data_0213e434->mgr;
    for (i = 0; i < m->grp[m->cur].count; i++) {
        if (m->list[i] == o) {
            goto found;
        }
    }
    i = -1;
found:
    if (i != -1) {
        m->grp[m->cur].e[i].v = o->page;
    }
}
}
