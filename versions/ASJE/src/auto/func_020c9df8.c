/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(s32);                         /* extern */
s32 func_020c452c();                                /* extern */
M2C_UNK func_020c718c();                            /* extern */
M2C_UNK func_020c809c();                            /* extern */
extern void *data_0213e2f4;

void func_020c9df8(void) {
    if (M2C_FIELD(data_0213e2f4, s32 *, 0x479C) == 0) {
        return;
    }
    func_020c718c();
    if (func_020c452c() == 0) {
        func_020c809c();
        do {

        } while (func_020c452c() == 0);
    }
    func_020467cc(M2C_FIELD(data_0213e2f4, s32 *, 0x479C));
    M2C_FIELD(data_0213e2f4, s32 *, 0x479C) = 0;
}
