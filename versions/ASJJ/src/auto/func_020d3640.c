/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02142368;
extern u8 data_02141ff4;
extern u8 data_02141ff8;
extern u8 data_0214299c;
extern u8 data_02142000;

void func_020d0988(s32 a, s32 b);

u32 func_020d3640(s32 a0, s32 a1, s32 a2, u8 *p3) {
    u32 r4;
    s32 ip;
    u8 *cand;
    u8 *cur;
    u32 idx;
    u32 r5;
    u8 *oldg;
    u8 *q;

    ip   = (&data_02142368)[0x10] - 1;
    oldg = *(u8 **) &data_02141ff4;
    r4   = 0xFF;
    while (ip >= 0) {
        r5 = *(&data_02142368 + ip + 0x634);
        if (r5 == 5) {
        } else if (r5 == 3) {
            r4 = ip;
            ip = 0;
        } else {
            q                       = &data_02141ff8 + r5 * 4;
            cur                     = *(u8 **) (q + 8);
            cand                    = cur + 0x93C + (ip << 5);
            *(u8 **) &data_02141ff4 = cur;
            if ((cand[0xB] & 2) != 0) {
                if (r4 == 0xFF || cand[6] < p3[6]) {
                    r4 = ip;
                    p3 = cand;
                }
            }
        }
        ip = ip - 1;
    }
    if (r4 != 0xFF) {
        q   = &data_0214299c + r4;
        idx = *q;
        if (idx != 3) {
            *(u8 **) &data_02141ff4 = *(u8 **) (&data_02142000 + idx * 4);
            func_020d0988(r4 & 0xFF, 0);
            *q = 3;
        }
    }
    *(u8 **) &data_02141ff4 = oldg;
    return r4 & 0xFF;
}
