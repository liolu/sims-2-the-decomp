/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern u8 data_021424d4;

M2C_UNK func_020d0620(s32, s32);

typedef struct {
    u8 m : 2;
    u8 rest : 6;
} MB;

void func_020d0974(s32 arg0) {
    u8 *entry;
    u8 *slot;
    u8 *base;

    base  = *(u8 **) &data_021424d4;
    entry = base + 0x3c + arg0 * 0x24;
    if (entry[8] == 0xFF) {
        return;
    }
    if (entry[1] == 0) {
        return;
    }
    slot = base + 0x93C + (entry[8] << 5);
    if (*(u32 *) slot > *(u32 *) (entry + 0xC)) {
        *(u32 *) slot = func_020d0620(*(u32 *) slot, -(s32) (entry[0x11] << 2));
        if (*(u32 *) slot < *(u32 *) (entry + 0xC)) {
            *(u32 *) slot = *(u32 *) (entry + 0xC);
        }
        ((MB *) (slot + 0x11))->m = ((MB *) (slot + 0x11))->m | 1;
    } else {
        if (*(u32 *) slot >= *(u32 *) (entry + 0xC)) {
            return;
        }
        *(u32 *) slot = func_020d0620(*(u32 *) slot, entry[0x11] << 2);
        if (*(u32 *) slot > *(u32 *) (entry + 0xC)) {
            *(u32 *) slot = *(u32 *) (entry + 0xC);
        }
        ((MB *) (slot + 0x11))->m = ((MB *) (slot + 0x11))->m | 1;
    }
}
