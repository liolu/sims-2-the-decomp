/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" void func_02046844(void *);
extern "C" void func_0204681c(void *);
extern "C" void func_0200b954(u8 *arg0) {
    s32 i;
    s32 n;
    if (*(void **) (arg0 + 8) != NULL) {
        i = 0;
        n = *(u8 *) (arg0 + 5);
        if (n > 0) {
            do {
                if (*(s32 *) (arg0 + 0xc) == (s32) ((void **) *(void **) (arg0 + 8))[i]) {
                    *(s32 *) (arg0 + 0xc) = 0;
                }
                func_02046844(((void **) *(void **) (arg0 + 8))[i]);
                i++;
            } while (i < *(u8 *) (arg0 + 5));
        }
        func_0204681c(*(void **) (arg0 + 8));
        *(void **) (arg0 + 8) = NULL;
    }
    *(u8 *) (arg0 + 5) = 0;
    *(u8 *) (arg0 + 6) = 0;
}
