/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 flags;
    u8 a, b, c, d;
    s8 e, f, g, h;
    s16 i;
    s32 j, k;
    u16 l;
    u16 pad;
} Ent;
typedef struct {
    Ent e[12];
} Bank;

extern s32 data_027e0000;
extern s32 data_021392d0[];
extern Bank data_021394d0[];

s32 func_020445ec(u16);

u8 func_0203e914(s8 arg0, s16 arg1, u8 arg2, u8 arg3, s32 arg4, u16 arg5, s32 arg6) {
    Ent *e;
    s32 r;
    u32 v2, v3;
    s32 bank = data_027e0000;
    Bank *b  = &data_021394d0[bank];
    u8 i     = 0;

    do {
        if (!(b->e[i].flags & 1)) {
            data_021392d0[bank] = data_021392d0[bank] + 1;
            break;
        }
        i++;
    } while (i < 12);
    e        = &data_021394d0[bank].e[i];
    e->flags = arg4;
    v2       = arg2;
    e->a     = v2;
    e->b     = v2;
    v3       = arg3;
    e->c     = v3;
    e->d     = v3;
    e->e     = arg0;
    e->f     = arg0 + arg1 - 1;
    e->i     = arg1;
    e->g     = 0;
    e->h     = 0;
    r        = func_020445ec(arg5);
    r += arg6;
    e->l = arg5;
    e->j = r;
    e->k = r;
    return i;
}
