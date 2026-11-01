/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0211e4f0;
void func_0204299c(u32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK (*f)(M2C_UNK, M2C_UNK);
    if (arg0 >= 0x52U) {
        return;
    }
    f = *(M2C_UNK(**)(M2C_UNK, M2C_UNK))((u8 *) &data_0211e4f0 + arg0 * 4);
    if (f == NULL) {
        return;
    }
    f(arg1, arg2);
}
