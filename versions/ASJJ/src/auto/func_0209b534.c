/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02045a50();                         /* extern */

void *func_0209b534(void *arg0) {
    func_02045a50();
    func_02045a50(arg0 + 0x34);
    M2C_FIELD(arg0, s8 *, 0x68) = 0;
    return arg0;
}
