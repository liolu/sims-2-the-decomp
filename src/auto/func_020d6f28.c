/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 pad[0x5c];
    s16 x;
    s16 y;
} G;
extern G data_02142e48;
extern u8 data_02142848[];
void func_020d6f28(s16 *buf, s32 n) {
    s32 i;
    s32 v;
    s32 dx;
    s32 dy;

    dx = data_02142e48.x / 32;
    dy = data_02142e48.y / 32;
    for (i = n; i > 0; i--) {
        data_02142e48.x -= dx;
        data_02142e48.y -= dy;
        v = buf[0] + data_02142e48.x;
        if (v > 0x7fff) {
            v = 0x7fff;
        } else if (v < -0x8000) {
            v = -0x8000;
        }
        buf[0] = v;
        v      = buf[0x800] + data_02142e48.y;
        if (v > 0x7fff) {
            v = 0x7fff;
        } else if (v < -0x8000) {
            v = -0x8000;
        }
        buf[0x800] = v;
        buf++;
    }
    if (n == 0x20) {
        *(u32 *) (data_02142848 + 0x65c) = 0;
    }
}
