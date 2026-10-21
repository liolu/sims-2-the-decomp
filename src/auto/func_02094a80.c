/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200fb30(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02018af8(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0208b4fc();                                /* extern */
extern void *data_0213e580;
extern s32 data_027e0000;

s32 func_02094a80(void *arg0, s32 arg1) {
    if (M2C_FIELD((arg0 + arg1), u8 *, 0x10) == 0) {
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        func_0200fb30(M2C_FIELD(data_0213e580, s32 *, 0xF8), 0, 0);
        func_02018af8(M2C_FIELD(arg0, s32 *, 4) + 0x128, 0xA, M2C_FIELD(data_0213e580, s32 *, 0xF8), 2);
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        return 6;
    }
    return func_0208b4fc(arg0, arg1);
}
