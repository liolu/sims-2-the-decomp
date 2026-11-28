/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02083ce8(u8 *arg0, s32 arg1) {
    volatile s32 pad[1];
    s32 n;
    s32 j;

    if (arg1 < *(s32 *) (arg0 + 0x2144) - 1) {
        do {
            j                                 = arg1 + 1;
            *(u16 *) (arg0 + arg1 * 2 + 0x10) = *(u16 *) (arg0 + j * 2 + 0x10);
            arg1                              = j;
        } while (arg1 < *(s32 *) (arg0 + 0x2144) - 1);
    }
    *(s32 *) (arg0 + 0x2000 + 0x144) -= 1;
    *(u8 *) (arg0 + 0x2000 + 0x141) = 1;
}
