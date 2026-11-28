/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct F {
    u16 a : 2;
    u16 b : 1;
    u16 rest : 13;
} F;
typedef struct O {
    u8 pad[0xac];
    F f;
    u8 padae[0xb4 - 0xae];
    u16 q[5];
    u8 be;
    u8 bf;
} O;
void func_020b9280(O *, u16, s32, s32, s32);
void func_020b912c(O *o, u16 v) {
    o->q[(o->be + o->bf) % 5] = v;
    o->bf++;
    if (o->f.b) {
        return;
    }
    func_020b9280(o, v, 0, 1, 0);
}
