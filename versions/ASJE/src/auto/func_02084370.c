/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a, b;
} U16Pair;
typedef struct {
    u8 a, b, c, d;
} U8Quad;
typedef struct {
    s32 f0;
    u16 f4;
    u16 f6;
} Ent;

extern s32 data_027e0000;
extern Ent data_0213e430[];

extern U16Pair func_0203e1c4(s32, s32, s32, s32, s32, s32, U16Pair, U8Quad, s32);

void func_02084370(s32 a0, s32 a1, u16 a2, s32 a3) {
    U16Pair sp14;
    U8Quad sp18;
    u8 *pb;
    u16 *ph;

    data_0213e430[data_027e0000].f0 = a0;
    data_0213e430[data_027e0000].f4 = a2;
    data_0213e430[data_027e0000].f6 = a3;
    if (a1 == 0xffff) {
        return;
    }
    pb    = (u8 *) &sp18;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &sp14;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e1c4(data_0213e430[data_027e0000].f0, a1, data_0213e430[data_027e0000].f4, a3 << 4, a3 << 4, 0, sp14, sp18, 2);
}
