/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fae5c(void *, M2C_UNK);             /* extern */
extern void *data_02147ec0;

u16 func_020fded8(void) {
    func_020fae5c(data_02147ec0, 0x280);
    return M2C_FIELD(data_02147ec0, u16 *, 8);
}
