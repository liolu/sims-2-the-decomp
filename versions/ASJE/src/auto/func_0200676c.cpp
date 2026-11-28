/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual M2C_UNK f1();
};

extern "C" M2C_UNK func_02016708(...);
extern "C" void *func_020170c4(...);
extern "C" void *func_02046814(...);
extern "C" M2C_UNK func_02049a88(...);
extern "C" M2C_UNK func_020d5880(...);
extern "C" M2C_UNK data_0212f810;

extern "C" void func_0200676c(u8 *arg0) {
    volatile s32 fr[22];
    s32 v;
    enum {
        K5 = 0x5000
    } k, k2;
    u8 *p;

    p = *(u8 **) (arg0 + 0x34c);
    if (p == NULL) {
        return;
    }
    k     = K5;
    fr[2] = k;
    fr[9] = k;
    if (*(s32 *) (p + 0x54) <= k) {
        func_020d5880(0x120);
        p      = *(u8 **) (arg0 + 0x34c);
        v      = *(s32 *) (p + 0x50);
        fr[10] = v;
        fr[0]  = v;
        v      = *(s32 *) (p + 0x54);
        fr[11] = v;
        fr[1]  = v;
        if (p != NULL) {
            ((VC0 *) p)->f1();
        }
        p = (u8 *) func_02046814(0x74, 0, 4);
        if (p != NULL) {
            p = (u8 *) func_020170c4(p, 0);
        }
        *(u8 **) (arg0 + 0x34c) = p;
        func_02049a88(*(u8 **) (arg0 + 0x34c), 4);
        func_02016708(*(u8 **) (arg0 + 0x34c), &data_0212f810);
        p                                         = *(u8 **) (arg0 + 0x34c);
        *(s32 *) (p + 4)                          = *(s32 *) (p + 4) | 0x10;
        v                                         = fr[0];
        fr[12]                                    = v;
        *(s32 *) (*(u8 **) (arg0 + 0x34c) + 0x50) = v;
        v                                         = fr[1];
        fr[13]                                    = v;
        *(s32 *) (*(u8 **) (arg0 + 0x34c) + 0x54) = v;
        arg0[0x2ee]                               = 1;
    }
    k2     = K5;
    fr[3]  = k2;
    fr[14] = k2;
    p      = *(u8 **) (arg0 + 0x34c);
    v      = *(s32 *) (p + 0x64);
    fr[20] = v;
    if (*(s32 *) (p + 0x54) + v >= k2) {
        return;
    }
    fr[4]               = k2;
    fr[15]              = k2;
    *(s32 *) (p + 0x54) = k2;
    if (arg0[0x2f1] == 0) {
        fr[5]                                     = 0xf0000;
        fr[16]                                    = 0xf0000;
        *(s32 *) (*(u8 **) (arg0 + 0x34c) + 0x50) = 0xf0000;
    } else {
        fr[6]                                     = 0x70000;
        fr[17]                                    = 0x70000;
        *(s32 *) (*(u8 **) (arg0 + 0x34c) + 0x50) = 0x70000;
    }
    fr[7]                                     = 0;
    fr[18]                                    = 0;
    *(s32 *) (*(u8 **) (arg0 + 0x34c) + 0x60) = 0;
    fr[8]                                     = 0;
    fr[19]                                    = 0;
    *(s32 *) (*(u8 **) (arg0 + 0x34c) + 0x64) = 0;
}
