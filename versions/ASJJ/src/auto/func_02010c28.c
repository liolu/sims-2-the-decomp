/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02010a80(u8 *, s32);
void func_02011090(void *, s32, s32, s32, s32);

void func_02010c28(u8 *arg0) {
    s32 t = arg0[0x211];
    if (t == 0) {
        func_02010a80(arg0, t);
        func_02011090(arg0, 0x87, 0, 1, 0);
        arg0[0x211] = 3;
        return;
    }
    if (t == 1) {
        *(u16 *) (arg0 + 0x1F8) &= ~8;
        arg0[0x211] = 3;
        return;
    }
    if (t == 2) {
        *(s8 *) (arg0 + 0x212) = 0x1E;
    }
}
