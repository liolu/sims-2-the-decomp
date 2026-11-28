/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f60f0(M2C_UNK);                     /* extern */
M2C_UNK func_020f9454(M2C_UNK);                     /* extern */
M2C_UNK func_020f962c(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_0213e084;
extern M2C_UNK func_02071848;

void func_0204830c(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
    if (data_0213e084 == 0) {
        func_020f60f0(0);
        func_020f9454(2);
        *(u16 *) 0x04000004 &= ~0x10;
        return;
    }
    func_020f962c(2, &func_02071848);
}
