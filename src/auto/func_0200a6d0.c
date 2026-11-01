/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020459d0(void *);
extern M2C_UNK data_0212f98c;
extern M2C_UNK data_0212f9c4;
extern s32 data_02139250;
M2C_UNK **func_0200a6d0(M2C_UNK **arg0) {
    *arg0         = &data_0212f98c;
    data_02139250 = 0;
    func_020459d0((u8 *) arg0 + 0x8C);
    func_020459d0((u8 *) arg0 + 0x58);
    func_020459d0((u8 *) arg0 + 0x24);
    *arg0 = &data_0212f9c4;
    return arg0;
}
