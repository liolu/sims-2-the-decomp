/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02081f00(u8 *arg0, u32 arg1, s32 arg2) {
    u8 i;
    u32 off;
    u8 *e;

    for (i = 0; i < 10; i++) {
        off = i * 0x4C;
        e   = arg0 + off;
        if (e[0xA41] != 0 && arg1 == *(u32 *) (e + 0xA38)) {
            if (arg2 == -1) {
                return arg0 + 0xA0C + off;
            }
            if (arg2 == *(u16 *) (e + 0xA00 + 0x3C)) {
                return arg0 + 0xA0C + off;
            }
        }
    }
    return 0;
}
