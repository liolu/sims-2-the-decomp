/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02048b7c(M2C_UNK *);                   /* extern */
s32 func_02048bd8(M2C_UNK *);                       /* extern */
M2C_UNK func_020bc9f8(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_0213aeb8;
extern s32 data_0213f98c;

void func_02058f70(void) {
    if (func_02048bd8(&data_0213aeb8) == 0) {
        func_02048b7c(&data_0213aeb8);
    }
    func_020bc9f8(data_0213f98c, 4, 0);
}
