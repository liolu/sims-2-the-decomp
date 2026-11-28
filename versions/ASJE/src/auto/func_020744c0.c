/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e440;

void func_020744c0(u8 *arg0) {
    volatile s32 pad[1];
    u8 i;
    u8 *p;
    u8 *base;
    s32 c;
    s32 k;

    base = data_0213e440;
    i    = 0;
    do {
        p = arg0 + i * 2;
        if (p[1] != 0) {
            c = *(u8 *) ((u32) arg0 + (i << 1));
            k = *(s32 *) (base + 0xF4);
            if (c == k) {
                p[1] = 0;
                return;
            }
        }
        i = i + 1;
    } while (i < 30);
}
