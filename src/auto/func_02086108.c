/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0209b378(s32, s32);
s32 func_0204561c(s32);
void func_020643fc(s32, s32);
void func_0209b74c(s32);
extern u8 data_0213e434;

s32 func_02086108(u8 *arg0, u8 *arg1) {
    volatile s32 sp[13];
    s32 six;
    u8 *r5;
    u8 *r4;
    s32 *n;
    volatile s32 *nv;
    s32 ip;
    s32 r0;
    s32 r2;
    s32 r3;
    s32 lr;
    s32 t;

    six = (*(u16 *) (arg1 + 0xC) == 1);
    t   = func_0209b378((s32) arg0, *(u16 *) (arg1 + 0xC));
    r5  = (u8 *) func_0204561c(t);
    if (r5 != NULL) {
        r4 = arg1 + 0x78;
        while (r5 != NULL) {
            n      = *(s32 **) r5;
            nv     = n;
            sp[9]  = n[2];
            r0     = *(s32 *) (r4 + 8);
            r3     = n[1];
            r2     = r0 - n[2];
            sp[10] = r3;
            r0     = *(s32 *) (r4 + 4);
            lr     = n[0];
            r0     = r0 - r3;
            sp[11] = lr;
            ip     = *(s32 *) r4;
            r3     = nv[3];
            ip     = ip - lr;
            r3     = -r3;
            sp[0]  = r3;
            sp[3]  = r3;
            if (!(ip < r3)) {
                r3    = nv[3];
                sp[4] = r3;
                if (!(ip > r3)) {
                    r3    = -nv[4];
                    sp[1] = r3;
                    sp[5] = r3;
                    if (!(r0 < r3)) {
                        r3    = nv[4];
                        sp[6] = r3;
                        if (!(r0 > r3)) {
                            r0    = -nv[5];
                            sp[2] = r0;
                            sp[7] = r0;
                            if (!(r2 < r0)) {
                                r0    = nv[5];
                                sp[8] = r0;
                                if (!(r2 > r0)) {
                                    r0 = *((volatile u8 *) nv + 0x18);
                                    if (r0 == 0x12) {
                                        func_020643fc(*(s32 *) &data_0213e434, (s32) n);
                                    } else if (r0 == 0x13) {
                                        if (six != 0) {
                                            func_0209b74c((s32) n);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            r5 = *(u8 **) (r5 + 4);
        }
    }
    return 0;
}
