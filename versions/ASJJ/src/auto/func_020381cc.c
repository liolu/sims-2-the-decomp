/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02037a1c();

void func_020381cc(void *arg0) {
    volatile s32 sp0[3];

    if (*(u8 *) ((u8 *) arg0 + 0x30) == 0) {
        func_02037a1c();
        return;
    }
    sp0[0]                                       = 0;
    sp0[1]                                       = 0;
    *(s32 *) (*(u8 **) ((u8 *) arg0 + 4) + 0x14) = 0;
}
