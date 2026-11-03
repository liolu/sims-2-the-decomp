/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0201f134(void *arg0, void *arg1) {
    volatile s32 sp[4];
    s32 v;

    v                          = *(s32 *) arg1;
    sp[0]                      = v;
    *(s32 *) arg0              = v;
    v                          = *(s32 *) ((u8 *) arg1 + 4);
    sp[1]                      = v;
    *(s32 *) ((u8 *) arg0 + 4) = v;
    v                          = *(s32 *) ((u8 *) arg1 + 8);
    sp[2]                      = v;
    *(s32 *) ((u8 *) arg0 + 8) = v;
}
