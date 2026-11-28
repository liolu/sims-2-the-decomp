/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Slot02074bc0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Slot02074bc0;

typedef struct Unk02074bc0 {
    u8 unk0[0x10];
    Slot02074bc0 slots[5];
    u8 unk4C[4];
    s32 selected;
} Unk02074bc0;

void func_02074ba8(Unk02074bc0 *obj, s32 index) {
    obj->slots[index].unk4 = 0;
    obj->slots[index].unk0 = 0;
    obj->slots[index].unk8 = 0;
    if (index == obj->selected) {
        obj->selected = -1;
    }
}
