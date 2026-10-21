/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u32 func_0200e938(s32);                             /* extern */
u32 func_0200e944(s32);                             /* extern */
M2C_UNK func_0200e950(s32, u16, M2C_UNK);           /* extern */
M2C_UNK func_02011090(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_0202d2f8(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02048108(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020835f0(void *, M2C_UNK);             /* extern */
extern s32 data_02139fa4;
extern void *data_0213e434;
extern void *data_0213e580;

s32 func_0202d7d8(void *arg0, s32 arg1, M2C_UNK arg2) {
    u16 temp_r1;
    u32 var_r4;

    switch (arg1) {                                 /* irregular */
        case 10:
            return func_0202d2f8(arg0, arg2);
        case 32:
            func_02011090(M2C_FIELD(arg0, void **, 4), arg2, 0, 1, 0);
            return 0;
        case 50:
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA) == 0xB3) {
                func_020835f0(data_0213e434 + 0x18, arg2);
                func_02048108(data_02139fa4, 9, 0, 0, 0, 0);
                func_02048108(data_02139fa4, 0xA, 1, 5, M2C_FIELD(data_0213e580, s32 *, 0xF4), 0);
            } else {
                var_r4 = func_0200e944(M2C_FIELD(data_0213e580, s32 *, 0xF8));
                if (func_0200e938(M2C_FIELD(data_0213e580, s32 *, 0xF8)) <= 3U) {
                    var_r4 = func_0200e938(M2C_FIELD(data_0213e580, s32 *, 0xF8));
                }
                if (var_r4 < 3U) {
                    temp_r1                                 = var_r4 + 1;
                    M2C_FIELD(data_0213e434, u16 *, 0x47C0) = temp_r1;
                    func_0200e950(M2C_FIELD(data_0213e580, s32 *, 0xF8), temp_r1, 1);
                }
                M2C_FIELD(data_0213e434, s32 *, 0x47C4) = (s32) M2C_FIELD(data_0213e434, s32 *, 0x480C);
            }
            return 0;
        default:
            return 0;
    }
}
