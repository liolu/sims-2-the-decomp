/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204686c(M2C_UNK);                         /* extern */
M2C_UNK func_020c4374();                            /* extern */
s32 func_020c4410();                                /* extern */
M2C_UNK func_020c45e0(s32);                         /* extern */
M2C_UNK func_020c849c();                            /* extern */
extern s8 data_0213d790;
extern void *data_0213e434;
extern M2C_UNK data_02140200;
extern s8 data_021424c0;
extern s8 data_021424c4;
extern s16 data_021424cc;
extern s32 data_021424d0;

void func_020cb7b8(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(data_0213e434, s32 *, 0x479C) == 0) {
        var_r0 = func_0204686c(0x490);
        if (var_r0 != 0) {
            var_r0 = func_020c4410();
        }
        M2C_FIELD(data_0213e434, s32 *, 0x479C) = var_r0;
        data_0213d790                           = 0;
        M2C_FIELD(&data_02140200, s32 *, 8)     = 0x800025;
        func_020c45e0(0x2710);
        func_020c849c();
        M2C_FIELD(&data_02140200, s32 *, 8) = 0x800025;
        M2C_FIELD(arg0, s8 *, 0x30)         = 1;
    }
    if (M2C_FIELD(data_0213e434, s32 *, 0x479C) != 0) {
        func_020c4374();
    }
    data_021424c4                = 0;
    data_021424d0                = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    data_021424c0                = 0;
    data_021424cc                = 0;
}
