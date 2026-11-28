/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02052578(void *, u8);
extern void func_02052788(void *, u8);

typedef struct {
    u8 pad[0x28];
    u16 ids[(0x215c - 0x28) / 2];
    s32 count;
} World;

extern World *data_0213e2f4;

typedef struct {
    s32 pad;
    u8 *p;
} Obj;

typedef struct {
    u8 id;
    u8 a1;
    u8 b1;
    u8 a2;
    u8 b2;
} E;

void func_0204058c(Obj *obj, E *e) {
    u8 a;
    s32 found;
    s32 i;
    World *g;
    u8 b;

    found = 0;
    g     = data_0213e2f4;
    a     = e->a2;
    b     = e->b2;
    for (i = 0; i < g->count; i++) {
        if (e->id == g->ids[i]) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        a = e->a1;
        b = e->b1;
    }
    func_02052578(obj->p + 0x24, a);
    func_02052788(obj->p + 0x24, b);
}
