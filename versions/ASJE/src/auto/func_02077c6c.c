/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020512c0(s32, s32, s32, s32, s32);
s32 func_020521e0(s32);
s32 func_0210708c(void);
s32 func_021071d0(void);
s32 func_02107210(void);
s32 func_0210a3c0(void *, void *);
void func_0210a4ec(void *, void *, s32);
void func_0210a560(void *, s32);

s32 func_02077c6c(s32 *arg0, s32 arg1) {
    s32 sp4;
    struct {
        s32 v;
        s8 b;
        s32 pad[2];
    } sp8;
    s32 sp18[33];

    sp4 = 0;
    if ((func_0210708c() != 0) && (func_02107210() != 0)) {
        sp4 = func_021071d0();
    }
    func_0210a4ec(&sp8, &sp4, 4);
    sp8.b = 0;
    func_0210a560(sp18, func_020521e0(0x999));
    if (func_0210a3c0(&sp8, sp18) == 0) {
        if (arg1 != 0) {
            *arg0 = func_020512c0(*arg0, 0x76, 0xAD, func_020521e0(0x998), 1);
        }
        return 1;
    }
    return 0;
}
