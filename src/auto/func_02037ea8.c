/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Item {
    u8 pad0[4];
    s32 flags;
    u8 pad8[2];
    u16 h;
    u16 w;
} Item;

typedef struct Sub {
    u8 pad0[4];
    s32 f4;
    s32 f8;
    Item *item;
} Sub;

typedef struct Obj {
    u8 pad0[4];
    s32 id;
    u8 pad8[0x24];
    s32 saved;
    u8 pad30[4];
    Sub *sub;
} Obj;

typedef struct G {
    u8 pad0[0x264];
    s32 state;
    s32 prev;
} G;

Item *func_02086e18(s32, s32, s32, s32, s32, s32, s32);
void func_020bb50c(void);
s32 func_ov001_02149b8c(Item *);
extern G data_02139fb4;
extern s32 data_0213e580;

static inline void SetState(s32 s) {
    data_02139fb4.prev  = data_02139fb4.state;
    data_02139fb4.state = s;
    func_020bb50c();
}

s32 func_02037ea8(Obj *o, s32 arg1) {
    Item *item;
    volatile s32 scale;

    scale = 0x384000;
    item  = func_02086e18(data_0213e580, o->id, -1, -1, 0x384000, -1, 1);
    if (arg1 == 0 && o->sub != NULL) {
        if (data_02139fb4.state != 5 && item != NULL && (item->flags & 1) == 1 && func_ov001_02149b8c(item) != 0) {
            o->sub->item = item;
            o->saved     = data_02139fb4.state;
            SetState(5);
            o->sub->f8 = o->sub->item->w;
            o->sub->f4 = o->sub->item->h;
        } else if (data_02139fb4.state == 5 && o->sub->item != NULL) {
            o->sub->item = NULL;
            SetState(o->saved);
            o->sub->f4 = -1;
        }
    } else if (o->sub != NULL) {
        o->sub->item = NULL;
        SetState(o->saved);
        o->sub->f4 = -1;
    }
    return 0;
}
