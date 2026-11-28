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

Obj *func_02052364(Entry *, u16);
void func_0205252c(void *, u8, u8);
extern G *data_0213e440;

void func_0204271c(A *a, Cmd *cmd) {
    u16 count;
    u16 i;
    u8 idx;
    Obj *o;
    idx   = cmd->idx;
    count = a->b->entries[idx].count;
    for (i = 0; i < count; i++) {
        if (idx == 0xff) {
            o = data_0213e440->obj;
        } else {
            o = func_02052364(&a->b->entries[idx], i);
        }
        if (o != NULL) {
            u8 mode = cmd->mode;
            u8 flag = cmd->flag;
            switch (mode) {
                case 0:
                    func_0205252c(a->b->sub, o->x, o->y);
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
