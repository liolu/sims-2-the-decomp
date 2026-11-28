/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d728;
extern u8 data_02139e64;
s32 func_0204e1b8(s32, s32, s32, s32);
M2C_UNK func_020586a4(s32, s32, s32, s32, s32, s32);
M2C_UNK func_ov008_0214a338(void *);

void func_ov008_0214a0f0(u8 *arg0, s32 arg1) {
    s32 r;

    r = func_0204e1b8(*(s32 *) &data_0213d728, 0, arg1, 0);
    if (r != 0) {
        func_020586a4(*(s32 *) &data_02139e64, 0x977, -1, 2, 2, 1);
    } else {
        func_ov008_0214a338(arg0);
    }
}
