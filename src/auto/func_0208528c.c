/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02084d8c(void *, u16);
u32 func_02088240(s32);
void func_0208528c(void *arg0) {
    u16 var_r4;
    u32 n;
    u32 zero;
    zero   = 0;
    var_r4 = 0;
    n      = func_02088240(*(s32 *) ((u8 *) arg0 + 4));
    if (n <= zero) {
        return;
    }
    do {
        if (*(s32 *) ((u8 *) arg0 + (var_r4 * 4) + 0x20) != 0) {
            func_02084d8c(arg0, var_r4);
        }
        var_r4 += 1;
    } while ((u32) var_r4 < func_02088240(*(s32 *) ((u8 *) arg0 + 4)));
}
