/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fbea0(void);
u16 func_020f9c88(void *);
s32 func_020f9d28(void *);
void func_020fbeb4(s32);
void WaitByLoop(s32);

void func_021070cc(void *arg0, u32 *arg1) {
    for (;;) {
        arg1[1] = func_020fbea0();
        arg1[0] = func_020f9c88((void *) 0x27FFFE8) & 0x40;
        if (arg1[0] != 0) {
            return;
        }
        if (func_020f9d28(arg0) == 0) {
            return;
        }
        func_020fbeb4(arg1[1]);
        WaitByLoop(1);
    }
}
