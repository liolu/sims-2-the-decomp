/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 priority : 2;
    u16 charBase : 3;
    u16 unk5 : 2;
    u16 colorMode : 1;
    u16 screenBase : 5;
    u16 ext : 1;
    u16 size : 2;
} BgCnt;

typedef struct {
    u32 scr0;
    u32 scr1;
    u32 chr;
    u32 xc;
    u32 x10;
    u8 pad[0x44 - 0x14];
} BgState;

extern s32 data_027e0000;
extern BgState data_0213db20[];

void func_02051b08(BgCnt cnt) {
    u32 base                          = (data_027e0000 << 21) + 0x6000000;
    u32 scr                           = base + (cnt.screenBase << 11);
    data_0213db20[data_027e0000].scr0 = scr;
    data_0213db20[data_027e0000].scr1 = scr;
    data_0213db20[data_027e0000].chr  = base + (cnt.charBase << 14);
    data_0213db20[data_027e0000].xc   = (cnt.colorMode + 1) << 5;
    data_0213db20[data_027e0000].x10  = cnt.colorMode;
}
