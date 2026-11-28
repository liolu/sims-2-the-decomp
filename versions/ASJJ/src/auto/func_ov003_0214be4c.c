/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046958(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_02046ae0(void *, M2C_UNK);             /* extern */
M2C_UNK func_ov003_0214ba44(void *);                /* extern */
M2C_UNK func_ov003_0214bbf0(void *, M2C_UNK);       /* extern */
extern M2C_UNK data_ov003_0214f3c8;
extern M2C_UNK data_ov003_0214f454;
extern M2C_UNK data_ov003_021504ec;
extern M2C_UNK data_ov003_021505c8;

void *func_ov003_0214be4c(void *arg0, void *arg1) {
    M2C_UNK *var_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov003_021504ec;
    M2C_FIELD(arg0, void **, 4)    = arg1;
    func_02046ae0(arg0 + 8, 0x20);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov003_021505c8;
    M2C_FIELD(arg0, s16 *, 0x10)   = 0;
    var_r1                         = &data_ov003_0214f454;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x76) == 0) {
        var_r1 = &data_ov003_0214f3c8;
    }
    func_02046958(arg0 + 8, var_r1, 0xA);
    func_ov003_0214ba44(arg0);
    func_ov003_0214bbf0(arg0, 1);
    return arg0;
}
