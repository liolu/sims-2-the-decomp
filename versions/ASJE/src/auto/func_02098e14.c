/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x148];
    u8 id;
} Sim;
typedef struct {
    u8 pad0[4];
    Sim *sim;
    u8 pad8[8];
    u8 flags[1];
} O;

extern s32 data_027e0000;
extern u8 *data_0213e440;
extern u8 *data_0213e2f4;
void func_02018af8(void *a, s32 b, void *c, s32 d);
static inline void SetBit(u32 *bits, s32 n) {
    u32 mask     = 1 << (n & 31);
    bits[n >> 5] = (bits[n >> 5] & ~mask) | mask;
}

s32 func_02098e14(O *o, s32 i) {

    if (o->flags[i] == 1) {
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        func_02018af8(*(u8 **) (data_0213e440 + 0xf8) + 0x128, 0x21, o->sim, 2);
        SetBit((u32 *) (data_0213e2f4 + 4), o->sim->id);
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        return 6;
    } else {
        return 0;
    }
}
