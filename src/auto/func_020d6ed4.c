/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02142e48;

void func_020d6ed4(void) {
    *(s16 *) 0x0400010C = 0;
    *(s16 *) 0x0400010E = 0x84;
    *(s16 *) 0x04000108 = 0x10000 - (M2C_FIELD(&data_02142e48, u16 *, 0x62) * 8);
    *(s16 *) 0x0400010A = 0x80;
}
