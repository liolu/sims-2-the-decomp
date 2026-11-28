/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct BgCnt_0203c9f4 {
    u16 priority : 2;
    u16 charBase : 3;
    u16 unk5 : 2;
    u16 colorMode : 1;
    u16 rest : 8;
} BgCnt_0203c9f4;
typedef struct BgInfo_0203c9f4 {
    BgCnt_0203c9f4 cnt;
    u8 pad[0x72];
} BgInfo_0203c9f4;
typedef struct Engine_0203c9f4 {
    u8 pad[8];
    BgInfo_0203c9f4 bg[4];
} Engine_0203c9f4;
typedef struct Fill_0203c9f4 {
    u16 v;
} Fill_0203c9f4;
extern s32 data_027e0000;
extern Engine_0203c9f4 data_021392f8[];
void func_020fc91c(u16, void *, u32);
void func_0203c97c(s32 bg, s32 tile, s32 color) {
    BgCnt_0203c9f4 *cnt = &data_021392f8[data_027e0000].bg[bg].cnt;
    u32 size            = (cnt->colorMode + 1) * 32;
    void *dest          = (void *) (0x06000000 + data_027e0000 * 0x200000 + cnt->charBase * 0x4000 + size * tile);
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
