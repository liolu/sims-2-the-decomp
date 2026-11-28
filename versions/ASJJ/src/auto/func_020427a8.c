/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[6];
    u16 count;
} Entry;
typedef struct {
    u8 pad[0x24];
    u8 sub[4];
    Entry *entries;
} B;
typedef struct {
    u32 pad;
    B *b;
} A;
typedef struct {
    u8 idx;
    u8 mode;
    u8 flag;
} Cmd;
typedef struct {
    u32 pad;
    u32 flags;
    u8 x;
    u8 y;
} Obj;
typedef struct {
    u8 pad[0xf8];
    Obj *obj;
} G;

Obj *func_020525ec(Entry *, u16);
void func_020527b4(void *, u8, u8);
extern G *data_0213e0a8;

void func_020427a8(A *a, Cmd *cmd) {
    u16 count;
    u16 i;
    u8 idx;
    Obj *o;
    idx   = cmd->idx;
    count = a->b->entries[idx].count;
    for (i = 0; i < count; i++) {
        if (idx == 0xff) {
            o = data_0213e0a8->obj;
        } else {
            o = func_020525ec(&a->b->entries[idx], i);
        }
        if (o != NULL) {
            u8 mode = cmd->mode;
            u8 flag = cmd->flag;
            switch (mode) {
                case 0:
                    func_020527b4(a->b->sub, o->x, o->y);
                    break;
                case 1:
                    if (flag == 1) {
                        o->flags |= 1;
                    } else {
                        o->flags &= ~1;
                    }
                    break;
                case 2:
                    if (flag == 1) {
                        o->flags |= 4;
                    } else {
                        o->flags &= ~4;
                    }
                    break;
            }
        }
    }
}
