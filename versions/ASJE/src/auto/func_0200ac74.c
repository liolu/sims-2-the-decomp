/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201188c(void *);                      /* extern */
M2C_UNK func_020467cc(void *);                      /* extern */
M2C_UNK func_02088718(void *);                      /* extern */
extern M2C_UNK data_0212f924;
extern s32 data_0213e2f4;

void *func_0200ac74(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212f924;
    if (M2C_FIELD(arg0, u16 *, 0xC) == 2) {
        M2C_FIELD(((M2C_FIELD(arg0, u16 *, 0xA) * 0x2C) + data_0213e2f4), s32 *, 0x2200) = 0;
    }
    func_02088718(arg0 + 0x214);
    func_0201188c(arg0);
    func_020467cc(arg0);
    return arg0;
}
