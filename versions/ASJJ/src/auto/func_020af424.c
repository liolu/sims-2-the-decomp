/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046830(s32);                         /* extern */
M2C_UNK func_02046858(s32);                         /* extern */
extern s32 data_0213e22c;
extern s32 data_0213e230;

void func_020af424(void) {
    func_02046858(data_0213e22c);
    data_0213e22c = 0;
    func_02046830(data_0213e230);
    data_0213e230 = 0;
}
