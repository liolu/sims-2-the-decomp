/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef void (*FP)(s32);
void func_020fae28(s32, s32, s32);
void func_020de37c(u8 *arg0) {
    u8 k;

    if (arg0 == 0) {
        return;
    }
    if (arg0[-2] == 3) {
        k = arg0[-1];
        ((FP) * (s32 *) (arg0 - 8))((s32) (arg0 - k));
        return;
    }
    k = arg0[-1];
    func_020fae28(0, -1, (s32) (arg0 - k));
}
