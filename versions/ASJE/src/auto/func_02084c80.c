/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e2f4[];

s32 func_0204d128(u8 *a);
s32 func_020881dc(u32 a, s32 b);
void func_020d5310(void);
void func_020a7fa0(s32 a, s32 b);
void func_020d4f50(void);

void func_02084c80(u8 *arg0) {
    u8 *b;
    u32 flags;
    u32 r0v;
    s32 x;

    b     = *(u8 **) data_0213e2f4;
    flags = *(u32 *) b;
    r0v   = b[*(u32 *) (arg0 + 4) + 0x4000 + 0x49C];
    if (flags & 0x20) {
        r0v = 0x16;
    } else if (r0v == 0x2A) {
        x   = func_0204d128(b + 0x47F0);
        r0v = func_020881dc(*(u32 *) (arg0 + 4), x);
    }
    if (r0v < 0x2A) {
        func_020d5310();
        return;
    }
    if (r0v > 0x2A) {
        func_020a7fa0(r0v - 0x2B, 0);
        return;
    }
    func_020d4f50();
}
