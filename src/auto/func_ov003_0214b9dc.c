/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_ov003_021509cc;
void func_02046a58(u8 *);

u8 *func_ov003_0214b9dc(u8 *arg0) {
    *(M2C_UNK *volatile *) arg0 = &data_ov003_021509cc;
    func_02046a58(arg0 + 8);
    return arg0;
}
