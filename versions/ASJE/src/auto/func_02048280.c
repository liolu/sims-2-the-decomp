/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f64c8(M2C_UNK);                     /* extern */
M2C_UNK func_020f982c(M2C_UNK);                     /* extern */
M2C_UNK func_020f9a04(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_0213e41c;
extern M2C_UNK func_020717e0;

void func_02048280(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
    if (data_0213e41c == 0) {
        func_020f64c8(0);
        func_020f982c(2);
        *(u16 *) 0x04000004 &= ~0x10;
        return;
    }
    func_020f9a04(2, &func_020717e0);
}
