/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02039db0();

void func_0203a3a4(void *arg0) {
    volatile s32 sp0[3];

    if (*(u8 *) ((u8 *) arg0 + 0x2C) == 0) {
        func_02039db0();
        return;
    }
    sp0[0]                                       = 0;
    sp0[1]                                       = 0;
    *(s32 *) (*(u8 **) ((u8 *) arg0 + 4) + 0x14) = 0;
}
