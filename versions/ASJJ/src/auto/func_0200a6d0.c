/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020459e4(void *);
extern M2C_UNK data_0212f48c;
extern M2C_UNK data_0212f4c4;
extern s32 data_02138d30;
M2C_UNK **func_0200a6d0(M2C_UNK **arg0) {
    *arg0         = &data_0212f48c;
    data_02138d30 = 0;
    func_020459e4((u8 *) arg0 + 0x8C);
    func_020459e4((u8 *) arg0 + 0x58);
    func_020459e4((u8 *) arg0 + 0x24);
    *arg0 = &data_0212f4c4;
    return arg0;
}
