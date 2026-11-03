/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200e168(s32);
void func_0200fae4(s32, s32, s32);

void func_ov003_0214a2ec(void *arg0, s32 arg1) {
    s32 t;
    u32 idx;
    t    = func_0200e168(1);
    idx  = *(u16 *) ((u8 *) arg0 + 0x76);
    arg1 = arg1 + t;
    func_0200fae4(*(s32 *) ((u8 *) arg0 + (idx << 2) + 0x48), 1, (u8) arg1);
}
