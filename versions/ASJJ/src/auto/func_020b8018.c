/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046830(s32);                         /* extern */
M2C_UNK func_02046858(s32);                         /* extern */
extern s32 data_0213f49c;
extern s32 data_0213f498;

void func_020b8018(void) {
    func_02046858(data_0213f49c);
    data_0213f49c = 0;
    func_02046830(data_0213f498);
    data_0213f498 = 0;
}
