/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467a4(s32);                         /* extern */
M2C_UNK func_020467cc(s32);                         /* extern */
extern s32 data_0213e5a4;
extern s32 data_0213e5a8;

void func_020a28d8(void) {
    func_020467cc(data_0213e5a4);
    data_0213e5a4 = 0;
    func_020467a4(data_0213e5a8);
    data_0213e5a8 = 0;
}
