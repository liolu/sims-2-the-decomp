/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;
extern void func_0204a59c(void *, W, void *, void *, s32, s32, s32);
extern void func_0204ae4c(void);

void *func_0204a1ec(u8 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    volatile s32 fr[22];
    s32 a, b, c;
    fr[1]  = 0x1E000;
    a      = arg1[0];
    fr[16] = a;
    fr[19] = a;
    b      = arg1[1];
    fr[17] = b;
    fr[20] = b;
    c      = arg1[2];
    fr[18] = c;
    fr[21] = c;
    fr[0]  = 0x1000;
    func_0204a59c(arg0, *(W *) (fr + 0), (void *) func_0204ae4c, (void *) (fr + 19), 0x1E000, arg2, arg3);
    *(u8 *) (arg0 + 0x1D4)  = 0;
    *(s32 *) (arg0 + 0x1C8) = 3;
    *(s32 *) (arg0 + 0x1D0) = 0;
    fr[2]                   = 0x1E000;
    fr[9]                   = 0x1E000;
    *(s32 *) (arg0 + 0x20)  = 0x1E000;
    fr[3]                   = 0x60;
    fr[10]                  = 0x60;
    *(s32 *) (arg0 + 0x2C)  = 0x60;
    fr[4]                   = 0x40;
    fr[11]                  = 0x40;
    *(s32 *) (arg0 + 0x30)  = 0x40;
    fr[5]                   = 0x10;
    fr[12]                  = 0x10;
    *(s32 *) (arg0 + 0x34)  = 0x10;
    fr[6]                   = 0x1000;
    fr[13]                  = 0x1000;
    *(s32 *) (arg0 + 0x38)  = 0x1000;
    fr[7]                   = 0x1000;
    fr[14]                  = 0x1000;
    *(s32 *) (arg0 + 0x3C)  = 0x1000;
    fr[8]                   = 0x1000;
    fr[15]                  = 0x1000;
    *(s32 *) (arg0 + 0x40)  = 0x1000;
    return arg0;
}
