/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" s32 func_020ece6c(s32, s32, s32, s32);
extern "C" s32 func_020be2d4(u8 *arg0) {
    u8 *o;
    s32 a, b;
    o = *(u8 **) (arg0 + 0x14);
    if (o != NULL) {
        a = *(u16 *) (o + 8);
        if (a != 0) {
            func_020ece6c(1, (*(s32 *) (arg0 + 0xc) & 0xffff) << 3, *(s32 *) (o + 4), a);
        }
        o = *(u8 **) (arg0 + 0x14);
        b = *(s32 *) (o + 0x10);
        if (b != 0) {
            func_020ece6c(0, (*(s32 *) (arg0 + 4) & 0xffff) << 3, *(s32 *) (o + 0), b);
        }
    }
    return 1;
}
