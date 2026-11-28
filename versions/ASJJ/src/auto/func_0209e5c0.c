/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046830(s32);                         /* extern */
M2C_UNK func_02046858(s32);                         /* extern */
extern s32 data_0213e1f0;
extern s32 data_0213e1ec;

void func_0209e5c0(void) {
    func_02046858(data_0213e1f0);
    data_0213e1f0 = 0;
    func_02046830(data_0213e1ec);
    data_0213e1ec = 0;
}
