/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_01ff98c0(u8 *, s32, s32);

void func_01ff9aa0(u8 *arg0) {
    s32 v = *(s32 *) (arg0 + 0x4);
    if (v != 0) {
        func_01ff98c0(arg0, v, v);
    }
}
