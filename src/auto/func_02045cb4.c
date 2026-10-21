/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02045b10(void *, void *, M2C_UNK);       /* extern */

void func_02045cb4(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r1;
    void *temp_r1_2;
    void *var_r4;

    if (arg1 == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r1 != NULL) {
        var_r4                            = temp_r1;
        M2C_FIELD(temp_r1, void **, 0x10) = (void *) M2C_FIELD(arg1, void **, 0x10);
        M2C_FIELD(temp_r1, void **, 8)    = (void *) M2C_FIELD(arg1, void **, 8);
        if (M2C_FIELD(arg1, void **, 4) != NULL) {
            temp_r0                                            = func_02045b10(arg0, temp_r1, 1);
            M2C_FIELD(temp_r0, void **, 4)                     = (void *) M2C_FIELD(arg1, void **, 4);
            M2C_FIELD(M2C_FIELD(arg1, void **, 4), void **, 8) = temp_r0;
            M2C_FIELD(arg1, void **, 4)                        = NULL;
        }
    } else {
        var_r4 = M2C_FIELD(arg1, void **, 0x10);
        if (var_r4 != NULL) {
            M2C_FIELD(var_r4, void **, 0xC) = temp_r1;
        } else {
            temp_r1_2 = M2C_FIELD(arg1, void **, 4);
            if (temp_r1_2 != NULL) {
                var_r4                           = temp_r1_2;
                M2C_FIELD(temp_r1_2, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
            } else {
                var_r4 = M2C_FIELD(arg1, void **, 8);
                if (var_r4 != NULL) {
                    M2C_FIELD(var_r4, void **, 4) = temp_r1_2;
                } else {
                    var_r4 = NULL;
                }
            }
        }
    }
    if (var_r4 == NULL) {
        M2C_FIELD(arg0, void **, 8) = NULL;
        M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg0, void **, 8);
    } else {
        temp_r0_2 = M2C_FIELD(arg1, void **, 4);
        if ((temp_r0_2 != NULL) && (temp_r0_2 != var_r4)) {
            M2C_FIELD(temp_r0_2, void **, 8) = var_r4;
        }
        temp_r0_3 = M2C_FIELD(arg1, void **, 8);
        if ((temp_r0_3 != NULL) && (temp_r0_3 != var_r4)) {
            M2C_FIELD(temp_r0_3, void **, 4) = var_r4;
        }
        temp_r0_4 = M2C_FIELD(arg1, void **, 0xC);
        if ((temp_r0_4 != NULL) && (temp_r0_4 != var_r4)) {
            M2C_FIELD(temp_r0_4, void **, 0x10) = var_r4;
        }
        temp_r0_5 = M2C_FIELD(arg1, void **, 0x10);
        if ((temp_r0_5 != NULL) && (temp_r0_5 != var_r4)) {
            M2C_FIELD(temp_r0_5, void **, 0xC) = var_r4;
        }
        if (arg1 == M2C_FIELD(arg0, void **, 4)) {
            M2C_FIELD(arg0, void **, 4) = var_r4;
        }
        if (arg1 == M2C_FIELD(arg0, void **, 8)) {
            M2C_FIELD(arg0, void **, 8) = var_r4;
        }
    }
    temp_r0_6 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r0_6 != NULL) {
        M2C_FIELD(temp_r0_6, void **, 4) = arg1;
        M2C_FIELD(arg1, void **, 8)      = (void *) M2C_FIELD(arg0, void **, 0x24);
        M2C_FIELD(arg0, void **, 0x24)   = arg1;
    } else {
        M2C_FIELD(arg0, void **, 0x20) = arg1;
        M2C_FIELD(arg0, void **, 0x24) = (void *) M2C_FIELD(arg0, void **, 0x20);
    }
    M2C_FIELD(arg1, s32 *, 0)      = 0;
    M2C_FIELD(arg1, void **, 4)    = NULL;
    M2C_FIELD(arg1, void **, 0xC)  = NULL;
    M2C_FIELD(arg1, void **, 0x10) = NULL;
}
