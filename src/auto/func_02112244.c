/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02112330(void *, s32, void *);

typedef struct {
    s32 p0;
    s32 p1;
    s32 p2;
    s32 n0;
    u8 b0;
    u8 b1;
    u8 b2;
    u8 pad0;
    s32 n1;
    u8 c0;
    u8 c1;
    u8 pad1[2];
    s32 n2;
    u8 d0;
    u8 d1;
} Blk2244;

s32 func_02112244(u8 *arg0, s32 arg1, s32 arg2) {
    Blk2244 blk;
    u8 *base;

    base = *(u8 **) arg0 - 8;
    if (*(s32 *) (base + 4) == 0) {
        return 0;
    }
    blk.p0 = (s32) arg0;
    blk.p1 = arg1;
    blk.p2 = arg2;
    blk.n0 = 0;
    blk.b0 = 0;
    blk.b1 = 0;
    blk.b2 = 0;
    blk.n1 = 0;
    blk.c0 = 0;
    blk.c1 = 0;
    blk.n2 = 0;
    blk.d0 = 0;
    blk.d1 = 1;
    func_02112330(arg0 + *(s32 *) base, *(s32 *) (base + 4), &blk);
    if (blk.n1 != 0 && blk.c0 != 0 && blk.c1 == 0) {
        return blk.n1;
    }
    if (blk.n0 != 0 && blk.b0 != 0 && blk.b2 != 0 && blk.b1 == 0) {
        return blk.n0;
    }
    return 0;
}
