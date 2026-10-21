/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203d078(M2C_UNK);                     /* extern */
M2C_UNK func_0203d0a4(M2C_UNK);                     /* extern */
M2C_UNK func_020482f8(M2C_UNK *);                   /* extern */
M2C_UNK func_02050390();                            /* extern */
M2C_UNK func_02050500();                            /* extern */
extern M2C_UNK data_0213a278;

void func_02055f20(void *arg0) {
    void *temp_r2;

    temp_r2                      = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) & ~1);
    func_020482f8(&data_0213a278);
    *(s32 *) 0x04001000 &= ~0x2000;
    func_0203d078(3);
    func_02050500();
    func_02050390();
    func_0203d0a4(0);
}
