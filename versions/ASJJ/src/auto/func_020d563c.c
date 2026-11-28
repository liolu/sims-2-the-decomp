/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk021424f8 {
    u8 unk0[0xB];
    volatile u8 flags;
} Unk021424f8;

typedef struct Unk02142e48 {
    u8 unk0[0x54];
    u16 unk54;
} Unk02142e48;

typedef struct Unk02142848 {
    u8 unk0[0xC];
    u32 unkC;
} Unk02142848;

extern Unk021424f8 data_02142018;
extern Unk02142e48 data_02142968;
extern Unk02142848 data_02142368;
void func_020d855c(void);

void func_020d563c(void) {
    data_02142018.flags |= 0x80;
    data_02142968.unk54 |= 0x30;
    if (!(data_02142018.flags & 0x80)) {
        return;
    }
    if ((data_02142018.flags & 0x40) && !(data_02142368.unkC & 0xC)) {
        func_020d855c();
    }
    data_02142018.flags &= ~0xC0;
}
