/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fa314(void *);                      /* extern */
M2C_UNK func_020fac30(void *, void *);              /* extern */
s32 func_020fbea0();                                /* extern */
M2C_UNK func_020fbeb4(s32);                         /* extern */
extern M2C_UNK data_02145ff4;

void func_020fad88(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = func_020fbea0();
    temp_r7 = M2C_FIELD(&data_02145ff4, void **, 8);
loop_1:
    temp_r0 = M2C_FIELD(arg0, void **, 4);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, void **, 4) = temp_r7;
        M2C_FIELD(arg0, s32 *, 8)   = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
        func_020fac30(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    } else {
        M2C_FIELD(temp_r7, void **, 0x78) = arg0;
        func_020fa314(arg0);
        M2C_FIELD(temp_r7, void **, 0x78) = NULL;
        goto loop_1;
    }
    func_020fbeb4(temp_r4);
}
