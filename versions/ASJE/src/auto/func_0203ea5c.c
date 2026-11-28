/* compiler: 1.2/sp2p3 -pragma "opt_strength_reduction off" */
#include "m2c.h"

typedef struct {
    u16 off;
    u16 len;
    void *src;
} Ent;
typedef struct {
    u16 *p0;
    u16 *p1;
} Pair;
typedef struct {
    u32 a;
    u32 b;
    Pair buf;
} Buf;

extern s32 data_027e0000;
extern u32 data_021396c0[];
extern Ent data_021397b0[][16];
extern Buf data_021396d0[];

void func_020fc934(void *src, void *dst, u32 len);
void func_020461e4(s32 a, void *b, void *c, u32 d, s32 e);

void func_0203ea5c(void) {
    u32 i;
    s32 cur;
    Pair *b;
    u16 off;
    u16 *dst;
    u32 len;

    cur = data_027e0000;
    for (i = 0; i < data_021396c0[cur]; i++) {
        b   = &data_021396d0[cur].buf;
        off = data_021397b0[cur][i].off;
        len = data_021397b0[cur][i].len * 2;
        dst = b->p0 + off;
        func_020fc934(data_021397b0[cur][i].src, dst, len);
        func_020461e4(3, dst, b->p1 + off, len, 0x10);
        cur = data_027e0000;
    }
    data_021396c0[cur] = 0;
}
