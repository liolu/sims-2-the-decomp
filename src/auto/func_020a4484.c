/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020a4484(u8 *arg0) {
    s32 i;
    s32 j;

    *(s32 *) arg0 = 0;
    for (i = 0; i < 24; i++) {
        for (j = 0; j < 32; j++) {
            arg0[i * 32 + j + 0x70C] = 0xFF;
        }
    }
}
