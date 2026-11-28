/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Raw {
    u8 b[4];
} Raw;

typedef struct Ent {
    u32 lo : 18;
    u32 size : 2;
    u32 shape : 2;
    u32 hi : 10;
} Ent;

typedef struct Bank {
    u8 pad0[10];
    u8 na;
    u8 nb;
    u16 offs[1];
} Bank;

typedef struct Res {
    u8 pad0[2];
    u16 id;
} Res;

typedef struct Obj {
    u8 pad0[0x10];
    u32 lo : 13;
    u32 dbl : 1;
    u32 hi : 18;
    u8 pad14[7];
    u8 idx;
    u8 pad1c[4];
    Res *res;
} Obj;

Bank *func_0204456c(u16);
extern u8 data_0211e4b4[][4];

s32 func_02016468(Obj *o) {
    Bank *bank;
    u8 *cell;
    s32 count;
    s32 sum;
    u8 *src;
    u8 *d;
    Ent tmp;

    bank  = func_0204456c(o->res->id);
    cell  = (u8 *) bank->offs + bank->offs[o->idx];
    src   = (u8 *) (cell + 10 + bank->nb * 6 + bank->na * 2);
    sum   = 0;
    count = cell[0] & 0x1f;
    if (count != 0) {
        d = (u8 *) &tmp;
        for (; count != 0; count--) {
            d[0] = src[0];
            d[1] = src[1];
            d[2] = src[2];
            d[3] = src[3];
            src += 4;
            sum += data_0211e4b4[tmp.shape][tmp.size] << o->dbl;
        }
    }
    if (o->dbl == 1) {
        return sum << 5;
    }
    return ((sum + 1) & ~1) << 6;
}
