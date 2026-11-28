/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020467f4(M2C_UNK);                         /* extern */
M2C_UNK func_020c42ac();                            /* extern */
s32 func_020c4348();                                /* extern */
M2C_UNK func_020c4518(s32);                         /* extern */
M2C_UNK func_020c83d4();                            /* extern */
extern s8 data_0213d650;
extern void *data_0213e2f4;
extern M2C_UNK data_021400c0;
extern s8 data_02142380;
extern s8 data_02142384;
extern s16 data_0214238c;
extern s32 data_02142390;

void func_020cb67c(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(data_0213e2f4, s32 *, 0x479C) == 0) {
        var_r0 = func_020467f4(0x490);
        if (var_r0 != 0) {
            var_r0 = func_020c4348();
        }
        M2C_FIELD(data_0213e2f4, s32 *, 0x479C) = var_r0;
        data_0213d650                           = 0;
        M2C_FIELD(&data_021400c0, s32 *, 8)     = 0x400060;
        func_020c4518(0x2710);
        func_020c83d4();
        M2C_FIELD(&data_021400c0, s32 *, 8) = 0x400060;
        M2C_FIELD(arg0, s8 *, 0x30)         = 1;
    }
    if (M2C_FIELD(data_0213e2f4, s32 *, 0x479C) != 0) {
        func_020c42ac();
    }
    data_02142384                = 0;
    data_02142390                = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    data_02142380                = 0;
    data_0214238c                = 0;
}
