/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ff92a8(void *, void *);              /* extern */
M2C_UNK func_01ff9aa0(void *);                      /* extern */

void func_01ffae48(void *arg0) {
    void *var_r0;
    void *var_r1;

    var_r1 = M2C_FIELD(arg0, void **, 4);
    if (var_r1 == NULL) {
        return;
    }
    var_r0 = M2C_FIELD(var_r1, void **, 4);
    if (var_r0 != NULL) {
        do {
            var_r1 = var_r0;
            var_r0 = M2C_FIELD(var_r0, void **, 4);
        } while (var_r0 != NULL);
    }
    func_01ff92a8(arg0, var_r1);
    func_01ff9aa0(arg0);
}
