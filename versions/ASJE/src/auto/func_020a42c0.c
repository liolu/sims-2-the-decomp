/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct S {
    u8 pad0[0xa0c];
    u16 arr[0x300];
    s32 count;
    s32 f1010;
} S;

extern u8 *data_0213e2f4;
s32 func_0204c9f8(u16 n);
void func_020a3b0c(S *s, s32 a, s32 b);
s32 func_020645cc(u8 *p, s32 id);
void func_020a3cfc(S *s);
s32 func_02081f10(u8 *p, s32 a, s32 b);

void func_020a42c0(S *s) {
    s32 i;
    s32 j;
    u16 t;

    for (i = 0; i < s->count; i++) {
        j         = i + func_0204c9f8((u16) (s->count - i - 1));
        t         = s->arr[i];
        s->arr[i] = s->arr[j];
        s->arr[j] = t;
    }
    s->f1010 = 0;
    for (i = 0; i < 0x94; i++) {
        func_020a3b0c(s, i, -1);
    }
    if (func_020645cc(data_0213e2f4, 0x21) != 0) {
        func_020a3cfc(s);
    }
    if (func_02081f10(data_0213e2f4 + 0x21dc, 0x859, -1) != 0) {
        func_020a3b0c(s, 0x95, 6);
    }
}
