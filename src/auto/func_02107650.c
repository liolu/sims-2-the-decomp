/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fdf0c();                            /* extern */
s32 func_020fe0f0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020fe118(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02107388();                            /* extern */
M2C_UNK func_02107484();                            /* extern */
extern s32 data_02149528;
extern s32 data_0214952c;
extern M2C_UNK func_021073e8;
extern M2C_UNK func_02107448;

void func_02107650(void) {
    if (data_02149528 != 0) {
        return;
    }
    data_02149528 = 1;
    func_02107388();
    func_020fdf0c();
    do {

    } while (func_020fe0f0(0xD, 1) == 0);
    func_020fe118(0xD, &func_02107448);
    func_02107484();
    func_020fe118(0xD, NULL);
    func_020fe118(0xD, &func_021073e8);
    data_0214952c = 0;
}
