/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a;
    u8 pad2[6];
    u16 b;
    u8 padA[0x16];
} Blend;

extern Blend data_0213d7ec[];
extern s32 data_027e0000;

void func_0204ee78(s32 arg0, s32 arg1) {
    data_0213d7ec[data_027e0000].a                         = arg0 << 8;
    data_0213d7ec[data_027e0000].b                         = arg1 << 8;
    *(volatile u16 *) (0x04000052 + (data_027e0000 << 12)) = arg0 | (arg1 << 8);
}
