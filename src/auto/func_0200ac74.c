/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201188c(void *);                      /* extern */
M2C_UNK func_02046844(void *);                      /* extern */
M2C_UNK func_02088790(void *);                      /* extern */
extern M2C_UNK data_0212fa64;
extern s32 data_0213e434;

void *func_0200ac74(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212fa64;
    if (M2C_FIELD(arg0, u16 *, 0xC) == 2) {
        M2C_FIELD(((M2C_FIELD(arg0, u16 *, 0xA) * 0x2C) + data_0213e434), s32 *, 0x2200) = 0;
    }
    func_02088790(arg0 + 0x214);
    func_0201188c(arg0);
    func_02046844(arg0);
    return arg0;
}
