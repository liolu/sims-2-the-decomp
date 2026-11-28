/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046830(s32);                         /* extern */
M2C_UNK func_02046858(s32);                         /* extern */
extern s32 data_0213f490;
extern s32 data_0213f494;

void func_020b68d0(void) {
    func_02046858(data_0213f490);
    data_0213f490 = 0;
    func_02046830(data_0213f494);
    data_0213f494 = 0;
}
