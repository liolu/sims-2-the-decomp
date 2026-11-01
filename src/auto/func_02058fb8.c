/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02048108(s32, s32, M2C_UNK, s32, s32, s32);
M2C_UNK func_02048b7c(M2C_UNK *);
s32 func_02048bd8(M2C_UNK *);
M2C_UNK func_02048be0(M2C_UNK *, M2C_UNK);
extern s32 data_02139fa4;
extern M2C_UNK data_0213aeb8;
extern void *data_0213e434;

void func_02058fb8(void *arg0) {
    func_02048be0(&data_0213aeb8, 0);
    if (func_02048bd8(&data_0213aeb8) == 0) {
        return;
    }
    func_02048b7c(&data_0213aeb8);
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        func_02048108(data_02139fa4, M2C_FIELD(arg0, s32 *, 0x24), 0, 0, (s32) M2C_FIELD(data_0213e434, u8 *, 0x50), 0xF);
    } else {
        func_02048108(data_02139fa4, M2C_FIELD(arg0, s32 *, 0x24), 0, 0, 0, 0);
    }
    func_02048108(data_02139fa4, M2C_FIELD(arg0, s32 *, 0x28), 1, 0, 0, 0);
}
