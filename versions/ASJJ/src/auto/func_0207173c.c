/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046398(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0205360c(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_020f60f0(M2C_UNK);                         /* extern */
M2C_UNK func_020f949c(M2C_UNK);                     /* extern */
M2C_UNK func_020f962c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fb978(M2C_UNK, u16);                /* extern */
M2C_UNK func_020fb98c();                            /* extern */
extern M2C_UNK data_021321e4;
extern M2C_UNK data_021321fc;
extern void *data_0213e080;
extern M2C_UNK *data_0213e084;
extern M2C_UNK func_020714ec;
extern M2C_UNK func_02071848;

void *func_0207173c(void *arg0) {
    u16 temp_r1;

    func_0205360c(arg0, 0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021321e4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021321fc;
    M2C_FIELD(arg0, s8 *, 0x306)   = 0;
    func_02046398(arg0 + 6, 0, 0x300);
    *(s16 *) 0x04000048 = 0x3F;
    *(s16 *) 0x0400004A = 0x36;
    *(s16 *) 0x04000040 = 0x2FE;
    *(s16 *) 0x04000044 = 0xC0;
    *(s16 *) 0x05000000 = 0;
    data_0213e080       = arg0 + 0x186;
    data_0213e084       = &func_020714ec;
    if (func_020f60f0(1) == 0) {
        func_020fb98c();
        func_020f962c(2, &func_02071848);
        func_020f949c(2);
        temp_r1             = *(u16 *) 0x04000208;
        *(u16 *) 0x04000208 = 1;
        func_020fb978(1, temp_r1);
    }
    return arg0;
}
