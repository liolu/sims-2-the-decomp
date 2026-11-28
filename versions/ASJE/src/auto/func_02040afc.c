/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_02083ca4(s32, u8);
void func_02083ce8(s32, s32);
extern s32 data_0213e2f4;
void func_02040afc(s32 arg0, u8 *arg1) {
    s32 r;
    r = func_02083ca4(data_0213e2f4 + 0x18, *arg1);
    if (r >= 6) {
        return;
    }
    func_02083ce8(data_0213e2f4 + 0x18, r);
}
