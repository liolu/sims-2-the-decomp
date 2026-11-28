/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020105d0(s32);                         /* extern */
M2C_UNK func_0204a82c();                            /* extern */
M2C_UNK func_0204c060();                            /* extern */
M2C_UNK func_02054184(void *);                      /* extern */
M2C_UNK func_02064720(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02083078(s32);                         /* extern */
M2C_UNK func_0209b458(void *);                      /* extern */
M2C_UNK func_020bc500(s32);                         /* extern */
extern s32 data_0213df5c;
extern s32 data_0213e094;
extern s32 data_0213f4b4;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_02087df8(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0xF0) != 0) {
        func_020bc500(data_0213f4b4);
        func_02054184(arg0 + 0x6C);
        temp_r0 = M2C_FIELD(arg0, void ***, 0xFC);
        if (temp_r0 != NULL) {
            if (temp_r0 != NULL) {
                M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
            }
            M2C_FIELD(arg0, void ***, 0xFC) = NULL;
        }
        func_020105d0((data_027e0000 * 0x34) + (s32) &data_027e0014);
        M2C_FIELD(arg0, s32 *, 0xF8) = 0;
        func_0204c060();
        func_02083078(data_0213e094);
        func_0204a82c();
        func_0209b458(arg0);
        func_02064720(data_0213df5c, 0x56, 0);
        M2C_FIELD(arg0, u8 *, 0xF0) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0xF4) = 0x21;
}
