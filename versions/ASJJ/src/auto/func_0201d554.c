/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02018ac8(u8 *p);
void func_02018a98(u8 *p, s32 v);

u8 *func_0201d554(u8 *arg0) {
    s32 i;
    s32 z;

    func_02018ac8(arg0);
    func_02018a98(arg0, 0x22);
    z = 0;
    for (i = 0; i < 2; i++) {
        ((u16 *) (arg0 + 0x10))[i] = 0x14B;
        ((s32 *) (arg0 + 0x14))[i] = z;
    }
    *(u16 *) (arg0 + 0x1C) = 0x135;
    arg0[0x1E]             = z;
    *(s32 *) (arg0 + 0x20) = z;
    return arg0;
}
