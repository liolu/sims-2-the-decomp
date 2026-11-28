/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Channel0203c42c {
    u8 unk0[0x20];
    s32 x;
    s32 y;
    u8 unk28[0x74 - 0x28];
} Channel0203c42c;

extern u8 data_021392f8;
extern s32 data_027e0000;

void func_0203c3b4(s32 index, s32 *x, s32 *y) {
    *x = ((Channel0203c42c *) ((u8 *) &data_021392f8 + data_027e0000 * 0x1D8 + 8))[index].x;
    *y = ((Channel0203c42c *) ((u8 *) &data_021392f8 + data_027e0000 * 0x1D8 + 8))[index].y;
}
