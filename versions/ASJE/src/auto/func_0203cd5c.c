/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct BgCnt {
    u16 priority : 2;
    u16 charBase : 3;
    u16 unk5 : 2;
    u16 colorMode : 1;
    u16 screenBase : 5;
    u16 unk13 : 1;
    u16 size : 2;
} BgCnt;

typedef struct BgInfo {
    BgCnt cnt;
    u8 pad[0x72];
} BgInfo;

typedef struct Engine {
    u8 pad[8];
    BgInfo bg[4];
} Engine;

extern s32 data_027e0000;
extern Engine data_021392f8[];

void func_020fc91c(u16, void *, u32);
void func_02046170(s32, s32, void *, u32, s32);

static inline void FillChar(s32 bg, s32 tile, s32 color) {
    BgCnt *cnt = &data_021392f8[data_027e0000].bg[bg].cnt;
    u32 size   = (cnt->colorMode + 1) * 32;
    void *dest = (void *) (0x06000000 + data_027e0000 * 0x200000 + cnt->charBase * 0x4000 + size * tile);
    volatile u16 fill;
    u16 v;
    u16 f;
    if (cnt->colorMode == 0) {
        v = color & 0xf;
        f = (v << 12) + (v << 8) + (v << 4) + v;
    } else {
        v = color & 0xff;
        f = v + (v << 8);
    }
    fill = f;
    func_020fc91c(fill, dest, size);
}

void func_0203cd5c(s32 bg) {
    BgCnt *cnt = &data_021392f8[data_027e0000].bg[bg].cnt;
    u32 size;

    FillChar(bg, 0, 0);
    switch (cnt->size) {
        case 0:
            size = 0x800;
            break;
        case 1:
        case 2:
            size = 0x1000;
            break;
        case 3:
            size = 0x2000;
            break;
        default:
            size = 0;
            break;
    }
    func_02046170(3, 0, (void *) (0x06000000 + data_027e0000 * 0x200000 + cnt->screenBase * 0x800), size, 0x10);
}
