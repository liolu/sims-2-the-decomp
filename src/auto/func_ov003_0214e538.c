/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v[6];
} W6;

extern u8 data_ov003_02150c04;
extern u8 data_ov003_02150c1c;

void func_02016708(s32, s32);

void func_ov003_0214e538(u8 *arg0) {
    W6 sA;
    W6 sB;
    u8 lrv;
    s32 ip;
    s32 r5;
    s32 r4;
    s32 r7;

    r5 = *(u16 *) (arg0 + 0x16);
    r4 = 0;
    do {
        r7 = *(u16 *) (arg0 + 0x14);
        if ((u32) r7 <= 1) {
            if (r4 == 3) {
                r5 = ((u32) * (u16 *) (*(u8 **) (arg0 + 0x10) + r7 * 8 + 4) >> 1) + r5 - r4;
            }
            lrv = *((u8 *) (*(s32 *) (*(u8 **) (arg0 + 0x10) + r7 * 8)) + (r4 + r5) * 6);
        } else {
            s32 r3 = r7 - 2;
            if (r4 == 3) {
                r5 = ((u32) * (u16 *) (*(u8 **) (arg0 + 0x10) + r3 * 8 + 0x14) >> 1) + r5 - r4;
            }
            lrv = *((u8 *) (*(s32 *) (*(u8 **) (arg0 + 0x10) + r3 * 8 + 0x10)) + (r4 + r5) * 12);
        }
        sA = *(W6 *) &data_ov003_02150c1c;
        sB = *(W6 *) &data_ov003_02150c04;
        ip = sA.v[r7];
        if (*(u16 *) (*(u8 **) (arg0 + 4) + 0x76) == 1) {
            ip = sB.v[r7];
        }
        r7 = r4 + 9;
        func_02016708(((s32 *) *(u8 **) (arg0 + 8))[r7], ip + lrv * 8);
        r4 += 1;
    } while (r4 < 6);
}
