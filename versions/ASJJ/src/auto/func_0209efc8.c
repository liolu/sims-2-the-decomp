/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046830(s32);                         /* extern */
M2C_UNK func_02046858(s32);                         /* extern */
extern s32 data_0213e1f8;
extern s32 data_0213e1f4;

void func_0209efc8(void) {
    func_02046858(data_0213e1f8);
    data_0213e1f8 = 0;
    func_02046830(data_0213e1f4);
    data_0213e1f4 = 0;
}
