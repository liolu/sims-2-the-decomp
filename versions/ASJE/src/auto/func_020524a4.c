/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Item0205251c {
    u8 unk0[4];
    u32 flags;
} Item0205251c;

typedef struct Slot0205251c {
    Item0205251c *item;
    s32 unk4;
} Slot0205251c;

typedef struct Group0205251c {
    Slot0205251c *slots;
    u16 unk4;
    u16 count;
} Group0205251c;

typedef struct Unk0205251c {
    s32 unk0;
    Group0205251c *groups;
} Unk0205251c;

void func_020524a4(Unk0205251c *obj, s32 index) {
    Group0205251c *group = &obj->groups[index];
    u16 i;
    for (i = 0; i < group->count; i++) {
        if (i != 0) {
            u16 prev           = i - 1;
            Item0205251c *item = group->slots[prev].item;
            if (item != NULL) {
                item->flags |= 0x82;
                group->slots[prev].item = NULL;
            }
        }
    }
}
