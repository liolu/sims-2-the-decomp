/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020468cc(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_02046a54(void *, M2C_UNK);             /* extern */
M2C_UNK func_ov003_0214bde4(void *);                /* extern */
M2C_UNK func_ov003_0214bf90(void *, M2C_UNK);       /* extern */
extern M2C_UNK data_ov003_0214f768;
extern M2C_UNK data_ov003_0214f7f4;
extern M2C_UNK data_ov003_0215088c;
extern M2C_UNK data_ov003_02150968;

void *func_ov003_0214c1ec(void *arg0, void *arg1) {
    M2C_UNK *var_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov003_0215088c;
    M2C_FIELD(arg0, void **, 4)    = arg1;
    func_02046a54(arg0 + 8, 0x20);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov003_02150968;
    M2C_FIELD(arg0, s16 *, 0x10)   = 0;
    var_r1                         = &data_ov003_0214f7f4;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x76) == 0) {
        var_r1 = &data_ov003_0214f768;
    }
    func_020468cc(arg0 + 8, var_r1, 0xA);
    func_ov003_0214bde4(arg0);
    func_ov003_0214bf90(arg0, 1);
    return arg0;
}
