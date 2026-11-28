/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a, b;
} V2;
typedef struct {
    s32 a, b, c;
} V3;

void func_020f52a0(void *p);
void func_020f5680(void *p, void *q, s32 a, s32 b, s32 c);
void func_01ffba84(void *p, void *q);
void func_01ffb98c(void *out, void *p, void *q);

void func_0200c660(u8 *arg0, s32 dummy, u8 *arg2, u8 *arg3) {
    V3 t;
    s32 x0[2];
    s32 x1[2];
    s32 *pa;
    u8 *r4 = arg3;

    if (r4[0x64] == 1) {
        r4[0x64] = 0;
        func_020f52a0(r4 + 0x24);
        {
            V3 *q = (V3 *) (r4 + 0x18);
            func_020f5680(r4 + 0x24, r4 + 0x24, q->a, q->b, q->c);
        }
        func_01ffba84(r4 + 0x24, r4 + 0xc);
        *(s32 *) (r4 + 0x54) = *(s32 *) (r4 + 0x0);
        *(s32 *) (r4 + 0x58) = *(s32 *) (r4 + 0x4);
        *(s32 *) (r4 + 0x5c) = *(s32 *) (r4 + 0x8);
    }
    func_01ffb98c(&t, r4 + 0x24, arg2 + 4);
    *(s32 *) (arg0 + 4)   = t.a;
    ((V2 *) x0)->a        = t.b;
    *(s32 *) (arg0 + 8)   = ((V2 *) x0)->a;
    ((V2 *) x0)->b        = t.c;
    *(s32 *) (arg0 + 0xc) = ((V2 *) x0)->b;
}
