/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203c6cc(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5) {
    volatile s32 pad[1];
    s32 x;
    s32 y;
    s32 off;
    u16 *p;

    y = 0;
    if (arg4 <= 0) {
        return;
    }
    off  = arg1 * 2;
    arg1 = y;
    do {
        p = (u16 *) (arg0 + ((arg2 + y) << 6) + off);
        x = arg1;
        if (arg3 > 0) {
            do {
                x += 1;
                *p = arg5;
                p += 1;
            } while (x < arg3);
        }
        y += 1;
    } while (y < arg4);
}
