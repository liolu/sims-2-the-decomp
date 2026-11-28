/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213f7e4;
extern u8 *data_0213f7e8;

void func_020b6220(s32 tile, s32 x, s32 y) {
    s32 dy = y;
    s32 sy = 0;
    s32 sx;
    s32 dx;
    u8 *src;
    u8 *dst;
    if (y < 0) {
        sy -= y;
        dy = 0;
    }
    for (; dy < y + 8 && dy < 128; sy++, dy++) {
        dx = x;
        sx = 0;
        if (x < 0) {
            dx = 0;
            sx -= x;
        }
        src = data_0213f7e8 + tile * 64 + sy * 8 + sx;
        dst = data_0213f7e4 + dy * 128 + dx;
        for (; dx < x + 8 && dx < 128; dx++) {
            *dst++ = *src++;
        }
    }
}
