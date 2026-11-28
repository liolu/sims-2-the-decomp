/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fa900(M2C_UNK *);                   /* extern */
M2C_UNK func_020fd718();                            /* extern */
M2C_UNK func_020fd8e0();                            /* extern */
extern s32 data_02145e90;
extern M2C_UNK data_02145e94;

void func_020fcf30(void) {
    if (data_02145e90 != 0) {
        return;
    }
    data_02145e90 = 1;
    func_020fa900(&data_02145e94);
    func_020fd718();
    func_020fd8e0();
}
