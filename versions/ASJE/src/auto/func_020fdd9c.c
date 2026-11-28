/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fad20(void *, M2C_UNK);             /* extern */
extern void *data_02147d80;

u16 func_020fdd9c(void) {
    func_020fad20(data_02147d80, 0x280);
    return M2C_FIELD(data_02147d80, u16 *, 8);
}
