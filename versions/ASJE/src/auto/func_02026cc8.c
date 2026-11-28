/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_01ffac40(u8 *a, u8 *b);
void func_0201d0ac(u8 *arg0);
void func_020117e8(u8 *a, s32 b, u8 *c, u8 *d);
void func_02018acc(u8 *arg0);

s32 func_02026cc8(u8 *arg0, s32 arg1, u8 *arg2) {
    u8 st[0x38];
    s32 f;

    if (arg1 == 5) {
        f = arg2[0];
        func_01ffac40(*(u8 **) (arg0 + 4) + 0xE0, arg0);
        func_0201d0ac(st);
        if (f != 0) {
            *(u16 *) (st + 0x30) = 0x40;
            st[0x35]             = 1;
        } else {
            *(u16 *) (st + 0x30) = 1;
            st[0x35]             = 1;
        }
        func_020117e8(*(u8 **) (arg0 + 4), 3, st, arg0);
        arg0[0x13] = 1;
        func_02018acc(st);
        return 0;
    }
    return 0;
}
