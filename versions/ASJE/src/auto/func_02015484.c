/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Coord02015484 {
    s32 value;
} Coord02015484;

typedef struct Vec2_02015484 {
    s32 x;
    s32 y;
} Vec2_02015484;

typedef struct Unk02015484 {
    u8 unk0[0x30];
    Coord02015484 x;
    Coord02015484 y;
    s32 velX;
    s32 velY;
    s16 z;
    u16 timer;
} Unk02015484;

void func_02015578(Unk02015484 *, Coord02015484, Coord02015484, s32);

void func_02015484(Unk02015484 *obj) {
    volatile Vec2_02015484 vel;
    s32 delta;
    obj->timer--;
    delta = obj->velX;
    vel.x = delta;
    obj->x.value += delta;
    delta = obj->velY;
    vel.y = delta;
    obj->y.value += delta;
    func_02015578(obj, obj->x, obj->y, obj->z);
}
