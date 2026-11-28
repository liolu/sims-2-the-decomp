/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02122870[];
void func_02042924(u32, u32, s32);

typedef struct {
    u8 *str;
    s32 x;
} Line;

typedef struct {
    u32 font;
    u32 f4;
    Line *lines;
    u8 pad[0xe];
    u16 count;
    u8 pad2[6];
    u8 flag;
} T;

void func_02052788(T *t, u32 idx) {
    u32 font;
    u8 *s;
    u8 n;
    s32 x;
    u8 k;
    u8 c;
    u16 i;
    Line *l;

    if (t->count == 0) {
        return;
    }
    if (t->flag == 1 && idx <= 1) {
        return;
    }
    i = idx - 1;
    if (t->flag == 0) {
        t->flag = 1;
        i       = 0;
    }
    if (i >= t->count) {
        return;
    }
    font = t->font;
    l    = &t->lines[i];
    s    = l->str;
    n    = *s++;
    x    = l->x;
    for (k = 0; k < n; k++) {
        c = *s++;
        func_02042924(c, font, x);
        x += data_02122870[c];
    }
}
