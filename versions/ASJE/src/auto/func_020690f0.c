/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02045958(void *);
extern M2C_UNK data_02132020;
extern M2C_UNK data_02132084;
M2C_UNK **func_020690f0(M2C_UNK **arg0) {
    *arg0 = &data_02132084;
    func_02045958((u8 *) arg0 + 0x2CC);
    func_02045958((u8 *) arg0 + 0x298);
    *arg0 = &data_02132020;
    return arg0;
}
