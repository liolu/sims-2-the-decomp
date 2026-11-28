/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02048b90(M2C_UNK *);                   /* extern */
s32 func_02048bec(M2C_UNK *);                       /* extern */
M2C_UNK func_020bc52c(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_0213a998;
extern s32 data_0213f4b4;

void func_02059094(void) {
    if (func_02048bec(&data_0213a998) == 0) {
        func_02048b90(&data_0213a998);
    }
    func_020bc52c(data_0213f4b4, 4, 0);
}
