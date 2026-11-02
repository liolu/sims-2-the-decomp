#include "m2c.h"
void *func_02044a1c(u8 *arg0, s32 arg1) {
    switch (arg0[5]) {
        case 0:
            return (u8 *) *(void **) arg0 + arg1 * 0x24;
        case 4:
            return (u8 *) *(void **) arg0 + arg1 * 0x30;
        case 5:
            return (u8 *) *(void **) arg0 + arg1 * 0x24;
        case 3:
            return (u8 *) *(void **) arg0 + arg1 * 0x24;
        default:
            return NULL;
    }
}
