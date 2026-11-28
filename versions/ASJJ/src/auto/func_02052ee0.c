/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 *tbl;
    u8 pad[0xE];
    u16 n;
} Hdr;

u32 *func_02052ee0(Hdr *arg0, s32 arg1) {
    u32 r4;
    u32 i;
    u32 *ip;

    r4 = arg0->n;
    i  = 0;
    if (i < r4) {
        ip = arg0->tbl;
        do {
            if (arg1 == *(u8 *) (ip[i] + 12)) {
                return ip + i;
            }
            if (*(u8 *) (((volatile u32 *) ip)[i] + 12) == 0) {
                r4 = i;
            }
            i += 1;
        } while (i < ((volatile Hdr *) arg0)->n);
    }
    return arg0->tbl + r4;
}
