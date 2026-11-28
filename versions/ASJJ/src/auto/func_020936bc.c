/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0208aebc();                              /* extern */
extern M2C_UNK data_021330ec;
extern M2C_UNK data_02133c44;

void *func_020936bc(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021330ec;
    M2C_FIELD(arg0, s32 *, 4)      = 0x51;
    M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(func_0208aebc(), s16 *, 0xE);
    M2C_FIELD(arg0, s8 *, 0xC)     = 1;
    M2C_FIELD(arg0, s8 *, 0xD)     = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02133c44;
    return arg0;
}
