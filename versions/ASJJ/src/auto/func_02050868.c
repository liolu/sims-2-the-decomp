/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213d6c8;
extern s32 data_027e0000;

void func_02050868(u8 *arg0) {

    u8 *q;
    s32 rows;
    s32 n;
    s32 a, b;
    u8 *p;
    s32 rows2;
    u8 *q2;
    s32 n2;
    s32 a2, b2;
    volatile s32 pad;

    p = arg0;
    if (*((M2C_UNK *) ((s8 *) &data_0213d6c8 + (data_027e0000 * 0x44))) == 1) {
        rows = 8;
        do {
            n = 4;
            q = p + 7;
            do {
                a = *p;
                n -= 1;
                *p = *q;
                *q = a;
                p += 1;
                q -= 1;
            } while (n > 0);
            rows -= 1;
            p += 4;
        } while (rows > 0);
        return;
    }
    rows2 = 8;
    do {
        n2 = 2;
        q2 = p + 3;
        do {
            a2 = *q2;
            b2 = *p;
            n2 -= 1;
            *p  = (a2 >> 4) | (a2 << 4);
            *q2 = (b2 >> 4) | (b2 << 4);
            p += 1;
            q2 -= 1;
        } while (n2 > 0);
        rows2 -= 1;
        p += 2;
    } while (rows2 > 0);
}
