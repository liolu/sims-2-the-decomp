/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef void (*FnP)(void *, s32);
extern FnP data_02138c44[];

void func_01ffde88(void *arg0) {
    u8 b;
    do {
        *(s32 *) ((u8 *) arg0 + 8) &= ~0x40;
        b = *(*(u8 **) arg0);
        data_02138c44[b & 31](arg0, b & 0xE0);
    } while ((*(s32 *) ((u8 *) arg0 + 8) & 32) == 0);
}
