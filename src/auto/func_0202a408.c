/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 a, b, c;
} V3;

void func_0202a408(V3 *arg0, V3 *arg1) {
    volatile u32 sp0[4];
    u32 t;

    t       = arg1->a;
    sp0[0]  = t;
    arg0->a = t;
    t       = arg1->b;
    sp0[1]  = t;
    arg0->b = t;
    t       = arg1->c;
    sp0[2]  = t;
    arg0->c = t;
}
