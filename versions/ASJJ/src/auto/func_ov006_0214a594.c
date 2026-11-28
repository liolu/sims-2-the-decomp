/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov006_021496ac(s32, u16);                    /* extern */
M2C_UNK func_020d54a8(s32);                         /* extern */

void func_ov006_0214a594(void *arg0) {
    func_020d54a8(0x161);
    func_ov006_021496ac(M2C_FIELD(arg0, s32 *, 0x90), M2C_FIELD(arg0, u16 *, 0xA));
}
