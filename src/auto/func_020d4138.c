/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020d4138(void) {
    volatile u16 *p = (volatile u16 *) 0x04000280;
    while (*p & 0x8000) {
    }
    return *(s32 *) 0x040002A0;
}
