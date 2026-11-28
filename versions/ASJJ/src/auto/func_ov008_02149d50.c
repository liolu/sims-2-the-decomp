/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d348;
extern u8 data_02139a84;
s32 func_0204e1cc(s32, s32, s32, s32);
M2C_UNK func_0205892c(s32, s32, s32, s32, s32, s32);
M2C_UNK func_ov008_02149f98(void *);

void func_ov008_02149d50(u8 *arg0, s32 arg1) {
    s32 r;

    r = func_0204e1cc(*(s32 *) &data_0213d348, 0, arg1, 0);
    if (r != 0) {
        func_0205892c(*(s32 *) &data_02139a84, 0x977, -1, 2, 2, 1);
    } else {
        func_ov008_02149f98(arg0);
    }
}
