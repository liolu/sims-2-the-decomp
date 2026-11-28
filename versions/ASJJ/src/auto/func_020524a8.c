/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02045070(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_0213daf0;

M2C_UNK *func_020524a8(M2C_UNK arg0) {
    if (func_02045070(arg0, &data_0213daf0, 0x400) == 0) {
        return &data_0213daf0;
    }
    return NULL;
}
