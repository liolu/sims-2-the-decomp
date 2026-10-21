/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02011090(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_0202c76c(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02048108(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020835f0(s32, M2C_UNK);                /* extern */
extern s32 data_02139fa4;
extern s32 data_0213e434;
extern void *data_0213e580;

s32 func_0202c9e8(void *arg0, s32 arg1, M2C_UNK arg2) {
    u16 temp_r0;

    switch (arg1) {                                 /* irregular */
        case 10:
            return func_0202c76c(arg0, arg2);
        case 32:
            func_02011090(M2C_FIELD(arg0, void **, 4), arg2, 0, 1, 0);
            return 0;
        case 50:
            temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA);
            if (((u32) temp_r0 >= 0x96U) && ((u32) temp_r0 <= 0x9FU)) {
                func_020835f0(data_0213e434 + 0x18, arg2);
                func_02048108(data_02139fa4, 9, 0, 0, 0, 0);
                func_02048108(data_02139fa4, 0xA, 1, 7, M2C_FIELD(data_0213e580, s32 *, 0xF4), 0);
            }
            return 0;
        default:
            return 0;
    }
}
