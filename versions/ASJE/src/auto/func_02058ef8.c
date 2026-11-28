/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02048b04(M2C_UNK *);                   /* extern */
s32 func_02048b60(M2C_UNK *);                       /* extern */
M2C_UNK func_020bc930(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_0213ad78;
extern s32 data_0213f84c;

void func_02058ef8(void) {
    if (func_02048b60(&data_0213ad78) == 0) {
        func_02048b04(&data_0213ad78);
    }
    func_020bc930(data_0213f84c, 4, 0);
}
