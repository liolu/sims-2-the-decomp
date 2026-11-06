/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e434[];
extern u16 func_0200e3a0(void *);
extern u16 func_0200e944(void *);
extern u16 func_0200e938(void *);
extern u16 func_0200ea1c(void *);
extern u16 func_0200e330(void *);
extern u16 func_0200e2c0(void *);
extern u16 func_0200e86c(void *);
extern u16 func_0200e7a0(void *);
extern u16 func_0200e434(void *);
extern u16 func_0200e428(void *);
extern u16 func_0200e41c(void *);
extern u16 func_0200e410(void *);
extern u8 func_0200f1c4(void *);
extern s32 func_0200df7c(void *, s32);
extern s32 func_0200e168(s32);
extern void func_ov003_0214f214(u16, s32, u8, void *);
extern void func_0205eb70(void *, s32, u8);
extern void func_020654dc(u8 *, u8 *);

void func_ov003_02149fa8(u8 *arg0) {
    u8 loc[0x28];
    s32 r4;
    s32 lr;
    u8 *g;

    *(s32 *) (loc + 0x18) = (s32) 0x80000000;
    if (*(u16 *) (arg0 + 0x76) == 1) {
        *(u16 *) (loc + 0x24) = 0x3A;
    } else {
        *(u16 *) (loc + 0x24) = 0x39;
    }
    *(u16 *) (loc + 0x0)  = func_0200e3a0(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(u16 *) (loc + 0x12) = func_0200e944(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(u16 *) (loc + 0x14) = func_0200e938(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(u16 *) (loc + 0x16) = func_0200ea1c(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(u16 *) (loc + 0x2)  = func_0200e330(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(u16 *) (loc + 0x4)  = func_0200e2c0(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(u16 *) (loc + 0x6)  = func_0200e86c(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(u16 *) (loc + 0x8)  = func_0200e7a0(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(u16 *) (loc + 0xA)  = func_0200e434(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(u16 *) (loc + 0xC)  = func_0200e428(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(u16 *) (loc + 0xE)  = func_0200e41c(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(u16 *) (loc + 0x10) = func_0200e410(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(u8 *) (loc + 0x20)  = func_0200f1c4(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48));
    *(s32 *) (loc + 0x18) = *(s32 *) (*(u8 **) data_0213e434 + 0x4000 + 0x7C4);
    r4                    = func_0200df7c(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48), 0);
    loc[0x1C]             = (u8) (r4 + func_0200e168(0));
    r4                    = 0;
    if (arg0[0x40] != 0xFE) {
        for (lr = 0; lr < 6; lr++) {
            g           = *(u8 **) data_0213e434;
            g[lr + 0xC] = arg0[*(u16 *) (arg0 + 0x76) * 12 + lr * 2 + 0x29];
        }
        if (arg0[0x40] < 4) {
            r4 = arg0[0x40];
        }
    }
    if (*(u16 *) (arg0 + 0x74) == 5) {
        r4 = 5;
    } else if (*(u16 *) (arg0 + 0x74) == 7) {
        if (arg0[0x40] != 0xFE) {
            r4 = arg0[0x40];
        } else {
            r4 = (*(u8 **) data_0213e434)[0x12];
        }
    } else if (*(u16 *) (arg0 + 0x74) == 6) {
        r4 = (*(u8 **) data_0213e434)[0x12];
    }
    if (r4 == 1) {
        r4 = 0;
    }
    func_ov003_0214f214(*(u16 *) (arg0 + 0x76), r4, (*(u8 **) data_0213e434 + r4)[0xC], loc);
    if (r4 == 0) {
        func_ov003_0214f214(*(u16 *) (arg0 + 0x76), 1, (*(u8 **) data_0213e434)[0xD], loc);
    }
    if (*(u16 *) (arg0 + 0x74) != 5) {
        func_0205eb70(*(u8 **) data_0213e434 + 0xC, r4, func_0200f1c4(*(void **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48)));
    }
    func_020654dc(*(u8 **) data_0213e434, loc);
}
