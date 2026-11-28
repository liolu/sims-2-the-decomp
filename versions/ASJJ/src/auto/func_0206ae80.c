/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02001914();                            /* extern */
M2C_UNK func_02001944();                     /* extern */
void *func_02045630();                           /* extern */
M2C_UNK func_020676ac();               /* extern */
M2C_UNK func_0206a29c();                      /* extern */
M2C_UNK func_0206a45c();                      /* extern */
void *func_0206adf0();                /* extern */
extern void *data_02139a84;

void func_0206ae80(void *arg0, s32 arg1) {
    void **temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r1_2;
    void *var_r8;

    func_02001944(1);
    var_r8 = func_02045630(arg0 + 0x298);
    if (var_r8 != NULL) {
        do {
            temp_r1 = M2C_FIELD(var_r8, void **, 0);
            if (M2C_FIELD(temp_r1, s32 *, 0) == arg1) {
                M2C_FIELD(temp_r1, s32 *, 4) = 2;
                M2C_FIELD(temp_r1, s32 *, 8) = 6;
                if (temp_r1 == M2C_FIELD(arg0, void **, 0x300)) {
                    M2C_FIELD(arg0, void **, 0x300) = func_0206adf0(arg0, var_r8);
                    if (M2C_FIELD(data_02139a84, s32 *, 8) == 0) {
                        temp_r1_2 = M2C_FIELD(arg0, void **, 0x300);
                        if ((temp_r1_2 == NULL) ||
                            (temp_r0 = M2C_FIELD(M2C_FIELD(temp_r1_2, void **, 0), void ***, 0x130), (temp_r0 == NULL)) ||
                            (M2C_FIELD(temp_r1_2, s32 *, 4) == 2)) {
                            func_020676ac(M2C_FIELD(arg0, s32 *, 0xC), 0xFFFFU, 0xFFFFU);
                        } else {
                            temp_r0_2 = M2C_FIELD(*temp_r0, void *(**) (), 0x1C)(temp_r0);
                            func_020676ac(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r0_2, u16 *, 0xA),
                                          M2C_FIELD(temp_r0_2, u16 *, 0xC));
                        }
                        func_0206a29c(arg0);
                        func_0206a45c(arg0);
                    } else {
                        M2C_FIELD(arg0, s8 *, 0x31D) = 1;
                    }
                }
            }
            var_r8 = M2C_FIELD(var_r8, void **, 4);
        } while (var_r8 != NULL);
    }
    func_02001914();
}
