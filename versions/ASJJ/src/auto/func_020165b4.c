/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct State020165bc {
    u8 current;
    u8 previous;
    u8 target;
    u8 requested;
} State020165bc;

typedef struct Unk020165bc {
    u8 unk0[4];
    u32 flags;
    u8 unk8[0x10];
    State020165bc state;
} Unk020165bc;

static inline void UpdateDirty(Unk020165bc *obj) {
    State020165bc *state = &obj->state;
    if (state->target != state->requested || (obj->flags & 0x80)) {
        obj->flags |= 0x80;
    }
}

void func_020165b4(Unk020165bc *obj, u32 requested) {
    if (obj->state.requested != requested || (obj->flags & 0x80)) {
        obj->state.requested = requested;
        obj->state.current   = obj->state.previous;
        UpdateDirty(obj);
    }
    obj->flags &= ~0x400000;
}
