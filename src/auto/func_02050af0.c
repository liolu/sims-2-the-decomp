/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0213dcc8;
void func_02050af0(u8 *arg0, s32 arg1) {
    u8 *d = (u8 *) &data_0213dcc8 + (arg1 << 6);
    if (arg0 != NULL && *(volatile u8 *) arg0 != 0) {
        do {
            *d++ = arg0[0];
            arg0++;
        } while (arg0[0] != 0);
    }
    *d = 0;
}
