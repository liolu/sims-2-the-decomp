/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_0200b828(u8 *arg0, s32 arg1, s32 arg2) {
    s32 buf[1];
    u8 n;
    s32 i;
    volatile s32 *list;
    s32 lim;

    n = arg0[5];
    i = 0;
    if ((s32) n > 0) {
        list = *(volatile s32 **) (arg0 + 8);
        lim  = 0x7FFFFFFF;
        do {
            if (arg1 == *(u8 *) (list[i] + 0x14)) {
                if (arg2 == lim || arg2 == *(s16 *) (list[i] + 0x10)) {
                    return list[i];
                }
            }
            i++;
        } while (i < (s32) n);
    }
    return 0;
}
