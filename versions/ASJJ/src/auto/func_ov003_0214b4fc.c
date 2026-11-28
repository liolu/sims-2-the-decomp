/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_ov003_021504ec;
void func_02046a6c(u8 *);

u8 *func_ov003_0214b4fc(u8 *arg0) {
    *(M2C_UNK *volatile *) arg0 = &data_ov003_021504ec;
    func_02046a6c(arg0 + 8);
    return arg0;
}
