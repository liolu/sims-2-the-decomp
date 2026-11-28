/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020facd8(M2C_UNK *);                   /* extern */
M2C_UNK func_020fdaf0();                            /* extern */
M2C_UNK func_020fdcb8();                            /* extern */
extern s32 data_02146230;
extern M2C_UNK data_02146234;

void func_020fd308(void) {
    if (data_02146230 != 0) {
        return;
    }
    data_02146230 = 1;
    func_020facd8(&data_02146234);
    func_020fdaf0();
    func_020fdcb8();
}
