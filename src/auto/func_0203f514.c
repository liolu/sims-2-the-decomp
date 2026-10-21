/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203f55c(s32);                         /* extern */
void *func_0204561c();                              /* extern */

void func_0203f514(void) {
    void *var_r4;

    var_r4 = func_0204561c();
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_0203f55c(M2C_FIELD(var_r4, s32 *, 0));
        var_r4 = M2C_FIELD(var_r4, void **, 4);
    } while (var_r4 != NULL);
}
