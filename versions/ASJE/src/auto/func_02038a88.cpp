/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Vec3_02038b00 {
    s32 x;
    s32 y;
    s32 z;
} Vec3_02038b00;
typedef struct Vec2_02038b00 {
    s32 x;
    s32 y;
} Vec2_02038b00;
typedef struct Params02038b00 {
    u8 unk0[0x10];
    Vec3_02038b00 pos;
    u8 unk1C[8];
    s32 scale;
    u8 unk28[6];
    u8 flag;
    u8 unk2F[9];
} Params02038b00;
extern "C" u8 *func_02014eac(s32, void *);
extern "C" void func_02038b20(void *, s32);
extern "C" void func_0201c990(Params02038b00 *);
extern "C" void func_020117e8(s32, s32, Params02038b00 *, void *);
extern "C" void func_02018acc(void *);
extern "C" void func_02038a88(u8 *o) {
    volatile Vec2_02038b00 scaleCopy;
    volatile Vec3_02038b00 posCopy;
    Params02038b00 params;
    u8 *entry;
    s32 v;
    entry = func_02014eac(*(s32 *) (o + 0x5C), *(u8 **) (o + 4) + 0x78);
    func_02038b20(o, *(s16 *) (entry + 0x10));
    func_0201c990(&params);
    v            = *(s32 *) (entry + 4);
    posCopy.x    = v;
    params.pos.x = v;
    v            = *(s32 *) (entry + 8);
    posCopy.y    = v;
    params.pos.y = v;
    v            = *(s32 *) (entry + 0xC);
    posCopy.z    = v;
    params.pos.z = v;
    scaleCopy.x  = 0x2000;
    scaleCopy.y  = 0x2000;
    params.scale = 0x2000;
    params.flag  = 1;
    func_020117e8(*(s32 *) (o + 4), 0x1B, &params, o);
    func_02018acc(&params);
}
