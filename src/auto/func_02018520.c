/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02018520(u8 *arg0, s32 arg1, s32 arg2) {
    volatile s32 tmp[4];
    s32 w;
    s32 h;
    u32 t;
    t                      = *(u16 *) (arg0 + 0x18);
    w                      = arg1 - (s32) (t >> 1);
    w                      = w << 12;
    h                      = arg2 << 12;
    tmp[0]                 = w;
    tmp[2]                 = w;
    *(s32 *) (arg0 + 0x50) = w;
    tmp[1]                 = h;
    tmp[3]                 = h;
    *(s32 *) (arg0 + 0x54) = h;
}
