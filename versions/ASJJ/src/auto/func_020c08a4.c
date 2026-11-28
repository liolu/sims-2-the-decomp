/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Word020c0d98 {
    s32 value;
} Word020c0d98;

typedef struct Vec2_020c0d98 {
    s32 x;
    s32 y;
} Vec2_020c0d98;

void func_020c1884(s32, Word020c0d98, Word020c0d98);

void func_020c08a4(u8 *obj) {
    Word020c0d98 dx;
    Word020c0d98 dy;
    volatile Vec2_020c0d98 pos;
    s32 posY = *(s32 *) (obj + 0x84);
    s32 posX;
    pos.y    = posY;
    dy.value = *(s32 *) (obj + 0x7C) - posY;
    posX     = *(s32 *) (obj + 0x80);
    pos.x    = posX;
    dx.value = *(s32 *) (obj + 0x78) - posX;
    func_020c1884(*(s32 *) (obj + 0x90), dx, dy);
}
