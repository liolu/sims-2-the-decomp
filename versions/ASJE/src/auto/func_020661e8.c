/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02085ffc(M2C_UNK);                     /* extern */
extern s32 data_027e0000;

void func_020661e8(void) {
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_02085ffc(1);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
        return;
    }
    data_027e0000 = 0;
}
