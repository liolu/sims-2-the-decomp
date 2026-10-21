/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018af8(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_02067a04(s32, s32);                    /* extern */
s32 func_0208b148();                                /* extern */
M2C_UNK func_0208b3d4(void *, M2C_UNK);             /* extern */
extern void *data_02139fa4;
extern void *data_0213e580;
extern s32 data_027e0000;

s32 func_02094df0(void *arg0, s32 arg1) {
    s32 temp_r5;
    u8 temp_r2;

    temp_r2 = M2C_FIELD((arg0 + arg1), u8 *, 0x10);
    switch (temp_r2) {                              /* irregular */
        case 0x60:
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_02018af8(M2C_FIELD(arg0, s32 *, 4) + 0x128, 0xB, 0, 2);
            func_02018af8(M2C_FIELD(arg0, s32 *, 4) + 0x128, 0xA, M2C_FIELD(data_0213e580, s32 *, 0xF8), 2);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            return 6;
        case 0x61:
            temp_r5 = M2C_FIELD(data_02139fa4, s32 *, 0xDAC);
            func_0208b3d4(arg0, 0x61);
            func_02067a04(temp_r5, M2C_FIELD(arg0, s32 *, 4));
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_02018af8(M2C_FIELD(arg0, s32 *, 4) + 0x128, 0xB, 1, 2);
            func_02018af8(M2C_FIELD(arg0, s32 *, 4) + 0x128, 0xA, M2C_FIELD(data_0213e580, s32 *, 0xF8), 2);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            return 6;
        default:
            return func_0208b148(arg0, arg1);
    }
}
