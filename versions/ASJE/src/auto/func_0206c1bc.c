/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020666b0(s32);
void func_0206cb7c(s32, s32);
extern u8 data_0213e2f4;

void func_0206c1bc(u8 *arg0) {
    volatile s32 fr[6];
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    u8 *base;

    base = *(u8 **) &data_0213e2f4;
    if (func_020666b0(*(s32 *) ((base + *(u16 *) (arg0 + 0xA) * 4) + 0x4670)) == 0) {
        return;
    }
    c                      = *(s32 *) (arg0 + 0x98);
    fr[3]                  = c;
    d                      = *(s32 *) (arg0 + 0x94);
    fr[4]                  = d;
    a                      = *(s32 *) (arg0 + 0x80) + d;
    fr[0]                  = a;
    b                      = *(s32 *) (arg0 + 0x84) + c;
    fr[1]                  = b;
    *(s32 *) (arg0 + 0x50) = a;
    b                      = fr[1];
    fr[2]                  = b;
    *(s32 *) (arg0 + 0x54) = b;
    func_0206cb7c(*(s32 *) (arg0 + 0x90), a);
}
