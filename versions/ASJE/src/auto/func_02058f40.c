/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02048090(s32, s32, M2C_UNK, s32, s32, s32);
M2C_UNK func_02048b04(M2C_UNK *);
s32 func_02048b60(M2C_UNK *);
M2C_UNK func_02048b68(M2C_UNK *, M2C_UNK);
extern s32 data_02139e64;
extern M2C_UNK data_0213ad78;
extern void *data_0213e2f4;

void func_02058f40(void *arg0) {
    func_02048b68(&data_0213ad78, 0);
    if (func_02048b60(&data_0213ad78) == 0) {
        return;
    }
    func_02048b04(&data_0213ad78);
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        func_02048090(data_02139e64, M2C_FIELD(arg0, s32 *, 0x24), 0, 0, (s32) M2C_FIELD(data_0213e2f4, u8 *, 0x50), 0xF);
    } else {
        func_02048090(data_02139e64, M2C_FIELD(arg0, s32 *, 0x24), 0, 0, 0, 0);
    }
    func_02048090(data_02139e64, M2C_FIELD(arg0, s32 *, 0x28), 1, 0, 0, 0);
}
