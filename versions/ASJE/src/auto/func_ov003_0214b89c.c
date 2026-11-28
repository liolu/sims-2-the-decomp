/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_ov003_0215088c;
void func_020469e0(u8 *);

u8 *func_ov003_0214b89c(u8 *arg0) {
    *(M2C_UNK *volatile *) arg0 = &data_ov003_0215088c;
    func_020469e0(arg0 + 8);
    return arg0;
}
