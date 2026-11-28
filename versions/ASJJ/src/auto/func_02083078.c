/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0204a564(void *p);
void func_02046858(void *p);

void func_02083078(void **arg0) {
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
                func_0204a564(p);
                func_02046858(p);
            }
        }
        arg0[i] = z;
        i       = i + 1;
    } while (i < 2);
}
