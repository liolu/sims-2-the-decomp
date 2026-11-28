/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467a4(s32);
M2C_UNK func_020467cc(void *);
extern M2C_UNK data_0212f9ac;

void *func_0200bc10(void *arg0) {
    s32 var_r4;

    *(M2C_UNK **) arg0 = &data_0212f9ac;
    if (*(s32 *) ((u8 *) arg0 + 8) != 0) {
        var_r4 = 0;
        if ((s32) * (u8 *) ((u8 *) arg0 + 5) > 0) {
            do {
                if (*(s32 *) ((u8 *) arg0 + 0xC) == (*(s32 **) ((u8 *) arg0 + 8))[var_r4]) {
                    *(s32 *) ((u8 *) arg0 + 0xC) = 0;
                }
                func_020467cc((void *) (*(s32 **) ((u8 *) arg0 + 8))[var_r4]);
                var_r4 += 1;
            } while (var_r4 < (s32) * (u8 *) ((u8 *) arg0 + 5));
        }
        func_020467a4(*(s32 *) ((u8 *) arg0 + 8));
        *(s32 *) ((u8 *) arg0 + 8) = 0;
    }
    *(u8 *) ((u8 *) arg0 + 5) = 0U;
    *(s8 *) ((u8 *) arg0 + 6) = 0;
    if (*(s32 *) ((u8 *) arg0 + 0xC) != 0) {
        if (*(u8 *) ((u8 *) arg0 + 4) != 0) {
            func_020467cc((void *) *(s32 *) ((u8 *) arg0 + 0xC));
            *(u8 *) ((u8 *) arg0 + 4) = 0U;
        }
        *(s32 *) ((u8 *) arg0 + 0xC) = 0;
    }
    func_020467cc(arg0);
    return arg0;
}
