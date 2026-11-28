/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139a84;
M2C_UNK func_0204811c(s32, s32, s32, s32, s32, s32);

void func_ov010_02152328(u8 *arg0) {
    u8 *p = *(u8 **) &data_02139a84;
    u8 *q = *(u8 **) (p + 0xDA8);
    s32 lvl;
    u8 *obj;
    u8 f;

    if (q != 0) {
        lvl = *(s32 *) (q + 4);
    } else {
        lvl = 0x32;
    }
    if (lvl != 2) {
        return;
    }
    obj       = *(u8 **) (arg0 + 0x24);
    f         = obj[0x8C];
    obj[0x8C] = 0;
    if (f == 0) {
        return;
    }
    func_0204811c(*(s32 *) &data_02139a84, 0x16, 1, 0, 0, 0);
}
