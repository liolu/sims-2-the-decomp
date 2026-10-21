/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203cc08(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02051338(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_02052258(s32);                             /* extern */
M2C_UNK func_020c91f8(void *);                      /* extern */
extern void *data_0213e434;
extern s8 data_021424c8;

void func_020ca0f4(void *arg0) {
    s32 temp_r1;
    s32 var_r0;

    func_0203cc08(0, 0);
    var_r0  = 0x807;
    temp_r1 = M2C_FIELD(M2C_FIELD(data_0213e434, void **, 0x479C), s32 *, 0x228);
    switch (temp_r1) {                              /* irregular */
        case 1:
            var_r0 = 0x809;
            break;
        case 0:
            var_r0 = 0x808;
            break;
    }
    func_02051338(1, 0x7F, 0xC, func_02052258(var_r0), 1);
    data_021424c8                = 0;
    M2C_FIELD(arg0, s16 *, 0x2C) = 0;
    func_020c91f8(arg0);
}
