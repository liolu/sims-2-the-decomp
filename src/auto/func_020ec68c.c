/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void *func_020ec4f4(void *, void *);
void *func_020ec68c(void *arg0, u32 arg1) {
    void *p;
    void *r;
    p = func_020ec4f4(arg0, NULL);
    while (p != NULL) {
        if (((u32) * (u32 *) ((u8 *) p + 0x18) <= arg1) && (arg1 < *(u32 *) ((u8 *) p + 0x1C))) {
            r = func_020ec68c((u8 *) p + 0xC, arg1);
            if (r == NULL) {
                r = p;
            }
            return r;
        }
        p = func_020ec4f4(arg0, p);
    }
    return NULL;
}
