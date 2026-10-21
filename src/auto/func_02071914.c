/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020f6604(M2C_UNK);                         /* extern */
M2C_UNK func_020f99b0(M2C_UNK);                     /* extern */
M2C_UNK func_020f9b40(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fbe8c(M2C_UNK, u16);                /* extern */
M2C_UNK func_020fbea0();                            /* extern */
extern s32 data_0213e55c;
extern M2C_UNK func_02071858;

void func_02071914(s32 arg0) {
    u16 temp_r1;

    data_0213e55c = arg0;
    if (func_020f6604(1) != 0) {
        return;
    }
    func_020fbea0();
    func_020f9b40(2, &func_02071858);
    func_020f99b0(2);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    func_020fbe8c(1, temp_r1);
}
