/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203f4e4(s32);                         /* extern */
void *func_020455a4();                              /* extern */

void func_0203f49c(void) {
    void *var_r4;

    var_r4 = func_020455a4();
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_0203f4e4(M2C_FIELD(var_r4, s32 *, 0));
        var_r4 = M2C_FIELD(var_r4, void **, 4);
    } while (var_r4 != NULL);
}
