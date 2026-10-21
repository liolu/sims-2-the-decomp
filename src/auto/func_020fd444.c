/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fae14(M2C_UNK *);                   /* extern */
M2C_UNK func_020fdc2c();                            /* extern */
M2C_UNK func_020fddf4();                            /* extern */
extern s32 data_02146370;
extern M2C_UNK data_02146374;

void func_020fd444(void) {
    if (data_02146370 != 0) {
        return;
    }
    data_02146370 = 1;
    func_020fae14(&data_02146374);
    func_020fdc2c();
    func_020fddf4();
}
