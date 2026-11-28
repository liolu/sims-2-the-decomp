/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203f5c4(s32);                         /* extern */
void *func_02045630();                              /* extern */

void func_0203f57c(void) {
    void *var_r4;

    var_r4 = func_02045630();
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_0203f5c4(M2C_FIELD(var_r4, s32 *, 0));
        var_r4 = M2C_FIELD(var_r4, void **, 4);
    } while (var_r4 != NULL);
}
