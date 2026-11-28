/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 off;
    u16 len;
    s32 src;
} Ent;

extern s32 data_027e0000;
extern u32 data_021392e0[];
extern Ent data_021393d0[][16];

s32 func_02044580(s32 a);

void func_0203f054(s32 a0, u16 a1, u16 a2) {
    s32 cur;
    u32 n;
    s32 r                     = func_02044580(a0);
    cur                       = data_027e0000;
    n                         = data_021392e0[cur];
    data_021393d0[cur][n].src = r;
    data_021393d0[cur][n].off = a1;
    data_021393d0[cur][n].len = a2;
    data_021392e0[cur]++;
}
