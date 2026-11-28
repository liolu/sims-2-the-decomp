/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    u8 pad[0x1308];
    u8 used[0x20];
    u8 count;
    u8 pad2[3];
} S;
extern s32 data_027e0000;
extern S data_0213a9f0[];
void func_02049350(u16 i) {
    s32 cur = data_027e0000;
    s32 off = cur * sizeof(S);
    S *s;
    u8 *c;
    data_0213a9f0[cur].used[i] = 0;
    if (i != data_0213a9f0[cur].count - 1) {
        return;
    }
    s = (S *) ((u8 *) data_0213a9f0 + off);
    c = &s->count;
    while (*c != 0 && s->used[i] == 0) {
        (*c)--;
        i--;
    }
}
