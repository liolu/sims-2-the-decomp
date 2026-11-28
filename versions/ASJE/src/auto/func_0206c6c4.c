/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206c544(void *);
M2C_UNK func_02083ce8(s32, s32);

extern s32 data_0213e2f4;

void func_0206c6c4(void *arg0) {
    u8 *temp_r2;
    s32 temp_r1;
    temp_r1 = *(s32 *) ((u8 *) arg0 + 0x74);
    if (temp_r1 < 0) {
        return;
    }
    temp_r2 = (u8 *) arg0 + temp_r1 * 4;
    if (*(s32 *) (*(u8 **) (temp_r2 + 0x40) + 8) < 0) {
        return;
    }
    if (*(s16 *) (*(u8 **) (temp_r2 + 0x58) + 0x10) < 0) {
        return;
    }
    func_02083ce8(data_0213e2f4 + 0x18, temp_r1);
    func_0206c544(arg0);
}
