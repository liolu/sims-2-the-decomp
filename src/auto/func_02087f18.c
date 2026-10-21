/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020105d0(s32);                         /* extern */
M2C_UNK func_0204a818();                            /* extern */
M2C_UNK func_0204c054();                            /* extern */
M2C_UNK func_02053f74(void *);                      /* extern */
M2C_UNK func_0206466c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020831c0(s32);                         /* extern */
M2C_UNK func_0209b648(void *);                      /* extern */
M2C_UNK func_020bc9cc(s32);                         /* extern */
extern s32 data_0213e434;
extern s32 data_0213e56c;
extern s32 data_0213f98c;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_02087f18(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0xF0) != 0) {
        func_020bc9cc(data_0213f98c);
        func_02053f74(arg0 + 0x6C);
        temp_r0 = M2C_FIELD(arg0, void ***, 0xFC);
        if (temp_r0 != NULL) {
            if (temp_r0 != NULL) {
                M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
            }
            M2C_FIELD(arg0, void ***, 0xFC) = NULL;
        }
        func_020105d0((data_027e0000 * 0x34) + (s32) &data_027e0014);
        M2C_FIELD(arg0, s32 *, 0xF8) = 0;
        func_0204c054();
        func_020831c0(data_0213e56c);
        func_0204a818();
        func_0209b648(arg0);
        func_0206466c(data_0213e434, 0x56, 0);
        M2C_FIELD(arg0, u8 *, 0xF0) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0xF4) = 0x21;
}
