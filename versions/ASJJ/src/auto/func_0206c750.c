/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206c5d0(void *);
M2C_UNK func_02083c28(s32, s32);

extern s32 data_0213df5c;

void func_0206c750(void *arg0) {
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
    func_02083c28(data_0213df5c + 0x18, temp_r1);
    func_0206c5d0(arg0);
}
