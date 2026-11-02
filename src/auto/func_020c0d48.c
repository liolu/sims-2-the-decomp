/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020c0d48(u8 *arg0) {
    volatile s32 tmp[2];
    u8 *o;
    s32 v;

    o = *(u8 **) (arg0 + 0x90);
    if (*(s32 *) (o + 0x5C) != 1) {
        return;
    }
    if (*(o + 0x59) != 0) {
        return;
    }
    *(o + 0x58)         = 0;
    v                   = *(s32 *) (o + 0x50);
    tmp[0]              = v;
    *(s32 *) (o + 0x48) = v;
    v                   = *(s32 *) (o + 0x54);
    tmp[1]              = v;
    *(s32 *) (o + 0x4C) = v;
}
