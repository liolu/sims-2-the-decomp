/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0204a4d8(void *);
void func_020467cc(void *);
void func_0204abdc(s32, s32);

void func_02083218(void **arg0) {
    u8 i;
    void *p;

    i = 0;
    do {
        p = arg0[i];
        if (p != NULL) {
            if (p != NULL) {
                func_0204a4d8(p);
                func_020467cc(p);
            }
        }
        arg0[i] = NULL;
        i       = i + 1;
    } while (i < 2);
    func_0204abdc(2, 80);
}
