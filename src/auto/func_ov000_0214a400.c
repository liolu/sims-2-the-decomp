/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov000_0214eb64;

typedef struct {
    u8 x, y;
} P2;
typedef struct {
    P2 p[4];
    u8 e;
} T9;

void func_ov000_0214a400(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    T9 loc = *(T9 *) &data_ov000_0214eb64;
    s32 j;
    s32 k;
    u8 *out;
    u8 *src;
    u16 w;
    u8 ip;
    u32 t;
    s32 yo;

    arg1 -= 1;
    arg2 -= 1;
    out = arg0 + 0x120 + (arg1 + (arg2 << 8));
    src = (u8 *) &loc;
    for (j = 0; j < 3; j++) {
        k = 0;
        do {
            if (arg2 >= 0 && arg2 < 0xC0) {
                w = ((u16 *) *(u8 **) (arg0 + 0x11C))[arg2];
                if (arg1 >= (s32) (w >> 8) && arg1 < (s32) (w & 0xFF)) {
                    ip = *out;
                    t  = ip + (((u32) arg3 * src[k]) >> 16);
                    if (t < 0xC0) {
                        *out = (u8) t;
                    } else if (ip < 0xC0) {
                        *out = 0xC0;
                    }
                }
            }
            k++;
            out++;
            arg1++;
        } while (k < 3);
        src += 3;
        out += 0xFD;
        arg2++;
        arg1 -= 3;
    }
}
