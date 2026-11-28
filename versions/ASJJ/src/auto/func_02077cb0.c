/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0205134c(s32, s32, s32, s32, s32);
s32 func_020524a8(s32);
s32 func_02106cb4(void);
s32 func_02106df8(void);
s32 func_02106e38(void);
s32 func_02109fe8(void *, void *);
void func_0210a114(void *, void *, s32);
void func_0210a188(void *, s32);

s32 func_02077cb0(s32 *arg0, s32 arg1) {
    s32 sp4;
    struct {
        s32 v;
        s8 b;
        s32 pad[2];
    } sp8;
    s32 sp18[33];

    sp4 = 0;
    if ((func_02106cb4() != 0) && (func_02106e38() != 0)) {
        sp4 = func_02106df8();
    }
    func_0210a114(&sp8, &sp4, 4);
    sp8.b = 0;
    func_0210a188(sp18, func_020524a8(0x999));
    if (func_02109fe8(&sp8, sp18) == 0) {
        if (arg1 != 0) {
            *arg0 = func_0205134c(*arg0, 0x76, 0xAD, func_020524a8(0x998), 1);
        }
        return 1;
    }
    return 0;
}
