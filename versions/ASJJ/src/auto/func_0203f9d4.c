/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Mode0203f96c {
    s32 unk0;
    s32 state;
} Mode0203f96c;

typedef struct Sub0203f96c {
    u8 unk0[0x1C];
    u8 active;
} Sub0203f96c;

typedef struct Obj0203f96c {
    u8 unk0[0xA];
    u16 id;
    u16 kind;
    u16 type;
    u8 unk10[0x120];
    Sub0203f96c *sub;
} Obj0203f96c;

typedef struct Node0203f96c {
    Obj0203f96c *obj;
    struct Node0203f96c *next;
} Node0203f96c;

typedef struct Entry027e0014 {
    u8 unk0[0x34];
} Entry027e0014;

extern Entry027e0014 data_027e0014[];
extern s32 data_027e0000;
extern u8 *data_02139a84;
Node0203f96c *func_02045630(void *);
void func_02067994(Mode0203f96c *, Obj0203f96c *);

static inline s32 GetModeState(Mode0203f96c *mode) {
    if (mode != NULL) {
        return mode->state;
    }
    return 0x32;
}

void func_0203f9d4(s32 arg0, u8 *params) {
    Node0203f96c *node = func_02045630(&data_027e0014[data_027e0000]);
    if (node == NULL) {
        return;
    }
    do {
        Obj0203f96c *obj = node->obj;
        if (obj->type == 4 && obj->kind == 2 && params[0] == obj->id && obj->sub != NULL) {
            obj->sub->active = params[1] ? 1 : 0;
            if (obj->sub->active == 0 && GetModeState(*(Mode0203f96c **) (data_02139a84 + 0xDAC)) == 12) {
                func_02067994(*(Mode0203f96c **) (data_02139a84 + 0xDAC), obj);
            }
        }
        node = node->next;
    } while (node != NULL);
}
