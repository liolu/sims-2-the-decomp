/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020daae4(u8 *, u8 *, s32, s32);
void func_020d9bc8(void *o, s32 a, s32 b, s32 c, s32 d, void *e, s32 f, s32 g, s32 h);

void func_020dac14(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    volatile s32 vs[6];
    s32 o[10];

    if (arg1[0x14] == 0) {
        func_020daae4(arg0, arg1, arg2, arg3);
        return;
    }
    if (*(s32 *) (arg1 + 4) == 0) {
        *(s32 *) arg0       = 0;
        *(s32 *) (arg0 + 4) = 0;
        *(s32 *) (arg0 + 8) = 0;
        return;
    }
    func_020d9bc8(o, *(s32 *) arg1, *(s32 *) (arg1 + 4), arg2, arg3, arg1 + 0x18, *(s32 *) (arg1 + 0xC), *(s32 *) (arg1 + 8),
                  *(s32 *) (arg1 + 0x10));
    arg1[0x14]             = (o[4] != 0) ? 1 : 0;
    vs[0]                  = o[5];
    *(s32 *) (arg1 + 0x18) = o[5];
    vs[1]                  = o[6];
    *(s32 *) (arg1 + 0x1C) = o[6];
    vs[2]                  = o[7];
    *(s32 *) (arg1 + 0x20) = o[7];
    *(s32 *) (arg1 + 0x24) = o[3];
    vs[3]                  = o[0];
    *(s32 *) arg0          = o[0];
    vs[4]                  = o[1];
    *(s32 *) (arg0 + 4)    = o[1];
    vs[5]                  = o[2];
    *(s32 *) (arg0 + 8)    = o[2];
}
