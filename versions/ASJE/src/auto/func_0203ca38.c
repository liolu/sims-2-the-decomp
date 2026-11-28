/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct BgCnt {
    u16 prio : 2;
    u16 charBase : 3;
    u16 b5 : 1;
    u16 mosaic : 1;
    u16 color : 1;
    u16 scrBase : 5;
    u16 b13 : 1;
    u16 size : 2;
} BgCnt;

typedef struct Bg {
    BgCnt cnt;
    u8 pad[0x74 - 2];
} Bg;

typedef struct Scr {
    u8 pad[8];
    Bg bg[4];
} Scr;

extern s32 data_027e0000;
extern Scr data_021392f8[];

typedef struct Fill {
    u16 v;
} Fill;

void func_020fc91c(u16 v, void *dst, u32 size);
void func_02046170(s32 bg, s32 tile, void *dst, u32 size, s32 n);

void func_0203ca38(s32 layer, s32 tile, s32 col) {
    Bg *bg;
    u32 size;
    u8 *dst;
    u16 v;
    volatile u16 f;
    u32 sz;

    bg   = &data_021392f8[data_027e0000].bg[layer];
    size = (bg->cnt.color + 1) * 32;
    dst  = (u8 *) (0x06000000 + data_027e0000 * 0x200000) + bg->cnt.charBase * 0x4000 + size * tile;
    if (bg->cnt.color == 0) {
        v = col & 0xf;
        v = (v << 12) + (v << 8) + (v << 4) + v;
    } else {
        v = col & 0xff;
        v = v + (v << 8);
    }
    f = v;
    func_020fc91c(f, dst, size);
    if (bg->cnt.color == 0) {
        tile = (u16) (tile | ((col >> 4) << 12));
    }
    switch (bg->cnt.size) {
        case 0:
            sz = 0x800;
            break;
        case 1:
        case 2:
            sz = 0x1000;
            break;
        case 3:
            sz = 0x2000;
            break;
        default:
            sz = 0;
            break;
    }
    func_02046170(3, tile, (u8 *) (0x06000000 + data_027e0000 * 0x200000) + bg->cnt.scrBase * 0x800, sz, 0x10);
}
