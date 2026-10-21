/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046384(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020533fc(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_020f6604(M2C_UNK);                         /* extern */
M2C_UNK func_020f99b0(M2C_UNK);                     /* extern */
M2C_UNK func_020f9b40(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fbe8c(M2C_UNK, u16);                /* extern */
M2C_UNK func_020fbea0();                            /* extern */
extern M2C_UNK data_021326f4;
extern M2C_UNK data_0213270c;
extern void *data_0213e558;
extern M2C_UNK *data_0213e55c;
extern M2C_UNK func_020714fc;
extern M2C_UNK func_02071858;

void *func_0207174c(void *arg0) {
    u16 temp_r1;

    func_020533fc(arg0, 0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021326f4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213270c;
    M2C_FIELD(arg0, s8 *, 0x306)   = 0;
    func_02046384(arg0 + 6, 0, 0x300);
    *(s16 *) 0x04000048 = 0x3F;
    *(s16 *) 0x0400004A = 0x36;
    *(s16 *) 0x04000040 = 0x2FE;
    *(s16 *) 0x04000044 = 0xC0;
    *(s16 *) 0x05000000 = 0;
    data_0213e558       = arg0 + 0x186;
    data_0213e55c       = &func_020714fc;
    if (func_020f6604(1) == 0) {
        func_020fbea0();
        func_020f9b40(2, &func_02071858);
        func_020f99b0(2);
        temp_r1             = *(u16 *) 0x04000208;
        *(u16 *) 0x04000208 = 1;
        func_020fbe8c(1, temp_r1);
    }
    return arg0;
}
