/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02047ba8(void *arg0, s32 arg1) {
    u32 i;
    u32 j;
    u8 *p;
    M2C_FIELD(arg0, s8 *, 0x605) = 0;
    p                            = (u8 *) arg0;
    for (i = 0; i < 0x20; i++) {
        for (j = 0; j < 0x30; j++) {
            p[j] = 1;
        }
        p += 0x30;
    }
    M2C_FIELD(arg0, s32 *, 0x600) = arg1;
}
