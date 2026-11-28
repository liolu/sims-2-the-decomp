/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Item02019548 {
    u8 unk0[4];
    u32 flags;
} Item02019548;

typedef struct Group02019548 {
    u8 colors[0x38];
    s32 counts[7];
    s32 count;
} Group02019548;

typedef struct List02019548 {
    Group02019548 groups[8];
    u8 unk2C0[0x20];
    s32 current;
    Item02019548 *items[1];
} List02019548;

extern u8 *data_0213e2f4;
void func_02073bac(void *, s32);

static inline s32 FindItem(List02019548 *list, Item02019548 *item) {
    s32 i;
    for (i = 0; i < list->groups[list->current].count; i++) {
        if (list->items[i] == item) {
            return i;
        }
    }
    return -1;
}

void func_02019548(u8 *obj) {
    Item02019548 *item = *(Item02019548 **) (obj + 0x28);
    if (item == NULL) {
        item = *(Item02019548 **) (obj + 4);
    }
    item->flags |= 0x82;
    if (obj[0x2C] != 0) {
        List02019548 *list = (List02019548 *) (data_0213e2f4 + 0x41F8);
        s32 index          = FindItem(list, item);
        if (index >= 0) {
            func_02073bac(list, index);
        }
    }
    obj[0x13] = 1;
}
