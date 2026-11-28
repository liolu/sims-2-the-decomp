/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Slot {
    u8 id;
    u8 pad[7];
} Slot;

typedef struct Ent {
    u8 pad[0x10];
    s32 state;
    u8 pad2[0x2c - 0x14];
} Ent;

typedef struct W {
    Ent ent[1];
    u8 pad[0x9e8 - 0x2c];
    Slot slot[5];
} W;

s32 func_0204cbb4(s32, s32);

u8 func_0207bf4c(W *w, s32 self) {
    u8 count;
    u8 found;
    u8 ret;
    u8 i;
    u8 id;
    u8 n;
    u8 j;
    u8 k;
    u8 id2;

    count = 0;
    found = 0;
    ret   = 0x3F;
    for (i = 0; i < 5; i++) {
        id = w->slot[i].id;
        if (id != 0x3F && w->ent[id].state == 5 && self != id) {
            found = id;
            count++;
        }
    }
    if (count > 1) {
        n = func_0204cbb4(0, 0xC);
        j = 0;
        for (k = 0; k < n; k++) {
            id2 = w->slot[j].id;
            if (id2 == 0x3F || self == id2) {
                k--;
            } else {
                found = id2;
            }
            j++;
            if (j >= 5) {
                j = 0;
            }
        }
        return found;
    }
    if (count != 0) {
        ret = found;
    }
    return ret;
}
