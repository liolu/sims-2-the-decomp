/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0207f924(s32, s32, s32);
void func_0207fd6c(s32 arg0, s32 arg1, s32 arg2) {
    u8 i;
    for (i = 0; i < 5; i++) {
        if (arg1 == *(u8 *) (arg0 + i * 8 + 0x9e8)) {
            func_0207f924(arg0, i, arg2);
            return;
        }
    }
}
