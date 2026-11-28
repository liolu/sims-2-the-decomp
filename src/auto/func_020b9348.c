/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct E {
    u16 id;
    u16 val;
    u16 pad;
} E;

typedef struct S8 {
    s32 a;
    u16 b;
} S8;

typedef struct O {
    u8 p0[4];
    u8 sub[0x58];
    u8 *res;
    u8 p60[8];
    E *ent;
    S8 f6c;
    S8 f74;
    S8 f7c;
    S8 arr[4];
    s32 fa4;
    s32 fa8;
    u16 b0 : 1;
    u16 b1 : 1;
    u16 b2 : 1;
    u16 b3 : 1;
    u16 b4 : 1;
    u16 b5 : 1;
    u16 b6 : 1;
    u16 b7 : 1;
    u16 rest : 8;
    u16 count;
    u16 cur;
    u16 last;
} O;

extern void func_020b8e94(void *, u16, void *, s32);
extern void func_020ee640(void *, s32);
extern void func_020b8e58(void *);
extern void func_020ee564(void *, s32);

static inline s32 Find(O *o, u32 id) {
    s32 i;
    for (i = 0; i < o->count; i++) {
        if (id == o->ent[i].id) {
            return i;
        }
    }
    return o->count;
}

void func_020b9348(O *o, u32 id, u8 a2, s32 a3, u8 a4) {
    E *ent;
    s32 i;
    u8 *res;
    s32 n;
    s32 k;

    ent = o->ent;
    if (ent == NULL) {
        return;
    }
    if (id == 0x74) {
        if (o->b5) {
            return;
        }
        for (i = 0; i < o->count; i++) {
            if (ent[i].id == 0x74) {
                res = o->res;
                func_020b8e94(&o->f7c, ent[i].val, res + *(s32 *) (res + *(u16 *) (res + 0xE) + 0xC), 0);
                func_020ee640(o->sub, o->f7c.a);
                o->b5 = 1;
                return;
            }
        }
        return;
    }
    if (id >= 0xC8 && id <= 0xCB) {
        i = Find(o, id);
        if ((u32) i >= (u32) o->count) {
            return;
        }
        res = o->res;
        k   = id - 0xC8;
        func_020b8e94(&o->arr[k], ent[i].val, res + *(s32 *) (res + *(u16 *) (res + 0xE) + 0xC), 0);
        func_020ee640(o->sub, o->arr[k].a);
        o->b7 = 1;
        return;
    }
    o->b2 = 1;
    o->b0 = 0;
    if (a3 == 0 && id == o->last && a4 == o->b3) {
        return;
    }
    if (o->b2 != 0) {
        if (o->b2 != 0) {
            if (o->b6 == 1) {
                if (o->f74.a != 0) {
                    func_020ee564(o->sub, o->f74.a);
                    func_020b8e58(&o->f74);
                }
            } else {
                if (o->f6c.a != 0) {
                    func_020ee564(o->sub, o->f6c.a);
                    func_020b8e58(&o->f6c);
                }
            }
            o->cur = 0xFFFF;
            o->b2  = 0;
            o->b0  = 1;
        }
    } else {
        if (o->f74.a != 0) {
            func_020ee564(o->sub, o->f74.a);
            func_020b8e58(&o->f74);
        }
    }
    o->cur = Find(o, id);
    if (o->cur >= o->count) {
        id     = 0;
        o->cur = id;
    }
    o->fa4  = 0;
    o->b0   = 0;
    o->b1   = a2;
    o->b3   = a4;
    o->last = id;
    if (o->b6 != 1 && o->f6c.a != 0) {
        func_020b8e58(&o->f6c);
    } else if (o->b6 == 1) {
        o->f74.a = o->f6c.a;
        o->f74.b = o->f6c.b;
    }
    res = o->res;
    func_020b8e94(&o->f6c, o->ent[o->cur].val, res + *(s32 *) (res + *(u16 *) (res + 0xE) + 0xC), 1);
    if (o->b6 == 1) {
        if (o->f74.a != o->f6c.a) {
            func_020ee640(o->sub, o->f6c.a);
        }
    } else {
        func_020ee640(o->sub, o->f6c.a);
    }
    o->b2 = 1;
}
