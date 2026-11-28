/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200fb30(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02048090(s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
s32 func_020641b4(s32);                             /* extern */
s32 func_020645cc(s32, u16);                        /* extern */
M2C_UNK func_020847e4(s32, u8);                     /* extern */
M2C_UNK func_020847fc(s32, u8);                     /* extern */
extern s32 data_02139e64;
extern s32 data_0213e2f4;
extern void *data_0213e440;

void func_02015770(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x18);
    switch (temp_r0) {                              /* irregular */
        case 1:
            if (func_020645cc(data_0213e2f4, M2C_FIELD(arg0, u16 *, 0x1C)) == 0) {
                return;
            }
            func_020847fc(M2C_FIELD(data_0213e440, s32 *, 0xFC), M2C_FIELD(arg0, u8 *, 0x1A));
            if (M2C_FIELD(arg0, u8 *, 0x1B) != 0) {
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x82);
            }
            return;
        case 2:
            M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (M2C_FIELD(arg0, u16 *, 0x1C) - 1);
            if (M2C_FIELD(arg0, u16 *, 0x1C) != 0) {
                return;
            }
            func_020847e4(M2C_FIELD(data_0213e440, s32 *, 0xFC), M2C_FIELD(arg0, u8 *, 0x19));
            func_020847fc(M2C_FIELD(data_0213e440, s32 *, 0xFC), M2C_FIELD(arg0, u8 *, 0x1A));
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x82);
            return;
        case 3:
            if (func_020641b4(data_0213e2f4) == 0) {
                return;
            }
            func_0200fb30(M2C_FIELD(data_0213e440, s32 *, 0xF8), 1, 0);
            func_02048090(data_02139e64, 0xE, 1, M2C_FIELD(data_0213e440, s32 *, 0xF8), M2C_FIELD(arg0, s32 *, 0x10),
                          M2C_FIELD(arg0, s32 *, 0x14));
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x82);
            return;
    }
}
