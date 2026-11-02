/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 data_021387b8;
extern u8 data_02143020;

void func_020de9ac(void *arg0, void *arg1) {
    u32 i;
    s32 (*fn)(void *, void *);
    volatile s32 pad;
    i = 0;
    do {
        fn = ((s32(**)(void *, void *)) &data_021387b8)[i];
        if (fn != NULL && fn(arg0, arg1) != 0) {
            return;
        }
        i++;
    } while (i < 4);
    *(s32 *) ((u8 *) &data_02143020 + 0x6C) = 0;
}
