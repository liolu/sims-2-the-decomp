/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02046858(void *);
void func_02054184(u8 *arg0) {
    s32 i;

    for (i = 0; i < *(u8 *) (arg0 + 0x80); i++) {
        s32 *e = ((s32 **) arg0)[i];
        if (e != 0) {
            func_02046858(e);
        }
    }
    *(u8 *) (arg0 + 0x80) = 0;
}
