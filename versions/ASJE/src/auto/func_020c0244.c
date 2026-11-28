/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c0640(void *);
void func_020c1b9c(s32, s32, s32);
extern void *data_0213e2f4;

void func_020c0244(void *arg0) {
    s32 x;
    s32 y;
    s32 a;
    s32 c;
    s32 b;
    s32 d;
    s32 dx;
    s32 dy;
    s32 flag;

    x    = (*(s32 *) ((u8 *) arg0 + 0x80)) >> 12;
    y    = (*(s32 *) ((u8 *) arg0 + 0x84)) >> 12;
    dx   = 0;
    a    = x - 40;
    dy   = 0;
    flag = 0;
    c    = y - 24;
    b    = 216 - x;
    d    = 148 - y;
    if ((a > 0) && (a <= 16)) {
        dx = -8;
    } else if ((b > 0) && (b <= 16)) {
        dx = 8;
    } else if ((a <= -8) || (b <= -8)) {
        flag = 1;
    }
    if ((c > 0) && (c <= 16)) {
        dy = -8;
    } else if ((d > 0) && (d <= 16)) {
        dy = 8;
    } else if ((c <= -8) || (d <= -8)) {
        flag = 1;
    }
    func_020c1b9c(*(s32 *) ((u8 *) arg0 + 0x128), dx, dy);
    if (flag == 0) {
        return;
    }
    if (*(s32 *) ((u8 *) data_0213e2f4 + 0x215C) >= 6) {
        return;
    }
    func_020c0640(arg0);
}
