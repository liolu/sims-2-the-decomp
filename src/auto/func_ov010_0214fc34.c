/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02046548(u8, s32, s32);
extern u8 data_ov010_02152ee4;

void func_ov010_0214fc34(u8 *arg0) {
    s32 r5 = 0;
    s32 r4;
    s32 r2;
    s32 lr;
    s32 ip;
    s32 r3;
    u8 *buf;

    arg0[0x1E5] = 0;
    r4          = 0;
    r2          = 0;
    arg0[0x1E4] = 0;
    do {
        r2 += 1;
        arg0[0x1E5] += 8;
    } while (r2 < 6);
    switch (data_ov010_02152ee4) {
        case 4:
            r4 = 6;
            break;
        case 2:
            r4 = 2;
            break;
        case 3:
            r4 = 4;
            break;
    }
    arg0[0x1E5]             = (u8) (arg0[0x1E5] + r4);
    *(u8 **) (arg0 + 0x1C4) = (u8 *) func_02046548(arg0[0x1E5], 3, 4);
    r3                      = 0;
    ip                      = 0;
    do {
        lr = 0;
        do {
            buf     = *(u8 **) (arg0 + 0x1C4);
            buf[r5] = (u8) (lr + ip);
            lr += 1;
            r5 += 1;
        } while (lr < 8);
        r3 += 1;
        ip += 8;
    } while (r3 < 6);
    r2 = 0;
    if (r4 <= 0) {
        return;
    }
    do {
        buf     = *(u8 **) (arg0 + 0x1C4);
        buf[r5] = (u8) (r2 + 0x30);
        r2 += 1;
        r5 += 1;
    } while (r2 < r4);
}
