/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02082e60(u8 *arg0) {
    u8 i;
    u8 j;

    i = 0;
    do {
        u8 *p       = arg0 + i * 4;
        p[3]        = (p[3] & ~0x3F) | 0x3F;
        arg0[i * 4] = 0xD8;
        i           = i + 1;
    } while (i < 0x1E);
    j = 0;
    do {
        u8 *q   = arg0 + j * 4;
        q[0x78] = 0x3F;
        j       = j + 1;
    } while (j < 3);
    j = 0;
    do {
        u8 *q   = arg0 + j * 4;
        q[0x84] = 0x3F;
        j       = j + 1;
    } while (j < 2);
}
