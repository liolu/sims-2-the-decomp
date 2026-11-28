/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0204a4d8(void *p);
void func_020467cc(void *p);

void func_02083148(void **arg0) {
    void *z;
    u8 i;
    void *p;
    volatile s32 pad;

    i = 0;
    z = 0;
    do {
        p = arg0[i];
        if (p != NULL) {
            if (p != NULL) {
                func_0204a4d8(p);
                func_020467cc(p);
            }
        }
        arg0[i] = z;
        i       = i + 1;
    } while (i < 2);
}
