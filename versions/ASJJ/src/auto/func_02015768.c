/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200fb30(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0204811c(s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
s32 func_020642e8(s32);                             /* extern */
s32 func_020646f8(s32, u16);                        /* extern */
M2C_UNK func_02084734(s32, u8);                     /* extern */
M2C_UNK func_0208474c(s32, u8);                     /* extern */
extern s32 data_02139a84;
extern s32 data_0213df5c;
extern void *data_0213e0a8;

void func_02015768(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x18);
    switch (temp_r0) {                              /* irregular */
        case 1:
            if (func_020646f8(data_0213df5c, M2C_FIELD(arg0, u16 *, 0x1C)) == 0) {
                return;
            }
            func_0208474c(M2C_FIELD(data_0213e0a8, s32 *, 0xFC), M2C_FIELD(arg0, u8 *, 0x1A));
            if (M2C_FIELD(arg0, u8 *, 0x1B) != 0) {
                M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x82);
            }
            return;
        case 2:
            M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (M2C_FIELD(arg0, u16 *, 0x1C) - 1);
            if (M2C_FIELD(arg0, u16 *, 0x1C) != 0) {
                return;
            }
            func_02084734(M2C_FIELD(data_0213e0a8, s32 *, 0xFC), M2C_FIELD(arg0, u8 *, 0x19));
            func_0208474c(M2C_FIELD(data_0213e0a8, s32 *, 0xFC), M2C_FIELD(arg0, u8 *, 0x1A));
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x82);
            return;
        case 3:
            if (func_020642e8(data_0213df5c) == 0) {
                return;
            }
            func_0200fb30(M2C_FIELD(data_0213e0a8, s32 *, 0xF8), 1, 0);
            func_0204811c(data_02139a84, 0xE, 1, M2C_FIELD(data_0213e0a8, s32 *, 0xF8), M2C_FIELD(arg0, s32 *, 0x10),
                          M2C_FIELD(arg0, s32 *, 0x14));
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x82);
            return;
    }
}
