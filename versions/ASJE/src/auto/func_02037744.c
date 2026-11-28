/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02036d08(void *);
void func_02036bb8(void *);

s32 func_02037744(void *obj, s32 cmd) {
    switch (cmd) {
        case 0x4C:
            func_02036d08(obj);
            break;
        case 0x4D:
            func_02036bb8(obj);
            break;
        default:
            return 0;
    }
    return 0;
}
