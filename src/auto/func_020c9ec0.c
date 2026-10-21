/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844(s32);                         /* extern */
s32 func_020c45f4();                                /* extern */
M2C_UNK func_020c7254();                            /* extern */
M2C_UNK func_020c8164();                            /* extern */
extern void *data_0213e434;

void func_020c9ec0(void) {
    if (M2C_FIELD(data_0213e434, s32 *, 0x479C) == 0) {
        return;
    }
    func_020c7254();
    if (func_020c45f4() == 0) {
        func_020c8164();
        do {

        } while (func_020c45f4() == 0);
    }
    func_02046844(M2C_FIELD(data_0213e434, s32 *, 0x479C));
    M2C_FIELD(data_0213e434, s32 *, 0x479C) = 0;
}
