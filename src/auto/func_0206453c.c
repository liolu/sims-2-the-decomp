/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a, b, c, d;
} V4;
typedef struct {
    s32 x, y, z;
} V3;

void func_020d9920(V4 *, V3 *);
void func_020d9868(V3 *, V3 *);

s32 func_0206453c(s32 dummy, V3 v) {
    V4 sp0;
    V3 sp10;
    V4 sp1c;
    V3 sp2c;
    s32 t;
    u32 ip;
    s32 var_r3;
    s32 lo;

    func_020d9920(&sp1c, &v);
    sp0 = sp1c;
    func_020d9868(&sp2c, &v);
    sp10 = sp2c;
    t    = sp0.a * 0x6F + (sp0.c * 0x29 + sp0.b * 3);
    ip   = ((u32) (t * 0xD)) & 7;
    if ((u32) sp10.x >= ip + 0x10 || (u32) sp10.x < ip) {
        var_r3 = 0xB7;
    } else if ((u32) sp10.x >= ((((u32) (t * 0x29)) & 7) + 8)) {
        var_r3 = 0xD3;
    } else {
        var_r3 = 0x3B;
    }
    lo = (u8) ((((var_r3 + t) * 0x10DCD + 0x11B5D) * 0x10DCD) + 0x35E2);
    if (lo < 0x26) {
        return 1;
    }
    return 0;
}
