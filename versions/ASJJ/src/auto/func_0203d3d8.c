/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x, y, w, h;
} R4;
typedef struct {
    u8 pad[0x18];
    R4 a;
    R4 b;
    u8 pad2[0x74 - 0x38];
} E;
typedef struct {
    u8 pad[8];
    E e[4];
} G;

G *func_0203d3d8(G *g) {
    E *e = g->e;
    do {
        e->a.x = 0;
        e->a.y = 0;
        e->a.w = 0;
        e->a.h = 0;
        e->b.x = 0;
        e->b.y = 0;
        e->b.w = 0;
        e->b.h = 0;
        e++;
    } while (e != g->e + 4);
    return g;
}
