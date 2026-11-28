/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
s32 func_020f5d7c(s32, s32);
}

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 operator/(Fx32 b) const {
        return Fx32(func_020f5d7c(v, b.v));
    }
};

struct Vec2 {
    Fx32 x;
    Fx32 y;
};

struct Tile {
    u8 id;
    u8 pad[11];
};

struct Map {
    u8 pad[0xc];
    Tile tiles[(0x70c - 0xc) / 12];
    u8 pad2[0x70c - 0xc - ((0x70c - 0xc) / 12) * 12];
    u8 grid[24][32];
};

extern "C" s32 func_020a40ac(Map *o, Vec2 pos) {
    s32 row = (pos.y / Fx32(0x1b333)).v >> 12;
    s32 col = (pos.x / Fx32(0x1b333)).v >> 12;
    if (row < 0 || row >= 24 || col < 0 || col >= 32) {
        return -1;
    }
    return o->tiles[o->grid[row][col]].id;
}
