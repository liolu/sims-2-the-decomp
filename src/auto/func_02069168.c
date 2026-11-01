/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020459d0(void *);
extern M2C_UNK data_02132160;
extern M2C_UNK data_021321c4;
M2C_UNK **func_02069168(M2C_UNK **arg0) {
    *arg0 = &data_021321c4;
    func_020459d0((u8 *) arg0 + 0x2CC);
    func_020459d0((u8 *) arg0 + 0x298);
    *arg0 = &data_02132160;
    return arg0;
}
