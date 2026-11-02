/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u16 data_ov005_0214aac4[];
void func_02016688(void *, u16, s32);

void func_ov005_0214a180(void *arg0, s32 arg1) {
    u8 *p = (u8 *) arg0;
    if ((s32) p[0x8D] == arg1) {
        return;
    }
    p[0x8D] = (u8) arg1;
    func_02016688(arg0, data_ov005_0214aac4[p[0x8D]], 0);
    *(s32 *) (p + 4) |= 16;
}
