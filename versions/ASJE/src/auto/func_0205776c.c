/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0000;

typedef struct {
    u8 pad0[0x548];
    s32 y;
    u8 pad54c[0x558 - 0x54c];
    u16 tiles[32][32];
    u8 pad[0xd98 - 0x558 - 0x800];
    s32 screen;
    u32 tile;
    s32 pal;
} O;

void func_0205776c(O *o) {
    int n;
    int i, j, k;
    n = ((0xc0 - o->y) >> 3) + 1;
    if (n > 32) {
        n = 32;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < 32; j++) {
            ((u16 *) (data_027e0000 * 0x200000 + 0x6000000 + o->screen * 0x800))[j + i * 32] = o->tiles[i][j];
        }
    }
    for (; n < 32; n++) {
        for (k = 0; k < 32; k++) {
            ((u16 *) (data_027e0000 * 0x200000 + 0x6000000 + o->screen * 0x800))[k + n * 32] = o->tile | (o->pal << 12);
        }
    }
}
