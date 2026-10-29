/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020f7dc4(s32 *);                           /* extern */
s32 func_020f7d98(s32 *);                           /* extern */

void func_020f7fe8(void) {
    s32 sp4;
    s32 sp0;

    *(s32 *) 0x04000600 |= 0x8000;
    do {

    } while (func_020f7dc4(&sp4) != 0);
    do {

    } while (func_020f7d98(&sp0) != 0);
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 3;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 0;
    if (sp0 != 0) {
        M2C_FIELD((void *) 0x04000440, s32 *, 8) = sp0;
    }
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 2;
    M2C_FIELD((void *) 0x04000440, s32 *, 8)    = sp4;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
}
