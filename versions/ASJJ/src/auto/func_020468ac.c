/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020468ac(void *arg0, s32 arg1) {
    u32 i;
    u8 *t;
    i = 0;
    if (i >= *(u16 *) ((u8 *) arg0 + 4)) {
        return;
    }
    do {
        t = (*(u8 ***) arg0)[i];
        if (t != 0) {
            if (arg1 != 0) {
                *(u32 *) (t + 4) = *(u32 *) (t + 4) | 1;
            } else {
                *(u32 *) (t + 4) = *(u32 *) (t + 4) & ~1;
            }
        }
        i++;
    } while (i < *(u16 *) ((u8 *) arg0 + 4));
}
