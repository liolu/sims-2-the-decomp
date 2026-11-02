/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020835f0(u8 *arg0, u8 *arg1) {
    volatile s32 tmp[4];
    u8 *s;
    s32 v;

    s                       = arg1 + 0x78;
    arg0                    = arg0 + 0x2000;
    v                       = *(s32 *) s;
    tmp[1]                  = v;
    *(s32 *) (arg0 + 0x130) = v;
    v                       = *(s32 *) (s + 4);
    tmp[2]                  = v;
    *(s32 *) (arg0 + 0x134) = v;
    v                       = *(s32 *) (s + 8);
    tmp[3]                  = v;
    *(s32 *) (arg0 + 0x138) = v;
    v                       = *(s32 *) (arg1 + 0x88);
    tmp[0]                  = v;
    *(s32 *) (arg0 + 0x13C) = v;
}
