/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0000;
extern s32 data_027e0004;

void func_02049990(void *);
void func_020498f0(void *);
void func_02016ac4(void *);
void func_0201547c(void *);
s32 func_02016350(void *);

s32 func_02016c10(void *arg0) {
    volatile s32 sp[15];
    s32 *w = (s32 *) arg0;
    s32 r4;
    s32 t;
    s32 v;

    r4 = w[1];
    if (r4 & 0x20) {
        if (r4 & 0x1000) {
            if ((r4 & 0x8000000) == 0) {
                func_02049990(arg0);
            }
        } else {
            if ((r4 & 0x8000000) != 0) {
                func_020498f0(arg0);
            }
        }
    }
    if (!(data_027e0004 & (0x4000 << data_027e0000))) {
        if (r4 & 0x1008) {
            if (!(r4 & 0x2000000)) {
                func_02016ac4(arg0);
                if (*(u16 *) ((u8 *) arg0 + 0x42) != 0) {
                    func_0201547c(arg0);
                }
                t       = w[0x1a];
                sp[2]   = t;
                w[0x18] = w[0x18] + t;
                t       = w[0x1b];
                sp[3]   = t;
                w[0x19] = w[0x19] + t;
                t       = w[0x18];
                sp[12]  = t;
                v       = w[0x14] + t;
                sp[0]   = v;
                sp[4]   = v;
                w[0x16] = v;
                t       = w[0x19];
                sp[13]  = t;
                v       = w[0x15] + t;
                sp[1]   = v;
                sp[5]   = v;
                w[0x17] = v;
            }
            if (data_027e0004 & (8 << data_027e0000)) {
                t       = w[0x16];
                sp[6]   = t;
                w[0x14] = t;
                t       = w[0x17];
                sp[7]   = t;
                w[0x15] = t;
            }
        } else {
            t       = w[0x14];
            sp[8]   = t;
            w[0x16] = t;
            t       = w[0x15];
            sp[9]   = t;
            w[0x17] = t;
        }
    } else {
        t       = w[0x14];
        sp[10]  = t;
        w[0x16] = t;
        t       = w[0x15];
        sp[11]  = t;
        w[0x17] = t;
    }
    if ((r4 & 0x40000000) != 0) {
        return r4 & 0x40000000;
    }
    return func_02016350(arg0);
}
