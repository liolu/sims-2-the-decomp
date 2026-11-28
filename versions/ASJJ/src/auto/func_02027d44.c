/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018664(void *);                      /* extern */
M2C_UNK func_02018ac4(void *);                      /* extern */
M2C_UNK func_02046858(void *);                      /* extern */
M2C_UNK func_02088350(void *);                      /* extern */
extern M2C_UNK data_02130520;

void *func_02027d44(void *arg0) {
    void *temp_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02130520;
    temp_r1                        = M2C_FIELD(arg0, void **, 4);
    if (((u32) (M2C_FIELD(temp_r1, u16 *, 0x218) << 0x1F) >> 0x1F) == 1) {
        func_02088350(temp_r1 + 0x214);
    }
    func_02018ac4(arg0 + 0x18);
    func_02018664(arg0);
    func_02046858(arg0);
    return arg0;
}
