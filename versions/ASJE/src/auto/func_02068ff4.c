/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020187ec(void *);
void func_020d5880(s32);
void func_02048090(s32, s32, s32, s32, s32, s32);
extern s32 data_02139e64;
extern s32 *data_0213e2f4;
extern u8 *data_0213e440;

void func_02068ff4(u8 *arg0) {
    u8 *temp_r0;

    if (*data_0213e2f4 & 0x80) {
        return;
    }
    if ((*(s32 *) (arg0 + 4) & 1) != 1) {
        return;
    }
    if (*(s32 *) (*(u8 **) (arg0 + 0x90) + 0x6C) != 0) {
        return;
    }
    temp_r0 = *(u8 **) (data_0213e440 + 0xF8);
    if (temp_r0 == 0) {
        return;
    }
    if (func_020187ec(temp_r0 + 0xE0) != 7) {
        return;
    }
    func_020d5880(0x16F);
    func_02048090(data_02139e64, 0x2A, 1, 0, 0, 0);
}
