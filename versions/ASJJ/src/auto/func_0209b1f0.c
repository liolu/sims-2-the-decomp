/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *func_02045630(s32);

void *func_0209b1f0(s32 arg0, s32 arg1, s32 arg2) {
    void *p;
    void *e;
    u16 n = 0;

    if (arg1 == 0x12) {
        p = func_02045630(arg0 + 0x34);
        while (p != NULL) {
            e = *(void **) p;
            if (arg2 == n++) {
                return e;
            }
            p = *(void **) ((u8 *) p + 4);
        }
    } else {
        p = func_02045630(arg0);
        while (p != NULL) {
            e = *(void **) p;
            if (*(u8 *) ((u8 *) e + 0x18) == arg1) {
                if (arg2 == n++) {
                    return e;
                }
            }
            p = *(void **) ((u8 *) p + 4);
        }
    }
    return NULL;
}
