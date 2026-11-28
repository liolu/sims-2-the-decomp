/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020467cc(void *);
void func_02053efc(u8 *arg0) {
    s32 i;

    for (i = 0; i < *(u8 *) (arg0 + 0x80); i++) {
        s32 *e = ((s32 **) arg0)[i];
        if (e != 0) {
            func_020467cc(e);
        }
    }
    *(u8 *) (arg0 + 0x80) = 0;
}
