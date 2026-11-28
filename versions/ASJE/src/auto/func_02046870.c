/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02046814(s32 a, s32 b, s32 c);
s32 func_020170c4(s32 a, s32 b);
void func_02016708(s32 a, s32 b);

void func_02046870(u8 *arg0, s32 arg1, s32 arg2) {
    s32 r;

    r = func_02046814(0x74, 0, 4);
    if (r != 0) {
        r = func_020170c4(r, *(u16 *) (arg0 + 6));
    }
    ((s32 *) *(u8 **) arg0)[arg2] = r;
    func_02016708(((s32 *) *(u8 **) arg0)[arg2], arg1);
    *(u16 *) (arg0 + 6) = *(u16 *) (arg0 + 6) + 1;
}
