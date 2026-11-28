/* compiler: 1.2/sp2p3 */
#include "m2c.h"
u8 *func_020b369c(s32 arg0, u8 *arg1) {
    s32 j;
    s32 i;
    u32 k;
    u8 *dst;
    u8 *src;
    u8 t;
    src = arg1;
    dst = (u8 *) arg0;
    for (j = 0; j < 0x20; j++) {
        for (i = 0; i < 0x30; i += 2) {
            t = *src;
            src++;
            k                       = i + 1;
            dst[i]                  = t & 0xF;
            ((u8 *volatile) dst)[k] = t >> 4;
        }
        dst += 0x30;
    }
    return src;
}
