/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d5880(s32);
M2C_UNK func_02048090(s32, s32, s32, s32, s32, s32);
extern u8 data_02139d4c;
extern u8 data_02139e64;

void func_ov011_02149af4(u8 *arg0) {
    u8 *obj = *(u8 **) (arg0 + 0x24);
    u8 f    = obj[0x8C];

    obj[0x8C] = 0;
    if (f == 0) {
        if ((*(u16 *) (*(u8 **) &data_02139d4c + 6) & 1) == 0) {
            return;
        }
    }
    func_020d5880(0x160);
    func_02048090(*(s32 *) &data_02139e64, 0xC, 1, 0, 0, 0);
}
