/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02045630(M2C_UNK *);                     /* extern */
M2C_UNK func_02046858(s32);                         /* extern */
M2C_UNK func_0204c570(s32);                         /* extern */
extern M2C_UNK data_0213d234;

void func_0204c060(void) {
    s32 temp_r4;
    void *var_r5;

    var_r5 = func_02045630(&data_0213d234);
    if (var_r5 == NULL) {
        return;
    }
    if (var_r5 == NULL) {
        return;
    }
    do {
        temp_r4 = M2C_FIELD(var_r5, volatile s32 *, 0);
        var_r5  = M2C_FIELD(var_r5, void **, 4);
        if (temp_r4 != 0) {
            func_0204c570(temp_r4);
            func_02046858(temp_r4);
        }
    } while (var_r5 != NULL);
}
