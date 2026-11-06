/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct One {
    s32 v;
};
extern "C" void func_02015578(void *, One, One, s32);

extern "C" void func_ov009_0214af70(u8 *arg0) {
    s32 fr[19];
    s32 d;
    s64 p;
    s32 ang;
    u8 *o;
    s32 z;
    s32 h;
    s32 v;
    s32 k;

    v      = *(s32 *) (arg0 + 0x20);
    fr[11] = v;
    d      = *(s32 *) (arg0 + 0x24) - v;
    fr[0]  = d;
    fr[1]  = 0;
    fr[12] = 0;
    if (d > fr[1]) {
        fr[2]  = 0x80;
        fr[13] = 0x80;
        if (d > fr[2]) {
            fr[3]  = 0x80;
            fr[14] = 0x80;
            fr[0]  = 0x80;
            goto join;
        }
    }
    d      = fr[0];
    fr[4]  = 0;
    fr[15] = 0;
    if (d < fr[4]) {
        fr[5]  = -0x80;
        fr[16] = -0x80;
        if (d < fr[5]) {
            fr[6]  = -0x80;
            fr[17] = -0x80;
            fr[0]  = -0x80;
        }
    }
join:
    d                      = fr[0];
    fr[18]                 = d;
    *(s32 *) (arg0 + 0x20) = *(s32 *) (arg0 + 0x20) + d;
    k                      = 0x1000;
    fr[8]                  = k;
    fr[7]                  = k;
    func_02015578(*(void **) (arg0 + 0x2c), *(One *) (s32 *) &fr[7], *(One *) (s32 *) &fr[8],
                  (s16) (((u32) ((((s64) * (s32 *) (arg0 + 0x20) * 0x28be60db9391LL) + 0x80000000000LL) >> 32) << 4) >> 16));
    k      = 0x1000;
    fr[10] = k;
    fr[9]  = k;
    func_02015578(*(void **) (arg0 + 0x3c), *(One *) (s32 *) &fr[9], *(One *) (s32 *) &fr[10],
                  (s16) (((u32) ((((s64) * (s32 *) (arg0 + 0x20) * 0x28be60db9391LL) + 0x80000000000LL) >> 32) << 4) >> 16));
    o                   = *(u8 **) (arg0 + 0x2c);
    *(s32 *) (o + 0x10) = (*(s32 *) (o + 0x10) & ~0x300) | 0x300;
    o                   = *(u8 **) (arg0 + 0x3c);
    *(s32 *) (o + 0x10) = (*(s32 *) (o + 0x10) & ~0x300) | 0x300;
}
