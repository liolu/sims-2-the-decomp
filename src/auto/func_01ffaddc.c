/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_01ff9620(void *, void *, void *, s32);
void func_01ff9aa0(void *);
void func_0204605c(void *);

void func_01ffaddc(void *arg0) {
    void *r6;
    void *r5;
    void *ret;
    u8 *r2;
    r5 = *(void **) ((u8 *) arg0 + 4);
    r6 = r5;
    if (r5 != 0) {
        do {
            ret = (void *) func_01ff9620(arg0, r5, r6, 0);
            r2  = *(u8 **) r6;
            r6  = ret;
            r2[18] |= 1;
        } while (ret != 0);
    }
    func_01ff9aa0(arg0);
    func_0204605c(arg0);
}
