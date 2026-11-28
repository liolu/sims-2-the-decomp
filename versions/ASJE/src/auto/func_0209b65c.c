/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020459c4();                         /* extern */

void *func_0209b65c(void *arg0) {
    func_020459c4();
    func_020459c4(arg0 + 0x34);
    M2C_FIELD(arg0, s8 *, 0x68) = 0;
    return arg0;
}
