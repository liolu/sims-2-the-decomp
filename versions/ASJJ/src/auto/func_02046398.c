/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fc5bc(s32, s32);

s32 func_02046398(s32 arg0, s32 arg1, u32 arg2) {
    volatile u32 tmp;
    u32 w;
    u32 rem;
    u32 cnt;
    u8 *p;
    u32 i;
    u32 k;
    u32 head;

    w = arg1;
    w = w | (w << 8);
    w = w | (w << 16);
    if ((arg0 & 3) == 0 && (arg2 & 3) == 0) {
        tmp = w;
        func_020fc5bc(tmp, arg0);
    } else {
        p    = (u8 *) arg0;
        head = 4 - ((u32) p & 3);
        if (head != 4) {
            if (arg2 < head) {
                head = arg2;
            }
            for (k = 0; k < head; k++) {
                p[k] = (u8) arg1;
            }
            arg2 -= k;
            p += k;
        }
        cnt = arg2 >> 2;
        for (i = 0; i < cnt; i++) {
            ((u32 *) p)[i] = w;
        }
        p += i * 4;
        rem = arg2 & 3;
        for (k = 0; k < rem; k++) {
            p[k] = (u8) arg1;
        }
    }
    return arg0;
}
