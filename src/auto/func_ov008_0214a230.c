/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d868;
extern u8 data_02139fa4;
s32 func_0204e230(s32, s32, s32, s32);
M2C_UNK func_0205871c(s32, s32, s32, s32, s32, s32);
M2C_UNK func_ov008_0214a478(void *);

void func_ov008_0214a230(u8 *arg0, s32 arg1) {
    s32 r;

    r = func_0204e230(*(s32 *) &data_0213d868, 0, arg1, 0);
    if (r != 0) {
        func_0205871c(*(s32 *) &data_02139fa4, 0x977, -1, 2, 2, 1);
    } else {
        func_ov008_0214a478(arg0);
    }
}
