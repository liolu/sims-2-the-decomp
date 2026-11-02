/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139438;
extern u8 data_027e0000;

typedef struct {
    s32 v;
} Fx;

void func_0203bc50(s32 idx, Fx a1, Fx a2, Fx a3) {
    s32 v;
    u8 *t;
    u8 *o;
    v                  = *(s32 *) &data_027e0000;
    t                  = (u8 *) &data_02139438 + v * 472;
    o                  = t + 8 + idx * 116;
    *(s32 *) (o + 92)  = a1.v;
    *(s32 *) (o + 100) = a2.v;
    *(s32 *) (o + 108) = a3.v;
    *(s32 *) (o + 20) |= 64;
}
