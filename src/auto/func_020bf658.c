/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;
extern s32 func_02017380(void *, W, W, W, s32);
extern void func_02016708(void *, s32);
extern void func_020bf8f0(void *);

void func_020bf658(u8 *arg0, s32 arg1) {
    s32 r0 = 0;
    s32 ip = 0;
    s32 r3 = 0;
    s32 a;
    s32 e;
    enum {
        ONE = 1
    } one;
    volatile s32 fr[11];

    a = *(s32 *) (arg0 + 0x84) >> 12;
    if (a > 0x18) {
        if (a < 0x94) {
            r3 = 1;
        }
    }
    if (r3 != 0) {
        if ((*(s32 *) (arg0 + 0x80) >> 12) > 0x28) {
            ip = 1;
        }
    }
    if (ip != 0) {
        if ((*(s32 *) (arg0 + 0x80) >> 12) < 0xD8) {
            r0 = 1;
        }
    }
    a   = arg0[0x169];
    one = ONE;
    ip  = one;
    r3  = 0;
    if (a != 0) {
        if (r0 != 0) {
            r3 = ip;
        }
    }
    if (r3 == 0 && (a != 0 || r0 != 0)) {
        ip = 0;
    }
    arg0[0x16A] = (u8) ip;
    arg0[0x16B] = 0;

    if ((r0 != 0) && (arg1 == 0)) {
        *(s32 *) (arg0 + 0x4) = *(s32 *) (arg0 + 0x4) & ~1;
        e                     = *(s32 *) (arg0 + 0x10C) << 15;
        fr[3]                 = e;
        fr[2]                 = *(s32 *) (arg0 + 0x108) << 15;
        fr[1]                 = 0;
        fr[0]                 = 0;
        func_02017380(arg0, *(W *) &fr[0], *(W *) &fr[1], *(W *) &fr[2], e);
        e                       = -*(s32 *) (arg0 + 0x108) << 14;
        fr[4]                   = e;
        fr[5]                   = -*(s32 *) (arg0 + 0x10C) << 14;
        *(s32 *) (arg0 + 0x144) = e;
        e                       = fr[5];
        fr[10]                  = e;
        *(s32 *) (arg0 + 0x148) = e;
        func_020bf8f0(arg0);
        return;
    }
    *(s32 *) (arg0 + 0x4)  = *(s32 *) (arg0 + 0x4) | 1;
    *(s32 *) (arg0 + 0x94) = *(s32 *) (arg0 + 0x94) & ~1;
    fr[9]                  = 0x10000;
    fr[8]                  = 0x10000;
    fr[7]                  = -0x10000;
    fr[6]                  = -0x10000;
    func_02017380(arg0, *(W *) &fr[6], *(W *) &fr[7], *(W *) &fr[8], 0x10000);
    func_02016708(arg0, *(s32 *) (arg0 + 0x134));
    *(s32 *) (arg0 + 0x4) = *(s32 *) (arg0 + 0x4) & ~0x10;
}
