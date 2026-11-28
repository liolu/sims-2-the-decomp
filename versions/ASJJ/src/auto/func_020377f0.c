/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02036db4(void *);
void func_02036c64(void *);

s32 func_020377f0(void *obj, s32 cmd) {
    switch (cmd) {
        case 0x4C:
            func_02036db4(obj);
            break;
        case 0x4D:
            func_02036c64(obj);
            break;
        default:
            return 0;
    }
    return 0;
}
