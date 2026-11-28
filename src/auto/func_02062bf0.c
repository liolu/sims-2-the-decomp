/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Elem {
    u8 pad[0x54];
    s32 count;
} Elem;

typedef struct Mgr {
    Elem elems[1];
} Mgr;

typedef struct Tbl {
    u8 pad[4];
} Tbl;

typedef struct Game {
    u8 pad0[0x21dc];
    Tbl tbl;
    u8 pad1[0x41f8 - 0x21e0];
    Mgr mgr;
} Game;

typedef struct Ctx {
    u8 pad[0xf4];
    s32 id;
} Ctx;

extern Game *data_0213e434;
extern Ctx *data_0213e580;

s32 *func_02077db4(Tbl *, s32);
s32 func_02073f8c(s32);
s32 func_0204cbb4(s32, s32);
s32 func_020739d4(Mgr *, s32, s32);

void func_02062bf0(s32 id) {
    s32 idx;
    s32 cur;
    s32 n;
    Elem *e;

    idx = func_02073f8c(*func_02077db4(&data_0213e434->tbl, id));
    e   = &data_0213e434->mgr.elems[idx];
    cur = data_0213e580->id;
    n   = 5;

    if (cur == *func_02077db4(&data_0213e434->tbl, id)) {
        return;
    }
    if (e->count == 0) {
        return;
    }
    while (n--) {
        if (func_020739d4(&data_0213e434->mgr, idx, func_0204cbb4(0, e->count - 1))) {
            return;
        }
    }
}
