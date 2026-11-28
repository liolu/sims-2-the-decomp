/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020bc380(void *);                      /* extern */

void *func_020bd6b0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    func_020bc380(arg0 + 0x58);
    return arg0;
}
