/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct BgControl0203c954 {
    u16 priority : 2;
    u16 charBase : 3;
    u16 unk5 : 2;
    u16 colors256 : 1;
    u16 unk8 : 8;
} BgControl0203c954;

extern s32 data_027e0000;
void func_020fc91c(u16, void *, s32);

void func_0203c8dc(BgControl0203c954 *control, s32 tile, u16 palette) {
    u32 colors256 = control->colors256;
    u8 *base      = (u8 *) ((data_027e0000 << 21) + 0x06000000) + (control->charBase << 14);
    s32 size      = (colors256 + 1) << 5;
    u8 *dst       = base + size * tile;
    volatile u16 fill;
    if (!colors256) {
        u16 p   = palette & 0xF;
        palette = (p << 12) + (p << 8) + (p << 4) + p;
    } else {
        u16 p   = palette & 0xFF;
        palette = p + (p << 8);
    }
    fill = palette;
    func_020fc91c(fill, dst, size);
}
