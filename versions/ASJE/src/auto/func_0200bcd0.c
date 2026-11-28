/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0212f9ac;

void func_020467cc(void *p);
void func_020467a4(void *p);

u8 *func_0200bcd0(u8 *arg0) {
    s32 i;
    *(void **) arg0 = &data_0212f9ac;
    if (*(void ***) (arg0 + 8) != 0) {
        for (i = 0; i < arg0[5]; i++) {
            if (*(void **) (arg0 + 0xc) == (*(void ***) (arg0 + 8))[i]) {
                *(void **) (arg0 + 0xc) = 0;
            }
            func_020467cc((*(void ***) (arg0 + 8))[i]);
        }
        func_020467a4(*(void **) (arg0 + 8));
        *(void **) (arg0 + 8) = 0;
    }
    arg0[5] = 0;
    arg0[6] = 0;
    if (*(void **) (arg0 + 0xc) != 0) {
        if (arg0[4] != 0) {
            func_020467cc(*(void **) (arg0 + 0xc));
            arg0[4] = 0;
        }
        *(void **) (arg0 + 0xc) = 0;
    }
    return arg0;
}
