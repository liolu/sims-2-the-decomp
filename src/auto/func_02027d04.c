/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201866c(void *);                      /* extern */
M2C_UNK func_02018acc(void *);                      /* extern */
M2C_UNK func_02046844(void *);                      /* extern */
M2C_UNK func_02088470(void *);                      /* extern */
extern M2C_UNK data_02130a20;

void *func_02027d04(void *arg0) {
    void *temp_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02130a20;
    temp_r1                        = M2C_FIELD(arg0, void **, 4);
    if (((u32) (M2C_FIELD(temp_r1, u16 *, 0x218) << 0x1F) >> 0x1F) == 1) {
        func_02088470(temp_r1 + 0x214);
    }
    func_02018acc(arg0 + 0x18);
    func_0201866c(arg0);
    func_02046844(arg0);
    return arg0;
}
