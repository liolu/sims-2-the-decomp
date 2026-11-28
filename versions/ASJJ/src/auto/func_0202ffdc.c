/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020117e8(void *, s32, void *);
void func_02018ac4(void *);
s32 func_0201d10c(void *);
void func_0202fd6c(void *, s32);
void func_020d516c(s32, s32);

s32 func_0202ffdc(u8 *arg0, s32 arg1, void *arg2) {
    u8 fr[60];

    if (arg1 != 4) {
        if (arg1 == 0xA) {
            func_0202fd6c(arg0, (s32) arg2);
        }
    } else {
        func_020d516c(0x103, *(s32 *) (arg0 + 4) + 0x78);
        func_0201d10c(fr);
        *(s16 *) (fr + 0x30) = 0x88;
        *(s32 *) (fr + 0x20) = *(s32 *) (arg0 + 4);
        fr[0x33]             = 0;
        func_020117e8(arg2, 3, fr);
        func_02018ac4(fr);
    }
    return 0;
}
