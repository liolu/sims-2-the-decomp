/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204630c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02053384(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_020f64c8(M2C_UNK);                         /* extern */
M2C_UNK func_020f9874(M2C_UNK);                     /* extern */
M2C_UNK func_020f9a04(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fbd50(M2C_UNK, u16);                /* extern */
M2C_UNK func_020fbd64();                            /* extern */
extern M2C_UNK data_021325b4;
extern M2C_UNK data_021325cc;
extern void *data_0213e418;
extern M2C_UNK *data_0213e41c;
extern M2C_UNK func_02071484;
extern M2C_UNK func_020717e0;

void *func_020716d4(void *arg0) {
    u16 temp_r1;

    func_02053384(arg0, 0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021325b4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021325cc;
    M2C_FIELD(arg0, s8 *, 0x306)   = 0;
    func_0204630c(arg0 + 6, 0, 0x300);
    *(s16 *) 0x04000048 = 0x3F;
    *(s16 *) 0x0400004A = 0x36;
    *(s16 *) 0x04000040 = 0x2FE;
    *(s16 *) 0x04000044 = 0xC0;
    *(s16 *) 0x05000000 = 0;
    data_0213e418       = arg0 + 0x186;
    data_0213e41c       = &func_02071484;
    if (func_020f64c8(1) == 0) {
        func_020fbd64();
        func_020f9a04(2, &func_020717e0);
        func_020f9874(2);
        temp_r1             = *(u16 *) 0x04000208;
        *(u16 *) 0x04000208 = 1;
        func_020fbd50(1, temp_r1);
    }
    return arg0;
}
