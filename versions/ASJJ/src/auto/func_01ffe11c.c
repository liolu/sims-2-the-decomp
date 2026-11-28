/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fb98c(void);
void func_020fb9a0(s32, s32);

void func_01ffe11c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    // volatile: DMA hardware registers at 0x040000B0 (re-read after write)
    volatile s32 *p;
    s32 r;
    s32 t;
    s32 v;

    r                                        = func_020fb98c();
    t                                        = arg0 * 12;
    *(volatile s32 *) (0x4000000 + t + 0xB0) = arg1;
    p                                        = (volatile s32 *) (0x40000B0 + t);
    p[1]                                     = arg2;
    p[2]                                     = arg3;
    v                                        = *(volatile s32 *) 0x40000B0;
    v                                        = *(volatile s32 *) 0x40000B0;
    if (arg0 == 0) {
        p[0] = 0;
        v    = 0x81400001;
        p[1] = 0;
        p[2] = v;
    }
    func_020fb9a0(r, v);
}
